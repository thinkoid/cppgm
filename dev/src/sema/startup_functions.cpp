#include "sema/analyzer.h"

namespace sema {

void Analyzer::check_startup_redeclaration(const FunctionEntity* function, const Type* type, uint32_t location)
{
	// A C declaration without a prototype can acquire parameters later.
	// An earlier constructor attribute still requires a void() boundary.
	if (!graph_.startup_functions.empty() && graph_.startup_index.find(function) != PointerMap::kMissing &&
		type->canonical->param_count != 0)
		error(location, "a constructor function cannot acquire parameters in a later declaration");
}

void Analyzer::startup_attribute(Entity* entity, const syntax::Attribute& attribute)
{
	if (entity->kind != EntityKind::Function || entity->owner->kind != ScopeKind::Namespace)
		error(attribute.location, "a constructor attribute requires a namespace-scope function");
	FunctionEntity* function = static_cast<FunctionEntity*>(entity);
	const Type* type = function->type->canonical;
	if (!IsVoid(type->element) || type->param_count != 0 || type->variadic || function->templ != nullptr)
		error(attribute.location, "a constructor attribute requires a non-template void function with no parameters");
	uint32_t priority = 65535;
	if (attribute.expression != nullptr)
	{
		if (semantic())
			integral_constant_operand(*attribute.expression, entity->owner, nullptr);
		Constant value;
		if (!constant_value(*attribute.expression, entity->owner, value, true))
			return;
		if (!IsIntegralOrUnscopedEnum(value.type) || value.bits > 65535)
			error(attribute.location, "constructor priority must be an integer from 0 through 65535");
		priority = static_cast<uint32_t>(value.bits);
	}
	const uint32_t prior = graph_.startup_index.find(function);
	if (prior != PointerMap::kMissing)
	{
		if (graph_.startup_functions[prior].priority != priority)
			error(attribute.location, "conflicting constructor priorities");
		return;
	}
	function->used = true;
	graph_.startup_index.set(function, static_cast<uint32_t>(graph_.startup_functions.size()));
	graph_.startup_functions.push_back(SemanticGraph::StartupFunction{ function, priority });
}

} // namespace sema
