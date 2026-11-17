#include "aarch64/selector.h"

#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;

bool Selector::floating(const lowir::Instruction& inst) const
{
	if (inst.op == Opcode::Convert)
		return inst.type.is_float() || convert_source_type(inst).is_float();
	return inst.type.is_float() &&
		(inst.op == Opcode::Compare || inst.op == Opcode::Binary || inst.op == Opcode::Unary);
}

void Selector::float_instruction(const lowir::Instruction& inst)
{
	const Type from = inst.op == Opcode::Convert ? convert_source_type(inst) : inst.type;
	const Type to = inst.type;
	const unsigned precision = from.kind() == TypeKind::F64 ? 1u << 22 : 0;
	value(9, inst.ops[0], from);
	if (from.is_float())
		fp_move(true, 16, 9, from);
	if (inst.op == Opcode::Binary || inst.op == Opcode::Compare)
	{
		value(10, inst.ops[1], from);
		fp_move(true, 17, 10, from);
	}
	if (inst.op == Opcode::Compare)
	{
		// FCMP sets NZCV=0011 for an unordered pair. Both spellings of
		// an ordered relation exclude it.
		static const unsigned cond[] = { 0, 1, 4, 9, 12, 10, 4, 9, 12, 10 };
		out_.emit(Op::Fcmp, 0, 16, 17, precision);
		out_.emit(Op::Csinc, 9, 31, 31, (cond[inst.sub] ^ 1) << 12);
	}
	else if (inst.op == Opcode::Binary)
	{
		static const Op ops[] = { Op::Fadd, Op::Fsub, Op::Fmul, Op::Fdiv };
		if (inst.sub >= 4)
			throw AArch64Error("unsupported floating binary operation");
		out_.emit(ops[inst.sub], 16, 16, 17, precision);
		fp_move(false, 16, 9, to);
	}
	else if (inst.op == Opcode::Unary)
	{
		const auto op = static_cast<UnaryOp>(inst.sub);
		if (op != UnaryOp::Neg && op != UnaryOp::Sqrt)
			throw AArch64Error("unsupported floating unary operation");
		out_.emit(op == UnaryOp::Neg ? Op::Fneg : Op::Fsqrt, 16, 16, 0, precision);
		fp_move(false, 16, 9, to);
	}
	else
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		switch (op)
		{
		case ConvertOp::FPExt:
		case ConvertOp::FPTrunc:
			out_.emit(op == ConvertOp::FPExt ? Op::FcvtDS : Op::FcvtSD, 16, 16);
			break;
		case ConvertOp::SIToFP:
		case ConvertOp::UIToFP:
			extend(9, integer_bits(from.kind()), op == ConvertOp::SIToFP);
			out_.emit(
				op == ConvertOp::SIToFP ? Op::Scvtf : Op::Ucvtf, 16, 9, 0, to.kind() == TypeKind::F64 ? 1u << 22 : 0);
			break;
		case ConvertOp::FPToSI:
		case ConvertOp::FPToUI:
			out_.emit(op == ConvertOp::FPToSI ? Op::Fcvtzs : Op::Fcvtzu, 9, 16, 0, precision);
			break;
		default:
			throw AArch64Error("unsupported AArch64 floating conversion");
		}
		if (to.is_float())
			fp_move(false, 16, 9, to);
	}
	save(9, inst.result);
}

} // namespace aarch64
