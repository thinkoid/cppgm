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

unsigned Selector::condition_register(Value operand, unsigned scratch)
{
	const Type type = type_of(operand, Type::scalar(TypeKind::I64));
	if (type.kind() != TypeKind::I128)
		return operand_register(operand, type, scratch);
	pair(operand, scratch, 15);
	out_.emit(Op::Orr, scratch, scratch, 15);
	return scratch;
}

bool Selector::simple_binary(const lowir::Instruction& inst)
{
	const auto op = static_cast<BinaryOp>(inst.sub);
	const unsigned bits = inst.type.is_pointer() ? 64 : integer_bits(inst.type.kind());
	if (bits != 32 && bits != 64)
		return false;
	Value lhs = inst.ops[0], rhs = inst.ops[1];
	if ((op == BinaryOp::Add || op == BinaryOp::Mul || op == BinaryOp::And || op == BinaryOp::Or ||
			op == BinaryOp::Xor) &&
		lhs.is(ValueKind::Integer))
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
	if (rhs.is(ValueKind::Integer))
	{
		const uint64_t raw = body_.literals[rhs.index].low;
		const bool scale = op == BinaryOp::Mul && raw && !(raw & (raw - 1));
		if (scale || op == BinaryOp::Shl || op == BinaryOp::Shr || op == BinaryOp::UShr)
		{
			const unsigned shift = scale ? __builtin_ctzll(raw) : raw & (bits - 1);
			const unsigned r = (scale || op == BinaryOp::Shl) ? (-shift & (bits - 1)) : shift;
			const unsigned end = (scale || op == BinaryOp::Shl) ? bits - 1 - shift : bits - 1;
			out_.emit(op == BinaryOp::Shr ? (w ? Op::SbfmW : Op::Sbfm) : (w ? Op::UbfmW : Op::Ubfm), dest, left, 0,
				(r << 16) | (end << 10));
			save(dest, inst.result, true);
			return true;
		}
		uint32_t field = 0;
		if ((op == BinaryOp::And || op == BinaryOp::Or || op == BinaryOp::Xor) && logical_immediate(raw, bits, field))
		{
			const Op selected = op == BinaryOp::And ? (w ? Op::AndImmW : Op::AndImm)
				: op == BinaryOp::Or                ? (w ? Op::OrrImmW : Op::OrrImm)
													: (w ? Op::EorImmW : Op::EorImm);
			out_.emit(selected, dest, left, 0, field);
			save(dest, inst.result, true);
			return true;
		}
	}
	const unsigned right = operand_register(rhs, inst.type, 11);
	static const Op narrow[] = { Op::AddW, Op::SubW, Op::MulW, Op::SDivW, Op::SDivW, Op::UDivW, Op::UDivW, Op::AndW,
		Op::OrrW, Op::EorW, Op::LslW, Op::AsrW, Op::LsrW };
	static const Op wide[] = { Op::Add, Op::Sub, Op::Mul, Op::SDiv, Op::SDiv, Op::UDiv, Op::UDiv, Op::And, Op::Orr,
		Op::Eor, Op::Lsl, Op::Asr, Op::Lsr };
	const bool remainder = op == BinaryOp::Mod || op == BinaryOp::UMod;
	out_.emit(w ? narrow[inst.sub] : wide[inst.sub], remainder ? 9 : dest, left, right);
	if (remainder)
		out_.emit(w ? Op::MsubW : Op::Msub, dest, 9, right, left << 10);
	save(dest, inst.result, true);
	return true;
}

namespace {
const unsigned conditions[] = { 0, 1, 11, 13, 12, 10, 3, 9, 8, 2 };
}

void Selector::compare_flags(const lowir::Instruction& inst)
{
	const unsigned bits = integer_bits(inst.type.kind());
	if (level_ && (bits == 8 || bits == 16 || bits == 32 || bits == 64 || inst.type.is_pointer()))
	{
		const bool w = bits && bits <= 32;
		const auto pred = static_cast<ComparePredicate>(inst.sub);
		const bool sign = w && bits > 1 && bits < 32 && pred >= ComparePredicate::Lt && pred <= ComparePredicate::Ge;
		unsigned lhs = operand_register(inst.ops[0], inst.type, 10);
		if (sign)
		{
			out_.emit(Op::SbfmW, 10, lhs, 0, (bits - 1) << 10);
			lhs = 10;
		}
		if (inst.ops[1].is(ValueKind::Integer))
		{
			uint64_t raw = body_.literals[inst.ops[1].index].low;
			if (w && bits < 32)
			{
				const uint64_t top = uint64_t(1) << (bits - 1);
				raw &= 2 * top - 1;
				if (sign)
					raw = (raw ^ top) - top;
			}
			const int64_t value = w ? static_cast<int32_t>(raw) : static_cast<int64_t>(raw);
			const uint64_t magnitude = value < 0 ? 0 - uint64_t(value) : uint64_t(value);
			const unsigned shift = (magnitude & 4095) == 0 ? 12 : 0;
			if ((magnitude >> shift) <= 4095)
			{
				out_.emit(value < 0 ? (w ? Op::AddsIW : Op::AddsIX) : (w ? Op::SubsIW : Op::SubsIX), 31, lhs, 0,
					(shift ? 1u << 22 : 0) | uint32_t(magnitude >> shift) << 10);
				return;
			}
		}
		const unsigned rhs = operand_register(inst.ops[1], inst.type, 11);
		if (sign)
			out_.emit(Op::SubsW, 31, lhs, rhs, (1u << 21) | ((bits == 16 ? 5u : 4u) << 13));
		else
			out_.emit(w ? Op::SubsW : Op::Subs, 31, lhs, rhs);
		return;
	}
	const auto pred = static_cast<ComparePredicate>(inst.sub);
	const bool sign = pred >= ComparePredicate::Lt && pred <= ComparePredicate::Ge;
	value(10, inst.ops[0], inst.type);
	value(11, inst.ops[1], inst.type);
	extend(10, bits, sign);
	extend(11, bits, sign);
	out_.emit(Op::Subs, 31, 10, 11);
}

void Selector::compare(const lowir::Instruction& inst)
{
	compare_flags(inst);
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	out_.emit(Op::Csinc, dest, 31, 31, (conditions[inst.sub] ^ 1) << 12);
	save(dest, inst.result, true);
}

void Selector::choose(const lowir::Instruction& inst, unsigned condition)
{
	const unsigned a = operand_register(inst.ops[1], inst.type, 10);
	const unsigned b = operand_register(inst.ops[2], inst.type, 11);
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	const unsigned bits = integer_bits(inst.type.kind());
	out_.emit(bits == 32 ? Op::CselW : Op::Csel, dest, a, b, condition << 12);
	save(dest, inst.result, !bits || bits >= 32);
}

bool Selector::compare_consumer(const lowir::Instruction& inst, BlockId block)
{
	if (inst.next == kNoId || uses_[inst.result] != 1 ||
		!(inst.type.is_pointer() || (inst.type.is_integer() && integer_bits(inst.type.kind()) <= 64)))
		return false;
	const auto& next = body_.instructions[inst.next];
	if (!(next.ops[0] == Value::temp(inst.result)))
		return false;
	if (next.op == Opcode::Select && !memory_value(next.type) && !next.ops[1].is(ValueKind::Symbol) &&
		!next.ops[2].is(ValueKind::Symbol))
	{
		compare_flags(inst);
		choose(next, conditions[inst.sub]);
		return true;
	}
	if (next.op != Opcode::Branch)
		return false;
	const bool eq = inst.sub == static_cast<unsigned>(ComparePredicate::Eq);
	if ((eq || inst.sub == static_cast<unsigned>(ComparePredicate::Ne)) &&
		(integer_bits(inst.type.kind()) == 32 || storage_bytes(inst.type) == 8))
	{
		Value a = inst.ops[0], b = inst.ops[1];
		if (a.is(ValueKind::Integer))
			std::swap(a, b);
		if (b.is(ValueKind::Integer) && body_.literals[b.index].low == 0)
		{
			const bool w = integer_bits(inst.type.kind()) == 32;
			conditional_edges(block, next, eq ? (w ? Op::CbnzW : Op::Cbnz) : (w ? Op::CbzW : Op::Cbz),
				operand_register(a, inst.type, 10));
			return true;
		}
	}
	compare_flags(inst);
	conditional_edges(block, next, Op::BCond, conditions[inst.sub] ^ 1);
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
	edge(from, inst.ops[1].index, true);
}

} // namespace aarch64
