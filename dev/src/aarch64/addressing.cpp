#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

namespace {
bool power_of_two(uint64_t n)
{
	return n && !(n & (n - 1));
}

Op indexed_access(bool store, unsigned bytes)
{
	switch (bytes)
	{
	case 1:
		return store ? Op::StrBReg : Op::LdrBReg;
	case 2:
		return store ? Op::StrHReg : Op::LdrHReg;
	case 4:
		return store ? Op::StrWReg : Op::LdrWReg;
	default:
		return store ? Op::StrXReg : Op::LdrXReg;
	}
}
}

// STR reads register 31 as zero even when the base is SP. Other operand
// positions have different interpretations for register 31.
unsigned Selector::store_register(Value source, Type type, unsigned scratch)
{
	if (source.is(ValueKind::Integer) && (type.is_integer() || type.is_pointer()) &&
		body_.literals[source.index].low == 0)
		return 31;
	return operand_register(source, type, scratch);
}

void Selector::scalar_access(const lowir::Instruction& inst)
{
	const bool store = inst.op == Opcode::Store;
	const auto pointer = inst.ops[store ? 1 : 0];
	const auto value = inst.ops[0];
	const unsigned bytes = storage_bytes(inst.type);
	uint32_t offset = 0;
	unsigned base;
	if (pointer.is(ValueKind::Slot) && data_alignment(body_.slots[pointer.index].type) <= 16 &&
		slots_[pointer.index] % bytes == 0 && slots_[pointer.index] / bytes < 4096)
	{
		// Named frame slots fit the same scaled displacement as an indexed field.
		base = frame_base();
		offset = slots_[pointer.index];
	}
	else
		base = address_register(pointer, 10);
	const auto fp = !store ? vectors_[inst.result] : value.is(ValueKind::Temp) ? vectors_[value.index] : kNoId;
	if (fp != kNoId)
	{
		const auto op = bytes == 4 ? (store ? Op::StrS : Op::LdrS) : (store ? Op::StrD : Op::LdrD);
		out_.emit(op, fp, base, 0, (offset / bytes) << 10);
	}
	else
	{
		const auto reg = store                 ? store_register(value, inst.type, 11)
			: registers_[inst.result] == kNoId ? 9
											   : registers_[inst.result];
		access(store, reg, base, offset, bytes);
		if (!store)
			save(reg, inst.result, inst.type.kind() != TypeKind::I1);
	}
}

// The shared address-sinking pass leaves typed index expressions beside their
// users. Consume only adjacent, single-use producers: their inputs are still
// in their allocated locations, and no memory operation moves past another.
InstId Selector::address_sequence(InstId id)
{
	const lowir::Instruction& first = body_.instructions[id];
	InstId index_id = id;
	Value offset = first.ops[1];
	uint64_t scale = storage_bytes(first.type);
	if (first.op == Opcode::Binary)
	{
		if (first.next == kNoId || first.sub != static_cast<unsigned>(BinaryOp::Mul) ||
			first.type.kind() != TypeKind::I64 || uses_[first.result] != 1)
			return kNoId;
		const auto& index = body_.instructions[first.next];
		if (index.op != Opcode::Index || storage_bytes(index.type) != 1 || !(index.ops[1] == Value::temp(first.result)))
			return kNoId;
		Value factor = first.ops[0];
		if (!factor.is(ValueKind::Integer))
			std::swap(factor, offset);
		if (!factor.is(ValueKind::Integer) || !offset.is(ValueKind::Temp))
			return kNoId;
		scale = body_.literals[factor.index].low;
		index_id = first.next;
	}
	if (!power_of_two(scale) || !(offset.is(ValueKind::Integer) || offset.is(ValueKind::Temp)))
		return kNoId;
	const auto& index = body_.instructions[index_id];
	const Type type = type_of(offset, Type::scalar(TypeKind::I64));
	const unsigned bits = integer_bits(type.kind());
	if (!bits || bits > 64)
		return kNoId;
	const bool literal = offset.is(ValueKind::Integer);
	const uint64_t displacement = literal ? body_.literals[offset.index].low * scale : 0;
	const bool sign = !is_unsigned(type.kind()) && type.kind() != TypeKind::I1;
	const unsigned part = bits == 64 ? 3 : bits == 32 ? 2 : bits == 16 ? 1 : 0;
	const unsigned extension = part | ((bits < 64 && sign) ? 4 : 0);
	if (index.next != kNoId && uses_[index.result] == 1)
	{
		const auto& memory = body_.instructions[index.next];
		const bool store = memory.op == Opcode::Store;
		if ((store || memory.op == Opcode::Load) && memory.ops[store ? 1 : 0] == Value::temp(index.result) &&
			!memory_value(memory.type))
		{
			const unsigned bytes = storage_bytes(memory.type);
			const bool fits = power_of_two(bytes) && bytes <= 8 &&
				(literal ? displacement % bytes == 0 && displacement / bytes < 4096 : scale == 1 || scale == bytes);
			const Value data = memory.ops[0];
			if (fits &&
				(!store || data.is(ValueKind::Temp) || data.is(ValueKind::Integer) || data.is(ValueKind::Float)))
			{
				const unsigned base = address_register(index.ops[0], 10);
				const unsigned fp = !memory.type.is_float() ? kNoId
					: !store                                ? vectors_[memory.result]
					: data.is(ValueKind::Temp)              ? vectors_[data.index]
															: kNoId;
				const unsigned reg = fp != kNoId         ? fp
					: store                              ? store_register(data, memory.type, 9)
					: registers_[memory.result] == kNoId ? 9
														 : registers_[memory.result];
				if (literal)
				{
					if (fp == kNoId)
						access(store, reg, base, displacement, bytes);
					else
						out_.emit(bytes == 4 ? (store ? Op::StrS : Op::LdrS) : (store ? Op::StrD : Op::LdrD), reg, base,
							0, (displacement / bytes) << 10);
				}
				else
				{
					unsigned subscript = operand_register(offset, type, 11);
					if (bits < 32 && sign)
					{
						out_.emit(Op::Sbfm, 11, subscript, 0, (bits - 1) << 10);
						subscript = 11;
					}
					const unsigned index_extension = bits == 64 ? 3 : sign ? 6 : 2;
					const Op op = fp == kNoId ? indexed_access(store, bytes)
						: bytes == 4          ? (store ? Op::StrSReg : Op::LdrSReg)
											  : (store ? Op::StrDReg : Op::LdrDReg);
					out_.emit(op, reg, base, subscript, (index_extension << 13) | ((scale != 1) << 12));
				}
				if (!store && fp == kNoId)
					save(reg, memory.result, memory.type.kind() != TypeKind::I1);
				return index.next;
			}
		}
	}
	const uint64_t magnitude = static_cast<int64_t>(displacement) < 0 ? 0 - displacement : displacement;
	const unsigned imm_shift = (magnitude & 4095) == 0 ? 12 : 0;
	if ((literal && (magnitude >> imm_shift) > 4095) || (!literal && bits < 64 && scale > 16))
		return kNoId;
	const unsigned base = address_register(index.ops[0], 10);
	const unsigned dest = registers_[index.result] == kNoId ? 9 : registers_[index.result];
	if (literal)
		out_.emit(static_cast<int64_t>(displacement) < 0 ? Op::SubI : Op::AddI, dest, base, 0,
			(imm_shift ? 1u << 22 : 0) | uint32_t(magnitude >> imm_shift) << 10);
	else
	{
		unsigned shift = 0;
		while ((uint64_t(1) << shift) != scale)
			++shift;
		const unsigned subscript = operand_register(offset, type, 11);
		out_.emit(Op::Add, dest, base, subscript, (shift << 10) | (bits < 64 ? (1u << 21) | (extension << 13) : 0));
	}
	save(dest, index.result, true);
	return index_id;
}

} // namespace aarch64
