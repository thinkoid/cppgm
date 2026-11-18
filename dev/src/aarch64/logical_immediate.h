#pragma once

#include <cstdint>

namespace aarch64 {

// A logical immediate is a rotated run of ones repeated across the register.
inline bool logical_immediate(uint64_t bits, unsigned width, uint32_t& field)
{
	if (width == 32)
		bits = static_cast<uint32_t>(bits);
	if (!bits || bits == (~uint64_t(0) >> (64 - width)))
		return false;
	unsigned size = width;
	while (size > 2)
	{
		const uint64_t half = (uint64_t(1) << (size / 2)) - 1;
		if ((bits & half) != (bits >> (size / 2)))
			break;
		bits &= half;
		size /= 2;
	}
	const uint64_t starts = bits & ~((bits << 1) | (bits >> (size - 1)));
	if (!starts || (starts & (starts - 1)))
		return false;
	const unsigned rotation = (size - __builtin_ctzll(starts)) & (size - 1);
	const unsigned imms = ((-2u * size) & 63) | (__builtin_popcountll(bits) - 1);
	field = ((size == 64) << 22) | (rotation << 16) | (imms << 10);
	return true;
}

} // namespace aarch64
