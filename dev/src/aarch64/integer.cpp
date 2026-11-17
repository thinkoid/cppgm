#include "aarch64/selector.h"

#include "machine/switch_plan.h"

namespace aarch64 {

using namespace lowir;

unsigned Selector::operand_register(Value operand, Type type, unsigned scratch)
{
	if (operand.is(ValueKind::Temp) && registers_[operand.index] != kNoId)
		return registers_[operand.index];
	value(scratch, operand, type);
	return scratch;
}

bool Selector::simple_binary(const lowir::Instruction& inst)
{
	const auto op = static_cast<BinaryOp>(inst.sub);
	const unsigned bits = integer_bits(inst.type.kind());
	if ((bits != 32 && bits != 64) ||
		(op != BinaryOp::Add && op != BinaryOp::Sub && op != BinaryOp::Mul && op != BinaryOp::And &&
			op != BinaryOp::Or && op != BinaryOp::Xor))
		return false;
	Value lhs = inst.ops[0], rhs = inst.ops[1];
	if (op != BinaryOp::Sub && lhs.is(ValueKind::Integer))
		std::swap(lhs, rhs);
	const unsigned left = operand_register(lhs, inst.type, 10);
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	const bool w = bits == 32;
	if ((op == BinaryOp::Add || op == BinaryOp::Sub) && rhs.is(ValueKind::Integer))
	{
		const uint64_t raw = body_.literals[rhs.index].low;
		const int64_t signed_value = w ? static_cast<int32_t>(raw) : static_cast<int64_t>(raw);
		const uint64_t magnitude = signed_value < 0 ? 0 - uint64_t(signed_value) : uint64_t(signed_value);
		const unsigned shift = (magnitude & 4095) == 0 ? 12 : 0;
		if ((magnitude >> shift) <= 4095)
		{
			const bool sub = (op == BinaryOp::Sub) != (signed_value < 0);
			out_.emit(sub ? (w ? Op::SubIW : Op::SubI) : (w ? Op::AddIW : Op::AddI), dest, left, 0,
				(shift ? 1u << 22 : 0) | uint32_t(magnitude >> shift) << 10);
			save(dest, inst.result, true);
			return true;
		}
	}
	const unsigned right = operand_register(rhs, inst.type, 11);
	const Op selected = op == BinaryOp::Add ? (w ? Op::AddW : Op::Add)
		: op == BinaryOp::Sub               ? (w ? Op::SubW : Op::Sub)
		: op == BinaryOp::Mul               ? (w ? Op::MulW : Op::Mul)
		: op == BinaryOp::And               ? (w ? Op::AndW : Op::And)
		: op == BinaryOp::Or                ? (w ? Op::OrrW : Op::Orr)
											: (w ? Op::EorW : Op::Eor);
	out_.emit(selected, dest, left, right);
	save(dest, inst.result, true);
	return true;
}

void Selector::integer_unary(const lowir::Instruction& inst)
{
	const unsigned bits = integer_bits(inst.type.kind());
	const auto op = static_cast<UnaryOp>(inst.sub);
	value(10, inst.ops[0], inst.type);
	switch (op)
	{
	case UnaryOp::Neg:
		out_.emit(Op::Sub, 9, 31, 10);
		break;
	case UnaryOp::BitNot:
		out_.emit(Op::Orn, 9, 31, 10);
		break;
	case UnaryOp::Not:
		out_.emit(Op::Subs, 31, 10, 31);
		out_.emit(Op::Csinc, 9, 31, 31, 1u << 12);
		break;
	case UnaryOp::ByteSwap:
		out_.emit(bits == 64 ? Op::Rev64 : bits == 32 ? Op::Rev32 : Op::Rev16, 9, 10);
		break;
	case UnaryOp::CountTrailingZeros:
	case UnaryOp::CountLeadingZeros:
		if (op == UnaryOp::CountTrailingZeros)
			out_.emit(Op::Rbit, 10, 10, 0, bits == 64 ? 1u << 31 : 0);
		out_.emit(Op::Clz, 9, 10, 0, bits == 64 ? 1u << 31 : 0);
		break;
	case UnaryOp::CountOnes:
		extend(10, bits, false);
		out_.emit(Op::FmovDX, 16, 10);
		out_.emit(Op::Cnt8B, 16, 16);
		out_.emit(Op::Addv8B, 16, 16);
		out_.emit(Op::UmovB, 9, 16);
		break;
	case UnaryOp::Sqrt:
		break; // Handled by float_instruction.
	}
}

void Selector::switch_edges(const lowir::Instruction& inst, BlockId from)
{
	const Type type = type_of(inst.ops[0], Type::scalar(TypeKind::I64));
	const unsigned bits = integer_bits(type.kind());
	const uint64_t mask = bits < 64 ? (uint64_t(1) << bits) - 1 : ~uint64_t(0);
	std::vector<std::pair<int64_t, uint32_t>> cases;
	for (unsigned i = 0; i < inst.extra_count; i += 2)
	{
		const Value operand = body_.operands[inst.extra_first + i];
		cases.push_back({ static_cast<int64_t>(body_.literals[operand.index].low & mask),
			body_.operands[inst.extra_first + i + 1].index });
	}
	std::vector<machine::CaseCluster> clusters;
	std::vector<uint32_t> targets;
	machine::cluster_switch_cases(cases, clusters, targets, 0);
	value(15, inst.ops[0], type);
	extend(15, bits, false);
	for (const auto& c : clusters)
	{
		const uint32_t next = out_.labels.size();
		out_.labels.push_back(kNoId);
		constant(10, c.lo);
		out_.emit(Op::Subs, 9, 15, 10);
		if (c.lo != c.hi)
		{
			constant(10, uint64_t(c.hi) - uint64_t(c.lo));
			out_.emit(Op::Subs, 31, 9, 10);
		}
		out_.reference(Op::BCond, Fixup::Block, next, c.lo == c.hi ? 1 : 8);
		edge(from, c.target);
		out_.bind(next);
	}
	edge(from, inst.ops[1].index);
}

} // namespace aarch64
