#pragma once

#include <cstdint>

namespace machine {
// The inverse of an odd number modulo 2^64 (Newton's iteration doubles
// the correct low bits: 3 -> 6 -> 12 -> 24 -> 48 -> 96).
inline uint64_t odd_inverse(uint64_t odd)
{
	uint64_t x = odd;
	for (unsigned k = 0; k < 5; ++k)
		x *= 2 - odd * x;
	return x;
}
} // namespace machine
