#include "aarch64/lifetimes.h"
#include "machine/block_frequency.h"
#include "opt/loops.h"

#include <algorithm>
#include "machine/phi_inputs.h"
#include "machine/ssa_segments.h"
#include "machine/exception_predecessors.h"
#include "machine/exception_layout.h"
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
	uint32_t other = kNoId, position = 0, written = 0;
	bool phi = false, incoming = false;
	bool local() const { return !phi && !incoming && (block == kNoId || (block == definition && other == kNoId)); }
};

void include(LiveRange& value, uint32_t at)
{
	value.first = std::min(value.first, at);
	value.last = std::max(value.last, at);
}

struct BlockRead
{
	BlockId block;
	uint32_t position, previous;
};

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
		{
			use.position = std::max(use.position, at);
			return;
		}
		if (use.block != kNoId)
		{
			other_reads.push_back(BlockRead{ use.block, use.position, use.other });
			use.other = other_reads.size() - 1;
		}
		use.block = block;
		use.position = at;
	}

	void extend(const Program& program, const FunctionBody& body, const machine::ExceptionLayout* exceptions,
		uint32_t end, const std::vector<uint32_t>& uses, std::vector<std::pair<uint32_t, uint32_t>>& segments,
		opt::Cfg& cfg)
	{
		if (std::all_of(reads.begin(), reads.end(), [](const Reads& use) { return use.local(); }))
			return;
		std::vector<uint32_t> extra_first, extra_preds;
		bool full_ranges = !body.code_labels.empty();
		if (exceptions && !full_ranges)
		{
			extra_first.assign(body.blocks.size() + 1, 0);
			auto number = [&](uint32_t b) { return body.layout[b]; };
			auto has_phi = [&](uint32_t b) {
				auto i = body.blocks[number(b)].first;
				return i != kNoId && body.instructions[i].op == Opcode::Phi;
			};
			full_ranges = !machine::exception_predecessors(
				body, exceptions->analysis, number, [](InstId) { return true; }, has_phi, extra_first, extra_preds);
		}
		if (full_ranges)
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
		opt::build_cfg_light(program, body, cfg, true);
		machine::SsaLiveness walk(cfg.pred_first, cfg.preds, end / 2 + body.layout.size());
		if (exceptions)
			walk.exception_edges(extra_first, extra_preds);
		machine::SsaSegments parts(body.blocks.size());
		bool within_budget = true;
		for (auto& range : ranges)
		{
			const auto& use = reads[range.id];
			if (use.local())
				continue;
			if (within_budget && use.definition != kNoId)
			{
				walk.begin(uses[range.id]);
				parts.begin();
				const auto definition = use.definition;
				parts.define(definition);
				auto read_block = [&](BlockId b, uint32_t at) {
					parts.read(b, at);
					if (b != definition)
						walk.enter(b);
				};
				if (use.block != kNoId)
					read_block(use.block, use.position);
				for (uint32_t i = use.other; i != kNoId; i = other_reads[i].previous)
					read_block(other_reads[i].block, other_reads[i].position);
				if (use.phi)
				{
					walk.mark_entry(definition);
					for (uint32_t k = cfg.pred_first[definition]; k < cfg.pred_first[definition + 1]; ++k)
						parts.transfer(cfg.preds[k]);
				}
				within_budget = walk.propagate(definition, [&](BlockId b) { parts.live_out(b); });
				if (within_budget)
				{
					range.segments = segments.size();
					auto bounds = [&](BlockId b) {
						return machine::BlockSlots{ static_cast<int32_t>(spans[b].first),
							static_cast<int32_t>(spans[b].last), cfg.succ_first[b + 1] - cfg.succ_first[b] > 1 };
					};
					parts.emit(
						walk, definition, use.written, use.phi, bounds, [&](BlockId, int32_t first, int32_t last) {
							segments.emplace_back(first, last);
							include(range, first);
							include(range, last);
						});
					range.count = segments.size() - range.segments;
					continue;
				}
			}
			range.first = 0;
			range.last = end;
		}
	}

	std::vector<BlockSpan> spans;
	std::vector<LiveRange> ranges;
	std::vector<Reads> reads;
	std::vector<BlockRead> other_reads;
};
} // namespace

std::vector<uint64_t> spill_weights(const Program& program, const FunctionBody& body, opt::Cfg& cfg)
{
	std::vector<uint64_t> cost(body.temps.size(), 0);
	opt::complete_cfg(cfg);
	opt::LoopForest forest;
	opt::find_loops(body, cfg, forest);
	std::vector<uint32_t> first(1, 0), members;
	for (const auto& loop : forest.loops)
	{
		members.insert(members.end(), loop.blocks.begin(), loop.blocks.end());
		first.push_back(members.size());
	}
	std::vector<uint8_t> cold(body.blocks.size(), 0);
	for (BlockId b : body.layout)
		for (InstId i = body.blocks[b].first; i != kNoId && !cold[b]; i = body.instructions[i].next)
		{
			const auto& inst = body.instructions[i];
			cold[b] = inst.op == Opcode::Throw || inst.op == Opcode::Resume || inst.op == Opcode::Unreachable ||
				program.rare_call(inst);
		}
	std::vector<uint64_t> weights;
	machine::block_frequencies(
		body, body.layout.front(), cfg.succ_first, cfg.succs, cfg.pred_first, cfg.preds, cold, first, members,
		[](BlockId b) { return b; }, [&](BlockId b) { return cfg.reachable(b); },
		[](uint32_t, uint32_t, const std::vector<uint32_t>&, const std::vector<uint32_t>&, const Instruction&, bool) {
			return false;
		},
		weights);
	for (BlockId b : body.layout)
		for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
		{
			const auto& inst = body.instructions[i];
			if (inst.result != kNoId)
				cost[inst.result] += weights[b];
			if (inst.op == Opcode::Phi)
			{
				for (uint32_t k = 0; k < inst.extra_count; k += 2)
				{
					const auto v = body.operands[inst.extra_first + k + 1];
					if (v.is(ValueKind::Temp))
						cost[v.index] += weights[body.operands[inst.extra_first + k].index];
				}
			}
			else
				opt::for_each_operand(body, inst, [&](Value v) {
					if (v.is(ValueKind::Temp))
						cost[v.index] += weights[b];
				});
		}
	return cost;
}

std::vector<LiveRange> live_ranges(const Program& program, const FunctionBody& body,
	const machine::ExceptionLayout* exceptions, std::vector<uint32_t>& uses, std::vector<uint32_t>& calls,
	std::vector<std::pair<uint32_t, uint32_t>>& segments, opt::Cfg& cfg, machine::PhiWebs& webs)
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
				def.written = def.phi ? plan.spans[b].first : at + 1;
				include(plan.ranges[inst.result], def.written);
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
		plan.spans[b].last = at + 1;
		at += 2;
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
					plan.read(v.index, pred, plan.spans[pred].last - 1);
					if (webs.empty())
						webs.reset(body.temps.size());
					webs.join(v.index, phi.result);
					plan.ranges[v.index].affinity = phi.result;
					plan.ranges[phi.result].affinity = v.index;
					plan.reads[v.index].incoming = true;
					plan.ranges[v.index].vector_address = true;
				}
			}
		}
	if (body.layout.size() > 1 ||
		(body.blocks[entry].first != kNoId && body.instructions[body.blocks[entry].first].op == Opcode::Phi))
		plan.extend(program, body, exceptions, at, uses, segments, cfg);
	for (TempId id = 0; id < body.parameter_count; ++id)
		if (!uses[id])
			plan.ranges[id].first = kNoId;
	return std::move(plan.ranges);
}

} // namespace aarch64
