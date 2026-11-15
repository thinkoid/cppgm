#include "sema/analyzer.h"

#include <cstring>
#include <string>

#include "lex/identifier_table.h"
#include "sema/instantiation_context.h"

namespace sema {
namespace {

template<typename T>
T* Node(Arena& arena, uint32_t location)
{
	T* node = new (arena.allocate(sizeof(T), alignof(T))) T();
	node->location = location;
	return node;
}

syntax::BinaryExpr* Binary(Arena& arena, TokenKind op, syntax::Expr* left, syntax::Expr* right, uint32_t location)
{
	syntax::BinaryExpr* expr = Node<syntax::BinaryExpr>(arena, location);
	expr->kind = syntax::ExprKind::Binary;
	expr->op = op;
	expr->left = left;
	expr->right = right;
	return expr;
}

} // namespace

syntax::Expr* Analyzer::comparison_cast(syntax::Expr* operand, const Type* type, uint32_t location)
{
	// A semantic type operand lets the ordinary static_cast checker consume
	// a type already established by defaulted-comparison deduction.
	syntax::KeywordLiteralExpr* type_operand = Node<syntax::KeywordLiteralExpr>(arena_, location);
	type_operand->kind = syntax::ExprKind::KeywordLiteral;
	type_operand->keyword = TokenKind::KW_NULLPTR;
	new_facts(*type_operand, type, ValueCategory::PRValue)->flags = kImplicit;
	syntax::DeclSpecifier specifier = {};
	specifier.kind = syntax::DeclSpecKind::Decltype;
	specifier.operand = type_operand;
	syntax::CastExpr* cast = Node<syntax::CastExpr>(arena_, location);
	cast->kind = syntax::ExprKind::Cast;
	cast->cast = TokenKind::KW_STATIC_CAST;
	cast->type = Node<syntax::TypeId>(arena_, location);
	cast->type->specifiers = syntax::Slice<syntax::DeclSpecifier>{ arena_.copy_array(&specifier, 1), 1 };
	cast->operand = operand;
	return cast;
}

void Analyzer::comparison_scalar(FunctionEntity* function, const Type* type, syntax::Expr* left, syntax::Expr* right,
	Scope* scope, std::vector<syntax::Stmt*>& statements, uint32_t location, uint8_t& category, bool& eligible,
	bool& nothrow)
{
	// Deduce the demanded comparison's category from typed subobject
	// operands. No value is read and array extent does not affect this work.
	syntax::IdExpr* operands = arena_.allocate_array<syntax::IdExpr>(2);
	syntax::BinaryExpr& probe = *Node<syntax::BinaryExpr>(arena_, location);
	probe.kind = syntax::ExprKind::Binary;
	probe.location = location;
	probe.op = function->operator_token;
	for (unsigned i = 0; i < 2; ++i)
	{
		operands[i].kind = syntax::ExprKind::Id;
		operands[i].location = location;
		operands[i].name = implicit_name(special_key("__comparison_operand"), location);
		new_facts(operands[i], type, ValueCategory::LValue)->flags = kImplicit;
	}
	probe.left = &operands[0];
	probe.right = &operands[1];
	const Type* result_type = nullptr;
	{
		SoftSubstitution substitution(*this);
		const uint32_t saved_throwing = potentially_throwing_;
		++unevaluated_;
		ExprFacts* result = typed(probe, scope);
		--unevaluated_;
		potentially_throwing_ = saved_throwing;
		if (result != nullptr && !substitution.failed())
		{
			result_type = result->type;
			if ((result->flags & kOperatorCall) != 0)
			{
				const FunctionEntity* selected = static_cast<const FunctionEntity*>(result->entity);
				eligible = eligible && selected->is_constexpr;
				nothrow = nothrow && selected->nothrow;
			}
		}
	}
	syntax::Expr* comparison = result_type != nullptr ? Binary(arena_, function->operator_token, left, right, location)
		: function->operator_token == TokenKind::OP_SPACESHIP && !holds_auto(function->type->canonical->element)
		? comparison_fallback(function->type->canonical->element, left, right, scope, location)
		: nullptr;
	if (comparison == nullptr)
	{
		function->deleted = true;
		return;
	}
	if (function->operator_token == TokenKind::OP_SPACESHIP)
	{
		const Type* declared = function->type->canonical->element;
		if (holds_auto(declared))
		{
			const ClassEntity* cls = ClassOf(result_type);
			const char* name = cls != nullptr && cls->name != nullptr ? cls->name->spelling : "";
			const unsigned rank = std::strcmp(name, "strong_ordering") == 0 ? 0
				: std::strcmp(name, "weak_ordering") == 0                   ? 1
				: std::strcmp(name, "partial_ordering") == 0                ? 2
																			: 3;
			if (rank == 3 || comparison_category(rank, location) != cls)
			{
				function->deleted = true;
				return;
			}
			if (rank > category)
				category = static_cast<uint8_t>(rank);
		}
		else
			comparison = comparison_cast(comparison, declared, location);
		const std::string spelling = "__comparison_result" + std::to_string(statements.size());
		const Identifier* name = identifiers_.intern(spelling.data(), static_cast<uint32_t>(spelling.size()));
		syntax::SimpleDecl* declaration = Node<syntax::SimpleDecl>(arena_, location);
		declaration->kind = syntax::DeclKind::Simple;
		syntax::DeclSpecifier spec = {};
		spec.kind = syntax::DeclSpecKind::Keyword;
		spec.keyword = TokenKind::KW_AUTO;
		declaration->specifiers = syntax::Slice<syntax::DeclSpecifier>{ arena_.copy_array(&spec, 1), 1 };
		syntax::InitDeclarator init = {};
		init.declarator = Node<syntax::Declarator>(arena_, location);
		init.declarator->name = implicit_name(name, location);
		init.initializer = Node<syntax::Initializer>(arena_, location);
		init.initializer->kind = syntax::InitializerKind::Assign;
		init.initializer->expression = comparison;
		declaration->declarators = syntax::Slice<syntax::InitDeclarator>{ arena_.copy_array(&init, 1), 1 };
		syntax::DeclarationStmt* statement = Node<syntax::DeclarationStmt>(arena_, location);
		statement->kind = syntax::StmtKind::Declaration;
		statement->declaration = declaration;
		statements.push_back(statement);
		const auto use = [&]() {
			syntax::IdExpr* result = Node<syntax::IdExpr>(arena_, location);
			result->kind = syntax::ExprKind::Id;
			result->name = implicit_name(name, location);
			return result;
		};
		syntax::IfStmt* check = Node<syntax::IfStmt>(arena_, location);
		check->kind = syntax::StmtKind::If;
		syntax::Expr* zero = implicit_constant(types_.fundamental(FundamentalType::Int), 0, location);
		facts_of(*zero)->flags |= kNullLiteral;
		check->condition.expression = Binary(arena_, TokenKind::OP_NE, use(), zero, location);
		syntax::ValueStmt* result = Node<syntax::ValueStmt>(arena_, location);
		result->kind = syntax::StmtKind::Return;
		result->value = use();
		check->then_branch = result;
		statements.push_back(check);
		return;
	}
	syntax::UnaryExpr* unequal = Node<syntax::UnaryExpr>(arena_, location);
	unequal->kind = syntax::ExprKind::Unary;
	unequal->op = TokenKind::OP_LNOT;
	unequal->operand = comparison;
	syntax::IfStmt* check = Node<syntax::IfStmt>(arena_, location);
	check->kind = syntax::StmtKind::If;
	check->condition.expression = unequal;
	syntax::ValueStmt* result = Node<syntax::ValueStmt>(arena_, location);
	result->kind = syntax::StmtKind::Return;
	result->value = implicit_constant(types_.fundamental(FundamentalType::Bool), 0, location);
	check->then_branch = result;
	statements.push_back(check);
}

} // namespace sema
