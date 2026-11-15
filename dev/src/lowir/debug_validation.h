#pragma once

#include "lowir/program.h"

namespace lowir {

// What validate_debug_info reports: the message, and the debug type (0:
// none) or else the function it is about.
struct DebugDiagnostic
{
	const char* message = nullptr;
	uint32_t type = 0;
	SymbolId function = kNoId;
};

// Lists each lexical scope under the function definition that owns it
// (DebugFunction::first_scope, DebugLexicalScope::next), in id order.
void link_debug_scopes(Program& program);

// The references of Program::debug, which is present: every scope a location
// or a local names, the parents and referenced types of the source types, and
// the function, slot and type of every local.
bool validate_debug_info(const Program& program, DebugDiagnostic& diagnostic);

} // namespace lowir
