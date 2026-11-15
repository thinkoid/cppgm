#include "sema/analyzer.h"

#include "syntax/generic_parameters.h"

namespace sema {
namespace {

template<typename T>
T* Copy(Arena& arena, const T* node)
{
	return new (arena.allocate(sizeof(T), alignof(T))) T(*node);
}

const syntax::Declarator* FunctionDeclarator(const syntax::Decl& decl)
{
	switch (decl.kind)
	{
	case syntax::DeclKind::Function:
		return static_cast<const syntax::FunctionDecl&>(decl).declarator;
	case syntax::DeclKind::SpecialMember:
		return static_cast<const syntax::SpecialMemberDecl&>(decl).declarator;
	case syntax::DeclKind::Simple:
	{
		const syntax::SimpleDecl& simple = static_cast<const syntax::SimpleDecl&>(decl);
		return simple.declarators.size == 1 ? simple.declarators[0].declarator : nullptr;
	}
	default:
		return nullptr;
	}
}

syntax::Decl* WithDeclarator(Arena& arena, const syntax::Decl& source, syntax::Declarator* declarator)
{
	if (source.kind == syntax::DeclKind::Function)
	{
		syntax::FunctionDecl* copy = Copy(arena, &static_cast<const syntax::FunctionDecl&>(source));
		copy->declarator = declarator;
		return copy;
	}
	if (source.kind == syntax::DeclKind::SpecialMember)
	{
		syntax::SpecialMemberDecl* copy = Copy(arena, &static_cast<const syntax::SpecialMemberDecl&>(source));
		copy->declarator = declarator;
		return copy;
	}
	syntax::SimpleDecl* copy = Copy(arena, &static_cast<const syntax::SimpleDecl&>(source));
	copy->declarators.data = arena.copy_array(copy->declarators.data, 1);
	copy->declarators[0].declarator = declarator;
	return copy;
}

void CopyBinding(const syntax::Decl& source, const syntax::Decl& normalized)
{
	if (source.kind == syntax::DeclKind::Function)
		static_cast<const syntax::FunctionDecl&>(source).declared =
			static_cast<const syntax::FunctionDecl&>(normalized).declared;
	else if (source.kind == syntax::DeclKind::SpecialMember)
		static_cast<const syntax::SpecialMemberDecl&>(source).declared =
			static_cast<const syntax::SpecialMemberDecl&>(normalized).declared;
	else
		static_cast<const syntax::SimpleDecl&>(source).declarators[0].declared =
			static_cast<const syntax::SimpleDecl&>(normalized).declarators[0].declared;
}

} // namespace

bool Analyzer::abbreviated_declaration(const syntax::Decl& decl, Scope* scope, const syntax::TemplateDecl* written)
{
	// Each declarator has its own invented head. Share the specifiers and
	// source bodies; only a normalized function signature needs a copy.
	if (decl.kind == syntax::DeclKind::Simple && static_cast<const syntax::SimpleDecl&>(decl).declarators.size > 1)
	{
		const syntax::SimpleDecl& simple = static_cast<const syntax::SimpleDecl&>(decl);
		bool any = false;
		for (const syntax::InitDeclarator& init : simple.declarators)
		{
			const syntax::DeclaratorSuffix* suffix = syntax::OwnFunctionSuffix(init.declarator);
			any = any || (suffix != nullptr && syntax::HasInventedFunctionParameters(suffix->parameters));
		}
		if (!any)
			return false;
		for (const syntax::InitDeclarator& init : simple.declarators)
		{
			syntax::SimpleDecl* one = Copy(arena_, &simple);
			one->declarators = syntax::Slice<syntax::InitDeclarator>{ arena_.copy_array(&init, 1), 1 };
			declaration(*one, scope);
			init.declared = one->declarators[0].declared;
		}
		return true;
	}
	const syntax::Declarator* declarator = FunctionDeclarator(decl);
	const syntax::DeclaratorSuffix* suffix = syntax::OwnFunctionSuffix(declarator);
	if (suffix == nullptr || !syntax::HasInventedFunctionParameters(suffix->parameters))
		return false;
	if (written != nullptr && written->parameters->parameters.empty())
		error(decl.location, "an explicit specialization cannot introduce abbreviated parameters");
	const syntax::InventedFunctionParameters invented = syntax::InventFunctionParameters(
		arena_, identifiers_, suffix->parameters, written == nullptr ? nullptr : written->parameters, decl.location);
	if (invented.invalid_location != 0)
		error(invented.invalid_location - 1, "decltype(auto) is not a function parameter placeholder");
	syntax::Declarator* signature = syntax::WithFunctionParameters(arena_, declarator, suffix, invented.parameters);
	syntax::Decl* normalized = WithDeclarator(arena_, decl, signature);
	syntax::ConstrainedTemplateDecl* templ = static_cast<syntax::ConstrainedTemplateDecl*>(
		arena_.allocate(sizeof(syntax::ConstrainedTemplateDecl), alignof(syntax::ConstrainedTemplateDecl)));
	templ->constraint = written == nullptr ? nullptr : const_cast<syntax::Expr*>(syntax::TemplateConstraint(*written));
	templ->kind = templ->constraint == nullptr ? syntax::DeclKind::Template : syntax::DeclKind::ConstrainedTemplate;
	templ->location = written == nullptr ? decl.location : written->location;
	templ->parameters = invented.head;
	templ->declaration = normalized;
	template_declaration(*templ, scope);
	CopyBinding(decl, *normalized);
	return true;
}

} // namespace sema
