#pragma once

#include "machine/exception_analysis.h"

#include <algorithm>

namespace machine {

// The unwinder restores the register state at the throwing call. A resume or
// cleanup jump can also enter a landing. Sites name layout positions, while
// each selector supplies the numbering used by its ordinary predecessor graph.
template<typename BlockNumber, typename Live, typename HasPhi>
bool exception_predecessors(const lowir::FunctionBody& body, const ExceptionAnalysis& eh, BlockNumber number, Live live,
	HasPhi has_phi, std::vector<uint32_t>& first, std::vector<uint32_t>& preds)
{
	std::vector<uint32_t> landing;
	for (uint32_t b = 0; b < eh.eh_landing_index_.size(); ++b)
	{
		const uint32_t index = eh.eh_landing_index_[b];
		if (index == lowir::kNoId)
			continue;
		if (index >= landing.size())
			landing.resize(index + 1, lowir::kNoId);
		landing[index] = b;
	}
	std::vector<std::pair<uint32_t, uint32_t>> edges;
	for (uint32_t b = 0; b < eh.blocks_.size(); ++b)
	{
		if (!eh.blocks_[b].reachable)
			continue;
		for (auto i = body.blocks[eh.blocks_[b].id].first; i != lowir::kNoId; i = body.instructions[i].next)
		{
			const uint32_t site = eh.eh_sites_[i];
			if (!site || !live(i))
				continue;
			const auto op = body.instructions[i].op;
			uint32_t to = lowir::kNoId;
			if (op == lowir::Opcode::Call && site - 1 < landing.size())
				to = landing[site - 1];
			else if ((op == lowir::Opcode::Resume || op == lowir::Opcode::Jump) &&
				site != ExceptionAnalysis::kResumeTerminal)
				to = site - 1;
			if (to == lowir::kNoId)
				continue;
			if (has_phi(to))
				return false;
			edges.emplace_back(number(to), number(b));
		}
	}
	std::sort(edges.begin(), edges.end());
	edges.erase(std::unique(edges.begin(), edges.end()), edges.end());
	for (const auto& edge : edges)
		++first[edge.first + 1];
	for (uint32_t b = 1; b < first.size(); ++b)
		first[b] += first[b - 1];
	preds.reserve(edges.size());
	for (const auto& edge : edges)
		preds.push_back(edge.second);
	return true;
}

} // namespace machine
