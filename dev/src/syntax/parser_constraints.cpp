#include "syntax/parser.h"

#include "lex/gnu_builtins.h"
#include "support/small_list.h"

namespace syntax {

Name* Parser::parse_type_constraint()
{
	if (!cxx20_ || (!at_identifier() && !at(TokenKind::OP_COLON2)))
		return nullptr;
	// An unqualified ordinary type is the common non-type-parameter
	// spelling. Its existing binding rules out a concept without parsing.
	if (at_identifier() && !at(TokenKind::OP_COLON2, 1) &&
		scopes_.lookup(tok().identifier, false).category != NameCategory::Concept)
		return nullptr;
	Tentative tentative(*this);
	NameInfo info;
	Name* name = parse_name(NameMode::Expression, info);
	if (name == nullptr || info.category != NameCategory::Concept)
		return nullptr;
	tentative.commit();
	return name;
}

Decl* Parser::parse_concept_definition()
{
	ConceptDecl* decl = make<ConceptDecl>(DeclKind::Concept, location());
	next();
	if (!at_identifier())
	{
		fail();
		return nullptr;
	}
	decl->name = tok().identifier;
	next();
	if (!expect(TokenKind::OP_ASS))
		return nullptr;
	decl->constraint = parse_binary(3);
	if (decl->constraint == nullptr || !expect(TokenKind::OP_SEMICOLON))
		return nullptr;
	scopes_.declare(declaration_scope(), decl->name, NameBinding{ NameCategory::Concept, false, nullptr });
	pending_template_ = false;
	return decl;
}

Expr* Parser::parse_constraint_operand()
{
	// The operands are primary expressions, so a name is an id-expression:
	// braces after it open the constrained function's body and do not
	// construct a value of a type that the name might denote.
	GnuTrait trait;
	if (!at(TokenKind::OP_COLON2) && (!at_identifier() || (at_trait(trait) && !IsGnuTypeTransform(trait))))
		return parse_primary_expression();
	const uint32_t start = location();
	NameInfo info;
	Name* name = parse_name(NameMode::Expression, info);
	return name == nullptr ? nullptr : primary_from_name(name, info, start, true);
}

Expr* Parser::parse_constraint_expression(bool conjunction)
{
	// A requires-clause uses primary expressions joined by && and ||.
	// Calls and comparisons must be parenthesized; a concept-id and a
	// requires-expression are already primary expressions.
	Expr* left = conjunction ? parse_constraint_operand() : parse_constraint_expression(true);
	if (left == nullptr)
		return nullptr;
	const TokenKind op = conjunction ? TokenKind::OP_LAND : TokenKind::OP_LOR;
	while (at(op))
	{
		const ParseToken token = tok();
		next();
		Expr* right = conjunction ? parse_constraint_operand() : parse_constraint_expression(true);
		if (right == nullptr)
			return nullptr;
		BinaryExpr* binary = make<BinaryExpr>(ExprKind::Binary, left->location);
		binary->op = op;
		binary->alternative = token.spelling.length != 0 && token.spelling.text[0] >= 'a' &&
			token.spelling.text[0] <= 'z';
		binary->left = left;
		binary->right = right;
		left = binary;
	}
	return left;
}

Expr* Parser::parse_requires_expression()
{
	NestingGuard nesting(*this);
	RequiresExpr* expr = make<RequiresExpr>(ExprKind::Requires, location());
	expr->parameters = nullptr;
	next();
	Scope* outer = scopes_.current();
	Scope* saved_parameters = parameter_scope_;
	const bool saved_angle = angle_;
	angle_ = false;
	const auto body = [&]() -> Expr* {
		if (at(TokenKind::OP_LPAREN))
		{
			expr->parameters = parse_parameter_clause(nullptr, true);
			if (expr->parameters == nullptr)
				return nullptr;
			if (expr->parameters->ellipsis || expr->parameters->has_defaults)
			{
				fail();
				return nullptr;
			}
			scopes_.set_current(parameter_scope_);
		}
		if (!expect(TokenKind::OP_LBRACE))
			return nullptr;
		SmallList<Requirement, 4> requirements;
		do
		{
			Requirement requirement = {};
			if (!parse_requirement(requirement))
				return nullptr;
			requirements.push_back(requirement);
		} while (!at(TokenKind::OP_RBRACE));
		next();
		expr->requirements = { arena_.copy_array(requirements.data(), requirements.size()),
			static_cast<uint32_t>(requirements.size()) };
		return expr;
	};
	Expr* result = body();
	angle_ = saved_angle;
	parameter_scope_ = saved_parameters;
	scopes_.set_current(outer);
	return result;
}

bool Parser::parse_requirement(Requirement& requirement)
{
	requirement.location = location();
	if (accept(TokenKind::KW_TYPENAME))
	{
		requirement.kind = RequirementKind::Type;
		NameInfo info;
		Name* name = parse_name(NameMode::Type, info);
		if (name == nullptr)
			return false;
		// The requirement kind retains the introducer. Only a qualified
		// name needs typename's dependent-type lookup rule; an unqualified
		// type-name is allowed here even though a typename-specifier is not.
		name->typename_keyword = name->qualified();
		DeclSpecifier specifier = {};
		specifier.kind = DeclSpecKind::Name;
		specifier.location = requirement.location;
		specifier.name = name;
		requirement.type = make<TypeId>();
		requirement.type->location = requirement.location;
		requirement.type->declarator = nullptr;
		requirement.type->specifiers = { arena_.copy_array(&specifier, 1), 1 };
	}
	else if (accept(TokenKind::KW_REQUIRES))
	{
		requirement.kind = RequirementKind::Nested;
		requirement.expression = parse_binary(3);
		if (requirement.expression == nullptr)
			return false;
	}
	else
	{
		const bool compound = accept(TokenKind::OP_LBRACE);
		requirement.kind = compound ? RequirementKind::Compound : RequirementKind::Simple;
		requirement.expression = parse_expression();
		if (requirement.expression == nullptr)
			return false;
		if (compound)
		{
			if (!expect(TokenKind::OP_RBRACE))
				return false;
			requirement.is_noexcept = accept(TokenKind::KW_NOEXCEPT);
			if (accept(TokenKind::OP_ARROW))
			{
				NameInfo info;
				requirement.return_constraint = parse_name(NameMode::Expression, info);
				if (requirement.return_constraint == nullptr)
					return false;
			}
		}
	}
	return expect(TokenKind::OP_SEMICOLON);
}

} // namespace syntax
