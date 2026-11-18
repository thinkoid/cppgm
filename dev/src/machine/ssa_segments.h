#pragma once

#include "machine/ssa_liveness.h"

#include <algorithm>

namespace machine {

struct BlockSlots
{
	int32_t entry, edge_write;
	bool multiple_successors;
};

// Per-block live intervals for one SSA value. Operand reads, definitions,
// exceptional predecessors and instruction clobber slots come from selection.
class SsaSegments
{
public:
	explicit SsaSegments(uint32_t blocks) : seen_(blocks), out_(blocks), transfer_(blocks), last_(blocks) {}
	void begin()
	{
		++epoch_;
		present_.clear();
	}
	void define(uint32_t block)
	{
		if (seen_[block] != epoch_)
		{
			seen_[block] = epoch_;
			last_[block] = -1;
			present_.push_back(block);
		}
	}
	void read(uint32_t block, int32_t at)
	{
		define(block);
		last_[block] = std::max(last_[block], at);
	}
	void transfer(uint32_t block)
	{
		define(block);
		transfer_[block] = epoch_;
	}
	void live_out(uint32_t block)
	{
		define(block);
		out_[block] = epoch_;
	}

	template<typename Bounds, typename Save>
	void emit(const SsaLiveness& walk, uint32_t definition, int32_t written, bool phi, Bounds bounds, Save save)
	{
		std::sort(present_.begin(), present_.end());
		for (uint32_t b : present_)
		{
			const auto slots = bounds(b);
			const bool live = out_[b] == epoch_, transfer = transfer_[b] == epoch_;
			const bool enters = walk.live_in(b);
			// A conditional edge writes its phis only on that edge. Values
			// live on the edge already meet the phi at the target entry.
			if (phi && transfer && slots.multiple_successors && !live)
			{
				if (enters)
					save(b, slots.entry, std::max(slots.entry, last_[b]));
				continue;
			}
			// The old loop value can die before the latch writes the next.
			if (transfer && !live && enters)
			{
				save(b, slots.entry, std::max(slots.entry, last_[b]));
				save(b, slots.edge_write, slots.edge_write);
				continue;
			}
			const auto start = enters ? slots.entry : b == definition && !phi ? written : slots.edge_write;
			save(b, start, std::max(start, live || transfer ? slots.edge_write : last_[b]));
		}
	}

private:
	std::vector<uint32_t> seen_, out_, transfer_, present_;
	std::vector<int32_t> last_;
	uint32_t epoch_ = 0;
};

} // namespace machine
