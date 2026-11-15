#include "sema/analyzer.h"

#include <cstring>

#include "lex/identifier_table.h"

namespace sema {

const ClassEntity* Analyzer::comparison_category(unsigned category, uint32_t location)
{
	// [expr.spaceship]: these are library classes, not compiler-defined
	// scalar stand-ins. Inline namespaces participate in ordinary lookup.
	const char* spelling = category == 2 ? "partial_ordering" : category == 1 ? "weak_ordering" : "strong_ordering";
	const LookupResult space = names_.qualified(graph_.global, std_key_, LookupFilter::Namespace);
	const LookupResult found = space.found() && space.binding->entity != nullptr &&
			space.binding->entity->kind == EntityKind::Namespace
		? names_.qualified(static_cast<NamespaceEntity*>(space.binding->entity)->scope,
			  identifiers_.intern(spelling, static_cast<uint32_t>(std::strlen(spelling))), LookupFilter::Elaborated)
		: LookupResult();
	const ClassEntity* cls = found.found() && !found.ambiguous && found.binding->type != nullptr
		? ClassOf(found.binding->type)
		: nullptr;
	if (cls == nullptr || !require_complete(cls))
	{
		substitution_error(location, "three-way comparison requires its complete standard comparison category");
		return nullptr;
	}
	return cls;
}

const syntax::Expr* Analyzer::comparison_value(
	const ClassEntity* category, const char* value, Scope* scope, uint32_t location)
{
	// Record a real, ordinarily checked use of std::category::value.
	// Lowering and constant evaluation consume this resolved expression.
	syntax::NameComponent parts[3] = {};
	for (unsigned i = 0; i < 3; ++i)
	{
		parts[i].kind = syntax::NameComponentKind::Identifier;
		parts[i].location = location;
	}
	parts[0].identifier = std_key_;
	parts[1].identifier = category->name;
	parts[2].identifier = identifiers_.intern(value, static_cast<uint32_t>(std::strlen(value)));
	syntax::Name* name = new (arena_.allocate(sizeof(syntax::Name), alignof(syntax::Name))) syntax::Name();
	name->global = true;
	name->location = location;
	name->components = syntax::Slice<syntax::NameComponent>{ arena_.copy_array(parts, 3), 3 };
	syntax::IdExpr* use = new (arena_.allocate(sizeof(syntax::IdExpr), alignof(syntax::IdExpr))) syntax::IdExpr();
	use->kind = syntax::ExprKind::Id;
	use->location = location;
	use->name = name;
	ExprFacts* facts = typed(*use, scope);
	if (facts == nullptr)
		return nullptr;
	if (facts->type->unqualified != category->type || facts->category != ValueCategory::LValue ||
		facts->entity == nullptr || facts->entity->kind != EntityKind::Variable || (facts->type->cv & kConst) == 0)
	{
		substitution_error(location, "invalid standard comparison category constant");
		return nullptr;
	}
	potential_use(*use, nullptr);
	return use;
}

ExprFacts* Analyzer::three_way_comparison(const syntax::BinaryExpr& expr, Scope* scope)
{
	const Type* left = decayed(facts_of(*expr.left))->unqualified;
	const Type* right = decayed(facts_of(*expr.right))->unqualified;
	const Type* common = nullptr;
	if ((left->kind == TypeKind::Enum && (right->kind == TypeKind::Enum ? right != left : IsFloating(right))) ||
		(right->kind == TypeKind::Enum && IsFloating(left)))
	{
		substitution_error(expr.location, "three-way comparison mixes incompatible enumeration types");
		return nullptr;
	}
	if (expr.left->facts->type->kind == TypeKind::Array && expr.right->facts->type->kind == TypeKind::Array)
	{
		substitution_error(expr.location, "three-way comparison of two arrays");
		return nullptr;
	}
	if ((IsArithmetic(left) || IsIntegralOrUnscopedEnum(left)) &&
		(IsArithmetic(right) || IsIntegralOrUnscopedEnum(right)))
	{
		const bool lb = left == types_.fundamental(FundamentalType::Bool);
		const bool rb = right == types_.fundamental(FundamentalType::Bool);
		if (lb == rb)
			common = usual_arithmetic(
				field_promoted(facts_of(*expr.left), left), field_promoted(facts_of(*expr.right), right));
	}
	else if (left == right && left->kind == TypeKind::Enum)
		common = left;
	else
	{
		const Type* pointer = composite_pointer(expr.left->facts, expr.right->facts, true);
		if (left->kind == TypeKind::Pointer && right->kind == TypeKind::Pointer && pointer != nullptr &&
			pointer->kind == TypeKind::Pointer && pointer->element->kind != TypeKind::Function)
			common = pointer;
	}
	if (common == nullptr)
	{
		substitution_error(expr.location, "invalid operands to three-way comparison");
		return nullptr;
	}
	convert_operand(*expr.left, common);
	convert_operand(*expr.right, common);
	if (failed())
		return nullptr;
	// Integral-to-floating is allowed here; the remaining list-narrowing
	// rules apply to the usual arithmetic conversions, including constants.
	for (const syntax::Expr* operand : { expr.left, expr.right })
	{
		const Type* from = operand->facts->type;
		if (!(IsFloating(common) && IsIntegralOrUnscopedEnum(from)) &&
			!check_narrowing(*operand, operand->facts->conversion, common, scope))
			return nullptr;
	}
	const bool floating = IsFloating(common);
	const ClassEntity* category = comparison_category(floating ? 2 : 0, expr.location);
	if (category == nullptr)
		return nullptr;
	ThreeWayComparison* plan = new (arena_.allocate(sizeof(ThreeWayComparison), alignof(ThreeWayComparison)))
		ThreeWayComparison();
	plan->operand = common;
	const char* values[4] = { "less", floating ? "equivalent" : "equal", "greater", "unordered" };
	for (unsigned i = 0; i < (floating ? 4u : 3u); ++i)
	{
		plan->values[i] = comparison_value(category, values[i], scope, expr.location);
		if (plan->values[i] == nullptr)
			return nullptr;
	}
	ExprFacts* facts = new_facts(expr, category->type, ValueCategory::PRValue);
	facts->comparison = plan;
	return facts;
}

} // namespace sema
