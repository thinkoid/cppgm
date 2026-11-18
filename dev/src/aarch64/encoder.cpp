#include "aarch64/mir.h"
#include "aarch64/link.h"
#include "native/object/elf_format.h"

#include "aarch64/error.h"

#include <algorithm>

namespace aarch64 {

void Function::emit(Op op, unsigned rd, unsigned rn, unsigned rm, uint32_t field)
{
	code.push_back(Instruction{ op, rd, rn, rm, field, Fixup::None, 0 });
}

void Function::reference(Op op, Fixup fixup, uint32_t target, unsigned rd, unsigned rn)
{
	code.push_back(Instruction{ op, rd, rn, 0, 0, fixup, target });
}

void Function::bind(uint32_t label)
{
	labels.at(label) = code.size();
}

static void remove_instructions(Function& f, const std::vector<uint32_t>& removed)
{
	if (removed.empty())
		return;
	uint32_t written = removed.front(), first = written + 1;
	for (size_t i = 1; i <= removed.size(); ++i)
	{
		const uint32_t end = i == removed.size() ? static_cast<uint32_t>(f.code.size()) : removed[i];
		std::move(f.code.begin() + first, f.code.begin() + end, f.code.begin() + written);
		written += end - first;
		first = end + 1;
	}
	f.code.resize(written);
	const auto mapped = [&](uint32_t pc) {
		return pc - static_cast<uint32_t>(std::lower_bound(removed.begin(), removed.end(), pc) - removed.begin());
	};
	for (auto& label : f.labels)
		if (label != lowir::kNoId)
			label = mapped(label);
	for (auto& event : f.frame_events)
		event.pc = 4 * mapped(event.pc / 4);
	for (auto& site : f.sites)
	{
		site.begin = 4 * mapped(site.begin / 4);
		site.end = 4 * mapped(site.end / 4);
	}
	for (auto& pad : f.pads)
		if (pad != lowir::kNoId)
			pad = 4 * mapped(pad / 4);
}

// A TBZ/TBNZ displacement is a signed 14-bit word offset. Fuse only pairs
// already in range; removing instructions can only shorten the distance.
// Selection records adjacent AND/branch sites with no intervening labels.
void fold_bit_tests(Function& f, const std::vector<BitTest>& tests)
{
	std::vector<uint32_t> removed;
	for (const auto& test : tests)
	{
		auto& mask = f.code[test.pc];
		const auto& branch = f.code[test.pc + 1];
		const bool zero = branch.op == Op::Cbz || branch.op == Op::CbzW;
		if ((!zero && branch.op != Op::Cbnz && branch.op != Op::CbnzW) || branch.fixup != Fixup::Block ||
			branch.rd != mask.rd)
			continue;
		const int64_t distance = int64_t(f.labels[branch.target]) - test.pc;
		if (distance < -8192 || distance >= 8192)
			continue;
		const auto reg = mask.rn;
		mask = branch;
		mask.op = zero ? Op::Tbz : Op::Tbnz;
		mask.rd = reg;
		mask.field = ((test.bit & 32) << 26) | ((test.bit & 31) << 19);
		removed.push_back(test.pc + 1);
	}
	remove_instructions(f, removed);
}

// A phi edge may contain a single MOV followed by a branch to the loop
// header. If the identical MOV already falls through to the header, branch
// there directly. Keep ordinary labels (including address-taken labels),
// instruction PCs and unwind records in place.
void share_edge_moves(Function& f)
{
	const uint32_t labels = f.labels.size();
	// Any replacement destination must fit the shortest local branch.
	if (labels < 2 || f.code.size() > (1u << 18))
		return;
	std::vector<uint32_t> redirect;
	for (uint32_t label = 0; label < labels; ++label)
	{
		const uint32_t pc = f.labels[label];
		if (pc >= f.code.size() || pc + 1 >= f.code.size())
			continue;
		const auto& move = f.code[pc];
		const auto& branch = f.code[pc + 1];
		if (move.op != Op::Orr || move.rn != 31 || move.field || move.fixup != Fixup::None || branch.op != Op::B ||
			branch.fixup != Fixup::Block)
			continue;
		const uint32_t dest = f.labels[branch.target];
		if (!dest || dest >= f.code.size() || dest - 1 == pc)
			continue;
		const auto& previous = f.code[dest - 1];
		if (previous.op != move.op || previous.rn != move.rn || previous.rd != move.rd || previous.rm != move.rm ||
			previous.field || previous.fixup != Fixup::None)
			continue;
		const auto event = std::lower_bound(f.frame_events.begin(), f.frame_events.end(), 4 * dest,
			[](const FrameEvent& e, uint32_t address) { return e.pc < address; });
		if (event != f.frame_events.end() && event->pc == 4 * dest)
			continue;
		if (redirect.empty())
			redirect.assign(labels, lowir::kNoId);
		redirect[label] = f.labels.size();
		f.labels.push_back(dest - 1);
	}
	if (!redirect.empty())
		for (auto& ins : f.code)
			if (ins.fixup == Fixup::Block && ins.op != Op::Adr && redirect[ins.target] != lowir::kNoId)
				ins.target = redirect[ins.target];
}

// Redirect jumps after register allocation, where a phi transfer may have
// assigned the constant tested at the start of the target. Table entries
// remain one instruction wide even when their destination is adjacent.
void simplify_branches(Function& f)
{
	if (f.code.size() < 2 || f.code.size() >= (1u << 18))
		return;
	std::vector<uint8_t> anchored(f.code.size() + 1), table;
	for (auto pc : f.labels)
		if (pc < anchored.size())
			anchored[pc] = 1;
	for (const auto& event : f.frame_events)
		anchored[event.pc / 4] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			anchored[pad / 4] = 1;
	for (const auto& inst : f.code)
		if (inst.op == Op::Adr && inst.fixup == Fixup::Block)
		{
			if (table.empty())
				table.resize(f.code.size());
			for (auto i = f.labels[inst.target]; i < f.code.size() && f.code[i].op == Op::B && !table[i]; ++i)
				table[i] = 1;
		}
	const unsigned n = f.code.size();
	std::vector<unsigned> removed;
	for (unsigned pc = 0; pc < n; ++pc)
	{
		auto& br = f.code[pc];
		if (br.fixup != Fixup::Block || br.op == Op::Adr)
			continue;
		auto to = f.labels[br.target];
		if (to >= n)
			continue;
		// A short branch keeps its original encodable displacement.
		for (unsigned step = 0; step < 8 && f.code[to].op == Op::B && f.code[to].fixup == Fixup::Block; ++step)
		{
			const auto target = f.code[to].target;
			const auto dest = f.labels[target];
			const int64_t distance = static_cast<int64_t>(dest) - pc;
			if (dest >= n || dest == to ||
				((br.op == Op::Tbz || br.op == Op::Tbnz) && (distance < -8192 || distance >= 8192)))
				break;
			to = dest;
			br.target = target;
		}
		if (br.op != Op::B)
			continue;
		if (pc && !anchored[pc])
		{
			const auto& prev = f.code[pc - 1];
			const auto& test = f.code[to];
			if (prev.op == Op::MovZ && prev.rd != 31 && prev.fixup == Fixup::None && prev.rd == test.rd &&
				test.fixup == Fixup::Block &&
				(test.op == Op::Cbz || test.op == Op::CbzW || test.op == Op::Cbnz || test.op == Op::CbnzW))
			{
				const uint64_t value = uint64_t((prev.field >> 5) & 65535) << (16 * ((prev.field >> 21) & 3));
				const bool is_zero = test.op == Op::CbzW || test.op == Op::CbnzW ? static_cast<uint32_t>(value) == 0
																				 : value == 0;
				if (is_zero == (test.op == Op::Cbz || test.op == Op::CbzW))
					br.target = test.target;
				else if (to + 1 < n)
				{
					br.target = f.labels.size();
					f.labels.push_back(to + 1);
					anchored[to + 1] = 1;
				}
				to = f.labels[br.target];
			}
		}
		if (!table.empty() && table[pc])
			continue;
		if (to == pc + 1)
		{
			removed.push_back(pc);
			continue;
		}
		if (!pc || anchored[pc])
			continue;
		auto& cond = f.code[pc - 1];
		if (cond.fixup != Fixup::Block || f.labels[cond.target] != pc + 1)
			continue;
		switch (cond.op)
		{
		case Op::BCond:
			cond.rd ^= 1;
			break;
		case Op::Cbz:
			cond.op = Op::Cbnz;
			break;
		case Op::Cbnz:
			cond.op = Op::Cbz;
			break;
		case Op::CbzW:
			cond.op = Op::CbnzW;
			break;
		case Op::CbnzW:
			cond.op = Op::CbzW;
			break;
		case Op::Tbz:
		case Op::Tbnz:
		{
			const int64_t words = int64_t(to) - (pc - 1);
			if (words < -8192 || words >= 8192)
				continue;
			cond.op = cond.op == Op::Tbz ? Op::Tbnz : Op::Tbz;
			break;
		}
		default:
			continue;
		}
		cond.target = br.target;
		removed.push_back(pc);
	}
	if (!removed.empty())
		remove_instructions(f, removed);
}

// Choose the start of a function so its short backward branches fetch from
// fewer cache lines. At most three unused instruction words precede the
// function. Nothing is inserted into the loop or its unwind program.
void place_short_loops(const Function& function, native::object::Section& text)
{
	unsigned contained[4] = {};
	const unsigned base = text.bytes.size() / 4;
	for (unsigned end = 0; end < function.code.size(); ++end)
	{
		const auto& ins = function.code[end];
		if (ins.fixup != Fixup::Block || ins.op == Op::Adr)
			continue;
		const auto start = function.labels[ins.target];
		if (start >= end || end - start >= 16)
			continue;
		for (unsigned pad = 0; pad < 4; ++pad)
			if (((base + start + pad) & 15) + (end - start) < 16)
				++contained[pad];
	}
	const unsigned pad = std::max_element(contained, contained + 4) - contained;
	if (contained[pad])
	{
		text.align = std::max<uint64_t>(text.align, 64);
		for (unsigned i = 0; i < pad; ++i)
			native::object::put32(text.bytes, 0xd503201f);
	}
}

void encode(
	const Function& function, const std::vector<uint32_t>& symbols, native::object::Section& text, uint32_t resume)
{
	for (size_t i = 0; i < function.code.size(); ++i)
	{
		const Instruction& ins = function.code[i];
		uint32_t word = static_cast<uint32_t>(ins.op) | ins.rd | (ins.rn << 5) | (ins.rm << 16) | ins.field;
		if (ins.fixup == Fixup::Block)
		{
			const int64_t displacement = int64_t(function.labels.at(ins.target)) - int64_t(i);
			// Local ADR targets are instruction-aligned. Its low two byte-offset
			// bits are zero, and immhi holds the same word displacement as B.cond.
			const unsigned bits = ins.op == Op::B ? 26 : (ins.op == Op::Tbz || ins.op == Op::Tbnz) ? 14 : 19;
			const int64_t limit = int64_t(1) << (bits - 1);
			if (displacement < -limit || displacement >= limit)
				throw AArch64Error("AArch64 branch displacement out of range");
			word |= (uint32_t(displacement) & ((1u << bits) - 1)) << (ins.op == Op::B ? 0 : 5);
		}
		else if (ins.fixup == Fixup::Resume)
			text.relocations.push_back(native::object::Relocation{ text.bytes.size(), Call26, resume, 0 });
		else if (ins.fixup != Fixup::None)
		{
			if (ins.target >= symbols.size() || symbols[ins.target] == lowir::kNoId)
				throw AArch64Error("unresolved AArch64 relocation symbol");
			const uint32_t type = static_cast<uint32_t>(ins.fixup);
			text.relocations.push_back(
				native::object::Relocation{ text.bytes.size(), type, symbols.at(ins.target), 0 });
		}
		for (unsigned shift = 0; shift < 32; shift += 8)
			text.bytes.push_back(static_cast<uint8_t>(word >> shift));
	}
	text.size = text.bytes.size();
}

} // namespace aarch64
