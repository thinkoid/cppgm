#include "sema/analyzer.h"

namespace sema {

// C++20 [dcl.type.auto.deduct]p2: the type deduced for a constrained
// placeholder (`C auto`, `C<A> decltype(auto)`) satisfies its type-constraint,
// with that type as the concept's first argument.

void Analyzer::note_placeholder_constraint(const void* owner, const syntax::DeclSpecifier* specifier)
{
	if (specifier == nullptr || specifier->kind != syntax::DeclSpecKind::ConstrainedAuto ||
		placeholder_constraint_index_.find(owner) != PointerMap::kMissing)
		return;
	placeholder_constraint_index_.set(owner, static_cast<uint32_t>(placeholder_constraints_.size()));
	placeholder_constraints_.push_back(specifier);
}

const syntax::DeclSpecifier* Analyzer::result_placeholder(
	const syntax::DeclSpecifier* written, const syntax::DeclaratorSuffix* suffix)
{
	// The constrained placeholder of a function's return type: the
	// declaration's own specifier, else its trailing return type's.
	if (written != nullptr && written->kind == syntax::DeclSpecKind::ConstrainedAuto)
		return written;
	if (suffix == nullptr)
		return nullptr;
	for (const syntax::FunctionQualifier& qualifier : suffix->qualifiers)
	{
		if (qualifier.kind != syntax::FunctionQualifierKind::TrailingReturn || qualifier.trailing == nullptr)
			continue;
		for (const syntax::DeclSpecifier& specifier : qualifier.trailing->specifiers)
			if (specifier.kind == syntax::DeclSpecKind::ConstrainedAuto)
				return &specifier;
	}
	return nullptr;
}

const syntax::DeclSpecifier* Analyzer::placeholder_constraint(const void* owner) const
{
	const uint32_t index = placeholder_constraint_index_.find(owner);
	return index == PointerMap::kMissing ? nullptr : placeholder_constraints_[index];
}

void Analyzer::check_placeholder_constraint(
	const syntax::DeclSpecifier* specifier, const Type* deduced, Scope* scope, uint32_t location)
{
	if (specifier == nullptr || specifier->kind != syntax::DeclSpecKind::ConstrainedAuto || deduced == nullptr)
		return;
	if (concept_constraint(*specifier->name, deduced, scope) == ConstraintStatus::Unsatisfied && !failed())
		error(location, "the deduced type does not satisfy the placeholder's type-constraint");
}

void Analyzer::check_result_constraint(const Type* deduced, uint32_t location)
{
	// The function's own declaration holds the constraint, else the
	// template or member the function was instantiated from. Its names are
	// those of the declaration's specifiers: the function's parameters do
	// not hide them.
	const FunctionEntity* function = body_->function;
	const syntax::DeclSpecifier* specifier = placeholder_constraint(function);
	for (int depth = 0; specifier == nullptr && depth < 64; ++depth)
	{
		const FunctionEntity* next = function->primary != nullptr && function->primary != function
			? function->primary
			: PatternOf(function);
		if (next == nullptr || next == function)
			return;
		function = next;
		specifier = placeholder_constraint(function);
	}
	check_placeholder_constraint(specifier, deduced, body_->function->scope->parent, location);
}

} // namespace sema
