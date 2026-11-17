#include "native/image/macho_image.h"
#include "native/image/macho_signature.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <sys/stat.h>

namespace native {
namespace {
using namespace macho_image;
const uint64_t page = 16384;
const uint64_t base = 0x100000000ull;

void words(std::vector<uint8_t>& out, std::initializer_list<uint32_t> values)
{
	for (auto value : values)
		put(out, value, 4);
}

void path_command(std::vector<uint8_t>& out, const char* path, bool library)
{
	const unsigned header = library ? 24 : 12;
	const size_t size = align_up(header + std::strlen(path) + 1, 8);
	const size_t start = out.size();
	words(out, { library ? 0xcu : 0xeu, static_cast<uint32_t>(size), header });
	if (library)
		words(out, { 2, 0x10000, 0x10000 });
	out.insert(out.end(), path, path + std::strlen(path));
	out.resize(start + size, 0);
}

std::vector<uint8_t> rebase_stream(const ExecutableLayout& layout)
{
	std::vector<uint8_t> result;
	if (layout.rebases.empty())
		return result;
	result.push_back(0x11); // REBASE_TYPE_POINTER
	auto addresses = layout.rebases;
	std::sort(addresses.begin(), addresses.end());
	addresses.erase(std::unique(addresses.begin(), addresses.end()), addresses.end());
	for (const uint64_t address : addresses)
	{
		const bool data = layout.has_data && address >= layout.data_address;
		result.push_back(0x20 | (data ? 2u + layout.has_rodata : 2u));
		uint64_t offset = address - (data ? layout.data_address : layout.rodata_address);
		do
		{
			const auto low = offset & 127;
			offset >>= 7;
			result.push_back(low | (offset ? 128 : 0));
		} while (offset);
		result.push_back(0x51); // DO_REBASE_IMM_TIMES(1)
	}
	result.push_back(0);
	return result;
}

struct ImageSizes
{
	uint64_t text, rodata, data, bss, text_file, rodata_file, data_file, data_memory, link_file, link_address;
};

void load_segments(std::vector<uint8_t>& out, const ExecutableLayout& l, const ImageSizes& s, uint64_t end)
{
	segment(out, "__PAGEZERO", 0, base, 0, 0, 0, 0);
	segment(out, "__TEXT", base, s.text_file, 0, s.text_file, 5, 1);
	section(out, "__text", "__TEXT", l.text_address, s.text, l.text_offset, 0x80000400);
	if (l.has_rodata)
	{
		segment(out, "__DATA_CONST", l.rodata_address, s.rodata_file, l.rodata_offset, s.rodata_file, 3, 1, 0x10);
		section(out, "__const", "__DATA_CONST", l.rodata_address, s.rodata, l.rodata_offset, 0);
	}
	if (l.has_data)
	{
		segment(out, "__DATA", l.data_address, s.data_memory, l.data_offset, s.data_file, 3, 2);
		section(out, "__data", "__DATA", l.data_address, s.data, l.data_offset, 0);
		section(out, "__bss", "__DATA", l.bss_address, s.bss, 0, 1);
	}
	segment(out, "__LINKEDIT", s.link_address, align_up(end - s.link_file, page), s.link_file, end - s.link_file, 1, 0);
}
}

bool write_arm64_macho(const std::string& path, const ExecutableLayout& l, const std::vector<uint8_t>& text,
	const std::vector<uint8_t>& rodata, const std::vector<uint8_t>& data, uint64_t bss, uint64_t entry,
	std::string& error)
{
	const auto rebases = rebase_stream(l);
	ImageSizes s = { text.size(), rodata.size(), data.size(), bss, align_up(l.text_offset + text.size(), page),
		align_up(rodata.size(), page), align_up(data.size(), page),
		align_up(l.bss_address + bss - l.data_address, page), 0, 0 };
	s.link_file = l.has_data ? l.data_offset + s.data_file
		: l.has_rodata       ? l.rodata_offset + s.rodata_file
							 : s.text_file;
	s.link_address = l.has_data ? l.data_address + s.data_memory : base + s.link_file;
	const uint64_t strings = s.link_file + rebases.size();
	const uint64_t limit = align_up(strings + 1, 16), sig = macho_signature_size(limit);
	if (limit + sig >= UINT32_MAX)
	{
		error = "arm64 Mach-O executable exceeds 4 GiB";
		return false;
	}
	std::vector<uint8_t> out;
	unsigned cmd_count = 3 + l.has_data + l.has_rodata + 9;
	words(out, { 0xfeedfacf, 0x0100000c, 0, 2, cmd_count, 0, 0x200085, 0 }); // MH_PIE | TWOLEVEL | DYLDLINK | NOUNDEFS

	load_segments(out, l, s, limit + sig);
	path_command(out, "/usr/lib/dyld", false);
	path_command(out, "/usr/lib/libSystem.B.dylib", true);
	words(out, { 0x1b, 24 }); // LC_UUID
	const auto uuid = out.size();
	out.resize(uuid + 16, 0);
	words(out, { 0x32, 24, 1, 0xb0000, 0xb0000, 0 }); // LC_BUILD_VERSION, macOS 11
	words(out, { 0x80000028, 24 });
	put(out, entry - base, 8);
	put(out, 0, 8);
	words(out,
		{ 0x80000022, 48, rebases.empty() ? 0u : uint32_t(s.link_file), uint32_t(rebases.size()), 0, 0, 0, 0, 0, 0, 0,
			0 });
	words(out, { 2, 24, uint32_t(strings), 0, uint32_t(strings), 1 }); // empty LC_SYMTAB and LC_DYSYMTAB
	words(out, { 11, 80 });
	out.resize(out.size() + 72, 0);
	words(out, { 0x1d, 16, uint32_t(limit), uint32_t(sig) });
	uint32_t commands = out.size() - 32;
	for (unsigned i = 0; i < 4; ++i)
		out[20 + i] = commands >> (8 * i);
	out.resize(l.text_offset);
	out.insert(out.end(), text.begin(), text.end());
	if (l.has_rodata)
	{
		out.resize(l.rodata_offset);
		out.insert(out.end(), rodata.begin(), rodata.end());
	}
	if (l.has_data)
	{
		out.resize(l.data_offset);
		out.insert(out.end(), data.begin(), data.end());
	}
	out.resize(s.link_file);
	out.insert(out.end(), rebases.begin(), rebases.end());
	out.resize(limit, 0);
	set_macho_uuid(out, uuid);
	append_macho_signature(out, s.text_file);
	std::FILE* file = std::fopen(path.c_str(), "wb");
	if (file)
	{
		const bool written = std::fwrite(out.data(), 1, out.size(), file) == out.size();
		if (std::fclose(file) == 0 && written && chmod(path.c_str(), 0755) == 0)
			return true;
	}
	error = "cannot write Mach-O executable " + path;
	return false;
}
} // namespace native
