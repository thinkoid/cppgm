#pragma once

#include "lowir/program.h"
#include <algorithm>

namespace machine {
const uint64_t kBlockWeightUnit = 4096;

// Each block's estimated executions per call (Wu and Larus, in fixed
// point): a block's flow splits evenly among its successors that are not
// cold, except that edges leaving its innermost loop share 1/32 of it
// (LLVM's estimate of a loop's exits); each loop, innermost first, finds
// the flow back to its header for one entering (at most 31/32), and a
// header's flow is what enters it over the rest (one exit test: 32
// passes). A block that is not cold weighs at least 1. Work: O(blocks +
// edges) per loop level.
template<typename Id, typename Reachable, typename LoopGuard>
void block_frequencies(const lowir::FunctionBody& body, uint32_t entry, const std::vector<uint32_t>& succ_first,
	const std::vector<uint32_t>& succs, const std::vector<uint32_t>& pred_first, const std::vector<uint32_t>& preds,
	const std::vector<uint8_t>& cold, const std::vector<uint32_t>& first, const std::vector<uint32_t>& members, Id id,
	Reachable reachable, LoopGuard iteration_guard, std::vector<uint64_t>& weights)
{
	const uint64_t kOne = static_cast<uint64_t>(1) << 20; // probability and frequency unit
	const uint64_t kExitShare = 32;                       // a loop's exits take one part in so many
	const uint64_t kMaxBack = kOne * (kExitShare - 1) / kExitShare;
	const uint64_t kMaxFrequency = kOne << 20;
	const uint32_t n = static_cast<uint32_t>(cold.size());
	weights.assign(n, 0);
	if (n == 0)
		return;
	// Reverse postorder, and back edges (to a block on the walk's stack).
	// (The scratch persists for its capacity: each vector is assigned before use.)
	static std::vector<uint8_t> state, back, in_back;
	static std::vector<uint32_t> next, post, stack, order, by_size, inner, parent, header_of, stamp, blocks,
		latch_header;
	static std::vector<uint64_t> prob, in_prob, again, flow;
	state.assign(n, 0);
	back.assign(succs.size(), 0);
	next.assign(n, 0);
	post.clear();
	stack.assign(1, entry);
	state[entry] = 1;
	next[entry] = succ_first[entry];
	while (!stack.empty())
	{
		const uint32_t b = stack.back();
		if (next[b] == succ_first[b + 1])
		{
			state[b] = 2;
			post.push_back(b);
			stack.pop_back();
			continue;
		}
		const uint32_t k = next[b]++;
		const uint32_t s = succs[k];
		if (state[s] == 1)
			back[k] = 1;
		else if (state[s] == 0 && reachable(s))
		{
			state[s] = 1;
			next[s] = succ_first[s];
			stack.push_back(s);
		}
	}
	order.assign(n, lowir::kNoId); // reverse postorder index
	for (size_t k = 0; k < post.size(); ++k)
		order[post[post.size() - 1 - k]] = static_cast<uint32_t>(k);
	// loop_depths' natural loops, smallest first; each block's innermost
	// and each loop's parent (the smallest holding its header).
	const uint32_t loops = first.empty() ? 0 : static_cast<uint32_t>(first.size() - 1);
	by_size.resize(loops);
	for (uint32_t l = 0; l < loops; ++l)
		by_size[l] = l;
	std::sort(by_size.begin(), by_size.end(), [&](uint32_t a, uint32_t b) {
		const uint32_t sa = first[a + 1] - first[a], sb = first[b + 1] - first[b];
		return sa != sb ? sa < sb : a < b;
	});
	inner.assign(n, lowir::kNoId);
	parent.assign(loops, lowir::kNoId);
	header_of.assign(n, lowir::kNoId);
	for (uint32_t k = loops; k-- > 0;)
	{
		const uint32_t l = by_size[k];
		const uint32_t h = members[first[l]];
		if (inner[h] != lowir::kNoId)
			parent[l] = inner[h];
		for (uint32_t i = first[l]; i < first[l + 1]; ++i)
			inner[members[i]] = l;
		header_of[h] = l;
	}
	auto contains = [&](uint32_t l, uint32_t b) {
		for (uint32_t x = inner[b]; x != lowir::kNoId; x = parent[x])
			if (x == l)
				return true;
		return false;
	};
	// A null or remaining-counter guard can end an iteration early. Other
	// conditionals may intentionally skip most iterations, so an edge to the
	// latch alone says nothing about the likely path.
	latch_header.assign(n, lowir::kNoId);
	for (uint32_t b = 0; b < n; ++b)
		if (inner[b] != lowir::kNoId)
		{
			const uint32_t header = members[first[inner[b]]];
			for (uint32_t k = succ_first[b]; k < succ_first[b + 1]; ++k)
				if (back[k] && succs[k] == header)
					latch_header[b] = header;
		}
	// Edge probabilities, by successor index.
	prob.assign(succs.size(), 0);
	for (uint32_t b = 0; b < n; ++b)
	{
		const auto ends_iteration = [&](uint32_t edge) {
			if (inner[b] == lowir::kNoId)
				return false;
			const uint32_t header = members[first[inner[b]]];
			if (back[edge] && succs[edge] == header)
				return true;
			return latch_header[succs[edge]] == header;
		};
		uint32_t warm = 0, exits = 0, ending = 0;
		for (uint32_t k = succ_first[b]; k < succ_first[b + 1]; ++k)
			if (!cold[succs[k]])
			{
				++warm;
				exits += inner[b] != lowir::kNoId && !contains(inner[b], succs[k]) ? 1 : 0;
				ending += ends_iteration(k) ? 1 : 0;
			}
		for (uint32_t k = succ_first[b]; k < succ_first[b + 1]; ++k)
		{
			if (cold[succs[k]])
				continue;
			const bool exit = inner[b] != lowir::kNoId && !contains(inner[b], succs[k]);
			const lowir::Instruction& term = body.instructions[body.blocks[id(b)].last];
			const lowir::BranchPrediction prediction = static_cast<lowir::BranchPrediction>(term.sub);
			if (warm == 2 && term.op == lowir::Opcode::Branch && prediction != lowir::BranchPrediction::None)
			{
				// An explicit expectation outweighs the generic loop/edge rules.
				const bool on_true = term.ops[1].index == id(succs[k]);
				const bool likely = on_true == (prediction == lowir::BranchPrediction::Likely);
				prob[k] = likely ? kOne - kOne / 2001 : kOne / 2001;
			}
			else if (exits == 0 && warm == 2 && ending == 1 && term.op == lowir::Opcode::Branch &&
				iteration_guard(inner[b], members[first[inner[b]]], inner, parent, term,
					ends_iteration(k) ? term.ops[1].index != id(succs[k]) : term.ops[1].index == id(succs[k])))
				prob[k] = ends_iteration(k) ? kOne / 10 / ending : (kOne - kOne / 10) / (warm - ending);
			else if (exits == 0 || exits == warm)
				prob[k] = kOne / warm;
			else
				prob[k] = exit ? kOne / kExitShare / exits : (kOne - kOne / kExitShare) / (warm - exits);
		}
	}
	// The same by predecessor entry (preds), with each edge's back mark.
	in_prob.assign(preds.size(), 0);
	in_back.assign(preds.size(), 0);
	for (uint32_t b = 0; b < n; ++b)
		for (uint32_t p = pred_first[b]; p < pred_first[b + 1]; ++p)
			for (uint32_t k = succ_first[preds[p]]; k < succ_first[preds[p] + 1]; ++k)
				if (succs[k] == b)
				{
					in_prob[p] = prob[k];
					in_back[p] = back[k];
					break;
				}
	// The flow into b from its predecessors (those stamped `within` unless
	// that is 0) over forward edges, or over back edges.
	stamp.assign(n, 0);
	again.assign(n, 0); // a header's flow back per entering
	flow.assign(n, 0);
	auto inflow = [&](uint32_t b, uint32_t within, bool backward) {
		uint64_t f = 0;
		for (uint32_t p = pred_first[b]; p < pred_first[b + 1]; ++p)
			if ((within == 0 || stamp[preds[p]] == within) && (in_back[p] != 0) == backward)
				f += flow[preds[p]] * in_prob[p] / kOne;
		return f;
	};
	auto settle = [&](uint32_t b, uint64_t f) {
		f = std::min(f, kMaxFrequency);
		if (header_of[b] != lowir::kNoId)
			f = std::min(f * kOne / (kOne - again[b]), kMaxFrequency);
		return f;
	};
	for (uint32_t l : by_size)
	{
		const uint32_t h = members[first[l]];
		blocks.assign(members.begin() + first[l], members.begin() + first[l + 1]);
		std::sort(blocks.begin(), blocks.end(), [&](uint32_t a, uint32_t b) { return order[a] < order[b]; });
		for (uint32_t b : blocks)
		{
			flow[b] = 0;
			stamp[b] = l + 1;
		}
		flow[h] = kOne;
		for (uint32_t b : blocks)
			if (b != h && order[b] != lowir::kNoId)
				flow[b] = settle(b, inflow(b, l + 1, false));
		again[h] = std::min(inflow(h, l + 1, true), kMaxBack);
	}
	for (size_t k = post.size(); k-- > 0;)
	{
		const uint32_t b = post[k];
		flow[b] = settle(b, (b == entry ? kOne : 0) + inflow(b, 0, false));
	}
	for (uint32_t b = 0; b < n; ++b)
		if (!cold[b] && reachable(b))
			weights[b] = std::max<uint64_t>(1, (flow[b] * kBlockWeightUnit + kOne / 2) / kOne);
}

} // namespace machine
