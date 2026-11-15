#include "backend/lowir_c_module.h"

#include <cstring>

// Debug information of the C interface (ABI version 3): source files,
// locations, source types, lexical scopes and named locals (lowir.md
// "Debug Locations" and "Source type and local metadata in hosted objects").
// A record is checked where it is given; validate() checks the references
// between the records (lowir/debug_validation.h).

namespace {

// A !dbg file is one token of the text.
bool file_token(const char* name, uint32_t length)
{
	if (name == nullptr || length == 0)
		return false;
	for (uint32_t i = 0; i < length; ++i)
	{
		const char c = name[i];
		if (c == 0 || c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v' || c == ',' ||
			c == '(' || c == ')')
			return false;
	}
	return true;
}

static_assert(CPPGM_DEBUG_METHOD == static_cast<int>(lowir::DebugKind::Method) &&
		CPPGM_DEBUG_ENCODING_ADDRESS == static_cast<int>(lowir::DebugEncoding::Address) &&
		CPPGM_DEBUG_FLAG_SCOPED_ENUM == static_cast<int>(lowir::DF_SCOPED_ENUM),
	"the debug numbers of lowir_interface.h are those of lowir/debug_info.h");

} // namespace

uint32_t CppgmLowir::debug_file(const char* name, uint32_t length)
{
	if (!ready())
		return CPPGM_NO_ID;
	if (!file_token(name, length))
	{
		fail("a debug file name is one token: no space, comma or parenthesis");
		return CPPGM_NO_ID;
	}
	const lowir::NameId file = program.names.intern(name, length);
	if (file >= debug_files.size())
		debug_files.resize(file + 1, 0);
	debug_files[file] = 1;
	return file;
}

bool CppgmLowir::location(const CppgmDebugLocation& from, lowir::DebugLocation& to)
{
	to = lowir::DebugLocation{ 0, 0, 0 };
	if (from.file == 0)
		return (from.line == 0 && from.column == 0 && from.scope == 0) || fail("a location without a file is zero");
	if (from.file >= debug_files.size() || debug_files[from.file] == 0)
		return fail("a location's file is an ID of cppgm_lowir_debug_file");
	if (from.line == 0 || from.column == 0)
		return fail("a location's line and column count from 1");
	if (from.scope != 0 && (!program.debug || from.scope >= program.debug->scopes.size()))
		return fail("undefined debug scope");
	to = lowir::DebugLocation{ from.file, from.line, from.column, from.scope };
	return true;
}

bool CppgmLowir::function_location(uint32_t symbol, const CppgmDebugLocation* from)
{
	if (!ready())
		return false;
	if (symbol >= program.symbols.size() || program.symbols[symbol].kind != lowir::SymbolKind::FunctionDefinition)
		return fail("a function location requires a defined function");
	if (from == nullptr)
		return fail("null location");
	return location(*from, program.functions[program.symbols[symbol].detail].location);
}

bool CppgmLowir::body_locations(
	uint32_t symbol, const CppgmDebugLocation* locations, uint32_t count, const uint32_t* indices)
{
	if (!ready())
		return false;
	lowir::FunctionBody* body = committed_body(symbol);
	if (body == nullptr)
		return fail("instruction locations require a committed body");
	if ((count != 0 && locations == nullptr) || (!body->instructions.empty() && indices == nullptr))
		return fail("null locations");
	std::vector<lowir::DebugLocation> table(count);
	for (uint32_t i = 0; i < count; ++i)
	{
		if (locations[i].file == 0)
			return fail("a listed location names a file");
		if (!location(locations[i], table[i]))
			return false;
	}
	for (size_t i = 0; i < body->instructions.size(); ++i)
		if (indices[i] > count)
			return fail("an instruction's location is 0 or 1 + a position in the list");
	for (size_t i = 0; i < body->instructions.size(); ++i)
		body->instructions[i].location = indices[i];
	body->locations.swap(table);
	return true;
}

uint32_t CppgmLowir::debug_type(const CppgmDebugType& from)
{
	if (!ready())
		return CPPGM_NO_ID;
	if (from.kind > static_cast<uint8_t>(lowir::DebugKind::Method) ||
		from.encoding > static_cast<uint8_t>(lowir::DebugEncoding::Address) || from.reserved != 0 ||
		(from.name_length != 0 && (from.name == nullptr || std::memchr(from.name, 0, from.name_length) != nullptr)))
	{
		fail("invalid debug type kind, encoding or name");
		return CPPGM_NO_ID;
	}
	if (!program.debug)
		program.debug.reset(new lowir::DebugInfo());
	lowir::DebugType type;
	type.kind = static_cast<lowir::DebugKind>(from.kind);
	type.encoding = static_cast<lowir::DebugEncoding>(from.encoding);
	type.name = from.name_length != 0 ? program.names.intern(from.name, from.name_length) : 0;
	type.parent = from.parent;
	type.type = from.type;
	type.flags = from.flags;
	type.bytes = from.bytes;
	type.bit_offset = from.bit_offset;
	type.count = from.count;
	type.constant = from.constant;
	program.debug->types.push_back(type);
	return static_cast<uint32_t>(program.debug->types.size() - 1);
}

uint32_t CppgmLowir::debug_scope(uint32_t function, uint32_t parent)
{
	if (!ready())
		return CPPGM_NO_ID;
	if (function >= program.symbols.size() || program.symbols[function].kind != lowir::SymbolKind::FunctionDefinition)
	{
		fail("a debug scope requires a defined function");
		return CPPGM_NO_ID;
	}
	if (!program.debug)
		program.debug.reset(new lowir::DebugInfo());
	const lowir::NameId owner = program.symbols[function].name;
	if (parent != 0 && (parent >= program.debug->scopes.size() || program.debug->scopes[parent].owner != owner))
	{
		fail(parent >= program.debug->scopes.size() ? "debug scope parent must precede child"
													: "debug scope parent belongs to another function");
		return CPPGM_NO_ID;
	}
	program.debug->scopes.push_back(lowir::DebugLexicalScope{ owner, parent, 0 });
	return static_cast<uint32_t>(program.debug->scopes.size() - 1);
}

bool CppgmLowir::debug_local(uint32_t function, uint32_t slot, uint32_t type, uint32_t scope, const char* name,
	uint32_t length, const CppgmDebugLocation* declaration)
{
	if (!ready())
		return false;
	if (function >= program.symbols.size() || program.symbols[function].kind != lowir::SymbolKind::FunctionDefinition)
		return fail("debug locals require a defined function");
	if (length != 0 && (name == nullptr || std::memchr(name, 0, length) != nullptr))
		return fail("invalid debug local name");
	if (scope != 0 &&
		(!program.debug || scope >= program.debug->scopes.size() ||
			program.debug->scopes[scope].owner != program.symbols[function].name))
		return fail("undefined or foreign debug local scope");
	lowir::DebugLocation where = lowir::DebugLocation{ 0, 0, 0 };
	if (declaration != nullptr && !location(*declaration, where))
		return false;
	if (!program.debug)
		program.debug.reset(new lowir::DebugInfo());
	if (function >= program.debug->functions.size())
		program.debug->functions.resize(function + 1);
	program.debug->functions[function].locals.push_back(
		lowir::DebugLocal{ slot, type, length != 0 ? program.names.intern(name, length) : 0, where, scope });
	return true;
}
