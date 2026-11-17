#include "wasm/object_reader.h"

#include "support/archive.h"
#include <algorithm>
#include <fstream>
#include <sys/stat.h>

namespace wasm {

namespace {

void archive_objects(const Bytes& bytes, const std::string& path, std::vector<Object>& objects)
{
	std::vector<archive::Member> members;
	std::string error;
	if (!archive::members(bytes.data, members, error))
		throw WasmError(path + ": " + error);
	for (const auto& member : members)
	{
		Object object;
		object.path = path + "(" + member.name + ")";
		object.archive_member = true;
		Bytes payload;
		payload.data.assign(bytes.data.begin() + member.offset, bytes.data.begin() + member.offset + member.size);
		read_object_bytes(payload, object);
		objects.push_back(std::move(object));
	}
}

} // namespace

Bytes read_link_file(const std::string& path)
{
	std::ifstream file(path, std::ios::binary);
	if (!file)
		throw WasmError("cannot read Wasm link input: " + path);
	Bytes bytes;
	struct stat status;
	if (::stat(path.c_str(), &status) == 0 && S_ISREG(status.st_mode) && status.st_size > 0)
		bytes.data.reserve(static_cast<size_t>(status.st_size));
	char chunk[65536];
	while (file)
	{
		file.read(chunk, sizeof chunk);
		const std::streamsize count = file.gcount();
		bytes.data.insert(bytes.data.end(), chunk, chunk + count);
	}
	if (file.bad() || !file.eof())
		throw WasmError("cannot read Wasm link input: " + path);
	return bytes;
}

void read_link_inputs(const std::string& path, LinkInputs& inputs, bool once)
{
	struct stat status;
	if (::stat(path.c_str(), &status) != 0)
		throw WasmError("cannot read Wasm link input: " + path);
	const std::pair<uint64_t, uint64_t> identity{ static_cast<uint64_t>(status.st_dev),
		static_cast<uint64_t>(status.st_ino) };
	if (once && std::find(inputs.files.begin(), inputs.files.end(), identity) != inputs.files.end())
		return;
	inputs.files.push_back(identity);
	auto& objects = inputs.objects;
	const Bytes bytes = read_link_file(path);
	const std::string magic(bytes.data.begin(), bytes.data.begin() + std::min<size_t>(8, bytes.data.size()));
	if (magic == "!<arch>\n")
		archive_objects(bytes, path, objects);
	else
	{
		Object object;
		object.path = path;
		read_object_bytes(bytes, object);
		objects.push_back(std::move(object));
	}
}

} // namespace wasm
