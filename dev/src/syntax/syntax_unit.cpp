#include "syntax/syntax_unit.h"

namespace syntax {

SyntaxUnit::SyntaxUnit(const PreprocessorOptions& options, const std::string& path, bool syntax_only)
	: preprocessor_(options, path),
	  post_tokens_(preprocessor_, &preprocessor_.identifiers(), options.literals, options.target, options.gnu_c()),
	  tokens_(post_tokens_, spellings_),
	  parser_(tokens_, preprocessor_.identifiers(), arena_, options.hosted, options.cplusplus != "201103L",
		  options.cplusplus == "201703L", options.language == SourceLanguage::C, syntax_only),
	  tree_(nullptr)
{
	tokens_.observe_pack(preprocessor_.pack_state());
	tokens_.set_prelude(preprocessor_.builtin_begin(), preprocessor_.builtin_end());
}

bool SyntaxUnit::parse()
{
	try
	{
		tree_ = parser_.parse_translation_unit();
		if (tree_ == nullptr)
			error_ = preprocessor_.describe(parser_.error_location(), "syntax error");
	}
	catch (const ParseError& e)
	{
		error_ = preprocessor_.describe(e.location(), e.what());
	}
	catch (const PreprocessError& e)
	{
		error_ = preprocessor_.describe(e);
	}
	catch (const SourceError& e)
	{
		error_ = preprocessor_.describe(e);
	}
	catch (const InternalError& e)
	{
		throw locate(e);
	}
	return tree_ != nullptr;
}

InternalError SyntaxUnit::locate(const InternalError& error) const
{
	if (!error.has_location())
		return error;
	return InternalError(preprocessor_.describe(error.location(), error.what()));
}

} // namespace syntax
