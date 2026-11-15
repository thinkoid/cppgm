#include "sema/analyzer.h"

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

bool Analyzer::default_comparison(FunctionEntity* function, bool first, uint32_t location)
{
	const Type* type = function->type->canonical;
	const ClassEntity* cls = function->member && function->owner->kind == ScopeKind::Class
		? static_cast<const ClassEntity*>(function->owner->entity)
		: function->befriending != nullptr ? function->befriending->entity
										   : nullptr;
	if (cls == nullptr || !first || type->variadic || function->is_static ||
		(function->member &&
			(type->param_count != 1 || type->function_cv != kConst || type->ref == RefQualifier::RValue)) ||
		(!function->member && type->param_count != 2))
		error(location, "invalid defaulted comparison declaration");
	for (uint32_t i = 0; i < type->param_count; ++i)
	{
		const Type* parameter = type->params[i];
		const bool reference = parameter->kind == TypeKind::LValueReference &&
			parameter->element == types_.qualified(cls->type, kConst);
		if (!(reference || (!function->member && parameter == cls->type)) || (i != 0 && parameter != type->params[0]) ||
			(function->default_arguments != nullptr && function->default_arguments[i] != nullptr))
			error(location, "defaulted comparison parameters must be matching class values or const references");
	}
	if (function->operator_token != TokenKind::OP_SPACESHIP &&
		type->element != types_.fundamental(FundamentalType::Bool))
		error(location, "a defaulted equality comparison must return bool");
	function->defined = true;
	function->synthesized = true;
	function->defaulted = true;
	function->is_inline = true;
	function->inline_member = true;
	// Give unnamed parameters stable internal names in the implied body.
	syntax::ParameterClause* parameters = Node<syntax::ParameterClause>(arena_, location);
	parameters->parameters.data = arena_.allocate_array<syntax::ParameterDeclaration*>(type->param_count);
	parameters->parameters.size = type->param_count;
	for (uint32_t i = 0; i < type->param_count; ++i)
	{
		syntax::ParameterDeclaration* parameter = Node<syntax::ParameterDeclaration>(arena_, location);
		parameter->declarator = Node<syntax::Declarator>(arena_, location);
		parameter->declarator->name = implicit_name(
			special_key(i == 0 ? "__comparison_left" : "__comparison_right"), location);
		parameters->parameters[i] = parameter;
	}
	function->parameters = parameters;
	syntax::FunctionBody* body = new (arena_.allocate(sizeof(syntax::FunctionBody), alignof(syntax::FunctionBody)))
		syntax::FunctionBody();
	body->body = Node<syntax::CompoundStmt>(arena_, location);
	body->body->kind = syntax::StmtKind::Compound;
	define_function(function, function->type, parameters, *body, cls->scope, cls->scope);
	return true;
}

syntax::Expr* Analyzer::comparison_object(FunctionEntity* function, unsigned index, Scope* scope, uint32_t location)
{
	if (function->member && index == 0)
	{
		syntax::KeywordLiteralExpr* self = Node<syntax::KeywordLiteralExpr>(arena_, location);
		self->kind = syntax::ExprKind::KeywordLiteral;
		self->keyword = TokenKind::KW_THIS;
		syntax::UnaryExpr* object = Node<syntax::UnaryExpr>(arena_, location);
		object->kind = syntax::ExprKind::Unary;
		object->op = TokenKind::OP_STAR;
		object->operand = self;
		typed(*object, scope);
		return object;
	}
	syntax::IdExpr* object = Node<syntax::IdExpr>(arena_, location);
	object->kind = syntax::ExprKind::Id;
	object->name = implicit_name(
		special_key(function->member || index == 0 ? "__comparison_left" : "__comparison_right"), location);
	typed(*object, scope);
	return object;
}

void Analyzer::comparison_elements(FunctionEntity* function, const Type* type, syntax::Expr* left, syntax::Expr* right,
	Scope* scope, std::vector<syntax::Stmt*>& statements, uint32_t location, uint8_t& category, bool& eligible,
	bool& nothrow, uint32_t depth)
{
	if (type->is_reference() || (ClassOf(type) != nullptr && ClassOf(type)->key == TokenKind::KW_UNION))
	{
		function->deleted = true;
		return;
	}
	if (type->kind == TypeKind::Array)
	{
		// A counted loop keeps construction and generated code proportional
		// to array rank, rather than expanding every array element.
		const std::string spelling = "__comparison_index" + std::to_string(depth);
		const Identifier* index = identifiers_.intern(spelling.data(), static_cast<uint32_t>(spelling.size()));
		syntax::SimpleDecl* declaration = Node<syntax::SimpleDecl>(arena_, location);
		declaration->kind = syntax::DeclKind::Simple;
		syntax::DeclSpecifier specs[2] = {};
		for (unsigned i = 0; i < 2; ++i)
		{
			specs[i].kind = syntax::DeclSpecKind::Keyword;
			specs[i].keyword = i == 0 ? TokenKind::KW_UNSIGNED : TokenKind::KW_LONG;
		}
		declaration->specifiers = syntax::Slice<syntax::DeclSpecifier>{ arena_.copy_array(specs, 2), 2 };
		syntax::InitDeclarator init = {};
		init.declarator = Node<syntax::Declarator>(arena_, location);
		init.declarator->name = implicit_name(index, location);
		init.initializer = Node<syntax::Initializer>(arena_, location);
		init.initializer->kind = syntax::InitializerKind::Assign;
		init.initializer->expression = implicit_constant(
			types_.fundamental(FundamentalType::UnsignedLongInt), 0, location);
		declaration->declarators = syntax::Slice<syntax::InitDeclarator>{ arena_.copy_array(&init, 1), 1 };
		const auto use = [&]() {
			syntax::IdExpr* expr = Node<syntax::IdExpr>(arena_, location);
			expr->kind = syntax::ExprKind::Id;
			expr->name = implicit_name(index, location);
			return expr;
		};
		syntax::Expr* objects[2] = { left, right };
		for (syntax::Expr*& object : objects)
		{
			syntax::SubscriptExpr* element = Node<syntax::SubscriptExpr>(arena_, location);
			element->kind = syntax::ExprKind::Subscript;
			element->base = object;
			element->index = use();
			object = element;
		}
		std::vector<syntax::Stmt*> elements;
		comparison_elements(function, type->element, objects[0], objects[1], scope, elements, location, category,
			eligible, nothrow, depth + 1);
		syntax::ForStmt* loop = Node<syntax::ForStmt>(arena_, location);
		loop->kind = syntax::StmtKind::For;
		loop->init_declaration = declaration;
		loop->condition = new (arena_.allocate(sizeof(syntax::Condition), alignof(syntax::Condition)))
			syntax::Condition();
		loop->condition->expression = Binary(arena_, TokenKind::OP_LT, use(),
			implicit_constant(types_.fundamental(FundamentalType::UnsignedLongInt), type->bound, location), location);
		syntax::UnaryExpr* increment = Node<syntax::UnaryExpr>(arena_, location);
		increment->kind = syntax::ExprKind::Unary;
		increment->op = TokenKind::OP_INC;
		increment->operand = use();
		loop->iteration = increment;
		syntax::CompoundStmt* block = Node<syntax::CompoundStmt>(arena_, location);
		block->kind = syntax::StmtKind::Compound;
		block->items = syntax::Slice<syntax::Stmt*>{ arena_.copy_array(elements.data(), elements.size()),
			static_cast<uint32_t>(elements.size()) };
		loop->body = block;
		statements.push_back(loop);
		return;
	}
	comparison_scalar(function, type, left, right, scope, statements, location, category, eligible, nothrow);
}

void Analyzer::analyze_comparison_body(
	FunctionEntity* function, const syntax::CompoundStmt& body, Scope* scope, bool declared_constexpr)
{
	SoftSubstitution substitution(*this);
	const uint64_t throws_before = potentially_throwing_;
	if (!function->deleted)
		compound(body, scope, true);
	function->deleted = function->deleted || substitution.failed();
	if (!function->deleted && function->operator_token != TokenKind::OP_EQ &&
		function->operator_token != TokenKind::OP_SPACESHIP)
	{
		const syntax::Expr* equivalent = static_cast<const syntax::ValueStmt*>(body.items[0])->value;
		function->deleted = equivalent->facts == nullptr || (equivalent->facts->flags & kRewrittenComparison) == 0 ||
			equivalent->facts->type != types_.fundamental(FundamentalType::Bool);
	}
	if (!function->exception_spec)
		function->nothrow = potentially_throwing_ == throws_before;
	bool eligible = true;
	for (const DemandList* use = function->demands; use != nullptr; use = use->next)
		eligible = eligible && (!use->call || use->function->is_constexpr || use->function->trivial);
	for (uint32_t i = 0; i < function->type->param_count; ++i)
		eligible = eligible && literal_type(function->type->params[i]);
	eligible = eligible && literal_type(function->type->canonical->element);
	function->is_constexpr = declared_constexpr || eligible;
	record_function_exception_type(function);
}

void Analyzer::implicit_comparison_equality(FunctionEntity* source, const ClassEntity* cls, uint32_t location)
{
	const Identifier* equal = operator_key(TokenKind::OP_EQ);
	const NameEntry* existing = names_.find(cls->scope, equal);
	if ((existing != nullptr && existing->functions != nullptr) || names_.friends(cls->scope, equal) != nullptr)
		return;
	const Type* original = source->type->canonical;
	const Type* type = types_.function(types_.fundamental(FundamentalType::Bool), original->params,
		original->param_count, false, original->function_cv, original->ref);
	FunctionEntity* function = new_entity<FunctionEntity>(EntityKind::Function, equal, source->owner, type);
	function->label = "operator==";
	function->signature = signature_of(type);
	function->member = source->member;
	function->is_virtual = source->is_virtual;
	function->is_constexpr = source->is_constexpr;
	function->is_consteval = source->is_consteval;
	function->internal_linkage = source->internal_linkage;
	function->is_operator = true;
	function->operator_token = TokenKind::OP_EQ;
	function->befriending = source->befriending;
	Binding* binding = new_binding(BindingKind::Function, equal, function, type);
	binding->label = function->label;
	binding->invisible = !function->member;
	declare_in(function->owner, binding);
	if (function->member)
	{
		const NameEntry* entry = names_.find(cls->scope, source->name);
		for (const FunctionList* node = entry != nullptr ? entry->functions : nullptr; node != nullptr;
			node = node->next)
			if (node->binding->entity == source)
				binding->access = node->binding->access;
	}
	else
		names_.befriend(cls->scope, binding);
	default_comparison(function, true, location);
}

void Analyzer::comparison_body(FunctionEntity* function, syntax::CompoundStmt& body, Scope* scope)
{
	const ClassEntity* cls = function->member ? static_cast<const ClassEntity*>(function->owner->entity)
											  : function->befriending->entity;
	std::vector<syntax::Stmt*> statements;
	const uint32_t location = body.location;
	if (function->operator_token == TokenKind::OP_SPACESHIP)
		implicit_comparison_equality(function, cls, location);
	uint8_t category = 0;
	bool eligible = true, nothrow = true;
	if (function->operator_token != TokenKind::OP_EQ && function->operator_token != TokenKind::OP_SPACESHIP)
	{
		syntax::ValueStmt* result = Node<syntax::ValueStmt>(arena_, location);
		result->kind = syntax::StmtKind::Return;
		result->value = Binary(arena_, function->operator_token, comparison_object(function, 0, scope, location),
			comparison_object(function, 1, scope, location), location);
		syntax::Stmt* statement = result;
		body.items = syntax::Slice<syntax::Stmt*>{ arena_.copy_array(&statement, 1), 1 };
		return;
	}
	const bool constant = function->member || function->type->canonical->params[0]->is_reference();
	function->deleted = cls->key == TokenKind::KW_UNION;
	for (const BaseClass* base = cls->bases; base != nullptr; base = base->next)
	{
		syntax::Expr* objects[2];
		for (unsigned i = 0; i < 2; ++i)
		{
			syntax::CastExpr* cast = Node<syntax::CastExpr>(arena_, location);
			cast->kind = syntax::ExprKind::Cast;
			cast->cast = TokenKind::KW_STATIC_CAST;
			cast->operand = comparison_object(function, i, scope, location);
			const Type* type = types_.qualified(base->base->type, constant ? kConst : 0);
			ExprFacts* facts = new_facts(*cast, type, ValueCategory::LValue);
			facts->flags = kImplicit | kBaseCast | kReferenceCast;
			facts->target = types_.reference(type, false);
			objects[i] = cast;
		}
		comparison_elements(function, types_.qualified(base->base->type, constant ? kConst : 0), objects[0], objects[1],
			scope, statements, location, category, eligible, nothrow);
	}
	for (const DataMember* member = cls->members; member != nullptr; member = member->next)
	{
		if (member->variable->name == nullptr)
		{
			const ClassEntity* object = ClassOf(member->variable->type);
			function->deleted = function->deleted || (object != nullptr && object->key == TokenKind::KW_UNION);
			continue;
		}
		syntax::MemberExpr* objects[2];
		for (unsigned i = 0; i < 2; ++i)
		{
			objects[i] = Node<syntax::MemberExpr>(arena_, location);
			objects[i]->kind = syntax::ExprKind::Member;
			objects[i]->op = TokenKind::OP_DOT;
			objects[i]->base = comparison_object(function, i, scope, location);
			objects[i]->member = implicit_name(member->variable->name, location);
		}
		comparison_elements(function,
			types_.qualified(member->variable->type,
				constant && !static_cast<const VariableEntity*>(member->variable)->is_mutable ? kConst : 0),
			objects[0], objects[1], scope, statements, location, category, eligible, nothrow);
	}
	if (function->deleted)
		return;
	syntax::ValueStmt* result = Node<syntax::ValueStmt>(arena_, location);
	result->kind = syntax::StmtKind::Return;
	if (function->operator_token == TokenKind::OP_SPACESHIP)
	{
		const Type* result_type = function->type->canonical->element;
		if (holds_auto(result_type))
		{
			const ClassEntity* cls = comparison_category(category, location);
			if (cls == nullptr)
				return;
			deduce_function_result(function, cls->type);
			body_->result = cls->type;
			body_->deduce_result = false;
			body_->placeholder = nullptr;
			result_type = cls->type;
		}
		const ClassEntity* result_class = comparison_category(0, location);
		if (result_class == nullptr)
		{
			function->deleted = true;
			return;
		}
		result->value = comparison_cast(
			const_cast<syntax::Expr*>(comparison_value(result_class, "equal", scope, location)), result_type, location);
	}
	else
		result->value = implicit_constant(types_.fundamental(FundamentalType::Bool), 1, location);
	eligible = eligible && literal_type(function->type->canonical->element);
	for (uint32_t i = 0; i < function->type->param_count; ++i)
		eligible = eligible && literal_type(function->type->params[i]);
	function->is_constexpr = function->is_constexpr || eligible;
	if (!function->exception_spec)
		function->nothrow = nothrow;
	statements.push_back(result);
	body.items = syntax::Slice<syntax::Stmt*>{ arena_.copy_array(statements.data(), statements.size()),
		static_cast<uint32_t>(statements.size()) };
}

} // namespace sema
