#include "aarch64/selector.h"

#include <algorithm>
#include <queue>

namespace aarch64 {
using namespace lowir;

namespace {
struct Range
{
	TempId id;
	uint32_t first = kNoId, last = 0, block = kNoId;
	bool crosses_blocks = false, vector_address = false;
	void touch(uint32_t at, BlockId in)
	{
		first = std::min(first, at);
		last = std::max(last, at);
		if (block != kNoId && block != in)
			crosses_blocks = true;
		block = in;
	}
};
}

void Selector::allocate()
{
	const size_t count = body_.temps.size();
	registers_.assign(count, kNoId);
	vectors_.assign(count, kNoId);
	homes_.assign(count, kNoId);
	auto home = [&](TempId id) {
		const auto type = body_.temps[id].type;
		return reserve((storage_bytes(type) + 7) & ~uint64_t(7), std::max(8u, data_alignment(type)));
	};
	if (!level_)
	{
		for (TempId id = 0; id < count; ++id)
			homes_[id] = home(id);
		return;
	}
	std::vector<Range> ranges(count);
	std::vector<uint32_t> calls;
	for (TempId id = 0; id < count; ++id)
		ranges[id].id = id;
	for (TempId id = 0; id < body_.parameter_count; ++id)
		ranges[id].touch(0, body_.layout.front());
	uint32_t at = 2;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next, at += 2)
		{
			const auto& inst = body_.instructions[i];
			if (inst.op == Opcode::Call)
				calls.push_back(at);
			if (inst.result != kNoId)
			{
				ranges[inst.result].touch(at + 1, block);
				// A phi is assigned on every incoming edge.
				ranges[inst.result].crosses_blocks |= inst.op == Opcode::Phi;
			}
			const auto use = [&](Value v) {
				if (v.is(ValueKind::Temp))
				{
					ranges[v.index].touch(at, block);
					ranges[v.index].crosses_blocks |= inst.op == Opcode::Phi;
					ranges[v.index].vector_address |= inst.op != Opcode::Vector && inst.op != Opcode::Call &&
						inst.op != Opcode::Return && inst.op != Opcode::Store && inst.op != Opcode::Copy;
				}
			};
			for (const Value v : inst.ops)
				use(v);
			for (unsigned j = 0; j < inst.extra_count; ++j)
				use(body_.operands[inst.extra_first + j]);
		}
	// Pin values live across block boundaries. Block-local ranges can reuse
	// registers and spill slots immediately after the last read, even in loops.
	for (auto& range : ranges)
		if (range.crosses_blocks)
		{
			range.first = 0;
			range.last = at;
		}
	std::stable_sort(ranges.begin(), ranges.end(), [](const Range& a, const Range& b) { return a.first < b.first; });
	// x9-x11, x15-x17 and v16-v17 are selector scratch; x18 is platform-reserved.
	std::vector<unsigned> incoming(body_.parameter_count, kNoId);
	if (calls.empty())
	{
		Arguments args(named_.darwin);
		for (TempId id = 0; id < body_.parameter_count; ++id)
		{
			const auto& param = program_.parameters_of(signature_)[id];
			if (param.pass == ir_model::PPM_INDIRECT_RESULT)
				continue;
			const auto arg = args.next(param.type, param.shape);
			if (arg.bank == Bank::General && !memory_value(param.type))
				incoming[id] = arg.first;
		}
	}
	const unsigned bank[] = { 0, 1, 2, 3, 4, 5, 6, 7, 12, 13, 14, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28 };
	uint32_t available[32] = {}, vector_available[32] = {};
	using Spill = std::pair<uint32_t, uint32_t>;
	std::priority_queue<Spill, std::vector<Spill>, std::greater<Spill>> spills;
	for (const auto& range : ranges)
	{
		if (range.first == kNoId)
			continue;
		const auto call = std::lower_bound(calls.begin(), calls.end(), range.first);
		const bool across_call = call != calls.end() && *call < range.last;
		const auto type = body_.temps[range.id].type;
		if (memory_value(type))
		{
			// v18-v31 are full caller-clobbered V registers. A quadword
			// that crosses a call must be spilled, including its high half.
			if (type.kind() == TypeKind::V128 && !range.vector_address && !across_call)
				for (unsigned reg = 18; reg <= 31; ++reg)
					if (vector_available[reg] <= range.first)
					{
						vector_available[reg] = range.last + 1;
						vectors_[range.id] = reg;
						break;
					}
			if (vectors_[range.id] == kNoId)
				homes_[range.id] = home(range.id);
			continue;
		}
		for (unsigned reg : bank)
		{
			if (reg < 8 &&
				(!calls.empty() || (range.first == 0 && (range.id >= incoming.size() || incoming[range.id] != reg))))
				continue;
			if (available[reg] > range.first || (reg < 19 && across_call))
				continue;
			if (reg >= 19 && available[reg] == 0)
				preserved_.push_back({ reg, reserve(8, 8) });
			available[reg] = range.last + 1;
			registers_[range.id] = reg;
			break;
		}
		if (registers_[range.id] != kNoId)
			continue;
		if (!spills.empty() && spills.top().first < range.first)
		{
			homes_[range.id] = spills.top().second;
			spills.pop();
		}
		else
			homes_[range.id] = reserve(8, 8);
		spills.push({ range.last, homes_[range.id] });
	}
}
} // namespace aarch64
