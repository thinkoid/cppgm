#include "sema/analyzer.h"

#include "sema/conversions.h"

namespace sema {

ExprFacts* Analyzer::generic_selection(const syntax::GenericExpr& expr, Scope* scope)
{
	// C17 6.5.1.1: type the control without evaluating it. Lvalue,
	// array and function conversions apply, but not integer promotions.
	++unevaluated_;
	ExprFacts* control = typed(*expr.control, scope);
	if (control == nullptr)
		return nullptr;
	if (control->type == nullptr)
		error(expr.control->location, "generic controlling expression has no type");
	const Type* type = decayed(control)->unqualified;
	const syntax::Expr* selected = nullptr;
	const syntax::Expr* fallback = nullptr;
	std::vector<const Type*> associations;
	for (const syntax::GenericAssociation& association : expr.associations)
	{
		if (association.type == nullptr)
		{
			if (fallback != nullptr)
				error(expr.location, "more than one default generic association");
			fallback = association.expression;
		}
		else
		{
			const Type* candidate = type_id(*association.type, scope);
			uint64_t bytes = 0, alignment = 0;
			if (!object_layout(candidate, bytes, alignment))
				error(association.type->location, "generic association requires a complete object type");
			for (const Type* previous : associations)
				if (conversions_.c_type_compatible(previous, candidate))
					error(association.type->location, "compatible types in two generic associations");
			associations.push_back(candidate);
			if (conversions_.c_type_compatible(type, candidate))
				selected = association.expression;
		}
		// Unselected associations must still be valid expressions.
		const ExprFacts* value = typed(*association.expression, scope);
		if (value == nullptr)
			return nullptr;
		if (value->type == nullptr)
			error(association.expression->location, "generic association requires an expression with a type");
	}
	--unevaluated_;
	expr.selected = selected != nullptr ? selected : fallback;
	if (expr.selected == nullptr)
		error(expr.location, "no matching generic association and no default");
	// As with parentheses, the selected expression retains its exact type,
	// value category, bit-field facts and subsequent contextual conversion.
	expr.facts = expr.selected->facts;
	return const_cast<ExprFacts*>(expr.facts);
}

} // namespace sema
