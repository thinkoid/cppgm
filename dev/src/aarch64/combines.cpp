#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

// An A64 W operand observes precisely the low 32 bits of an X register.
// Consume an adjacent, single-use truncation where the instruction supplies
// that width itself, retaining the compare's branch or select consumer.
InstId Selector::truncated_operand(const lowir::Instruction& trunc, BlockId block)
{
	if (trunc.sub != static_cast<unsigned>(ConvertOp::Trunc) || integer_bits(trunc.type.kind()) != 32 ||
		trunc.next == kNoId || uses_[trunc.result] != 1 || !trunc.ops[0].is(ValueKind::Temp))
		return kNoId;
	auto next = body_.instructions[trunc.next];
	const auto result = Value::temp(trunc.result);
	if (next.op == Opcode::Branch && next.ops[0] == result)
	{
		conditional_edges(block, next, Op::CbzW, operand_register(trunc.ops[0], convert_source_type(trunc), 10));
		return trunc.next;
	}
	if (integer_bits(next.type.kind()) != 32 || (next.op != Opcode::Compare && next.op != Opcode::Binary))
		return kNoId;
	if (next.ops[0] == result)
		next.ops[0] = trunc.ops[0];
	else if (next.ops[1] == result)
		next.ops[1] = trunc.ops[0];
	else
		return kNoId;
	if (next.op == Opcode::Compare)
	{
		if (compare_consumer(next, block))
			return next.next;
		compare(next);
	}
	else
		simple_binary(next);
	return trunc.next;
}

// ADD, SUB and the logical instructions have a shifted second operand.
// The producer is adjacent and single-use, so both input locations still
// hold the values the combined instruction needs.
InstId Selector::shifted_operand(const lowir::Instruction& shift)
{
	const auto op = static_cast<BinaryOp>(shift.sub);
	const unsigned bits = integer_bits(shift.type.kind());
	if ((bits != 32 && bits != 64) || shift.next == kNoId || uses_[shift.result] != 1 ||
		(op != BinaryOp::Shl && op != BinaryOp::Shr && op != BinaryOp::UShr) || !shift.ops[1].is(ValueKind::Integer))
		return kNoId;
	const auto& next = body_.instructions[shift.next];
	if (next.op != Opcode::Binary || next.type != shift.type)
		return kNoId;
	const auto combine = static_cast<BinaryOp>(next.sub);
	const bool w = bits == 32;
	Op selected;
	switch (combine)
	{
	case BinaryOp::Add:
		selected = w ? Op::AddW : Op::Add;
		break;
	case BinaryOp::Sub:
		selected = w ? Op::SubW : Op::Sub;
		break;
	case BinaryOp::And:
		selected = w ? Op::AndW : Op::And;
		break;
	case BinaryOp::Or:
		selected = w ? Op::OrrW : Op::Orr;
		break;
	case BinaryOp::Xor:
		selected = w ? Op::EorW : Op::Eor;
		break;
	default:
		return kNoId;
	}
	const auto result = Value::temp(shift.result);
	const auto other = next.ops[1] == result ? next.ops[0] : next.ops[1];
	if (!(next.ops[1] == result) && (!(next.ops[0] == result) || combine == BinaryOp::Sub))
		return kNoId;
	const unsigned count = body_.literals[shift.ops[1].index].low & (bits - 1);
	const unsigned kind = op == BinaryOp::Shl ? 0 : op == BinaryOp::UShr ? 1 : 2;
	const unsigned a = operand_register(other, shift.type, 10), b = operand_register(shift.ops[0], shift.type, 11);
	const unsigned dest = registers_[next.result] == kNoId ? 9 : registers_[next.result];
	out_.emit(selected, dest, a, b, (kind << 22) | (count << 10));
	save(dest, next.result, true);
	return shift.next;
}
} // namespace aarch64
