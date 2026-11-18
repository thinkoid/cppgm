#include "opt/packed_loads.h"

#include "lowir/builder.h"

namespace opt {

using namespace lowir;

namespace {
// Reassemble two adjacent unsigned halves with one little-endian load.
// The combined read covers exactly the bytes of the original two reads.
bool combine_adjacent_loads(FunctionBody& body, const std::vector<uint32_t>& uses, const std::vector<BlockId>& block_of,
	BlockId block, InstId id)
{
	auto& combine = body.instructions[id];
	const unsigned width = integer_bits(combine.type.kind());
	if (width != 16 && width != 32 && width != 64)
		return false;
	const auto producer = [&](Value value) -> const Instruction* {
		if (!value.is(ValueKind::Temp) || value.index >= uses.size() || uses[value.index] != 1)
			return nullptr;
		const auto def = body.temps[value.index].def;
		return def < block_of.size() && block_of[def] == block ? &body.instructions[def] : nullptr;
	};
	const Instruction* high = producer(combine.ops[0]);
	const Instruction* low = producer(combine.ops[1]);
	if (!high || high->op != Opcode::Binary)
		std::swap(high, low);
	if (!high || high->op != Opcode::Binary || high->sub != static_cast<unsigned>(BinaryOp::Shl) ||
		high->type != combine.type || !high->ops[1].is(ValueKind::Integer) ||
		body.literals[high->ops[1].index].low != width / 2)
		return false;
	const auto half = [&](const Instruction* extend) -> const Instruction* {
		if (!extend || extend->op != Opcode::Convert || extend->sub != static_cast<unsigned>(ConvertOp::ZExt) ||
			extend->type != combine.type || integer_bits(convert_source_type(*extend).kind()) != width / 2)
			return nullptr;
		const auto* load = producer(extend->ops[0]);
		return load && load->op == Opcode::Load && !(load->flags & IF_VOLATILE) ? load : nullptr;
	};
	high = half(producer(high->ops[0]));
	low = half(low);
	if (!high || !low)
		return false;
	const auto* step = producer(high->ops[0]);
	if (!step || step->op != Opcode::Index || !(step->ops[0] == low->ops[0]) || !step->ops[1].is(ValueKind::Integer))
		return false;
	const unsigned bytes = width / 16;
	const uint64_t stride = storage_bytes(step->type);
	if (!stride || stride > bytes || bytes % stride || body.literals[step->ops[1].index].low != bytes / stride)
		return false;
	// Both loads must reach the consumer through pure operations, with no
	// intervening store, atomic access, call, or change of exception region.
	const auto clear = [&](const Instruction* read) {
		auto next = read->next;
		for (unsigned steps = 0; next != id; ++steps)
		{
			if (next == kNoId || steps == 16)
				return false;
			const auto& inst = body.instructions[next];
			if (&inst != high && &inst != low && !is_pure(inst))
				return false;
			next = inst.next;
		}
		return true;
	};
	if (!clear(high) || !clear(low))
		return false;
	auto load = make_instruction(Opcode::Load, combine.type);
	load.ops[0] = low->ops[0];
	load.result = combine.result;
	load.next = combine.next;
	load.location = combine.location;
	combine = load;
	return true;
}

} // namespace

bool simplify_packed_load(FunctionBody& body, const std::vector<uint32_t>& uses, const std::vector<BlockId>& block_of,
	BlockId block, InstId& previous, InstId id)
{
	if (body.instructions[id].op == Opcode::Binary)
		return combine_adjacent_loads(body, uses, block_of, block, id);
	const Instruction original = body.instructions[id];
	const Type result = original.type;
	const bool floating = original.op == Opcode::Copy &&
		(result.kind() == TypeKind::F32 || result.kind() == TypeKind::F64);
	if (!floating)
		return false;
	const auto single = [&](Value value) -> const Instruction* {
		if (!value.is(ValueKind::Temp) || value.index < body.parameter_count || value.index >= uses.size() ||
			uses[value.index] != 1)
			return nullptr;
		const InstId def = body.temps[value.index].def;
		return def != kNoId && def < block_of.size() && block_of[def] == block ? &body.instructions[def] : nullptr;
	};
	Value value = original.ops[0];
	if (!value.is(ValueKind::Temp))
		return false;
	Type carrier = body.temps[value.index].type;
	if (!float_twins(result, carrier))
		return false;
	const Instruction* source = single(value);
	if (source == nullptr || source->op != Opcode::Convert || static_cast<ConvertOp>(source->sub) != ConvertOp::Trunc)
		return false;
	carrier = convert_source_type(*source);
	value = source->ops[0];
	source = single(value);
	if (!carrier.is_integer() || carrier.kind() == TypeKind::I1 || storage_bytes(carrier) <= storage_bytes(result))
		return false;
	uint64_t offset = 0;
	if (source != nullptr && source->op == Opcode::Binary && source->type == carrier &&
		(static_cast<BinaryOp>(source->sub) == BinaryOp::UShr || static_cast<BinaryOp>(source->sub) == BinaryOp::Shr))
	{
		const Value count = source->ops[1];
		if (!count.is(ValueKind::Integer))
			return false;
		const Literal bits = body.literals[count.index];
		if (bits.high != 0 || bits.low >= 8 * storage_bytes(carrier) || bits.low % 8 != 0)
			return false;
		offset = bits.low / 8;
		value = source->ops[0];
		source = single(value);
	}
	if (source == nullptr || source->op != Opcode::Load || source->type != carrier ||
		(source->flags & IF_VOLATILE) != 0 || offset + storage_bytes(result) > storage_bytes(carrier))
		return false;
	const Instruction load = *source;
	// Move the read only across a short sequence of pure computations, in
	// the same block. Stores, calls, volatile/atomic accesses, asm and EH
	// boundaries retain the original snapshot, even if they cannot alias.
	InstId next = load.next;
	for (unsigned steps = 0; next != id; ++steps)
	{
		if (next == kNoId || steps == 16 || !is_pure(body.instructions[next]))
			return false;
		next = body.instructions[next].next;
	}
	Value address = load.ops[0];
	const auto emit_address = [&](Instruction inst) {
		inst.location = load.location;
		const InstId added = append_instruction(body, inst);
		const TempId temp = append_temp(body, body.pointer_type(), added);
		body.instructions[added].result = temp;
		insert_after(body, block, previous, added);
		previous = added;
		return Value::temp(temp);
	};
	if (offset != 0)
	{
		if (address.is(ValueKind::Slot))
		{
			Instruction addr = make_instruction(Opcode::Addr, body.pointer_type());
			addr.ops[0] = address;
			address = emit_address(addr);
		}
		Instruction index = make_instruction(Opcode::Index, Type::scalar(TypeKind::I8));
		index.ops[0] = address;
		index.ops[1] = integer_value(body, integer_literal(static_cast<int64_t>(offset)));
		address = emit_address(index);
	}
	Instruction narrowed = make_instruction(Opcode::Load, result);
	narrowed.result = original.result;
	narrowed.next = original.next;
	narrowed.location = original.location;
	narrowed.ops[0] = address;
	// A bit projection establishes no source-language alias type. Retaining
	// the wide access's `typed` promise for the new type would be unsound.
	body.instructions[id] = narrowed;
	return true;
}

} // namespace opt
