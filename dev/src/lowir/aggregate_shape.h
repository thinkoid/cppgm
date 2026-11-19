#pragma once

#include "lowir/types.h"

namespace lowir {

inline AggregateShape shape(AggregateElement element, uint16_t count = 0)
{
	AggregateShape result;
	result.element = element;
	result.count = count;
	return result;
}

inline AggregateElement scalar_element(lowir::TypeKind kind)
{
	using lowir::TypeKind;
	switch (kind)
	{
	case TypeKind::I1:
		return AggregateElement::I1;
	case TypeKind::I8:
		return AggregateElement::I8;
	case TypeKind::U8:
		return AggregateElement::U8;
	case TypeKind::I16:
		return AggregateElement::I16;
	case TypeKind::U16:
		return AggregateElement::U16;
	case TypeKind::I32:
		return AggregateElement::I32;
	case TypeKind::U32:
		return AggregateElement::U32;
	case TypeKind::I64:
		return AggregateElement::I64;
	case TypeKind::I128:
		return AggregateElement::I128;
	case TypeKind::F32:
		return AggregateElement::F32;
	case TypeKind::F64:
		return AggregateElement::F64;
	case TypeKind::Ptr:
		return AggregateElement::Pointer;
	case TypeKind::V128:
		return AggregateElement::Vector128;
	default:
		return AggregateElement::Mixed;
	}
}

inline void merge_shape(AggregateShape& result, AggregateShape next)
{
	if (next.element == AggregateElement::Empty)
		return;
	if (result.element == AggregateElement::Empty)
		result = next;
	else if (result.element != next.element || uint32_t(result.count) + next.count > UINT16_MAX)
		result = shape(AggregateElement::Mixed);
	else if (result.element != AggregateElement::Mixed)
		result.count += next.count;
}

} // namespace lowir
