#include "lowir/text_parser.h"

namespace lowir {
namespace text {

void Parser::parse_debug_scope()
{
	if (!program_.debug)
		program_.debug.reset(new DebugInfo());
	const int64_t id = parse_small_integer("debug scope id");
	if (id <= 0 || uint64_t(id) + scope_base_ != program_.debug->scopes.size())
		fail("debug scope ids must be consecutive from one");
	const NameId owner = expect_name(TokenKind::Global, "debug scope owner");
	const int64_t parent = parse_small_integer("debug parent scope");
	if (parent < 0 || parent >= id)
		fail("debug scope parent must precede child");
	const uint32_t parent_id = parent != 0 ? static_cast<uint32_t>(parent) + scope_base_ : 0;
	if (parent_id != 0 && program_.debug->scopes[parent_id].owner != owner)
		fail("debug scope parent belongs to another function");
	program_.debug->scopes.push_back(DebugLexicalScope{ owner, parent_id, 0 });
}

} // namespace text
} // namespace lowir
