#include "aarch64/selector.h"
#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;

void Selector::vector_move(unsigned to, unsigned from)
{
	if (to != from)
		out_.emit(Op::VOrr, to, from, from);
}

unsigned Selector::vector_value(Value src, unsigned scratch)
{
	if (src.is(ValueKind::Temp) && vectors_[src.index] != kNoId)
		return vectors_[src.index];
	if (src.is(ValueKind::Integer))
	{
		const auto bits = body_.literals[src.index];
		constant(16, bits.low);
		out_.emit(Op::FmovDX, scratch, 16);
		if (bits.high)
		{
			constant(16, bits.high);
			out_.emit(Op::VInsHi, scratch, 16);
		}
	}
	else
	{
		address(16, src);
		out_.emit(Op::LdrQ, scratch, 16);
	}
	return scratch;
}

void Selector::save_vector(unsigned reg, TempId id)
{
	if (vectors_[id] != kNoId)
		vector_move(vectors_[id], reg);
	else
	{
		home_address(16, id);
		out_.emit(Op::StrQ, reg, 16);
	}
}

void Selector::vector_shift(VectorOp op, unsigned dest, unsigned source, uint64_t count)
{
	const bool left = op < VectorOp::Psrlwi;
	const bool arithmetic = op >= VectorOp::Psrawi;
	const auto first = left ? VectorOp::Psllwi : arithmetic ? VectorOp::Psrawi : VectorOp::Psrlwi;
	const unsigned width = 16u << (unsigned(op) - unsigned(first));
	if (count == 0)
		vector_move(dest, source);
	else if (count >= width && !arithmetic)
		out_.emit(Op::VEor, dest, dest, dest);
	else
	{
		const unsigned shift = left ? width + count : 2 * width - std::min<uint64_t>(count, width);
		out_.emit(left ? Op::VShl : arithmetic ? Op::VSshr : Op::VUshr, dest, source, 0, shift << 16);
	}
}

void Selector::vector_shuffle(const lowir::Instruction& inst, unsigned source)
{
	const unsigned mask = body_.literals[inst.ops[2].index].low;
	// The common splat is one DUP. The remaining shuffles construct each
	// destination lane while leaving the source intact, including when it is v16.
	const auto op = static_cast<VectorOp>(inst.sub);
	if (op == VectorOp::Pshuflw || op == VectorOp::Pshufhw)
	{
		const unsigned first = op == VectorOp::Pshufhw ? 4 : 0;
		vector_move(17, source);
		for (unsigned i = 0; i < 4; ++i)
		{
			const unsigned lane = (mask >> (2 * i)) & 3;
			if (i != lane)
				out_.emit(Op::VInsH, 17, source, 0, ((first + i) << 18) | ((first + lane) << 12));
		}
	}
	else if (((mask & 3) * 0x55) == mask)
		out_.emit(Op::VDupS, 17, source, 0, (mask & 3) << 19);
	else
		for (unsigned i = 0; i < 4; ++i)
			out_.emit(Op::VInsS, 17, source, 0, (i << 19) | (((mask >> (2 * i)) & 3) << 13));
	save_vector(17, inst.result);
}

namespace {
struct Pattern
{
	VectorOp first, last;
	Op op;
	unsigned first_size;
};
const Pattern patterns[] = {
	{ VectorOp::Punpcklbw, VectorOp::Punpcklqdq, Op::VZip1, 0 },
	{ VectorOp::Punpckhbw, VectorOp::Punpckhqdq, Op::VZip2, 0 },
	{ VectorOp::Unpcklps, VectorOp::Unpcklpd, Op::VZip1, 2 },
	{ VectorOp::Unpckhps, VectorOp::Unpckhpd, Op::VZip2, 2 },
	{ VectorOp::Movlhps, VectorOp::Movlhps, Op::VZip1, 3 },
	{ VectorOp::Addps, VectorOp::Addpd, Op::VFadd, 0 },
	{ VectorOp::Subps, VectorOp::Subpd, Op::VFsub, 0 },
	{ VectorOp::Mulps, VectorOp::Mulpd, Op::VFmul, 0 },
	{ VectorOp::Divps, VectorOp::Divpd, Op::VFdiv, 0 },
	{ VectorOp::Sqrtps, VectorOp::Sqrtpd, Op::VFsqrt, 0 },
	{ VectorOp::Paddb, VectorOp::Paddq, Op::VAdd, 0 },
	{ VectorOp::Psubb, VectorOp::Psubq, Op::VSub, 0 },
	{ VectorOp::Pmullw, VectorOp::Pmulld, Op::VMul, 1 },
	{ VectorOp::Pcmpeqb, VectorOp::Pcmpeqq, Op::VCmeq, 0 },
	{ VectorOp::Pcmpgtb, VectorOp::Pcmpgtq, Op::VCmgt, 0 },
	{ VectorOp::Pmaxsb, VectorOp::Pmaxsd, Op::VSmax, 0 },
	{ VectorOp::Pmaxub, VectorOp::Pmaxud, Op::VUmax, 0 },
	{ VectorOp::Pminsb, VectorOp::Pminsd, Op::VSmin, 0 },
	{ VectorOp::Pminub, VectorOp::Pminud, Op::VUmin, 0 },
	{ VectorOp::Paddsb, VectorOp::Paddsw, Op::VSqadd, 0 },
	{ VectorOp::Paddusb, VectorOp::Paddusw, Op::VUqadd, 0 },
	{ VectorOp::Psubsb, VectorOp::Psubsw, Op::VSqsub, 0 },
	{ VectorOp::Psubusb, VectorOp::Psubusw, Op::VUqsub, 0 },
	{ VectorOp::Pavgb, VectorOp::Pavgw, Op::VUrhadd, 0 },
};
}

void Selector::vector_instruction(const lowir::Instruction& inst)
{
	const auto op = static_cast<VectorOp>(inst.sub);
	const auto shape = shape_of(op);
	const unsigned dest = vectors_[inst.result] == kNoId ? 16 : vectors_[inst.result];
	if (shape == VectorShape::Zero)
		out_.emit(Op::VEor, dest, dest, dest);
	else if (shape == VectorShape::FromScalar || shape == VectorShape::ToScalar)
	{
		const auto type = Type::scalar(vector_scalar_kind(op));
		const bool narrow = storage_bytes(type) == 4;
		if (shape == VectorShape::ToScalar)
		{
			out_.emit(narrow ? Op::FmovWS : Op::FmovXD, 9, vector_value(inst.ops[0], 16));
			save(9, inst.result);
			return;
		}
		value(9, inst.ops[0], type);
		out_.emit(narrow ? Op::FmovSW : Op::FmovDX, dest, 9);
	}
	else
	{
		const unsigned left = vector_value(inst.ops[0], 16);
		if (op >= VectorOp::Psllwi && op <= VectorOp::Psradi)
		{
			vector_shift(op, dest, left, body_.literals[inst.ops[2].index].low);
			save_vector(dest, inst.result);
			return;
		}
		if (op == VectorOp::Pshufd || op == VectorOp::Pshuflw || op == VectorOp::Pshufhw)
		{
			vector_shuffle(inst, left);
			return;
		}
		const unsigned right = shape == VectorShape::Binary ? vector_value(inst.ops[1], 17) : 0;
		if (op >= VectorOp::Packsswb && op <= VectorOp::Packusdw)
		{
			const auto narrow = op < VectorOp::Packuswb ? Op::VSqxtn : Op::VSqxtun;
			const unsigned size = op == VectorOp::Packssdw || op == VectorOp::Packusdw ? 1u << 22 : 0;
			// Keep both inputs live until the upper half has been inserted.
			out_.emit(narrow, 0, left, 0, size);
			out_.emit(narrow, 0, right, 0, size | (1u << 30));
			save_vector(0, inst.result);
			return;
		}
		for (const auto& p : patterns)
			if (op >= p.first && op <= p.last)
			{
				out_.emit(p.op, dest, left, right,
					(p.first_size + static_cast<unsigned>(op) - static_cast<unsigned>(p.first)) << 22);
				save_vector(dest, inst.result);
				return;
			}
		switch (op)
		{
		case VectorOp::Movhlps:
			out_.emit(Op::VZip2, dest, right, left, 3u << 22);
			break;
		case VectorOp::Pand:
		case VectorOp::Andps:
		case VectorOp::Andpd:
			out_.emit(Op::VAnd, dest, left, right);
			break;
		case VectorOp::Pandn:
		case VectorOp::Andnps:
		case VectorOp::Andnpd:
			out_.emit(Op::VBic, dest, right, left);
			break;
		case VectorOp::Por:
		case VectorOp::Orps:
		case VectorOp::Orpd:
			out_.emit(Op::VOrr, dest, left, right);
			break;
		case VectorOp::Pxor:
		case VectorOp::Xorps:
		case VectorOp::Xorpd:
			out_.emit(Op::VEor, dest, left, right);
			break;
		default:
			throw AArch64Error(std::string("unsupported AArch64 vector operation: ") + spelling(op));
		}
	}
	save_vector(dest, inst.result);
}

} // namespace aarch64
