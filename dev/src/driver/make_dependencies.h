#pragma once

#include <iosfwd>
#include <string>
#include <vector>

namespace driver {

struct MakeDependencies
{
	enum class Mode
	{
		None,
		Only,
		SideFile
	};

	Mode mode = Mode::None;
	bool include_system = false;
	bool phony = false;
	std::string file;
	std::vector<std::string> targets;
};

std::string quote_make_name(const std::string& name);
void write_make_rule(std::ostream& out, const MakeDependencies& options, const std::string& default_target,
	const std::string& source, const std::vector<std::string>& headers);

} // namespace driver
