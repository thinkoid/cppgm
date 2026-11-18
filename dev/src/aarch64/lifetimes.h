#pragma once

#include "lowir/program.h"

namespace aarch64 {

struct LiveRange
{
	uint32_t id, first = lowir::kNoId, last = 0;
	bool vector_address = false;
};

std::vector<LiveRange> live_ranges(const lowir::Program& program, const lowir::FunctionBody& body, bool exceptional,
	std::vector<uint32_t>& uses, std::vector<uint32_t>& calls);

} // namespace aarch64
