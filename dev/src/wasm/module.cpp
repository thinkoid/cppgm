#include "wasm/module.h"

#include <map>

#include "machine/global_data.h"

namespace wasm {

namespace {

void function_types(const lowir::Program& program, Module& module)
{
	std::map<std::vector<uint8_t>, uint32_t> known;
	for (const lowir::Signature& source : program.signatures)
	{
		Signature signature;
		Boundary boundary;
		std::vector<uint8_t> key;
		boundary.result = classify_value(source.result, source.boundary.result_shape, program.pointer_type());
		if (boundary.result.passing == Passing::Expand)
			boundary.result.passing = Passing::Indirect;
		if (boundary.result.passing == Passing::Indirect)
			signature.parameters.push_back(ValueType::I32);
		const lowir::Parameter* parameters = program.parameters_of(source);
		for (uint32_t i = 0; i < source.parameter_count; ++i)
		{
			const AbiValue argument = classify_value(parameters[i].type, parameters[i].shape, program.pointer_type());
			boundary.parameters.push_back(argument);
			if (argument.passing != Passing::Ignore)
				signature.parameters.push_back(value_type(argument.scalar));
			if (argument.passing == Passing::Expand)
				signature.parameters.push_back(value_type(argument.scalar));
		}
		if (source.boundary.arity == ir_model::CAM_VARIADIC)
			signature.parameters.push_back(ValueType::I32);
		const ValueType result = boundary.result.passing == Passing::Indirect ||
				boundary.result.passing == Passing::Ignore
			? ValueType::Void
			: value_type(boundary.result.scalar);
		if (source.boundary.this_return)
			signature.results.push_back(ValueType::I32);
		else if (result != ValueType::Void)
			signature.results.push_back(result);
		for (ValueType parameter : signature.parameters)
			key.push_back(static_cast<uint8_t>(parameter));
		key.push_back(0);
		for (ValueType returned : signature.results)
			key.push_back(static_cast<uint8_t>(returned));
		auto inserted = known.emplace(key, static_cast<uint32_t>(module.signatures.size()));
		if (inserted.second)
			module.signatures.push_back(std::move(signature));
		module.signature_types.push_back(inserted.first->second);
		module.boundaries.push_back(std::move(boundary));
	}
}

} // namespace

void prepare_module(const lowir::Program& program, Module& module)
{
	const lowir::SymbolId conflict = machine::object_identities(program, module.object_symbols);
	if (conflict != lowir::kNoId)
	{
		const auto& symbol = program.symbols[conflict];
		throw WasmError(std::string("duplicate or incompatible Wasm object definition: ") +
			program.spelling(symbol.metadata.object != 0 ? symbol.metadata.object : symbol.name));
	}
	module.function_indices.assign(program.symbols.size(), lowir::kNoId);
	module.addresses.assign(program.symbols.size(), lowir::kNoId);
	if (lowir::object_alias_targets(program, module.object_symbols, module.alias_targets) != lowir::kNoId)
		throw WasmError("invalid or cyclic Wasm object alias");
	function_types(program, module);
	// An address-only declaration can borrow the signature of any typed alias.
	// Compare target ABI boundaries rather than source parameter spellings.
	std::vector<lowir::SignatureId> signatures(program.symbols.size(), lowir::kNoId);
	for (lowir::SymbolId id : program.order)
	{
		const auto& symbol = program.symbols[id];
		if (!lowir::is_function_kind(symbol.kind))
			continue;
		const auto signature = program.functions[symbol.detail].signature;
		if (signature == lowir::kNoId)
			continue;
		auto& prior = signatures[module.object_symbols[id]];
		if (prior != lowir::kNoId && module.signature_types[signature] != module.signature_types[prior])
			throw WasmError("incompatible Wasm declarations for one object function");
		prior = signature;
	}
	module.stack_symbol = static_cast<uint32_t>(program.symbols.size());
	module.stack_low_symbol = module.stack_symbol + 1;
	module.table_symbol = module.stack_symbol + 2;
	if (module.exception_regions)
	{
		module.exception_tag_symbol = module.stack_symbol + 3;
		Signature tag;
		tag.parameters = module.exception_abi == lowir::ExceptionAbi::Cxx
			? std::vector<ValueType>{ ValueType::I32 }
			: std::vector<ValueType>{ ValueType::I64, ValueType::I64 };
		module.tag_types.push_back(static_cast<uint32_t>(module.signatures.size()));
		module.signatures.push_back(std::move(tag));
		Signature pair;
		pair.results = module.signatures.back().parameters;
		pair.results.push_back(ValueType::ExnRef);
		module.exception_pair_type = static_cast<uint32_t>(module.signatures.size());
		module.signatures.push_back(std::move(pair));
	}
	for (lowir::SymbolId id : program.order)
	{
		const auto kind = program.nonlocal_function(id);
		if (kind != lowir::NonlocalFunction::Setjmp && kind != lowir::NonlocalFunction::Longjmp)
			continue;
		if (module.nonlocal_calls.empty())
			module.nonlocal_calls.resize(program.symbols.size(), lowir::NonlocalFunction::None);
		module.nonlocal_calls[id] = kind;
	}
	if (!module.nonlocal_calls.empty())
	{
		module.nonlocal_tag_symbol = module.stack_symbol + 3 + static_cast<uint32_t>(module.tag_types.size());
		module.nonlocal_tag_index = static_cast<uint32_t>(module.tag_types.size());
		Signature tag;
		tag.parameters = { ValueType::I32 };
		module.tag_types.push_back(static_cast<uint32_t>(module.signatures.size()));
		module.signatures.push_back(std::move(tag));
		Signature pair;
		pair.results = { ValueType::I32, ValueType::ExnRef };
		module.nonlocal_pair_type = static_cast<uint32_t>(module.signatures.size());
		module.signatures.push_back(std::move(pair));
	}
	// Address-only imports carry a placeholder type until a real definition
	// supplies the ABI. A direct call's typed boundary is materialized earlier.
	uint32_t address_type = lowir::kNoId;
	for (lowir::SymbolId id : program.order)
	{
		const auto& symbol = program.symbols[id];
		if (symbol.kind != lowir::SymbolKind::FunctionDeclaration || module.object_symbols[id] != id ||
			module.alias_targets[id] != lowir::kNoId)
			continue;
		if (module.nonlocal_function(id) == lowir::NonlocalFunction::Longjmp)
		{
			module.nonlocal_wrappers.push_back(id);
			continue;
		}
		const auto signature = signatures[id];
		module.function_indices[id] = static_cast<uint32_t>(module.definition_types.size());
		if (signature == lowir::kNoId && address_type == lowir::kNoId)
		{
			address_type = static_cast<uint32_t>(module.signatures.size());
			module.signatures.push_back(Signature{});
		}
		module.definition_types.push_back(signature == lowir::kNoId ? address_type : module.signature_types[signature]);
	}
	for (lowir::SymbolId id : module.nonlocal_wrappers)
	{
		const auto signature = program.functions[program.symbols[id].detail].signature;
		if (signature == lowir::kNoId)
			throw WasmError("a longjmp reference requires its typed C boundary");
		const auto& type = module.signatures[module.signature_types[signature]];
		if (type.parameters != std::vector<ValueType>{ ValueType::I32, ValueType::I32 } || !type.results.empty())
			throw WasmError("longjmp requires the C pointer and int boundary");
		module.function_indices[id] = static_cast<uint32_t>(module.definition_types.size());
		module.definition_types.push_back(module.signature_types[signature]);
	}
	for (lowir::SymbolId id : program.order)
	{
		if (program.symbols[id].kind == lowir::SymbolKind::FunctionDefinition && module.object_symbols[id] == id)
		{
			const auto& symbol = program.symbols[id];
			if (symbol.metadata.role == ir_model::SR_INIT)
			{
				const auto& signature = program.signatures[program.functions[symbol.detail].signature];
				if (module.initializer != lowir::kNoId || signature.parameter_count != 0 || !signature.result.is_void())
					throw WasmError("invalid or duplicate Wasm initializer");
				module.initializer = static_cast<uint32_t>(module.definition_types.size());
			}
			module.function_indices[id] = static_cast<uint32_t>(module.definition_types.size());
			module.definitions.push_back(id);
			module.definition_types.push_back(
				module.signature_types[program.functions[program.symbols[id].detail].signature]);
		}
	}
	for (lowir::SymbolId id : program.order)
	{
		const auto target = module.alias_targets[id];
		if (target == lowir::kNoId || !lowir::is_function_kind(program.symbols[id].kind))
			continue;
		module.function_indices[id] = module.function_indices[target];
	}

	for (lowir::SymbolId id : program.order)
		if (lowir::is_function_kind(program.symbols[id].kind))
			module.function_indices[id] = module.function_indices[module.object_symbols[id]];
}

} // namespace wasm
