#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace archive {

struct Member
{
	std::string name;
	size_t offset, size;
};

// The shared System V / BSD archive envelope. Member payloads stay in the
// input buffer until their object-format reader consumes them.
bool members(const std::vector<uint8_t>& bytes, std::vector<Member>& output, std::string& error);

} // namespace archive
