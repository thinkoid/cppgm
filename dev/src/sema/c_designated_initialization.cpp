#include "sema/analyzer.h"

#include "sema/aggregates.h"

namespace sema {
namespace {

syntax::BracedInitList* EmptyList(Arena& arena, uint32_t location)
{
	auto* list = static_cast<syntax::BracedInitList*>(
		arena.allocate(sizeof(syntax::BracedInitList), alignof(syntax::BracedInitList)));
	*list = syntax::BracedInitList();
	list->kind = syntax::ExprKind::BracedInit;
	list->location = location;
	return list;
}

syntax::Expr* MergePath(Arena& arena, syntax::Expr* previous, syntax::Expr* value)
{
	if (previous == nullptr || value->kind != syntax::ExprKind::BracedInit ||
		!static_cast<syntax::BracedInitList*>(value)->c_designation_path)
		return value;
	if (previous->kind != syntax::ExprKind::BracedInit)
		throw SemanticError(value->location, "a nested designator overrides an aggregate expression");
	const auto& first = *static_cast<const syntax::BracedInitList*>(previous);
	const auto& second = *static_cast<const syntax::BracedInitList*>(value);
	auto* merged = EmptyList(arena, value->location);
	const uint32_t count = first.elements.size + second.elements.size;
	merged->elements = { arena.allocate_array<syntax::Expr*>(count), count };
	if (first.designators != nullptr || second.designators != nullptr)
		merged->designators = arena.allocate_array<const Identifier*>(count);
	if (first.array_designators != nullptr || second.array_designators != nullptr)
		merged->array_designators = arena.allocate_array<syntax::Expr*>(count);
	for (uint32_t i = 0; i < count; ++i)
	{
		const auto& from = i < first.elements.size ? first : second;
		const uint32_t at = i < first.elements.size ? i : i - first.elements.size;
		merged->elements.data[i] = from.elements[at];
		if (merged->designators != nullptr)
			merged->designators[i] = from.designators != nullptr ? from.designators[at] : nullptr;
		if (merged->array_designators != nullptr)
			merged->array_designators[i] = from.array_designators != nullptr ? from.array_designators[at] : nullptr;
	}
	merged->c_designation_path = true;
	return merged;
}

} // namespace

void Analyzer::c_designated_list(const syntax::BracedInitList& list, const Type* type, Scope* scope)
{
	type = type->unqualified;
	const ClassEntity* record = ClassOf(type);
	const bool array = type->kind == TypeKind::Array;
	if (!array && (record == nullptr || !require_complete(record)))
		error(list.location, "a C designator requires an array or complete record");
	std::vector<const DataMember*> members;
	for (const DataMember* member = record != nullptr ? record->members : nullptr; member != nullptr;
		member = member->next)
		if (!member->bit_field || member->variable->name != nullptr)
			members.push_back(member);
	const bool variant = record != nullptr && record->key == TokenKind::KW_UNION;
	std::vector<syntax::Expr*> elements;
	uint64_t next = 0;
	bool nested = false;
	const DataMember* selected = nullptr;
	for (uint32_t i = 0; i < list.elements.size; ++i)
	{
		const Identifier* name = list.designators != nullptr ? list.designators[i] : nullptr;
		syntax::Expr* index = list.array_designators != nullptr ? list.array_designators[i] : nullptr;
		if (name != nullptr)
		{
			if (array)
				error(list.elements[i]->location, "a member designator initializes an array");
			next = 0;
			while (next < members.size() && members[next]->variable->name != name)
				++next;
			if (next == members.size())
				error(list.elements[i]->location, "a C designator names no direct record member");
		}
		else if (index != nullptr)
		{
			if (!array)
				error(index->location, "an array designator initializes a record");
			Constant value;
			if (typed(*index, scope) == nullptr || !integral_constant(*index, scope, value))
				error(index->location, "a C array designator requires an integer constant expression");
			IntegralKind kind;
			if (IntegralKindOf(value.type, kind) && kind.is_signed && static_cast<int64_t>(value.bits) < 0)
				error(index->location, "a C array designator has a negative index");
			next = value.bits;
		}
		else if (nested)
			error(list.elements[i]->location, "positional continuation of a nested designator is unsupported");
		const uint64_t bound = array ? type->bound : members.size();
		if ((bound != 0 && next >= bound) || next >= UINT32_MAX || (!array && next >= members.size()))
			error(list.elements[i]->location, "a C designator is outside its aggregate");
		const size_t position = variant ? 0 : static_cast<size_t>(next);
		if (elements.size() <= position)
			elements.resize(position + 1, nullptr);
		if (variant)
		{
			if (selected != members[next])
				elements[0] = nullptr;
			selected = members[next];
		}
		syntax::Expr* value = list.elements[i];
		nested = value->kind == syntax::ExprKind::BracedInit &&
			static_cast<const syntax::BracedInitList*>(value)->c_designation_path;
		elements[position] = MergePath(arena_, elements[position], value);
		next = variant ? members.size() : next + 1;
	}
	for (syntax::Expr*& element : elements)
		if (element == nullptr)
			element = EmptyList(arena_, list.location);
	syntax::BracedInitList& normalized = const_cast<syntax::BracedInitList&>(list);
	normalized.elements = { arena_.copy_array(elements.data(), elements.size()),
		static_cast<uint32_t>(elements.size()) };
	normalized.designators = nullptr;
	normalized.array_designators = nullptr;
	normalized.union_member = selected;
}

} // namespace sema
