#pragma once

#include "lowir/program.h"

namespace lowir {

// The size whose eightbytes a value's classes name
// (ir_model::append_object_classes).
inline uint64_t object_classes_bytes(Type type)
{
	if (type.is_object())
		return type.bytes;
	return type.kind() == TypeKind::I128 || type.kind() == TypeKind::F80 ? 16 : (integer_bits(type.kind()) + 7) / 8;
}

// A classes value the object dialect's text holds for a value of `type`:
// eightbyte words name only the eightbytes the type has.
bool text_holds_object_classes(Type type, uint8_t classes);
bool valid_aggregate_shape(Type type, ir_model::AggregateShape shape);
bool valid_this_return(const Program& program, const Signature& signature);

// Returns a diagnostic for malformed per-argument metadata, or null.
const char* validate_argument_facts(const Program& program, const FunctionBody& body, InstId& instruction);

} // namespace lowir
