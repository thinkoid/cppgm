#include "aarch64/lifetimes.h"

#include <algorithm>
#include "machine/ssa_liveness.h"
#include "opt/function_ir.h"

namespace aarch64 {
using namespace lowir;
namespace {

struct BlockSpan
{
	uint32_t first, last;
};

struct Reads
{
	BlockId definition = kNoId, block = kNoId;
	uint32_t other = kNoId;
	bool phi = false, incoming = false;
	bool local() const { return !phi && !incoming && (block == kNoId || (block == definition && other == kNoId)); }
};

void include(LiveRange& value, uint32_t at)
{
	value.first = std::min(value.first, at);
	value.last = std::max(value.last, at);
}

struct FunctionLiveness
{
	explicit FunctionLiveness(const FunctionBody& body)
		: spans(body.blocks.size()), ranges(body.temps.size()), reads(body.temps.size())
	{
		for (TempId id = 0; id < ranges.size(); ++id)
			ranges[id].id = id;
	}

	void read(TempId id, BlockId block, uint32_t at)
	{
		include(ranges[id], at);
		auto& use = reads[id];
		if (use.block == block)
			return;
		if (use.block != kNoId)
		{
			other_reads.emplace_back(use.block, use.other);
			use.other = other_reads.size() - 1;
		}
		use.block = block;
	}

	void extend(const Program& program, const FunctionBody& body, bool exceptional, uint32_t end,
		const std::vector<uint32_t>& uses)
	{
		if (std::all_of(reads.begin(), reads.end(), [](const Reads& use) { return use.local(); }))
			return;
		if (exceptional || !body.code_labels.empty())
		{
			// An exceptional or nonlocal transfer can bypass the ordinary predecessors.
			for (auto& range : ranges)
				if (!reads[range.id].local())
				{
					range.first = 0;
					range.last = end;
				}
			return;
		}
		opt::Cfg cfg;
		opt::build_cfg_light(program, body, cfg, true);
		machine::SsaLiveness walk(cfg.pred_first, cfg.preds, end / 2 + body.layout.size());
		bool within_budget = true;
		for (auto& range : ranges)
		{
			const auto& use = reads[range.id];
			if (use.local())
				continue;
			if (within_budget && use.definition != kNoId)
			{
				walk.begin(uses[range.id]);
				auto live_in = [&](BlockId b) {
					if (b != use.definition)
					{
						include(range, spans[b].first);
						walk.enter(b);
					}
				};
				if (use.block != kNoId)
					live_in(use.block);
				for (uint32_t i = use.other; i != kNoId; i = other_reads[i].second)
					live_in(other_reads[i].first);
				// A phi's parallel transfer writes its destination on every incoming edge.
				if (use.phi)
					for (uint32_t k = cfg.pred_first[use.definition]; k < cfg.pred_first[use.definition + 1]; ++k)
						include(range, spans[cfg.preds[k]].last);
				within_budget = walk.propagate(use.definition, [&](BlockId b) {
					include(range, spans[b].last);
					if (b != use.definition)
						include(range, spans[b].first);
				});
				if (within_budget)
					continue;
			}
			range.first = 0;
			range.last = end;
		}
	}

	std::vector<BlockSpan> spans;
	std::vector<LiveRange> ranges;
	std::vector<Reads> reads;
	std::vector<std::pair<BlockId, uint32_t>> other_reads;
};
} // namespace

std::vector<LiveRange> live_ranges(const Program& program, const FunctionBody& body, bool exceptional,
	std::vector<uint32_t>& uses, std::vector<uint32_t>& calls)
{
	FunctionLiveness plan(body);
	uses.assign(body.temps.size(), 0);
	const BlockId entry = body.layout.front();
	for (TempId id = 0; id < body.parameter_count; ++id)
	{
		plan.reads[id].definition = entry;
		include(plan.ranges[id], 0);
	}
	// Reads precede writes at an instruction. The block end also belongs to its phi transfers.
	uint32_t at = 2;
	for (BlockId b : body.layout)
	{
		plan.spans[b].first = b == entry ? 0 : at;
		for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next, at += 2)
		{
			const auto& inst = body.instructions[i];
			if (inst.op == Opcode::Call)
				calls.push_back(at);
			if (inst.result != kNoId)
			{
				auto& def = plan.reads[inst.result];
				def.definition = b;
				def.phi = inst.op == Opcode::Phi;
				include(plan.ranges[inst.result], def.phi ? plan.spans[b].first : at + 1);
			}
			if (inst.op == Opcode::Phi)
				continue;
			opt::for_each_operand(body, inst, [&](Value v) {
				if (v.is(ValueKind::Temp))
				{
					++uses[v.index];
					plan.read(v.index, b, at);
					plan.ranges[v.index].vector_address |= inst.op != Opcode::Vector && inst.op != Opcode::Call &&
						inst.op != Opcode::Return && inst.op != Opcode::Store && inst.op != Opcode::Copy;
				}
			});
		}
		plan.spans[b].last = at - 1;
	}
	// Layout can put a phi before its backedge, so resolve edge positions after scanning.
	for (BlockId b : body.layout)
		for (InstId i = body.blocks[b].first; i != kNoId && body.instructions[i].op == Opcode::Phi;
			i = body.instructions[i].next)
		{
			const auto& phi = body.instructions[i];
			for (uint32_t k = 0; k + 1 < phi.extra_count; k += 2)
			{
				const auto pred = body.operands[phi.extra_first + k].index;
				const auto v = body.operands[phi.extra_first + k + 1];
				if (v.is(ValueKind::Temp))
				{
					++uses[v.index];
					plan.read(v.index, pred, plan.spans[pred].last);
					plan.reads[v.index].incoming = true;
					plan.ranges[v.index].vector_address = true;
				}
			}
		}
	if (body.layout.size() > 1 ||
		(body.blocks[entry].first != kNoId && body.instructions[body.blocks[entry].first].op == Opcode::Phi))
		plan.extend(program, body, exceptional, at, uses);
	return std::move(plan.ranges);
}

} // namespace aarch64
