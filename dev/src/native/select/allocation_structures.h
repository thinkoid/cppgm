#pragma once

#include <cstdint>
#include <vector>
#include "machine/register_pressure.h"

// Range queries of the O1+ register allocator (register_allocation.cpp),
// over a function's allocation slots. The vectors are kept between
// functions (cleared, not freed).
namespace native {

// The OR of per-slot register masks over [first, last]: within a chunk
// directly, otherwise the first chunk's suffix, the last chunk's prefix
// and a sparse table over the whole chunks between (linear space, O(1)
// per query).
class RangeOr
{
public:
	void build(const std::vector<uint32_t>& at)
	{
		at_ = &at;
		const size_t n = at.size();
		prefix_.resize(n);
		suffix_.resize(n);
		chunks_ = static_cast<uint32_t>((n + kChunk - 1) / kChunk);
		levels_ = 1;
		while ((1u << levels_) <= chunks_)
			++levels_;
		table_.assign(static_cast<size_t>(levels_) * chunks_, 0);
		for (uint32_t c = 0; c < chunks_; ++c)
		{
			const size_t begin = static_cast<size_t>(c) * kChunk;
			const size_t end = begin + kChunk < n ? begin + kChunk : n;
			uint32_t mask = 0;
			for (size_t i = begin; i < end; ++i)
				prefix_[i] = mask |= at[i];
			table_[c] = mask;
			mask = 0;
			for (size_t i = end; i-- > begin;)
				suffix_[i] = mask |= at[i];
		}
		for (unsigned level = 1; level < levels_; ++level)
		{
			const size_t row = static_cast<size_t>(level) * chunks_;
			const uint32_t half = 1u << (level - 1);
			for (uint32_t c = 0; c + 2 * half <= chunks_; ++c)
				table_[row + c] = table_[row - chunks_ + c] | table_[row - chunks_ + c + half];
		}
	}
	uint32_t query(int32_t first, int32_t last) const
	{
		if (first > last || at_ == nullptr || at_->empty())
			return 0;
		const uint32_t cf = static_cast<uint32_t>(first) / kChunk;
		const uint32_t cl = static_cast<uint32_t>(last) / kChunk;
		if (cf == cl)
		{
			uint32_t mask = 0;
			for (int32_t i = first; i <= last; ++i)
				mask |= (*at_)[static_cast<size_t>(i)];
			return mask;
		}
		uint32_t mask = suffix_[static_cast<size_t>(first)] | prefix_[static_cast<size_t>(last)];
		if (cl - cf > 1)
		{
			const uint32_t length = cl - cf - 1;
			const unsigned level = 31 - static_cast<unsigned>(__builtin_clz(length));
			const size_t row = static_cast<size_t>(level) * chunks_;
			mask |= table_[row + cf + 1] | table_[row + cl - (1u << level)];
		}
		return mask;
	}

private:
	static const uint32_t kChunk = 32;
	const std::vector<uint32_t>* at_ = nullptr;
	std::vector<uint32_t> prefix_;
	std::vector<uint32_t> suffix_;
	std::vector<uint32_t> table_;
	uint32_t chunks_ = 0;
	unsigned levels_ = 0;
};

using machine::PressureTree;

} // namespace native
