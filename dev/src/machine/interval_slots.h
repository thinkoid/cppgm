#pragma once

#include <cstdint>
#include <functional>
#include <queue>
#include <utility>
#include <vector>

namespace machine {

// One pool per compatible storage class. Process intervals in order of start.
// Equal endpoints still interfere. The slot can be a frame offset or a local ID.
class IntervalSlots
{
public:
	template<typename NewSlot>
	uint32_t assign(uint32_t first, uint32_t last, NewSlot create)
	{
		while (!active_.empty() && active_.top().first < first)
		{
			free_.push_back(active_.top().second);
			active_.pop();
		}
		uint32_t id;
		if (free_.empty())
			id = create();
		else
		{
			id = free_.back();
			free_.pop_back();
		}
		active_.push(End{ last, id });
		return id;
	}

private:
	using End = std::pair<uint32_t, uint32_t>;
	std::priority_queue<End, std::vector<End>, std::greater<End>> active_;
	std::vector<uint32_t> free_;
};

} // namespace machine
