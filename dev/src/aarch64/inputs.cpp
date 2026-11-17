#include "aarch64/link.h"

#include <map>
#include <set>
#include "native/object/elf_object.h"
#include "native/object/macho_object.h"
#include "support/archive.h"

namespace aarch64 {
namespace obj = native::object;
namespace {

void collect(const obj::ObjectFile& file, std::set<std::string>& defined, std::vector<std::string>& wanted)
{
	for (unsigned i = 1; i < file.symbols.size(); ++i)
	{
		const auto& sym = file.symbols[i];
		if (sym.binding == obj::Binding::Local)
			continue;
		if (sym.section != obj::kUndefinedSection)
			defined.insert(file.symbol_name(i));
		else if (sym.binding == obj::Binding::Global)
			wanted.emplace_back(file.symbol_name(i));
	}
}
}

bool read_input(const std::string& path, std::vector<obj::ObjectFile>& objects, std::string& error, bool darwin)
{
	std::vector<uint8_t> bytes;
	if (!obj::read_object_bytes(path, bytes, error))
		return false;
	const auto decode = darwin ? obj::decode_macho_object : obj::decode_elf_object;
	if (bytes.size() < 8 || std::memcmp(bytes.data(), "!<arch>\n", 8))
	{
		objects.emplace_back();
		objects.back().path = path;
		return decode(bytes, objects.back(), error);
	}
	std::vector<archive::Member> members;
	if (!archive::members(bytes, members, error))
	{
		error = path + ": " + error;
		return false;
	}
	std::vector<obj::ObjectFile> candidates(members.size());
	std::map<std::string, size_t> index;
	for (size_t i = 0; i < members.size(); ++i)
	{
		const auto& member = members[i];
		auto& file = candidates[i];
		file.path = path + "(" + member.name + ")";
		const auto first = bytes.begin() + member.offset;
		if (!decode(std::vector<uint8_t>(first, first + member.size), file, error))
			return false;
		for (unsigned s = 1; s < file.symbols.size(); ++s)
			if (file.symbols[s].binding != obj::Binding::Local && file.symbols[s].section != obj::kUndefinedSection)
				index.emplace(file.symbol_name(s), i);
	}
	std::set<std::string> defined;
	std::vector<std::string> wanted;
	for (const auto& file : objects)
		collect(file, defined, wanted);
	// An implicit course entry references main, including when supplied by an archive.
	if (!defined.count("_start"))
		wanted.emplace_back("main");
	for (size_t i = 0; i < wanted.size(); ++i)
	{
		if (defined.count(wanted[i]))
			continue;
		const auto member = index.find(wanted[i]);
		if (member == index.end())
			continue;
		auto& file = candidates[member->second];
		collect(file, defined, wanted);
		objects.push_back(std::move(file));
	}
	return true;
}

} // namespace aarch64
