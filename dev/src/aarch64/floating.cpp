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

unsigned Selector::fp_operand(Value operand, Type type, unsigned scratch)
{
	if (operand.is(ValueKind::Temp) && vectors_[operand.index] != kNoId)
		return vectors_[operand.index];
	fp_move(true, scratch, operand_register(operand, type, 9), type);
	return scratch;
}

void Selector::save_fp(unsigned reg, TempId temp)
{
	if (vectors_[temp] != kNoId)
		vector_move(vectors_[temp], reg);
	else
	{
		const unsigned dest = registers_[temp] == kNoId ? 9 : registers_[temp];
		fp_move(false, reg, dest, body_.temps[temp].type);
		save(dest, temp, true);
	}
}

void Selector::float_instruction(const lowir::Instruction& inst)
{
	const Type from = inst.op == Opcode::Convert ? convert_source_type(inst) : inst.type;
	const Type to = inst.type;
	const unsigned precision = from.kind() == TypeKind::F64 ? 1u << 22 : 0;
	const unsigned dest = vectors_[inst.result] == kNoId ? 16 : vectors_[inst.result];
	const unsigned a = from.is_float() ? fp_operand(inst.ops[0], from, 16) : 0;
	const unsigned b = inst.op == Opcode::Binary || inst.op == Opcode::Compare ? fp_operand(inst.ops[1], from, 17) : 0;
	if (inst.op == Opcode::Compare)
	{
		// FCMP sets NZCV=0011 for an unordered pair. Both spellings of
		// an ordered relation exclude it.
		static const unsigned cond[] = { 0, 1, 4, 9, 12, 10, 4, 9, 12, 10 };
		out_.emit(Op::Fcmp, 0, a, b, precision);
		out_.emit(Op::Csinc, 9, 31, 31, (cond[inst.sub] ^ 1) << 12);
	}
	else if (inst.op == Opcode::Binary)
	{
		static const Op ops[] = { Op::Fadd, Op::Fsub, Op::Fmul, Op::Fdiv };
		if (inst.sub >= 4)
			throw AArch64Error("unsupported floating binary operation");
		out_.emit(ops[inst.sub], dest, a, b, precision);
		save_fp(dest, inst.result);
		return;
	}
	else if (inst.op == Opcode::Unary)
	{
		const auto op = static_cast<UnaryOp>(inst.sub);
		if (op != UnaryOp::Neg && op != UnaryOp::Sqrt)
			throw AArch64Error("unsupported floating unary operation");
		out_.emit(op == UnaryOp::Neg ? Op::Fneg : Op::Fsqrt, dest, a, 0, precision);
		save_fp(dest, inst.result);
		return;
	}
	else
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		switch (op)
		{
		case ConvertOp::FPExt:
		case ConvertOp::FPTrunc:
			out_.emit(op == ConvertOp::FPExt ? Op::FcvtDS : Op::FcvtSD, dest, a);
			break;
		case ConvertOp::SIToFP:
		case ConvertOp::UIToFP:
			value(9, inst.ops[0], from);
			extend(9, integer_bits(from.kind()), op == ConvertOp::SIToFP);
			out_.emit(
				op == ConvertOp::SIToFP ? Op::Scvtf : Op::Ucvtf, dest, 9, 0, to.kind() == TypeKind::F64 ? 1u << 22 : 0);
			break;
		case ConvertOp::FPToSI:
		case ConvertOp::FPToUI:
			out_.emit(op == ConvertOp::FPToSI ? Op::Fcvtzs : Op::Fcvtzu, 9, a, 0, precision);
			break;
		default:
			throw AArch64Error("unsupported AArch64 floating conversion");
		}
		if (to.is_float())
		{
			save_fp(dest, inst.result);
			return;
		}
	}
	save(9, inst.result);
}

} // namespace aarch64
