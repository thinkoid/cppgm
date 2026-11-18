#pragma once

#include "lowir/program.h"

namespace machine {
struct ExceptionLayout;
}

namespace aarch64 {

struct LiveRange
{
	uint32_t id, first = lowir::kNoId, last = 0;
	uint32_t segments = 0, count = 0, affinity = lowir::kNoId;
	bool vector_address = false;
};

std::vector<LiveRange> live_ranges(const lowir::Program& program, const lowir::FunctionBody& body,
	const machine::ExceptionLayout* exceptions, std::vector<uint32_t>& uses, std::vector<uint32_t>& calls,
	std::vector<std::pair<uint32_t, uint32_t>>& segments);

} // namespace aarch64
