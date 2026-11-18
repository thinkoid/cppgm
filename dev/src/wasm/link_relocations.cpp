#include "wasm/linker.h"

#include <algorithm>

namespace wasm {

bool Linker::synthetic_data(const std::string& name, uint32_t& value) const
{
	if (name == "__stack_low")
		value = 0;
	else if (name == "__stack_high")
		value = stack_top_;
	else if (name == "__data_end" || name == "__heap_base")
		value = heap_base_;
	else if (name == "__wasm_first_page_end")
		value = 65536;
	else if (name == "__global_base" || name == "__dso_handle")
		value = data_base_;
	else if (name == "__heap_end")
		value = (heap_base_ + 65535) & ~uint32_t(65535);
	else
	{
		const bool start = name.compare(0, 8, "__start_") == 0;
		if (!start && name.compare(0, 7, "__stop_") != 0)
			return false;
		const auto section = named_sections_.find(name.substr(start ? 8 : 7));
		if (section == named_sections_.end())
			return false;
		value = start ? section->second.first : section->second.second;
	}
	return true;
}

uint32_t Linker::function_index(ObjectRef ref) const
{
	ref = selected(ref);
	if (symbol(ref).undefined() && symbol(ref).name == "__wasm_call_ctors" && ctor_index_ != kAbsent)
		return ctor_index_;
	const auto found = functions_.find({ ref.first, symbol(ref).index });
	if (symbol(ref).kind != 0 || found == functions_.end())
		throw WasmError("unresolved Wasm function relocation: " + symbol(ref).name);
	return found->second;
}

uint32_t Linker::symbol_value(ObjectRef ref) const
{
	ref = selected(ref);
	const auto& source = symbol(ref);
	if (source.kind == 5)
		return 0;
	if (source.kind == 4)
	{
		const auto tag = tags_.find({ ref.first, source.index });
		if (tag == tags_.end())
			throw WasmError("unresolved Wasm tag relocation: " + source.name);
		return tag->second;
	}
	if (source.kind == 2)
	{
		uint32_t runtime = 0;
		if (runtime_global(ref, runtime))
			return static_cast<uint32_t>(imported_globals_.size()) + runtime;
		const auto found = globals_.find({ ref.first, source.index });
		if (found == globals_.end())
			throw WasmError("unresolved Wasm global relocation: " + source.name);
		return found->second;
	}
	if (source.undefined() && !host_import(ref))
	{
		uint32_t value = 0;
		if (source.kind == 1 && synthetic_data(source.name, value))
			return value;
		if (source.weak())
			return 0;
	}
	if (source.kind == 0)
		return function_index(ref) + 1;
	const auto found = data_.find({ ref.first, source.index });
	if (source.kind != 1 || found == data_.end())
		throw WasmError("unresolved Wasm data relocation: " + source.name);
	return found->second + source.offset;
}

void Linker::prepare_address_globals()
{
	const auto collect = [&](uint32_t object, const ObjectChunk& chunk) {
		for (const Relocation& relocation : chunk.relocations)
			if ((relocation.kind == RelocationKind::GlobalIndex || relocation.kind == RelocationKind::GlobalIndexI32) &&
				objects_[object].symbols[relocation.index].kind <= 1)
			{
				const ObjectRef target = selected({ object, relocation.index });
				if (address_globals_.size() >= UINT32_MAX - 3 - imported_globals_.size())
					throw WasmError("too many Wasm address globals");
				address_globals_.emplace(
					target, static_cast<uint32_t>(imported_globals_.size() + 3 + address_globals_.size()));
			}
	};
	for (ObjectRef function : ordered_functions_)
		collect(function.first, objects_[function.first].functions[function.second].code);
	for (ObjectRef data : ordered_data_)
		collect(data.first, objects_[data.first].data[data.second].contents);
}

uint32_t Linker::relocation_value(uint32_t object, const Relocation& relocation, bool constant) const
{
	const ObjectRef ref{ object, relocation.index };
	switch (relocation.kind)
	{
	case RelocationKind::TypeIndex:
		return type_indices_[object][relocation.index];
	case RelocationKind::GlobalIndex:
	case RelocationKind::GlobalIndexI32:
		if (symbol(ref).kind <= 1 && !constant)
			return address_globals_.at(selected(ref));
		break;
	case RelocationKind::FunctionIndex:
	case RelocationKind::FunctionIndexI32:
		return function_index(ref);
	default:
		break;
	}
	return symbol_value(ref);
}

Bytes Linker::relocated(uint32_t object, const ObjectChunk& chunk, bool constant, bool code) const
{
	const bool compact = code && options_.wasm_link.compact_relocations;
	const auto& source = chunk.bytes.data;
	const auto by_offset = [](const Relocation& a, const Relocation& b) { return a.offset < b.offset; };
	const auto* relocations = &chunk.relocations;
	std::vector<Relocation> sorted;
	if (compact && !std::is_sorted(relocations->begin(), relocations->end(), by_offset))
	{
		sorted = *relocations;
		std::sort(sorted.begin(), sorted.end(), by_offset);
		relocations = &sorted;
	}
	if (relocations->empty())
		return chunk.bytes;

	Bytes result;
	if (compact)
		result.data.reserve(source.size());
	else
		result = chunk.bytes;
	uint32_t cursor = 0;
	for (const Relocation& relocation : *relocations)
	{
		uint32_t value = relocation_value(object, relocation, constant);
		// A validated function-index relocation immediately after call is
		// a direct call. Keep ref.func and other address uses on their
		// original entry, even when its body shares another entry's code.
		if (code && !folded_functions_.empty() && relocation.kind == RelocationKind::FunctionIndex &&
			relocation.offset != 0 && source[relocation.offset - 1] == 0x10 && value < folded_functions_.size())
			value = folded_functions_[value];
		bool constant_address = false;
		if (constant && relocation.kind == RelocationKind::GlobalIndex)
		{
			const ObjectRef target = selected({ object, relocation.index });
			uint32_t runtime = 0;
			if (symbol(target).kind <= 1 || (runtime_global(target, runtime) && runtime != 0))
			{
				if (relocation.offset == 0 || result.data[relocation.offset - 1] != 0x23)
					throw WasmError("Wasm constant global relocation does not target global.get");
				constant_address = true;
				result.data[relocation.offset - 1] = 0x41;
				value = symbol(target).kind <= 1 ? symbol_value(target) : 0;
			}
		}
		const int64_t sum = int64_t(value) + relocation.addend;
		if (sum < INT32_MIN || sum > UINT32_MAX)
			throw WasmError("Wasm relocation value overflows 32 bits");
		value = static_cast<uint32_t>(sum);
		const bool fixed = relocation.kind == RelocationKind::TableIndexI32 ||
			relocation.kind == RelocationKind::MemoryAddressI32 || relocation.kind == RelocationKind::GlobalIndexI32 ||
			relocation.kind == RelocationKind::FunctionIndexI32;
		const bool signed_value = constant_address || relocation.kind == RelocationKind::TableIndex ||
			relocation.kind == RelocationKind::MemoryAddressSigned ||
			relocation.kind == RelocationKind::MemoryAddressRelative ||
			relocation.kind == RelocationKind::TableIndexRelative;
		if (compact)
		{
			result.data.insert(result.data.end(), source.begin() + cursor, source.begin() + relocation.offset);
			if (fixed)
				result.fixed(value, 4);
			// The other type-index operand, besides call_indirect's
			// unsigned immediate, is the signed 33-bit block type.
			else if (relocation.kind == RelocationKind::TypeIndex && source[relocation.offset - 1] != 0x11)
				result.signed_leb(value);
			else if (signed_value)
				result.signed_leb(static_cast<int32_t>(value));
			else
				result.unsigned_leb(value);
			cursor = relocation.offset + (fixed ? 4 : 5);
		}
		else if (fixed)
		{
			for (unsigned i = 0; i < 4; ++i)
				result.data[relocation.offset + i] = static_cast<uint8_t>(value >> (i * 8));
		}
		else
		{
			const uint64_t extended = signed_value ? uint64_t(int64_t(int32_t(value))) : uint64_t(value);
			for (unsigned i = 0; i < 5; ++i)
				result.data[relocation.offset + i] = ((extended >> (7 * i)) & 0x7f) | (i == 4 ? 0 : 0x80);
		}
	}
	if (compact)
		result.data.insert(result.data.end(), source.begin() + cursor, source.end());
	return result;
}

} // namespace wasm
