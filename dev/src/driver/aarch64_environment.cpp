#include "driver/aarch64_environment.h"

#include "driver/binary128_predefines.h"
#include "driver/host_environment.h"

namespace driver {

void configure_aarch64_environment(PreprocessorOptions& options)
{
	options.host_predefines.clear();
	options.hosted = true;
	options.popcnt = false;
	options.sse_level = 0;
	const char* list =
		"struct __va_list { void* __stack; void* __gr_top; void* __vr_top; int __gr_offs; int __vr_offs; };";
	if (options.language == SourceLanguage::C)
		options.builtin_declarations = std::string(list) + "typedef struct __va_list __builtin_va_list;\n";
	else
		options.builtin_declarations = std::string("namespace std { ") + list +
			"} typedef std::__va_list __builtin_va_list;\n" + builtin_template_declarations();
	std::string macros =
		"#undef __x86_64__\n#undef __SSE__\n#undef __SSE2__\n"
		"#define __aarch64__ 1\n#define __AARCH64EL__ 1\n#define __ARM_ARCH 8\n#define __ARM_NEON 1\n"
		"#define __ARM_PCS_AAPCS64 1\n#define __ELF__ 1\n#define __gnu_linux__ 1\n#define __unix__ 1\n"
		"#define __ATOMIC_RELAXED 0\n#define __ATOMIC_CONSUME 1\n#define __ATOMIC_ACQUIRE 2\n"
		"#define __ATOMIC_RELEASE 3\n#define __ATOMIC_ACQ_REL 4\n#define __ATOMIC_SEQ_CST 5\n"
		"#define __LP64__ 1\n#define _LP64 1\n#define __CHAR_BIT__ 8\n"
		"#define __SIZEOF_POINTER__ 8\n#define __SIZEOF_LONG__ 8\n#define __SIZEOF_LONG_LONG__ 8\n"
		"#define __SIZEOF_SHORT__ 2\n#define __SIZEOF_INT__ 4\n#define __SIZEOF_INT128__ 16\n"
		"#define __SIZEOF_FLOAT__ 4\n#define __SIZEOF_DOUBLE__ 8\n#define __SIZEOF_LONG_DOUBLE__ 16\n"
		"#define __SIZE_TYPE__ long unsigned int\n#define __PTRDIFF_TYPE__ long int\n"
		"#define __INTPTR_TYPE__ long int\n#define __UINTPTR_TYPE__ long unsigned int\n"
		"#define __WCHAR_TYPE__ unsigned int\n#define __WCHAR_UNSIGNED__ 1\n#define __WCHAR_MAX__ 4294967295U\n"
		"#define __ORDER_LITTLE_ENDIAN__ 1234\n#define __ORDER_BIG_ENDIAN__ 4321\n"
		"#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\n";
	macros += kBinary128NumericPredefines;
	options.command_line.insert(0, macros);
}

void add_aarch64_headers(
	PreprocessorOptions& options, const std::string& sysroot, const std::string& resource_directory)
{
	if (!resource_directory.empty())
		options.system_include_paths.push_back(resource_directory + "/include");
	if (!sysroot.empty())
	{
		options.system_include_paths.push_back(sysroot + "/usr/include/aarch64-linux-gnu");
		options.system_include_paths.push_back(sysroot + "/usr/include");
		options.system_include_paths.push_back(sysroot + "/include");
	}
}

} // namespace driver
