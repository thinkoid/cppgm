#include "wasm/linker.h"

#include <unordered_map>

namespace wasm {

Bytes Linker::forwarding_body(uint32_t target) const
{
	const ObjectRef ref = ordered_functions_[target];
	const Object& object = objects_[ref.first];
	const auto& type = object.types[object.functions[ref.second].type];
	Bytes body;
	body.byte(0); // No additional locals.
	for (uint32_t i = 0; i < type.parameters.size(); ++i)
	{
		body.byte(0x20); // local.get
		body.unsigned_leb(i);
	}
	body.byte(0x10); // call
	body.unsigned_leb(target);
	body.byte(0x0b); // end
	return body;
}

// Compare whole bodies and their signatures after archive/COMDAT selection
// and relocation. Keep each table index and exported/ref.func identity.
// Direct calls can use the shared body without going through the forwarding
// entry. One scan and one candidate per hash bound the extra linker work.
void Linker::fold_functions()
{
	std::unordered_map<uint64_t, uint32_t> bodies;
	std::vector<uint32_t> targets(ordered_functions_.size());
	for (uint32_t i = 0; i < targets.size(); ++i)
	{
		targets[i] = i;
		const ObjectRef ref = ordered_functions_[i];
		if (i < imported_ || weak_functions_.count(ref))
			continue;
		const ObjectFunction& function = objects_[ref.first].functions[ref.second];
		const uint32_t type = type_indices_[ref.first][function.type];
		const Bytes body = relocated(ref.first, function.code, false, true);
		uint64_t hash = 14695981039346656037ull ^ type;
		for (uint8_t byte : body.data)
			hash = (hash ^ byte) * 1099511628211ull;
		const auto found = bodies.emplace(hash, i);
		if (found.second)
			continue;
		const uint32_t target = found.first->second;
		const ObjectRef other = ordered_functions_[target];
		const ObjectFunction& definition = objects_[other.first].functions[other.second];
		if (type_indices_[other.first][definition.type] == type &&
			body.data.size() > forwarding_body(target).data.size() &&
			body.data == relocated(other.first, definition.code, false, true).data)
			targets[i] = target;
	}
	folded_functions_.swap(targets);
}

} // namespace wasm
