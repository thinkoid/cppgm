#include "wasm/object.h"

namespace wasm {

void append_object_aliases(const lowir::Program& program, const Module& module, Object& object,
	std::vector<uint32_t>& symbols, std::vector<uint32_t>& groups)
{
	if (program.aliases.empty())
		return;
	std::vector<lowir::SymbolId> declarations(program.names.size(), lowir::kNoId);
	for (lowir::SymbolId id : program.order)
	{
		if (module.alias_targets[id] == lowir::kNoId || module.object_symbols[id] != id)
			continue;
		const auto& source = program.symbols[id];
		declarations[source.metadata.object != 0 ? source.metadata.object : source.name] = id;
	}
	for (const auto& alias : program.aliases)
	{
		const auto declaration = declarations[alias.object];
		const auto target = declaration == lowir::kNoId ? module.object_symbols[alias.target]
														: module.alias_targets[declaration];
		if (target == lowir::kNoId || symbols[target] == lowir::kNoId)
			throw WasmError("Wasm object alias requires an emitted definition");
		ObjectSymbol identity = object.symbols[symbols[target]];
		if (identity.undefined())
			throw WasmError("Wasm object alias target is undefined");
		identity.name = program.spelling(alias.object);
		if (declaration != lowir::kNoId)
		{
			const auto& source = program.symbols[declaration];
			identity.flags = source.metadata.binding == ir_model::SBM_INTERNAL ? 2
				: source.metadata.binding == ir_model::SBM_WEAK                ? 1
																			   : 0;
			if ((source.metadata.flags & ir_model::SF_OBJECT_ROOT) != 0)
				identity.flags |= 0x80;
			symbols[declaration] = static_cast<uint32_t>(object.symbols.size());
			groups[declaration] = groups[target];
		}
		object.symbols.push_back(std::move(identity));
	}
}

} // namespace wasm
