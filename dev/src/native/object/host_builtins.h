#pragma once

namespace native {

// The builtin routines' host names (host objects): the C library's, and
// the Itanium names of the global allocation functions.
const unsigned kHostBuiltinCount = 9;
const char* const kHostBuiltins[kHostBuiltinCount][2] = { { "cppgm_builtin_strlen", "strlen" },
	{ "cppgm_builtin_memcpy", "memcpy" }, { "cppgm_builtin_memmove", "memmove" }, { "cppgm_builtin_memset", "memset" },
	{ "cppgm_builtin_memcmp", "memcmp" }, { "cppgm_builtin_operator_new", "_Znwm" },
	{ "cppgm_builtin_operator_new_array", "_Znam" }, { "cppgm_builtin_operator_delete", "_ZdlPv" },
	{ "cppgm_builtin_operator_delete_array", "_ZdaPv" } };

} // namespace native
