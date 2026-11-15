#include "sema/analyzer.h"

#include "sema/instantiation_context.h"

namespace sema {

ExprFacts* Analyzer::requires_expression(const syntax::RequiresExpr& expr, Scope* scope)
{
	if (expr.facts != nullptr && (expr.facts->flags & kFolded) != 0)
		return const_cast<ExprFacts*>(expr.facts);
	if (template_depth_ != 0 && expr.facts != nullptr && (expr.facts->flags & kValueDependentUse) != 0)
	{
		names_.note_value_parameter_use();
		return const_cast<ExprFacts*>(expr.facts);
	}
	ExprFacts* result = new_facts(expr, types_.fundamental(FundamentalType::Bool), ValueCategory::PRValue);
	Scope* const saved_expression_scope = expression_scope_;

	bool templated = false;
	for (const Scope* enclosing = scope; enclosing != nullptr; enclosing = enclosing->parent)
		templated = templated || enclosing->kind == ScopeKind::TemplateParameters;
	ScratchContext scratch(*this);
	const uint32_t saved_unevaluated = unevaluated_;
	++unevaluated_;
	if (templated)
	{
		SoftSubstitution substitution(*this);
		result->value = requirements_satisfied(expr, scope) && !substitution.failed();
	}
	else
		result->value = requirements_satisfied(expr, scope);
	unevaluated_ = saved_unevaluated;
	expression_scope_ = saved_expression_scope;
	if ((result->flags & kValueDependentUse) != 0)
		names_.note_value_parameter_use();
	else
		result->flags |= kFolded;
	return result;
}

bool Analyzer::requirement_parameters(const syntax::RequiresExpr& expr, Scope*& scope)
{
	if (expr.parameters != nullptr)
	{
		const syntax::ParameterClause& clause = *expr.parameters;
		Scope* local = new_scope(ScopeKind::Function, scope, nullptr, nullptr, nullptr);
		local->dumped = false;
		TypeList parameters;
		for (uint32_t i = 0; i < clause.parameters.size; ++i)
		{
			const Type* type = parameter_type(*clause.parameters[i], local);
			if (type == nullptr || failed())
				return false;
			const bool sole_unnamed = clause.parameters.size == 1 &&
				syntax::NameOfDeclarator(clause.parameters[i]->declarator) == nullptr;
			if (sole_unnamed && template_depth_ != 0 && dependent_type(type))
				clause.dependent_sole = true;
			if (type->unqualified == types_.fundamental(FundamentalType::Void))
			{
				if (sole_unnamed && !clause.dependent_sole)
					break;
				return substitution_error(clause.parameters[i]->location, "void requires-expression parameter");
			}
			const Type* object = parameter_object_type(type);
			const syntax::Name* name = syntax::NameOfDeclarator(clause.parameters[i]->declarator);
			if (name != nullptr)
			{
				const Identifier* identifier = name->last().identifier;
				if (template_depth_ != 0)
					check_template_parameter_name(scope, identifier, name->location);
				const NameEntry* previous = names_.find(local, identifier);
				if (previous != nullptr && previous->value != nullptr)
					error(name->location, "duplicate requires-expression parameter");
			}
			declare_parameter(local, clause, i, object);
			if (!expr.parameter_packs.empty())
				parameters.push_back(object);
		}
		scope = local;
		if (expr.pattern_parameters != nullptr)
			scope = parameter_pack_scope(local, *expr.pattern_parameters, expr.parameter_packs.data,
				expr.parameter_packs.size, parameters.data(), static_cast<uint32_t>(parameters.size()));
	}
	return true;
}

bool Analyzer::requirements_satisfied(const syntax::RequiresExpr& expr, Scope* scope)
{
	if (!requirement_parameters(expr, scope))
		return false;
	const auto defer = [&]() {
		const_cast<ExprFacts*>(expr.facts)->flags |= kValueDependentUse;
		return false;
	};
	if (template_depth_ != 0 && expr.parameters != nullptr)
		for (const Binding* parameter = scope->bindings; parameter != nullptr; parameter = parameter->next)
			if (parameter->type != nullptr && dependent_type(parameter->type))
				return defer();
	for (const syntax::Requirement& requirement : expr.requirements)
	{
		if (requirement.kind == syntax::RequirementKind::Type)
		{
			const Type* type = type_id(*requirement.type, scope);
			if (type == nullptr || failed())
				return false;
			if (template_depth_ != 0 && dependent_type(type))
				return defer();
			continue;
		}
		if (template_depth_ != 0 && instantiation_dependent(*requirement.expression, scope, true))
			return defer();
		if (requirement.kind == syntax::RequirementKind::Nested)
		{
			if (!constraint_satisfied(*requirement.expression, scope))
				return false;
			continue;
		}
		const ExprFacts* facts = typed_value(*requirement.expression, scope);
		if (facts == nullptr || failed())
			return false;
		if (requirement.is_noexcept && may_throw(*requirement.expression, 0))
			return false;
		if (requirement.return_constraint != nullptr)
			error(requirement.location, "return type constraint requires a concept");
	}
	return true;
}

bool Analyzer::constraint_satisfied(const syntax::Expr& expr, Scope* scope)
{
	// The parser's left-nested logical chains can be much deeper than
	// syntactic nesting. Visit each needed edge once without recursion;
	// do not even substitute the skipped operand.
	SmallList<const syntax::BinaryExpr*, 16> pending;
	const syntax::Expr* current = &expr;
	for (;;)
	{
		while (current->kind == syntax::ExprKind::Paren)
			current = static_cast<const syntax::ParenExpr*>(current)->inner;
		if (current->kind == syntax::ExprKind::Binary)
		{
			const syntax::BinaryExpr* binary = static_cast<const syntax::BinaryExpr*>(current);
			if (binary->op == TokenKind::OP_LAND || binary->op == TokenKind::OP_LOR)
			{
				pending.push_back(binary);
				current = binary->left;
				continue;
			}
		}
		bool value;
		if (soft_substitution_ == 0)
			value = atomic_constraint_satisfied(*current, scope);
		else
		{
			// A failed atom is false, without poisoning a disjunction's
			// other operand. Hard errors in demanded bodies still diagnose.
			SoftSubstitution substitution(*this);
			value = atomic_constraint_satisfied(*current, scope) && !substitution.failed();
		}
		current = nullptr;
		while (!pending.empty())
		{
			const syntax::BinaryExpr* binary = pending.back();
			pending.pop_back();
			if (value == (binary->op == TokenKind::OP_LAND))
			{
				current = binary->right;
				break;
			}
		}
		if (current == nullptr)
			return value;
	}
}

bool Analyzer::atomic_constraint_satisfied(const syntax::Expr& expr, Scope* scope)
{
	const ExprFacts* facts = typed(expr, scope);
	if (facts == nullptr || failed())
		return false;
	if (facts->type == nullptr || facts->type->unqualified != types_.fundamental(FundamentalType::Bool))
		error(expr.location, "a constraint must have type bool");
	Constant value;
	if (!integral_constant(expr, scope, value))
		error(expr.location, "a constraint must be a constant expression");
	return value.bits != 0;
}

} // namespace sema
