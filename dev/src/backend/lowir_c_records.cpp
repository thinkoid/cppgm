#include "backend/lowir_c_module.h"

#include <algorithm>

#include "lowir/aggregate_shape.h"
#include "lowir/object_classes.h"

// Producer-defined record fields are projected into LowIR boundary facts.
// AMD64 uses eightbyte classes. AArch64 and Wasm use aggregate shapes.

using namespace backend::c_api;

namespace {

uint64_t scalar_bytes(CppgmType bits, target_model::Target target)
{
	if (!valid_type(bits, target))
		return 0;
	const lowir::Type field = type(bits);
	if (field.is_object() || (field.kind() == lowir::TypeKind::F80 && target_model::needs_aggregate_shape(target)))
		return 0;
	return lowir::storage_bytes(field);
}

void mark(uint8_t* classes, uint64_t eightbyte, uint8_t cls)
{
	if (eightbyte < 2)
		classes[eightbyte] = lowir::merged_class(classes[eightbyte], cls);
	else
		classes[0] = lowir::AC_MEMORY;
}

// Merges a scalar of `bits` (`bytes` bytes) at byte `at` of an object of
// at most 16 bytes into the classes of its eightbytes. A scalar not at a
// multiple of its alignment makes the object MEMORY.
void mark_scalar(uint8_t* classes, CppgmType bits, uint64_t bytes, uint64_t at)
{
	if (at % bytes != 0)
	{
		classes[0] = lowir::AC_MEMORY;
		return;
	}
	switch (type(bits).kind())
	{
	case lowir::TypeKind::F32:
	case lowir::TypeKind::F64:
		mark(classes, at / 8, lowir::AC_SSE);
		return;
	case lowir::TypeKind::F80:
		mark(classes, at / 8, lowir::AC_X87);
		mark(classes, at / 8 + 1, lowir::AC_X87UP);
		return;
	case lowir::TypeKind::V128:
		mark(classes, at / 8, lowir::AC_SSE);
		mark(classes, at / 8 + 1, lowir::AC_SSEUP);
		return;
	default:
		for (uint64_t eightbyte = at / 8; eightbyte <= (at + bytes - 1) / 8; ++eightbyte)
			mark(classes, eightbyte, lowir::AC_INTEGER);
		return;
	}
}

// The record of an ID-ordered (ID, record) list, or CPPGM_NO_ID.
uint32_t find_record(const std::vector<std::pair<uint32_t, uint32_t>>& list, uint32_t id)
{
	const auto found = std::lower_bound(list.begin(), list.end(), std::make_pair(id, 0u));
	return found != list.end() && found->first == id ? found->second : CPPGM_NO_ID;
}

} // namespace

CppgmType CppgmLowir::record(uint64_t bytes, uint32_t alignment, const CppgmField* stated, uint32_t count)
{
	if (!ready())
		return 0;
	if (bytes == 0 || bytes >> 48 != 0 || alignment == 0 || (alignment & (alignment - 1)) != 0 ||
		alignment > (1u << 31) || (count != 0 && stated == nullptr) || records.size() >= UINT32_MAX - 1)
	{
		fail("invalid record type");
		return 0;
	}
	std::vector<uint64_t> steps(count);
	for (uint32_t i = 0; i < count; ++i)
	{
		const CppgmField& field = stated[i];
		CppgmType bits = field.type;
		const uint32_t inner = resolve_record(bits);
		steps[i] = inner != CPPGM_NO_ID ? type(bits).bytes : scalar_bytes(bits, program.target);
		const uint64_t elements = field.count == 0 ? 1 : field.count;
		if (steps[i] == 0 || field.offset > bytes || elements > (bytes - field.offset) / steps[i])
		{
			fail("invalid record field");
			return 0;
		}
	}
	Record result = { type_bits(bytes, alignment), static_cast<uint32_t>(fields.size()), count, CPPGM_NO_ID, 0, {} };
	if (target_model::needs_aggregate_shape(program.target))
		result.shape = aggregate_shape(stated, count, type(result.object));
	else if (bytes <= 16)
	{
		if (count != 0)
			fields.insert(fields.end(), stated, stated + count);
		result.placements = static_cast<uint32_t>(placements.size());
		placements.resize(placements.size() + 32, lowir::AC_NO_CLASS);
		for (uint64_t at = 0; at + bytes <= 16; ++at)
			place(result, steps, at, &placements[result.placements + 2 * at]);
		result.classes = lowir::object_classes_value(placements[result.placements], placements[result.placements + 1]);
	}
	records.push_back(result);
	return CPPGM_TYPE_RECORD | (static_cast<CppgmType>(records.size() - 1) << 16);
}

ir_model::AggregateShape CppgmLowir::aggregate_shape(const CppgmField* fields, uint32_t count, lowir::Type object) const
{
	using ir_model::AggregateElement;
	using lowir::shape;
	const bool arm = target_model::is_aarch64(program.target);
	ir_model::AggregateShape result = shape(AggregateElement::Empty);
	unsigned lanes = 0;
	unsigned lane_size = 0;
	for (uint32_t i = 0; i < count; ++i)
	{
		const CppgmField& field = fields[i];
		CppgmType bits = field.type;
		const uint32_t record = resolve_record(bits);
		const auto element = lowir::scalar_element(type(bits).kind());
		const auto part = record != CPPGM_NO_ID ? records[record].shape : shape(element, 1);
		if (part.element == AggregateElement::Empty)
			continue;
		const uint64_t elements = field.count == 0 ? 1 : field.count;
		if (part.element == AggregateElement::Mixed || elements > UINT16_MAX / part.count)
			return shape(AggregateElement::Mixed);
		const unsigned units = static_cast<unsigned>(elements) * part.count;
		const unsigned lane_bytes = part.element == AggregateElement::F32 ? 4
			: part.element == AggregateElement::F64                       ? 8
			: part.element == AggregateElement::Vector128                 ? 16
																		  : 0;
		if (arm && lane_bytes != 0)
		{
			// A homogeneous Arm record can occupy no more than four lanes.
			// Account for overlapping union fields and verify contiguous
			// coverage before assigning its floating-point ABI shape.
			if ((result.element != AggregateElement::Empty && result.element != part.element) ||
				object.bytes > 4 * lane_bytes || field.offset % lane_bytes != 0 ||
				lowir::storage_bytes(type(bits)) != part.count * lane_bytes || units > 4)
				return shape(AggregateElement::Mixed);
			lanes |= ((1u << units) - 1) << (field.offset / lane_bytes);
			lane_size = lane_bytes;
			result = shape(part.element);
		}
		else
			lowir::merge_shape(result, shape(part.element, static_cast<uint16_t>(units)));
	}
	if (lanes != 0 && result.element > AggregateElement::Mixed)
	{
		const unsigned lanes_in_object = object.bytes / lane_size;
		if (object.bytes % lane_size != 0 || lanes != (1u << lanes_in_object) - 1)
			return shape(AggregateElement::Mixed);
		result.count = static_cast<uint16_t>(lanes_in_object);
	}
	return result;
}

CppgmType CppgmLowir::type_bits(uint64_t bytes, uint32_t alignment)
{
	uint32_t log2 = 0;
	while ((1u << log2) < alignment)
		++log2;
	return CPPGM_TYPE_OBJ | (static_cast<CppgmType>(log2) << 8) | (bytes << 16);
}

void CppgmLowir::place(const Record& record, const std::vector<uint64_t>& steps, uint64_t at, uint8_t* classes) const
{
	// The fields in their order, as a C compiler merges them; a field of a
	// record type merges that record's classes at its offset.
	for (uint32_t i = 0; i < record.field_count; ++i)
	{
		const CppgmField& field = fields[record.first_field + i];
		CppgmType bits = field.type;
		const uint32_t inner = resolve_record(bits);
		const uint64_t elements = field.count == 0 ? 1 : field.count;
		for (uint64_t k = 0; k < elements; ++k)
		{
			const uint64_t offset = at + field.offset + k * steps[i];
			if (inner == CPPGM_NO_ID)
				mark_scalar(classes, bits, steps[i], offset);
			else if (offset % (uint64_t(1) << type(bits).align_log2) != 0 ||
				placements[records[inner].placements + 2 * offset] == lowir::AC_MEMORY)
				classes[0] = lowir::AC_MEMORY;
			else
				for (int eightbyte = 0; eightbyte < 2; ++eightbyte)
					mark(classes, eightbyte, placements[records[inner].placements + 2 * offset + eightbyte]);
		}
	}
}

uint32_t CppgmLowir::resolve_record(CppgmType& bits) const
{
	if ((bits & 0xffff) != CPPGM_TYPE_RECORD || (bits >> 16) >= records.size())
		return CPPGM_NO_ID;
	const uint32_t record = static_cast<uint32_t>(bits >> 16);
	bits = records[record].object;
	return record;
}

void CppgmLowir::note_parameter_record(uint32_t parameter, uint32_t record)
{
	if (record == CPPGM_NO_ID)
		return;
	if (parameter_records.size() <= parameter)
		parameter_records.resize(parameter + 1, 0);
	parameter_records[parameter] = record + 1;
}

uint32_t CppgmLowir::resolve_record(lowir::Type& t) const
{
	CppgmType bits = t.kind_bits | (static_cast<CppgmType>(t.align_log2) << 8) |
		(static_cast<CppgmType>(t.bytes) << 16);
	const uint32_t record = resolve_record(bits);
	if (record != CPPGM_NO_ID)
		t = type(bits);
	return record;
}

void CppgmLowir::resolve_body_records(uint32_t symbol, const CppgmBodyCounts& counts)
{
	// Commit reports a symbol without an open body.
	if (symbol >= program.symbols.size() || program.symbols[symbol].kind != lowir::SymbolKind::FunctionDefinition)
		return;
	const lowir::Function& function = program.functions[program.symbols[symbol].detail];
	lowir::FunctionBody* body = function.body.get();
	if (body == nullptr || body->construction_state != 1)
		return;
	BodyRecords found;
	const lowir::Signature& signature = program.signatures[function.signature];
	for (uint32_t i = 0; i < signature.parameter_count; ++i)
	{
		const uint64_t parameter = signature.first_parameter + i;
		if (parameter < parameter_records.size() && parameter_records[parameter] != 0)
			found.temps.emplace_back(i, parameter_records[parameter] - 1);
	}
	const uint32_t instructions = std::min<uint32_t>(counts.instructions, body->instructions.size());
	for (uint32_t id = 0; id < instructions; ++id)
	{
		lowir::Instruction& inst = body->instructions[id];
		const uint32_t record = resolve_record(inst.type);
		if (record != CPPGM_NO_ID && lowir::defines_value(inst.op))
			found.temps.emplace_back(inst.result, record);
	}
	const uint32_t slots = std::min<uint32_t>(counts.slots, body->slots.size());
	for (uint32_t id = 0; id < slots; ++id)
	{
		const uint32_t record = resolve_record(body->slots[id].type);
		if (record != CPPGM_NO_ID)
			found.slots.emplace_back(id, record);
	}
	std::sort(found.temps.begin(), found.temps.end());
	if (found.temps.empty() && found.slots.empty())
		body_records.erase(symbol);
	else
		body_records[symbol] = std::move(found);
}

void CppgmLowir::state_record_facts()
{
	for (const auto& entry : body_records)
	{
		lowir::FunctionBody* body = committed_body(entry.first);
		if (body == nullptr)
			continue;
		std::vector<lowir::ArgumentFacts> derived;
		const auto append_fact = [&](lowir::InstId inst, uint32_t argument, uint32_t record) {
			if (record == CPPGM_NO_ID)
				return;
			if (records[record].shape.element != ir_model::AggregateElement::None)
				derived.emplace_back(inst, argument, 0, records[record].shape);
			else if (records[record].classes != 0)
				derived.emplace_back(inst, argument, records[record].classes);
		};
		const auto record_of = [&](const lowir::Value& value) {
			return value.is(lowir::ValueKind::Temp) ? find_record(entry.second.temps, value.index)
				: value.is(lowir::ValueKind::Slot)  ? find_record(entry.second.slots, value.index)
													: CPPGM_NO_ID;
		};
		for (lowir::InstId id = 0; id < body->instructions.size(); ++id)
		{
			const lowir::Instruction& inst = body->instructions[id];
			if (inst.op == lowir::Opcode::VaArg)
			{
				append_fact(id, 0, find_record(entry.second.temps, inst.result));
				continue;
			}
			// These buffers have yet to pass program validation. Leave invalid
			// calls for the validator to diagnose before looking at operands.
			if (inst.op != lowir::Opcode::Call ||
				((inst.flags & lowir::IF_SIGNATURE) &&
					static_cast<uint64_t>(inst.immediate) >= program.signatures.size()) ||
				(inst.ops[0].is(lowir::ValueKind::Symbol) && inst.ops[0].index >= program.symbols.size()) ||
				inst.extra_first > body->operands.size() || inst.extra_count > body->operands.size() - inst.extra_first)
				continue;
			const lowir::Signature* boundary = program.call_boundary(inst);
			if (boundary == nullptr || boundary->boundary.arity != ir_model::CAM_VARIADIC)
				continue;
			for (uint32_t argument = boundary->parameter_count; argument < inst.extra_count; ++argument)
				append_fact(id, argument, record_of(body->operands[inst.extra_first + argument]));
		}
		merge_facts(*body, derived);
	}
}

void CppgmLowir::merge_facts(lowir::FunctionBody& body, const std::vector<lowir::ArgumentFacts>& derived)
{
	// A fact the producer stated keeps its classes or shape.
	if (derived.empty())
		return;
	std::vector<lowir::ArgumentFacts>& facts = body.argument_facts;
	for (const lowir::ArgumentFacts& fact : derived)
	{
		const auto found = std::find_if(facts.begin(), facts.end(), [&](const lowir::ArgumentFacts& stated) {
			return stated.call == fact.call && stated.argument == fact.argument;
		});
		if (found == facts.end())
			facts.push_back(fact);
		else
		{
			if (found->classes == 0)
				found->classes = fact.classes;
			if (found->shape().element == ir_model::AggregateElement::None && found->type() == lowir::TypeKind::Void &&
				fact.shape().element != ir_model::AggregateElement::None)
				*found = lowir::ArgumentFacts(fact.call, fact.argument, found->classes, fact.shape());
		}
	}
	std::stable_sort(facts.begin(), facts.end(), [](const lowir::ArgumentFacts& a, const lowir::ArgumentFacts& b) {
		return a.call < b.call || (a.call == b.call && a.argument < b.argument);
	});
}
