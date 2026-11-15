#include "sema/analyzer.h"

#include <cstring>

#include "lex/identifier_table.h"
#include "support/internal_error.h"

namespace sema {
namespace {

template<typename T>
T* CopyNode(Arena& arena, const syntax::Expr* source)
{
	return new (arena.allocate(sizeof(T), alignof(T))) T(*static_cast<const T*>(source));
}

// Each use of an implied subobject gets its own operand conversion. Only
// generated parameter/base/member/subscript paths reach this helper.
syntax::Expr* SubobjectUse(Arena& arena, const syntax::Expr* source)
{
	syntax::Expr* result = nullptr;
	switch (source->kind)
	{
	case syntax::ExprKind::Id:
		result = CopyNode<syntax::IdExpr>(arena, source);
		break;
	case syntax::ExprKind::KeywordLiteral:
		result = CopyNode<syntax::KeywordLiteralExpr>(arena, source);
		break;
	case syntax::ExprKind::Cast:
	{
		syntax::CastExpr* cast = CopyNode<syntax::CastExpr>(arena, source);
		cast->operand = SubobjectUse(arena, cast->operand);
		result = cast;
		break;
	}
	case syntax::ExprKind::Unary:
	{
		syntax::UnaryExpr* unary = CopyNode<syntax::UnaryExpr>(arena, source);
		unary->operand = SubobjectUse(arena, unary->operand);
		result = unary;
		break;
	}
	case syntax::ExprKind::Member:
	{
		syntax::MemberExpr* member = CopyNode<syntax::MemberExpr>(arena, source);
		member->base = SubobjectUse(arena, member->base);
		result = member;
		break;
	}
	case syntax::ExprKind::Subscript:
	{
		syntax::SubscriptExpr* element = CopyNode<syntax::SubscriptExpr>(arena, source);
		element->base = SubobjectUse(arena, element->base);
		element->index = SubobjectUse(arena, element->index);
		result = element;
		break;
	}
	default:
		throw InternalError("unexpected implied comparison subobject");
	}
	if (source->facts != nullptr && (source->facts->flags & kImplicit) != 0)
	{
		ExprFacts* facts = new (arena.allocate(sizeof(ExprFacts), alignof(ExprFacts))) ExprFacts(*source->facts);
		facts->conversion = nullptr;
		result->facts = facts;
	}
	else
		result->facts = nullptr;
	return result;
}

} // namespace

syntax::Expr* Analyzer::comparison_fallback(
	const Type* result, syntax::Expr* left, syntax::Expr* right, Scope* scope, uint32_t location)
{
	const ClassEntity* cls = ClassOf(result);
	const char* name = cls != nullptr && cls->name != nullptr ? cls->name->spelling : "";
	const unsigned rank = std::strcmp(name, "strong_ordering") == 0 ? 0
		: std::strcmp(name, "weak_ordering") == 0                   ? 1
		: std::strcmp(name, "partial_ordering") == 0                ? 2
																	: 3;
	if (rank == 3 || comparison_category(rank, location) != cls)
		return nullptr;
	const auto value = [&](const char* name) {
		return const_cast<syntax::Expr*>(comparison_value(cls, name, scope, location));
	};
	const auto choice = [&](TokenKind op, bool reverse, syntax::Expr* yes, syntax::Expr* no) {
		syntax::BinaryExpr* compare = new (arena_.allocate(sizeof(syntax::BinaryExpr), alignof(syntax::BinaryExpr)))
			syntax::BinaryExpr();
		compare->kind = syntax::ExprKind::Binary;
		compare->location = location;
		compare->op = op;
		compare->left = SubobjectUse(arena_, reverse ? right : left);
		compare->right = SubobjectUse(arena_, reverse ? left : right);
		syntax::ConditionalExpr* condition = new (arena_.allocate(
			sizeof(syntax::ConditionalExpr), alignof(syntax::ConditionalExpr))) syntax::ConditionalExpr();
		condition->kind = syntax::ExprKind::Conditional;
		condition->location = location;
		condition->condition = compare;
		condition->then_expr = yes;
		condition->else_expr = no;
		return condition;
	};
	syntax::Expr* result_expr = rank == 2 ? choice(TokenKind::OP_LT, true, value("greater"), value("unordered"))
										  : value("greater");
	result_expr = choice(TokenKind::OP_LT, false, value("less"), result_expr);
	return choice(TokenKind::OP_EQ, false, value(rank == 0 ? "equal" : "equivalent"), result_expr);
}

} // namespace sema
