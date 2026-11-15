#include "lowir/text_parser.h"

#include "lowir/debug_validation.h"

namespace lowir {
namespace text {

void Parser::parse_debug_type()
{
	if (!program_.debug)
		program_.debug.reset(new DebugInfo());
	const Position position = here();
	const int64_t id = parse_small_integer("debug type id");
	if (id <= 0 || uint64_t(id) + debug_base_ != program_.debug->types.size())
		fail("debug type ids must be consecutive from one");
	DebugType type;
	const int64_t kind = parse_small_integer("debug type kind");
	const int64_t encoding = parse_small_integer("debug base encoding");
	if (kind < 0 || kind > static_cast<int64_t>(DebugKind::Method) || encoding < 0 ||
		encoding > static_cast<int64_t>(DebugEncoding::Address))
		fail("invalid debug type kind or encoding");
	type.kind = static_cast<DebugKind>(kind);
	type.encoding = static_cast<DebugEncoding>(encoding);
	auto index = [&](const char* what, bool reference) {
		const int64_t value = parse_small_integer(what);
		if (value < 0 || uint64_t(value) + (reference && value != 0 ? debug_base_ : 0) > 0xffffffffu)
			fail("debug index is out of range");
		return static_cast<uint32_t>(value) + (reference && value != 0 ? debug_base_ : 0);
	};
	type.parent = index("debug parent", true);
	type.type = index("debug referenced type", true);
	type.flags = index("debug flags", false);
	auto nonnegative = [&](const char* what) {
		const int64_t value = parse_small_integer(what);
		if (value < 0)
			fail("debug size or offset is negative");
		return static_cast<uint64_t>(value);
	};
	type.bytes = nonnegative("debug byte size");
	type.bit_offset = nonnegative("debug bit offset");
	type.count = nonnegative("debug element or bit count");
	type.constant = static_cast<uint64_t>(parse_small_integer("debug constant bits"));
	if (!at(TokenKind::String))
		fail("expected quoted debug name");
	type.name = token().name;
	advance();
	if (debug_positions_.empty())
		debug_positions_.resize(program_.debug->types.size(), Position{ source_, 1 });
	debug_positions_.push_back(position);
	program_.debug->types.push_back(type);
}

void Parser::parse_debug_local()
{
	if (!program_.debug)
		program_.debug.reset(new DebugInfo());
	const SymbolId function = reference_symbol(expect_name(TokenKind::Global, "debug function"));
	const int64_t slot = parse_small_integer("debug slot");
	const int64_t type = parse_small_integer("debug local type");
	if (slot < 0 || uint64_t(slot) >= kNoId || type < 0 || uint64_t(type) + debug_base_ >= kNoId)
		fail("debug local index is out of range");
	uint32_t scope = 0;
	if (!at(TokenKind::String))
	{
		const int64_t value = parse_small_integer("debug local scope");
		if (value < 0 || uint64_t(value) + scope_base_ > 0xffffffffu)
			fail("debug local scope is out of range");
		scope = value != 0 ? static_cast<uint32_t>(value) + scope_base_ : 0;
	}
	if (!at(TokenKind::String))
		fail("expected quoted debug local name");
	const NameId name = token().name;
	advance();
	const DebugLocation location = at(TokenKind::Debug) ? parse_debug_location() : DebugLocation{ 0, 0, 0 };
	if (function >= program_.debug->functions.size())
		program_.debug->functions.resize(function + 1);
	program_.debug->functions[function].locals.push_back(DebugLocal{
		static_cast<SlotId>(slot), type != 0 ? static_cast<uint32_t>(type) + debug_base_ : 0, name, location, scope });
}

void Parser::finish_debug()
{
	if (!program_.debug)
		return;
	link_debug_scopes(program_);
	DebugDiagnostic diagnostic;
	if (!validate_debug_info(program_, diagnostic))
		fail_at(diagnostic.type != 0 ? debug_positions_[diagnostic.type] : symbol_uses_[diagnostic.function],
			diagnostic.message);
}

} // namespace text
} // namespace lowir
