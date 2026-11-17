#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace native {

// Size and append operations agree on the identifier and the 4 KiB hash page.
void set_macho_uuid(std::vector<uint8_t>& image, std::size_t offset);
uint64_t macho_signature_size(uint64_t code_limit);
void append_macho_signature(std::vector<uint8_t>& image, uint64_t executable_bytes);

} // namespace native
