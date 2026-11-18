#include "aarch64/selector.h"
#include "aarch64/logical_immediate.h"

#include "machine/switch_plan.h"
#include <algorithm>

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
	const bool logical = op == BinaryOp::And || op == BinaryOp::Or || op == BinaryOp::Xor;
	const bool small = bits == 1 || bits == 8 || bits == 16;
	if (bits != 32 && bits != 64 && !(small && (logical || op == BinaryOp::Add || op == BinaryOp::Sub)))
		return false;
	Value lhs = inst.ops[0], rhs = inst.ops[1];
	if ((op == BinaryOp::Add || op == BinaryOp::Mul || op == BinaryOp::And || op == BinaryOp::Or ||
			op == BinaryOp::Xor) &&
		lhs.is(ValueKind::Integer))
		std::swap(lhs, rhs);
	const unsigned left = operand_register(lhs, inst.type, 10);
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	const bool w = bits <= 32;
	// For AND, OR and XOR, canonical inputs guarantee canonical high bits.
	const auto canonical = [&](Value v) {
		return v.is(ValueKind::Integer) || (v.is(ValueKind::Temp) && body_.temps[v.index].type == inst.type);
	};
	const bool normalized = bits >= 32 || (logical && canonical(lhs) && canonical(rhs));
	if ((op == BinaryOp::Add || op == BinaryOp::Sub) && rhs.is(ValueKind::Integer))
	{
		const uint64_t raw = body_.literals[rhs.index].low;
		const uint64_t sign = uint64_t(1) << (bits - 1);
		const uint64_t value = small ? ((raw & (2 * sign - 1)) ^ sign) - sign : raw;
		const int64_t signed_value = w ? static_cast<int32_t>(value) : static_cast<int64_t>(value);
		const uint64_t magnitude = signed_value < 0 ? 0 - uint64_t(signed_value) : uint64_t(signed_value);
		const unsigned shift = (magnitude & 4095) == 0 ? 12 : 0;
		if ((magnitude >> shift) <= 4095)
		{
			const bool sub = (op == BinaryOp::Sub) != (signed_value < 0);
			out_.emit(sub ? (w ? Op::SubIW : Op::SubI) : (w ? Op::AddIW : Op::AddI), dest, left, 0,
				(shift ? 1u << 22 : 0) | uint32_t(magnitude >> shift) << 10);
			save(dest, inst.result, normalized);
			return true;
		}
	}
	if (rhs.is(ValueKind::Integer))
	{
		const uint64_t raw = body_.literals[rhs.index].low;
		// A coefficient of 1 + 2^k needs just ADD with a shifted register.
		const uint64_t factor = w ? static_cast<uint32_t>(raw) : raw;
		if (op == BinaryOp::Mul && factor > 2 && ((factor - 1) & (factor - 2)) == 0)
		{
			out_.emit(w ? Op::AddW : Op::Add, dest, left, left, __builtin_ctzll(factor - 1) << 10);
			save(dest, inst.result, true);
			return true;
		}
		const bool scale = op == BinaryOp::Mul && raw && !(raw & (raw - 1)) && (!w || raw <= UINT32_MAX);
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
		const uint64_t mask = bits < 32 ? raw & ((1u << bits) - 1) : raw;
		if (logical && logical_immediate(mask, w ? 32 : 64, field))
		{
			const Op selected = op == BinaryOp::And ? (w ? Op::AndImmW : Op::AndImm)
				: op == BinaryOp::Or                ? (w ? Op::OrrImmW : Op::OrrImm)
													: (w ? Op::EorImmW : Op::EorImm);
			out_.emit(selected, dest, left, 0, field);
			save(dest, inst.result, normalized);
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
	save(dest, inst.result, normalized);
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

void Selector::compare(const lowir::Instruction& inst, bool flags_ready)
{
	if (!flags_ready)
		compare_flags(inst);
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	out_.emit(Op::Csinc, dest, 31, 31, (conditions[inst.sub] ^ 1) << 12);
	save(dest, inst.result, true);
}

void Selector::choose(const lowir::Instruction& inst, unsigned condition)
{
	Value yes = inst.ops[1], no = inst.ops[2];
	const unsigned dest = registers_[inst.result] == kNoId ? 9 : registers_[inst.result];
	const unsigned bits = integer_bits(inst.type.kind());
	auto one = [&](Value v) { return bits && v.is(ValueKind::Integer) && body_.literals[v.index].low == 1; };
	if (one(yes))
	{
		std::swap(yes, no);
		condition ^= 1;
	}
	// Both CSEL and CSINC read register 31 as zero. For a one-valued
	// alternative, CSINC constructs the one only on the selected arm.
	const unsigned a = zero_or_register(yes, inst.type, 10);
	if (one(no))
		out_.emit(bits <= 32 ? Op::CsincW : Op::Csinc, dest, a, 31, condition << 12);
	else
		out_.emit(bits == 32 ? Op::CselW : Op::Csel, dest, a, zero_or_register(no, inst.type, 11), condition << 12);
	auto normalized = [&](Value v) {
		return v.is(ValueKind::Integer) || (v.is(ValueKind::Temp) && body_.temps[v.index].type == inst.type);
	};
	save(dest, inst.result, !bits || bits >= 32 || (normalized(yes) && normalized(no)));
}

// Record the two-instruction form. Exact instruction placement determines
// whether the bit-test branch can reach its destination.
InstId Selector::bit_branch(const lowir::Instruction& inst, BlockId block)
{
	if (out_.exceptions || inst.next == kNoId || uses_[inst.result] != 1)
		return kNoId;
	const auto& next = body_.instructions[inst.next];
	if (next.op != Opcode::Branch || !(next.ops[0] == Value::temp(inst.result)))
		return kNoId;
	Value operand = inst.ops[0], literal = inst.ops[1];
	if (operand.is(ValueKind::Integer))
		std::swap(operand, literal);
	const unsigned width = integer_bits(inst.type.kind());
	if (!literal.is(ValueKind::Integer) || !width || width > 64)
		return kNoId;
	const uint64_t mask = body_.literals[literal.index].low & (~uint64_t(0) >> (64 - width));
	if (!mask || (mask & (mask - 1)))
		return kNoId;
	const unsigned bit = __builtin_ctzll(mask);
	uint32_t field = 0;
	logical_immediate(mask, width <= 32 ? 32 : 64, field);
	const unsigned src = operand_register(operand, inst.type, 10);
	const uint32_t pc = out_.code.size();
	out_.emit(width <= 32 ? Op::AndImmW : Op::AndImm, 9, src, 0, field);
	conditional_edges(block, next, width <= 32 ? Op::CbzW : Op::Cbz, 9);
	bit_tests_.push_back({ pc, bit });
	return inst.next;
}

// Test a narrow modular interval using one W subtraction and a compare.
// Underflow produces a large unsigned value in either width when the
// comparison threshold is strictly below the smallest wrapped result.
InstId Selector::narrow_range_branch(const lowir::Instruction& sub, BlockId block)
{
	const unsigned width = integer_bits(sub.type.kind());
	if ((width != 8 && width != 16) || sub.sub != static_cast<unsigned>(BinaryOp::Sub) || sub.next == kNoId ||
		uses_[sub.result] != 1 || !sub.ops[0].is(ValueKind::Temp) || body_.temps[sub.ops[0].index].type != sub.type ||
		!sub.ops[1].is(ValueKind::Integer))
		return kNoId;
	const auto& cmp = body_.instructions[sub.next];
	if (cmp.op != Opcode::Compare || cmp.next == kNoId || cmp.type != sub.type || uses_[cmp.result] != 1 ||
		!(cmp.ops[0] == Value::temp(sub.result)) || !cmp.ops[1].is(ValueKind::Integer))
		return kNoId;
	const auto pred = static_cast<ComparePredicate>(cmp.sub);
	const auto& branch = body_.instructions[cmp.next];
	if ((pred >= ComparePredicate::Lt && pred <= ComparePredicate::Ge) || branch.op != Opcode::Branch ||
		!(branch.ops[0] == Value::temp(cmp.result)))
		return kNoId;
	const unsigned limit = 1u << width;
	const uint32_t base = body_.literals[sub.ops[1].index].low & (limit - 1);
	const uint32_t threshold = body_.literals[cmp.ops[1].index].low & (limit - 1);
	if (threshold >= limit - base || base > 4095 || threshold > 4095)
		return kNoId;
	const auto src = operand_register(sub.ops[0], sub.type, 10);
	out_.emit(Op::SubIW, 9, src, 0, base << 10);
	out_.emit(Op::SubsIW, 31, 9, 0, threshold << 10);
	conditional_edges(block, branch, Op::BCond, conditions[cmp.sub] ^ 1);
	return cmp.next;
}

bool Selector::compare_consumer(const lowir::Instruction& inst, BlockId block, bool flags_ready)
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
		if (!flags_ready)
			compare_flags(inst);
		choose(next, conditions[inst.sub]);
		return true;
	}
	if (next.op != Opcode::Branch)
		return false;
	const bool eq = inst.sub == static_cast<unsigned>(ComparePredicate::Eq);
	if (!flags_ready && (eq || inst.sub == static_cast<unsigned>(ComparePredicate::Ne)))
	{
		Value a = inst.ops[0], b = inst.ops[1];
		if (a.is(ValueKind::Integer))
			std::swap(a, b);
		const unsigned bits = integer_bits(inst.type.kind());
		const bool canonical = bits >= 32 || inst.type.is_pointer() ||
			(a.is(ValueKind::Temp) && body_.temps[a.index].type == inst.type);
		if (canonical && b.is(ValueKind::Integer) && body_.literals[b.index].low == 0)
		{
			const bool w = bits && bits <= 32;
			conditional_edges(block, next, eq ? (w ? Op::CbnzW : Op::Cbnz) : (w ? Op::CbzW : Op::Cbz),
				operand_register(a, inst.type, 10));
			return true;
		}
	}
	if (!flags_ready)
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
		const uint64_t raw = body_.literals[operand.index].low & mask;
		// A W subtraction wraps at 32 bits. Keeping signed cases in source
		// order lets one bounds check cover a table that crosses zero.
		const int64_t key = type.kind() == TypeKind::I32 ? static_cast<int32_t>(raw) : static_cast<int64_t>(raw);
		cases.push_back({ key, body_.operands[inst.extra_first + i + 1].index });
	}
	std::vector<machine::CaseCluster> clusters;
	std::vector<uint32_t> targets;
	machine::cluster_switch_cases(cases, clusters, targets, machine::kNativeSwitchTargets);
	const unsigned source = operand_register(inst.ops[0], type, 15);
	const bool narrow = bits <= 32;
	auto subtract = [&](unsigned dest, unsigned input, uint64_t amount) {
		const bool negative = static_cast<int64_t>(amount) < 0;
		const uint64_t magnitude = negative ? 0 - amount : amount;
		const unsigned shift = (magnitude & 4095) == 0 ? 12 : 0;
		if ((magnitude >> shift) <= 4095)
			out_.emit(negative ? (narrow ? Op::AddsIW : Op::AddsIX) : (narrow ? Op::SubsIW : Op::SubsIX), dest, input,
				0, (shift ? 1u << 22 : 0) | (uint32_t(magnitude >> shift) << 10));
		else
		{
			constant(10, amount);
			out_.emit(narrow ? Op::SubsW : Op::Subs, dest, input, 10);
		}
	};
	const BlockId fallback = inst.ops[1].index;
	if (level_ && machine::native_table(cases, clusters.size(), targets.size()) && empty_edge(from, fallback) &&
		std::all_of(clusters.begin(), clusters.end(),
			[&](const machine::CaseCluster& c) { return empty_edge(from, c.target); }))
	{
		const auto first = static_cast<uint64_t>(cases.front().first);
		const auto span = static_cast<uint64_t>(cases.back().first) - first;
		const unsigned index = first ? 9 : source;
		if (first)
			subtract(index, source, first);
		subtract(31, index, span);
		out_.reference(Op::BCond, Fixup::Block, fallback, 8);
		// Each table entry is one branch instruction. ADR reaches the table
		// on both object formats without an absolute pointer or a data relocation.
		const auto table = static_cast<uint32_t>(out_.labels.size());
		out_.labels.push_back(kNoId);
		out_.reference(Op::Adr, Fixup::Block, table, 16);
		out_.emit(Op::Add, 16, 16, index, (2u << 10) | (narrow ? (1u << 21) | (2u << 13) : 0u));
		out_.emit(Op::Br, 0, 16);
		out_.bind(table);
		size_t cluster = 0;
		for (uint64_t i = 0; i <= span; ++i)
		{
			while (uint64_t(clusters[cluster].hi) - first < i)
				++cluster;
			const auto target = i < uint64_t(clusters[cluster].lo) - first ? fallback : clusters[cluster].target;
			out_.reference(Op::B, Fixup::Block, target);
		}
		return;
	}
	for (const auto& c : clusters)
	{
		const bool single = c.lo == c.hi;
		const bool zero = single && !c.lo;
		if (!zero)
		{
			if (single)
				subtract(31, source, c.lo);
			else
			{
				if (c.lo)
					subtract(9, source, c.lo);
				subtract(31, c.lo ? 9 : source, uint64_t(c.hi) - uint64_t(c.lo));
			}
		}
		// The last successful case can fall into its own block. Branch on a
		// miss directly to the default when that edge needs no phi copies.
		const bool last_falls = &c == &clusters.back() && c.target == fallthrough_ && empty_edge(from, fallback);
		const bool direct = last_falls || empty_edge(from, c.target);
		const uint32_t label = last_falls ? fallback : direct ? c.target : static_cast<uint32_t>(out_.labels.size());
		const bool on_match = direct && !last_falls;
		if (!direct)
			out_.labels.push_back(kNoId);
		if (zero)
			out_.reference(on_match ? (narrow ? Op::CbzW : Op::Cbz) : (narrow ? Op::CbnzW : Op::Cbnz), Fixup::Block,
				label, source);
		else
			out_.reference(Op::BCond, Fixup::Block, label, (single ? 0u : 9u) ^ (on_match ? 0u : 1u));
		if (last_falls)
		{
			edge(from, c.target, true);
			return;
		}
		if (!direct)
		{
			edge(from, c.target);
			out_.bind(label);
		}
	}
	edge(from, inst.ops[1].index, true);
}

} // namespace aarch64
