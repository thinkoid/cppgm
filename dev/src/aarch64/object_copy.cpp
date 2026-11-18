#include "aarch64/selector.h"

namespace aarch64 {
using lowir::kNoId;

// Up to 32 bytes fit in two registers. Load both ends before either store,
// including when the two accesses overlap. Neither access crosses the object.
void Selector::copy_piece(unsigned dst, unsigned src, unsigned offset, unsigned bytes)
{
	if (!bytes)
		return;
	const unsigned index = std::min(4, 31 - __builtin_clz(bytes));
	const unsigned step = 1u << index;
	const Op loads[] = { Op::LdurB, Op::LdurH, Op::LdurW, Op::LdurX, Op::LdurQ };
	const Op stores[] = { Op::SturB, Op::SturH, Op::SturW, Op::SturX, Op::SturQ };
	const unsigned first = index == 4 ? 16 : 9, second = index == 4 ? 17 : 15;
	const unsigned end = offset + bytes - step;
	if (src != 31)
	{
		out_.emit(loads[index], first, src, 0, offset << 12);
		if (end != offset)
			out_.emit(loads[index], second, src, 0, end << 12);
	}
	const unsigned zero = index == 4 ? 16 : 31;
	out_.emit(stores[index], src == 31 ? zero : first, dst, 0, offset << 12);
	if (end != offset)
		out_.emit(stores[index], src == 31 ? zero : second, dst, 0, end << 12);
}

void Selector::copy_run(unsigned dst, unsigned src, uint64_t bytes, bool backward)
{
	const unsigned tail = bytes % 32;
	if (bytes <= 128)
	{
		const unsigned count = bytes / 32;
		if (backward)
			copy_piece(dst, src, 32 * count, tail);
		for (unsigned i = 0; i < count; ++i)
			copy_piece(dst, src, 32 * (backward ? count - 1 - i : i), 32);
		if (!backward)
			copy_piece(dst, src, 32 * count, tail);
		return;
	}
	if (backward)
	{
		constant(9, bytes);
		out_.emit(Op::Add, 16, dst, 9);
		out_.emit(Op::Add, 17, src, 9);
	}
	else
	{
		move(16, dst);
		if (src != 31)
			move(17, src);
	}
	constant(9, bytes / 32);
	const uint32_t loop = out_.labels.size();
	out_.labels.push_back(kNoId);
	out_.bind(loop);
	const unsigned step = (backward ? 126u : 2u) << 15;
	if (src != 31)
		out_.emit(backward ? Op::LdpQPre : Op::LdpQPost, 16, 17, 0, step | (17u << 10));
	out_.emit(backward ? Op::StpQPre : Op::StpQPost, 16, 16, 0, step | ((src == 31 ? 16u : 17u) << 10));
	out_.emit(Op::SubI, 9, 9, 0, 1 << 10);
	out_.reference(Op::Cbnz, Fixup::Block, loop, 9);
	copy_piece(backward ? dst : 16, backward || src == 31 ? src : 17, 0, tail);
}

void Selector::copy_bytes(unsigned dst, unsigned src, uint64_t size)
{
	if (!size || dst == src)
		return;
	if (src == 31 && size >= 16)
		out_.emit(Op::VEor, 16, 16, 16);
	if (size <= 32)
	{
		copy_piece(dst, src, 0, size);
		return;
	}
	if (src == 31)
	{
		copy_run(dst, src, size, false);
		return;
	}
	const uint32_t forward = out_.labels.size(), done = forward + 1;
	out_.labels.resize(done + 1, kNoId);
	out_.emit(Op::Subs, 31, dst, src);
	out_.reference(Op::BCond, Fixup::Block, forward, 9); // destination <= source
	copy_run(dst, src, size, true);
	out_.reference(Op::B, Fixup::Block, done);
	out_.bind(forward);
	copy_run(dst, src, size, false);
	out_.bind(done);
}
} // namespace aarch64
