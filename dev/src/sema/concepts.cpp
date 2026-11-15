#include "sema/template_packs.h"

#include "syntax/ast_clone.h"

namespace sema {

void Analyzer::concept_declaration(const syntax::ConceptDecl& decl, Scope* scope)
{
	if (template_list_ == nullptr || scope != template_scope_ || template_list_->parameters.empty())
		error(decl.location, "a concept definition requires a template parameter list");
	if (current_template_constraint() != nullptr || HasTypeConstraints(*template_list_))
		error(decl.location, "a concept definition cannot have associated constraints");
	Scope* home = declaration_scope(scope);
	if (home->kind != ScopeKind::Namespace)
		error(decl.location, "a concept must be defined at namespace scope");
	const NameEntry* previous = names_.find(home, decl.name);
	if (previous != nullptr && (previous->value != nullptr || previous->type != nullptr))
		error(decl.location, "a concept name is already declared");
	for (uint32_t i = 0; i + 1 < template_entities_.size(); ++i)
		if (template_entities_[i]->pack)
			error(decl.location, "a concept parameter pack must be last");
	ConceptEntity* definition = new_entity<ConceptEntity>(
		EntityKind::Concept, decl.name, home, types_.fundamental(FundamentalType::Bool));
	definition->head = template_head(*template_list_, template_scope_, template_entities_);
	definition->parameters = scope;
	definition->definition = decl.constraint;
	definition->location = decl.location;
	// Check the definition's non-dependent obligations without evaluating
	// its constraint or demanding function bodies. Its name is not yet in
	// scope in its own constraint-expression.
	check_constraint_definition(*decl.constraint, scope);
	Binding* binding = new_binding(BindingKind::Concept, decl.name, definition, definition->type);
	print_in(home, binding);
	declare_in(home, binding);
}

ExprFacts* Analyzer::concept_reference(const syntax::IdExpr& expr, Scope* scope)
{
	if (expr.facts != nullptr && (expr.facts->flags & kFolded) != 0)
		return const_cast<ExprFacts*>(expr.facts);
	const syntax::Name& name = *expr.name;
	const LookupResult found = lookup_name(name, scope, LookupFilter::Ordinary);
	if (failed())
		return nullptr;
	if (!found.found() || found.ambiguous || found.binding->kind != BindingKind::Concept)
	{
		substitution_error(name.location, "a concept-id must name a concept");
		return nullptr;
	}
	if (!name.last().has_arguments)
	{
		substitution_error(name.location, "a concept name requires template arguments");
		return nullptr;
	}
	const ConceptEntity* definition = static_cast<const ConceptEntity*>(found.binding->entity);
	TypeList arguments;
	if (!concept_arguments(definition, name.last(), scope, arguments))
		return nullptr;
	ExprFacts* facts = new_facts(expr, definition->type, ValueCategory::PRValue);
	facts->entity = definition;
	const ConstraintStatus status = concept_result(definition, arguments, name.location);
	if (status == ConstraintStatus::Dependent)
	{
		facts->flags |= kValueDependentUse;
		names_.note_value_parameter_use();
	}
	else
	{
		facts->value = status == ConstraintStatus::Satisfied;
		facts->flags |= kFolded;
	}
	return facts;
}

bool Analyzer::concept_arguments(const ConceptEntity* definition, const syntax::NameComponent& component, Scope* scope,
	TypeList& arguments, const Type* leading_type)
{
	TypeList given;
	if (!template_arguments(component, scope, given, definition->head, leading_type) || failed())
		return false;
	default_template_arguments(definition->head, given, component.location);
	if (failed())
		return false;
	if (!match_template_arguments(
			definition->head, given.data(), static_cast<uint32_t>(given.size()), arguments, false, component.location))
		return substitution_error(component.location, "concept arguments do not match its parameters");
	return true;
}

ConstraintStatus Analyzer::concept_result(const ConceptEntity* definition, const TypeList& arguments, uint32_t location)
{
	return predicate_result(definition, arguments, location);
}

ConstraintStatus Analyzer::predicate_result(
	const ConstraintPredicate* definition, const TypeList& arguments, uint32_t location)
{
	for (const Type* argument : arguments)
		if (dependent_type(argument))
			return ConstraintStatus::Dependent;
	return predicate_satisfied(definition, arguments, location) ? ConstraintStatus::Satisfied
																: ConstraintStatus::Unsatisfied;
}

ConstraintStatus Analyzer::concept_constraint(const syntax::Name& name, const Type* type, Scope* scope)
{
	const LookupResult found = lookup_name(name, scope, LookupFilter::Ordinary);
	if (failed())
		return ConstraintStatus::Unsatisfied;
	const ConceptEntity* definition = found.found() && !found.ambiguous && found.binding->kind == BindingKind::Concept
		? static_cast<const ConceptEntity*>(found.binding->entity)
		: nullptr;
	if (definition == nullptr || definition->head->count == 0 || definition->head->parameters[0]->non_type ||
		definition->head->parameters[0]->template_template)
	{
		substitution_error(name.location, "a type-constraint must name a type concept");
		return ConstraintStatus::Unsatisfied;
	}
	TypeList arguments;
	if (!concept_arguments(definition, name.last(), scope, arguments, type))
		return ConstraintStatus::Unsatisfied;
	return concept_result(definition, arguments, name.location);
}

bool Analyzer::predicate_satisfied(const ConstraintPredicate* definition, const TypeList& arguments, uint32_t location)
{
	SpecializationKey key = { definition, arguments.data(), static_cast<uint32_t>(arguments.size()) };
	if (ConceptEvaluation** known = concept_evaluations_.find(key))
	{
		if ((*known)->state == FactState::InProgress)
			error(location, "recursive concept satisfaction");
		return (*known)->satisfied;
	}
	ConceptEvaluation* evaluation = arena_.allocate_array<ConceptEvaluation>(1);
	evaluation->state = FactState::InProgress;
	key.arguments = arena_.copy_array(arguments.data(), arguments.size());
	concept_evaluations_.insert(key, evaluation);
	// The cache key's concept owns a fixed lexical definition. Bound
	// argument frames are overlays, and only fact-bearing syntax is copied.
	InstantiationContext context(*this, enter_instantiation(instantiation_depth_ + 1, location), false,
		definition->head != nullptr ? definition->head->ordinal : NameLookup::kNoLimit);
	SoftSubstitution substitution(*this);
	Scope* frame = definition->head != nullptr
		? instantiation_frame(definition->parameters, key.arguments, key.count, definition->owner)
		: definition->owner;
	++unevaluated_;
	evaluation->satisfied = type_constraints_satisfied(definition, arguments, frame);
	if (evaluation->satisfied && definition->definition != nullptr)
		evaluation->satisfied = constraint_satisfied(*definition->definition, frame);
	if (evaluation->satisfied && definition->trailing != nullptr)
	{
		BodyContext body = BodyContext();
		body.this_type = definition->this_type;
		body_ = &body;
		evaluation->satisfied = constraint_satisfied(
			*definition->trailing, constraint_trailing_scope(definition, arguments));
		body_ = nullptr;
	}
	evaluation->satisfied = evaluation->satisfied && !substitution.failed();
	--unevaluated_;
	evaluation->state = FactState::Done;
	return evaluation->satisfied;
}

} // namespace sema
