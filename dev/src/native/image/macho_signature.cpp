#include "native/image/macho_signature.h"

#include <algorithm>
#include <cstring>

namespace native {
namespace {
// FIPS 180-4, SHA-256. Each code-signature slot hashes one independent page.
const uint32_t rounds[] = { 0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4,
	0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
	0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da, 0x983e5152,
	0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138,
	0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70,
	0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
	0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa,
	0xa4506ceb, 0xbef9a3f7, 0xc67178f2 };

uint32_t rotate(uint32_t word, unsigned n)
{
	return (word >> n) | (word << (32 - n));
}

void block(const uint8_t* input, uint32_t* state)
{
	uint32_t w[64];
	for (unsigned i = 0; i < 16; ++i)
		w[i] = (uint32_t(input[4 * i]) << 24) | (uint32_t(input[4 * i + 1]) << 16) | (uint32_t(input[4 * i + 2]) << 8) |
			input[4 * i + 3];
	for (unsigned i = 16; i < 64; ++i)
	{
		const uint32_t a = w[i - 15], b = w[i - 2];
		w[i] = w[i - 16] + (rotate(a, 7) ^ rotate(a, 18) ^ (a >> 3)) + w[i - 7] +
			(rotate(b, 17) ^ rotate(b, 19) ^ (b >> 10));
	}
	uint32_t a = state[0], b = state[1], c = state[2], d = state[3], e = state[4], f = state[5], g = state[6],
			 h = state[7];
	for (unsigned i = 0; i < 64; ++i)
	{
		const uint32_t t = h + (rotate(e, 6) ^ rotate(e, 11) ^ rotate(e, 25)) + ((e & f) ^ (~e & g)) + rounds[i] + w[i];
		const uint32_t u = (rotate(a, 2) ^ rotate(a, 13) ^ rotate(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
		h = g;
		g = f;
		f = e;
		e = d + t;
		d = c;
		c = b;
		b = a;
		a = t + u;
	}
	const uint32_t result[] = { a, b, c, d, e, f, g, h };
	for (unsigned i = 0; i < 8; ++i)
		state[i] += result[i];
}

void big(std::vector<uint8_t>& out, uint32_t value)
{
	for (int i = 24; i >= 0; i -= 8)
		out.push_back(static_cast<uint8_t>(value >> i));
}

void hash_bytes(const uint8_t* input, size_t size, uint8_t* digest)
{
	uint32_t state[] = { 0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab,
		0x5be0cd19 };
	size_t full = size & ~size_t(63);
	for (size_t i = 0; i < full; i += 64)
		block(input + i, state);
	uint8_t tail[128] = {};
	std::memcpy(tail, input + full, size - full);
	tail[size - full] = 0x80;
	const unsigned n = size - full < 56 ? 64 : 128;
	for (unsigned i = 0; i < 8; ++i)
		tail[n - 1 - i] = static_cast<uint8_t>((uint64_t(size) * 8) >> (8 * i));
	block(tail, state);
	if (n == 128)
		block(tail + 64, state);
	for (auto word : state)
		for (int shift = 24; shift >= 0; shift -= 8)
			*digest++ = static_cast<uint8_t>(word >> shift);
}
}

void set_macho_uuid(std::vector<uint8_t>& image, size_t offset)
{
	uint8_t digest[32];
	hash_bytes(image.data(), image.size(), digest);
	// RFC 9562 variant, content-derived UUID (version 8).
	digest[6] = (digest[6] & 15) | 0x80;
	digest[8] = (digest[8] & 63) | 0x80;
	std::copy(digest, digest + 16, image.begin() + offset);
}

uint64_t macho_signature_size(uint64_t limit)
{
	return 24 + 96 + ((limit + 4095) / 4096) * 32;
}

void append_macho_signature(std::vector<uint8_t>& out, uint64_t executable_bytes)
{
	const uint32_t limit = out.size(), size = macho_signature_size(limit);
	const uint32_t super[] = { 0xfade0cc0, size, 1, 0, 24, 0 };
	for (auto word : super)
		big(out, word);
	// CS_CodeDirectory v0x20400, CS_ADHOC | CS_LINKER_SIGNED, SHA-256.
	const uint32_t directory[] = { 0xfade0c02, size - 24, 0x20400, 0x20002, 96, 88, 0, (limit + 4095u) / 4096u, limit,
		0x2002000c, 0, 0, 0, 0, 0, 0, 0, 0, 0, static_cast<uint32_t>(executable_bytes), 0, 1 };
	for (auto word : directory)
		big(out, word);
	const char identifier[8] = "cppgm";
	out.insert(out.end(), identifier, identifier + 8);
	for (uint64_t i = 0; i < limit; i += 4096)
	{
		uint8_t digest[32];
		hash_bytes(out.data() + i, std::min<uint64_t>(4096, limit - i), digest);
		out.insert(out.end(), digest, digest + 32);
	}
}
} // namespace native
