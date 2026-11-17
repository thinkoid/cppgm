#include "support/archive.h"

#include <cstring>

namespace archive {
namespace {
bool number(const std::string& field, size_t& result)
{
	const auto last = field.find_last_not_of(' ');
	if (last == std::string::npos)
		return false;
	result = 0;
	for (size_t i = 0; i <= last; ++i)
	{
		const unsigned d = static_cast<unsigned>(field[i] - '0');
		if (d > 9 || result > (SIZE_MAX - d) / 10)
			return false;
		result = 10 * result + d;
	}
	return true;
}
}

bool members(const std::vector<uint8_t>& bytes, std::vector<Member>& output, std::string& error)
{
	error = "malformed archive";
	if (bytes.size() < 8 || std::memcmp(bytes.data(), "!<arch>\n", 8))
		return false;
	std::string names;
	for (size_t pos = 8; pos < bytes.size();)
	{
		if (bytes.size() - pos < 60 || bytes[pos + 58] != '`' || bytes[pos + 59] != '\n')
			return false;
		const char* header = reinterpret_cast<const char*>(bytes.data() + pos);
		std::string name(header, 16);
		name.erase(name.find_last_not_of(' ') + 1);
		pos += 60;
		size_t length;
		if (!number(std::string(header + 48, 10), length) || length > bytes.size() - pos)
			return false;
		size_t at = pos;
		pos += length;
		if ((length & 1) && (pos == bytes.size() || bytes[pos++] != '\n'))
			return false;
		if (name == "//")
		{
			names.assign(reinterpret_cast<const char*>(bytes.data() + at), length);
			continue;
		}
		if (name.compare(0, 3, "#1/") == 0)
		{
			size_t count;
			if (!number(name.substr(3), count) || count > length)
				return false;
			name.assign(reinterpret_cast<const char*>(bytes.data() + at), count);
			name.erase(name.find_last_not_of('\0') + 1);
			at += count;
			length -= count;
		}
		else if (name.size() > 1 && name[0] == '/' && name[1] >= '0' && name[1] <= '9')
		{
			size_t off;
			if (!number(name.substr(1), off) || off >= names.size())
				return false;
			const auto end = names.find('\n', off);
			if (end == std::string::npos)
				return false;
			name = names.substr(off, end - off);
		}
		if (name == "/" || name == "/SYM64/" || name.compare(0, 9, "__.SYMDEF") == 0)
			continue;
		if (!name.empty() && name.back() == '/')
			name.pop_back();
		output.push_back(Member{ name, at, length });
	}
	error.clear();
	return true;
}
} // namespace archive
