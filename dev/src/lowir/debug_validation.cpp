#include "lowir/debug_validation.h"

namespace lowir {
namespace {

bool report(DebugDiagnostic& diagnostic, const char* message, uint32_t type, SymbolId function)
{
	diagnostic.message = message;
	diagnostic.type = type;
	diagnostic.function = function;
	return false;
}

bool check_scopes(const Program& program, DebugDiagnostic& diagnostic)
{
	const DebugInfo& debug = *program.debug;
	auto valid = [&](uint32_t scope) { return scope < debug.scopes.size(); };
	for (SymbolId id = 0; id < program.symbols.size(); ++id)
	{
		const Symbol& symbol = program.symbols[id];
		if (symbol.kind != SymbolKind::FunctionDefinition)
			continue;
		const Function& function = program.functions[symbol.detail];
		if (!valid(function.location.scope))
			return report(diagnostic, "undefined debug scope", 0, id);
		if (function.body)
			for (const DebugLocation& location : function.body->locations)
				if (!valid(location.scope))
					return report(diagnostic, "undefined debug scope", 0, id);
		if (id >= debug.functions.size())
			continue;
		for (const DebugLocal& local : debug.functions[id].locals)
			if (!valid(local.scope) || !valid(local.declaration.scope) ||
				(local.scope != 0 && debug.scopes[local.scope].owner != symbol.name))
				return report(diagnostic, "undefined or foreign debug local scope", 0, id);
	}
	return true;
}

bool check_types(const DebugInfo& debug, DebugDiagnostic& diagnostic)
{
	std::vector<uint8_t> visited(debug.types.size(), 0);
	visited[0] = 2;
	for (uint32_t id = 1; id < debug.types.size(); ++id)
	{
		const DebugType& type = debug.types[id];
		if (type.parent >= debug.types.size() || type.type >= debug.types.size())
			return report(diagnostic, "undefined debug parent or type", id, kNoId);
		if (type.parent != 0)
		{
			const DebugKind parent = debug.types[type.parent].kind;
			if (parent != DebugKind::Structure && parent != DebugKind::Union && parent != DebugKind::Enumeration &&
				parent != DebugKind::Namespace && parent != DebugKind::Subroutine && parent != DebugKind::Method)
				return report(diagnostic, "debug parent cannot contain children", id, kNoId);
		}
		uint32_t at = id;
		while (visited[at] == 0)
		{
			visited[at] = 1;
			at = debug.types[at].parent;
			if (at >= debug.types.size())
				return report(diagnostic, "undefined debug parent", id, kNoId);
		}
		if (visited[at] == 1)
			return report(diagnostic, "cyclic debug parents", id, kNoId);
		at = id;
		while (visited[at] == 1)
		{
			visited[at] = 2;
			at = debug.types[at].parent;
		}
	}
	return true;
}

bool check_locals(const Program& program, DebugDiagnostic& diagnostic)
{
	const DebugInfo& debug = *program.debug;
	for (SymbolId id = 0; id < debug.functions.size(); ++id)
	{
		if (debug.functions[id].locals.empty())
			continue;
		if (id >= program.symbols.size() || program.symbols[id].kind != SymbolKind::FunctionDefinition)
			return report(diagnostic, "debug locals require a defined function", 0, id);
		const Function& function = program.functions[program.symbols[id].detail];
		if (!function.body)
			return report(diagnostic, "debug locals require an available function body", 0, id);
		for (const DebugLocal& local : debug.functions[id].locals)
			if (local.slot >= function.body->slots.size() || local.type >= debug.types.size())
				return report(diagnostic, "undefined debug local slot or type", 0, id);
	}
	return true;
}

} // namespace

void link_debug_scopes(Program& program)
{
	DebugInfo& debug = *program.debug;
	for (DebugFunction& function : debug.functions)
		function.first_scope = function.last_scope = 0;
	for (uint32_t id = 1; id < debug.scopes.size(); ++id)
	{
		debug.scopes[id].next = 0;
		const SymbolId symbol = program.find_symbol(debug.scopes[id].owner);
		if (symbol == kNoId || program.symbols[symbol].kind != SymbolKind::FunctionDefinition)
			continue; // An optimizer may remove the scope's original function.
		if (symbol >= debug.functions.size())
			debug.functions.resize(symbol + 1);
		DebugFunction& function = debug.functions[symbol];
		if (function.last_scope != 0)
			debug.scopes[function.last_scope].next = id;
		else
			function.first_scope = id;
		function.last_scope = id;
	}
}

bool validate_debug_info(const Program& program, DebugDiagnostic& diagnostic)
{
	return check_scopes(program, diagnostic) && check_types(*program.debug, diagnostic) &&
		check_locals(program, diagnostic);
}

} // namespace lowir
