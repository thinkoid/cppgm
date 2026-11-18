#include "aarch64/selector.h"
#include "machine/parallel_register_moves.h"

#include <algorithm>
namespace aarch64 {
using namespace lowir;

bool Selector::small_scalar_edge(BlockId from, BlockId to)
{
	machine::ScalarTransfer moves[machine::kSmallTransfers];
	Value sources[machine::kSmallTransfers];
	Type types[machine::kSmallTransfers];
	unsigned count = 0;
	const auto location = [&](TempId t) { return registers_[t] == kNoId ? 32 + homes_[t] : registers_[t]; };
	for (auto i = body_.blocks[to].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		if (same_home(phi.result, source))
			continue;
		if (count == machine::kSmallTransfers || !(phi.type.is_integer() || phi.type.is_pointer()) ||
			memory_value(phi.type) || !(source.is(ValueKind::Temp) || source.is(ValueKind::Integer)))
			return false;
		sources[count] = source;
		types[count] = phi.type;
		moves[count++] = { location(phi.result),
			source.is(ValueKind::Temp) ? location(source.index) : machine::kTransferLiteral };
	}
	const auto read = [&](unsigned reg, uint32_t loc) {
		if (loc < 32)
			move(reg, loc);
		else
			access(false, reg, frame_base(), loc - 32, 8);
	};
	return machine::parallel_scalar_transfers(
		moves, count, [&](unsigned i) { read(15, moves[i].destination); },
		[&](unsigned i, uint32_t src) {
			const auto dst = moves[i].destination;
			const auto reg = dst < 32 ? dst : (src < 32 ? src : src == machine::kTransferSaved ? 15u : 9u);
			if (src == machine::kTransferLiteral)
				value(reg, sources[i], types[i]);
			else
				read(reg, src == machine::kTransferSaved ? 15 : src);
			if (dst >= 32)
				access(true, reg, frame_base(), dst - 32, 8);
		});
}

void Selector::copy_edge(BlockId from, BlockId to)
{
	if (level_ && small_scalar_edge(from, to))
		return;
	// Snapshot all sources before committing any destination of this parallel copy.
	uint32_t offset = phi_area_;
	const InstId first = body_.blocks[to].first;
	for (InstId i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const Type type = body_.instructions[i].type;
		const auto source = phis_.incoming(body_, i, from);
		if (memory_value(type))
		{
			frame_address(10, offset);
			copy_value(10, source, type);
		}
		else
		{
			const auto reg = operand_register(source, type, 10);
			access(true, reg, frame_base(), offset, 8);
		}
		offset += (storage_bytes(type) + 7) & ~uint64_t(7);
	}
	offset = phi_area_;
	for (InstId i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		if (memory_value(phi.type))
		{
			frame_address(11, offset);
			if (phi.type.kind() == TypeKind::V128)
			{
				out_.emit(Op::LdrQ, 16, 11);
				save_vector(16, phi.result);
			}
			else
			{
				home_address(10, phi.result);
				copy_bytes(10, 11, storage_bytes(phi.type));
			}
		}
		else
		{
			const auto dest = registers_[phi.result] == kNoId ? 10 : registers_[phi.result];
			access(false, dest, frame_base(), offset, 8);
			// Scalar SSA values already have their type's canonical high bits.
			const auto source = phis_.incoming(body_, i, from);
			save(dest, phi.result, source.is(ValueKind::Temp) || source.is(ValueKind::Integer));
		}
		offset += (storage_bytes(phi.type) + 7) & ~uint64_t(7);
	}
}

bool Selector::same_home(TempId dest, Value source) const
{
	if (!source.is(ValueKind::Temp))
		return false;
	return registers_[dest] != kNoId ? registers_[source.index] == registers_[dest]
		: vectors_[dest] != kNoId    ? vectors_[source.index] == vectors_[dest]
									 : homes_[dest] != kNoId && homes_[dest] == homes_[source.index];
}

bool Selector::needs_snapshot(BlockId from, BlockId to)
{
	// An acyclic ordered transfer may include scalar frame homes. A later
	// source must see the value from before every destination write.
	uint32_t written[2] = {};
	uint32_t offsets[16], count = 0;
	for (auto i = body_.blocks[to].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		if (same_home(phi.result, source))
			continue;
		if ((memory_value(phi.type) && phi.type.kind() != TypeKind::V128) ||
			!(source.is(ValueKind::Temp) || source.is(ValueKind::Integer) || source.is(ValueKind::Float)))
			return true;
		if (source.is(ValueKind::Temp))
		{
			const bool simd = vectors_[source.index] != kNoId;
			const auto reg = simd ? vectors_[source.index] : registers_[source.index];
			if (reg != kNoId ? (written[simd] & (1u << reg)) != 0
							 : std::find(offsets, offsets + count, homes_[source.index]) != offsets + count)
				return true;
		}
		const bool simd = vectors_[phi.result] != kNoId;
		const auto reg = simd ? vectors_[phi.result] : registers_[phi.result];
		if (reg != kNoId)
			written[simd] |= 1u << reg;
		else if (count < 16)
			offsets[count++] = homes_[phi.result];
		else
			return true;
	}
	return false;
}

uint64_t Selector::plan_phis()
{
	uint64_t maximum = 0;
	for (auto block : body_.layout)
	{
		const auto entry = body_.blocks[block].first;
		if (entry == kNoId || body_.instructions[entry].op != Opcode::Phi)
			continue;
		const auto& first = body_.instructions[entry];
		bool snapshot = !level_;
		if (level_)
			for (uint32_t k = 0; k < first.extra_count; k += 2)
			{
				const auto from = body_.operands[first.extra_first + k].index;
				if (needs_snapshot(from, block))
				{
					snapshot_edges_.emplace_back(block, from);
					snapshot = true;
				}
			}
		if (!snapshot)
			continue;
		uint64_t bytes = 0;
		for (auto i = entry; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
			bytes += (storage_bytes(body_.instructions[i].type) + 7) & ~uint64_t(7);
		maximum = std::max(maximum, bytes);
	}
	std::sort(snapshot_edges_.begin(), snapshot_edges_.end());
	return maximum;
}

void Selector::register_edge(BlockId from, BlockId to)
{
	for (auto i = body_.blocks[to].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		if (same_home(phi.result, source))
			continue;
		if (phi.type.kind() == TypeKind::V128)
			save_vector(vector_value(source, 16), phi.result);
		else if (vectors_[phi.result] != kNoId)
			vector_move(vectors_[phi.result], fp_operand(source, phi.type, 16));
		else if (registers_[phi.result] != kNoId)
			value(registers_[phi.result], source, phi.type);
		else
		{
			const auto reg = operand_register(source, phi.type, 9);
			access(true, reg, frame_base(), homes_[phi.result], 8);
		}
	}
}

bool Selector::empty_edge(BlockId block, BlockId to)
{
	const auto first = body_.blocks[to].first;
	if (out_.exceptions && out_.exceptions->entry_selectors[to])
		return false;
	for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, block);
		if (!level_ || !same_home(phi.result, source))
			return false;
	}
	return true;
}

void Selector::conditional_edges(BlockId block, const lowir::Instruction& branch, Op test, unsigned operand)
{
	const BlockId yes = branch.ops[1].index, no = branch.ops[2].index;
	if (no == fallthrough_ && empty_edge(block, yes))
	{
		const auto inverse = test == Op::Cbz ? Op::Cbnz
			: test == Op::Cbnz               ? Op::Cbz
			: test == Op::CbzW               ? Op::CbnzW
			: test == Op::CbnzW              ? Op::CbzW
											 : Op::BCond;
		out_.reference(inverse, Fixup::Block, yes, test == Op::BCond ? operand ^ 1 : operand);
		edge(block, no, true);
		return;
	}
	if (level_ && empty_edge(block, no))
	{
		out_.reference(test, Fixup::Block, no, operand);
		edge(block, yes, true);
		return;
	}
	const uint32_t other = out_.labels.size();
	out_.labels.push_back(kNoId);
	out_.reference(test, Fixup::Block, other, operand);
	edge(block, yes);
	out_.bind(other);
	edge(block, no, true);
}

void Selector::edge(BlockId from, BlockId to, bool last)
{
	if (!level_ || std::binary_search(snapshot_edges_.begin(), snapshot_edges_.end(), std::make_pair(to, from)))
		copy_edge(from, to);
	else
		register_edge(from, to);
	if (out_.exceptions && out_.exceptions->entry_selectors[to] != 0)
	{
		constant(9, out_.exceptions->entry_selectors[to]);
		access(true, 9, frame_base(), exception_slot_ + 8, 8);
	}
	if (!last || to != fallthrough_)
		out_.reference(Op::B, Fixup::Block, to);
}

} // namespace aarch64
