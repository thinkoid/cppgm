#pragma once
#include "native/image/executable_file.h"

namespace native {
namespace macho_image {
uint64_t align_up(uint64_t value, uint64_t align);
void put(std::vector<uint8_t>& out, uint64_t value, unsigned width);
void segment(std::vector<uint8_t>& out, const char* segment_name, uint64_t address, uint64_t memory, uint64_t offset,
	uint64_t bytes, uint32_t protection, uint32_t sections, uint32_t flags = 0);
void section(std::vector<uint8_t>& out, const char* section_name, const char* segment_name, uint64_t address,
	uint64_t bytes, uint64_t offset, uint32_t flags);
}
}
