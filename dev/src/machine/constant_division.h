#pragma once

#include <cstdint>

namespace machine {

// Word division in a 64-bit product (Granlund and Montgomery 1994, section 6):
// (x * multiplier) >> shift, for 0 < d < 2^31 not a power of two, and x below
// 2^precision in magnitude. The multiplier is the smallest that serves and
// may require more than 32 bits. Signed callers correct the rounded quotient.
struct WordMagic
{
	uint64_t multiplier;
	unsigned shift;
};

inline WordMagic word_magic(uint64_t d, unsigned precision)
{
	unsigned bits = 0;
	while ((uint64_t(1) << bits) < d)
		++bits;
	const unsigned power = 32 + bits;
	uint64_t low = (uint64_t(1) << power) / d;
	uint64_t high = ((uint64_t(1) << power) + (uint64_t(1) << (power - precision))) / d;
	unsigned post = bits;
	while (post > 0 && (low >> 1) < (high >> 1))
	{
		low >>= 1;
		high >>= 1;
		--post;
	}
	return { high, 32 + post };
}

} // namespace machine
