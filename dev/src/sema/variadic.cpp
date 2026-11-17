#include "sema/variadic.h"

#include <cstring>
#include "lex/identifier_table.h"
#include "sema/conversions.h"

namespace sema {

bool IsVaList(const Type* type)
{
	type = type->unqualified;
	if (target_model::pointer_va_list(type->target))
		return type->kind == TypeKind::Pointer && type->element->kind == TypeKind::Fundamental &&
			type->element->fundamental == FundamentalType::Char && type->element->cv == 0;
	if (type->target == target_model::Target::AArch64Linux)
		return ClassOf(type) != nullptr && type->entity->name &&
			std::strcmp(type->entity->name->spelling, "__va_list") == 0;
	if (type->kind == TypeKind::Array || type->kind == TypeKind::Pointer)
		type = type->element;
	return ClassOf(type) != nullptr && type->unqualified->entity->name != nullptr &&
		std::strcmp(type->unqualified->entity->name->spelling, "__va_list_tag") == 0;
}

} // namespace sema
