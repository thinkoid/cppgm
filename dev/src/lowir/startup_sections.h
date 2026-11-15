#pragma once

#include <cstdint>
#include <cstring>
#include "lowir/program.h"

namespace lowir {

struct StartupFunction
{
	SymbolId symbol;
	uint32_t priority;
};

// Typed function-address tables, checked once for either output backend.
bool startup_functions(const Program& program, std::vector<StartupFunction>& out, std::string& error);

// GNU object-section ABI, shared by the native and Wasm object producers.
inline bool initializer_section(const char* name, uint32_t& priority)
{
	if (std::strncmp(name, ".init_array", 11) != 0)
		return false;
	priority = 65535;
	if (name[11] == '\0')
		return true;
	if (name[11] != '.' || name[12] == '\0')
		return false;
	priority = 0;
	for (const char* digit = name + 12; *digit != '\0'; ++digit)
	{
		if (*digit < '0' || *digit > '9' || priority > 6553)
			return false;
		priority = priority * 10 + static_cast<uint32_t>(*digit - '0');
	}
	return priority <= 65535;
}

} // namespace lowir
