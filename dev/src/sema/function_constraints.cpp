#include "sema/instantiation_context.h"

namespace sema {

const ConstraintPredicate* Analyzer::function_constraint(const FunctionEntity* function) const
{
	if (!cxx20_ || function == nullptr)
		return nullptr;
	if (function->primary != nullptr)
		function = function->primary;
	const uint32_t index = function_constraint_index_.find(function);
	return index == PointerMap::kMissing ? template_constraint(HeadOf(function)) : template_constraints_[index];
}

Scope* Analyzer::constraint_prototype(const DeclaratorInfo& info)
{
	const Type* type = info.type->canonical;
	Scope* prototype = prototype_scope(*info.parameters, type->params, type->param_count, info.after);
	prototype->dumped = false;
	return prototype;
}

void Analyzer::attach_function_constraint(FunctionEntity* function, const DeclaratorInfo& info)
{
	const syntax::Expr* source = syntax::RequiresClause(info.function_suffix);
	if (!cxx20_ || source == nullptr || function_constraint_index_.find(function) != PointerMap::kMissing)
		return;
	bool templated = function->templated;
	for (const Scope* scope = function->owner; scope != nullptr; scope = scope->parent)
		if (scope->kind == ScopeKind::Class && scope->entity != nullptr)
			templated = templated || static_cast<const ClassEntity*>(scope->entity)->templ != nullptr;
	if (!templated)
		error(source->location, "a trailing requires-clause requires a templated function");
	if (function->is_virtual)
		error(source->location, "a virtual function cannot have a requires-clause");
	ConstraintPredicate* predicate = const_cast<ConstraintPredicate*>(template_constraint(HeadOf(function)));
	uint32_t index;
	if (predicate == nullptr)
	{
		predicate = new_entity<ConstraintPredicate>(EntityKind::ConstraintPredicate, nullptr,
			function->templated ? template_scope_->parent : info.after, types_.fundamental(FundamentalType::Bool));
		predicate->head = HeadOf(function);
		predicate->parameters = function->templated ? template_scope_ : nullptr;
		predicate->location = source->location;
		index = static_cast<uint32_t>(template_constraints_.size());
		template_constraints_.push_back(predicate);
		if (predicate->head != nullptr)
			template_constraint_index_.set(predicate->head, index);
	}
	else
		index = template_constraint_index_.find(predicate->head);
	predicate->trailing = source;
	predicate->prototype = constraint_prototype(info);
	if (function->member && !function->is_static)
	{
		const uint32_t closure = graph_.closure_index.find(function->owner->entity);
		predicate->this_type = closure != PointerMap::kMissing
			? (body_ != nullptr ? body_->this_type : nullptr)
			: types_.pointer(types_.qualified(function->owner->entity->type, function->type->function_cv));
	}
	function_constraint_index_.set(function, index);
	// Member clauses see the complete class, including later declarations.
	if (function->owner->kind != ScopeKind::Class)
		check_constraint_definition(*source, predicate->prototype);
}

bool Analyzer::function_constraints_equivalent(const FunctionEntity* function, const DeclaratorInfo& info)
{
	const ConstraintPredicate* predicate = function_constraint(function);
	const syntax::Expr* earlier = predicate == nullptr ? nullptr : predicate->trailing;
	const syntax::Expr* next = syntax::RequiresClause(info.function_suffix);
	if (earlier == nullptr || next == nullptr)
		return earlier == next;
	BodyContext context = BodyContext();
	BodyContext* saved = body_;
	context.this_type = predicate->this_type;
	body_ = &context;
	const bool result = constraints_equivalent(earlier, predicate->prototype, next, constraint_prototype(info));
	body_ = saved;
	return result;
}

Scope* Analyzer::constraint_trailing_scope(const ConstraintPredicate* predicate, const TypeList& arguments)
{
	return predicate->head == nullptr
		? predicate->prototype
		: substituted_scope(predicate->prototype, substitution_of(predicate->head, arguments.data()));
}

bool Analyzer::function_constraints_satisfied(const FunctionEntity* function)
{
	const ConstraintPredicate* predicate = function_constraint(function);
	if (predicate == nullptr)
		return true;
	TypeList arguments;
	if (function->primary != nullptr)
		for (uint32_t i = 0; i < HeadOf(function->primary)->count; ++i)
			arguments.push_back(ArgumentsOf(function)[i]);
	return predicate_result(predicate, arguments, 0) != ConstraintStatus::Unsatisfied;
}

bool Analyzer::function_constraints_subsume(const FunctionEntity* first, const FunctionEntity* second)
{
	return predicates_subsume(function_constraint(first), function_constraint(second));
}

} // namespace sema
