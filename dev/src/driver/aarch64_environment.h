#pragma once

#include "driver/host_environment.h"

namespace driver {

void configure_aarch64_environment(PreprocessorOptions& options);
void add_aarch64_headers(PreprocessorOptions& options, const std::string& sysroot,
	const std::string& resource_directory, StandardIncludes includes);

} // namespace driver
