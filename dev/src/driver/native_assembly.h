#pragma once

#include <string>

#include "native/target.h"

struct PreprocessorOptions;

namespace native {
namespace object {
struct ObjectFile;
}
}

namespace driver {

bool compile_native_assembly(const std::string& path, const PreprocessorOptions& base, native::Target target,
	native::object::ObjectFile& object);

} // namespace driver
