#include "wasm/linker.h"

#include <algorithm>

namespace wasm {

bool Linker::request_section_boundary(const std::string& name)
{
	const bool start = name.compare(0, 8, "__start_") == 0;
	if (!start && name.compare(0, 7, "__stop_") != 0)
		return false;
	const std::string section = name.substr(start ? 8 : 7);
	if (section.empty())
		return false;
	if (named_sections_.count(section))
		return true;
	bool found = false;
	// Like GNU section-boundary references, naming a boundary retains the
	// matching input sections in active objects, including their relocations.
	// It does not extract otherwise unreferenced archive members.
	for (uint32_t object = 0; object < objects_.size(); ++object)
		if (active_[object])
			for (uint32_t index = 0; index < objects_[object].data.size(); ++index)
				if (objects_[object].data[index].name == section && !discarded_data_.count({ object, index }))
				{
					found = true;
					const ObjectRef ref{ object, index };
					if (data_.emplace(ref, 0).second)
						ordered_data_.push_back(ref);
				}
	if (found)
		named_sections_.emplace(section, std::make_pair(kAbsent, kAbsent));
	return found;
}

void Linker::group_named_sections()
{
	// Keep each requested section contiguous, in its original input order.
	// Ordinary links retain their original placement and avoid this work.
	auto end = ordered_data_.end();
	for (const auto& section : named_sections_)
		end = std::stable_partition(ordered_data_.begin(), end,
			[&](ObjectRef ref) { return objects_[ref.first].data[ref.second].name != section.first; });
}

void Linker::prepare_data_exports()
{
	const auto add = [&](const std::string& name, ObjectRef ref) {
		uint32_t address = 0;
		if (ref.first == kAbsent)
		{
			if (!synthetic_data(name, address))
				throw WasmError("unresolved Wasm data export: " + name);
		}
		else
		{
			if (symbol(ref).kind != 1)
				return;
			address = symbol_value(ref);
		}
		data_exports_.emplace(name, std::make_pair(0u, address));
	};
	for (const std::string& name : options_.exports)
	{
		const auto found = definitions_.find(name);
		add(name, found == definitions_.end() ? ObjectRef{ kAbsent, kAbsent } : found->second);
	}
	for (uint32_t object = 0; object < objects_.size(); ++object)
		if (active_[object])
			for (uint32_t index = 0; index < objects_[object].symbols.size(); ++index)
			{
				const auto& source = objects_[object].symbols[index];
				if (source.kind == 1 && (source.flags & 0x20) != 0)
					add(source.name, { object, index });
			}
	const uint64_t base = imported_globals_.size() + 3 + address_globals_.size();
	if (base + data_exports_.size() > UINT32_MAX)
		throw WasmError("too many Wasm data export globals");
	uint32_t index = static_cast<uint32_t>(base);
	for (auto& entry : data_exports_)
		entry.second.first = index++;
}

} // namespace wasm
