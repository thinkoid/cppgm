#pragma once

#include <cstdio>

#include "backend/lowir_c.h"
#include "lowir/program.h"

// The C handle owns the ordinary typed program. The foreign boundary lives
// in dev/lowir_library.cpp, alongside the executable exception boundaries.
struct CppgmLowir
{
	lowir::Program program;
	std::vector<uint8_t> object;
	// By NameId: the names cppgm_lowir_debug_file has returned.
	std::vector<uint8_t> debug_files;
	char error[1024] = {};
	bool validated = false;
	bool consumed = false;

	bool fail(const char* message)
	{
		std::snprintf(error, sizeof error, "%s", message);
		return false;
	}
	bool ready()
	{
		if (error[0] != 0)
			return false;
		if (consumed)
			return fail("module has already been consumed");
		validated = false;
		return true;
	}
	uint32_t symbol(const char* name, uint32_t length);
	uint32_t signature(CppgmType result, const CppgmType* parameters, uint32_t count, uint32_t variadic);
	bool function(uint32_t symbol, uint32_t signature, uint32_t binding, uint32_t definition);
	bool global(uint32_t symbol, CppgmType type, uint32_t binding, uint32_t storage, const CppgmDataItem* items,
		uint32_t count, uint32_t declaration);
	bool reserve_body(uint32_t symbol, const CppgmBodyCounts& minimum, CppgmBodyBuffers& buffers);
	bool commit_body(uint32_t symbol, const CppgmBodyCounts& counts, uint32_t temp_count);
	// Since ABI version 3 (lowir_c_metadata.cpp, lowir_c_assembly.cpp, lowir_c_debug.cpp).
	uint32_t boundary(
		CppgmType result, const CppgmParameter* parameters, uint32_t count, const CppgmBoundary* boundary);
	bool symbol_fact(uint32_t symbol, uint32_t key, uint32_t value);
	bool symbol_name(uint32_t symbol, uint32_t key, const char* name, uint32_t length);
	bool argument_facts(uint32_t symbol, const CppgmArgumentFact* facts, uint32_t count);
	uint32_t assembly(const CppgmAssembly& assembly);
	uint32_t debug_file(const char* name, uint32_t length);
	bool function_location(uint32_t symbol, const CppgmDebugLocation* location);
	bool body_locations(uint32_t symbol, const CppgmDebugLocation* locations, uint32_t count, const uint32_t* indices);
	uint32_t debug_type(const CppgmDebugType& type);
	uint32_t debug_scope(uint32_t function, uint32_t parent);
	bool debug_local(uint32_t function, uint32_t slot, uint32_t type, uint32_t scope, const char* name, uint32_t length,
		const CppgmDebugLocation* declaration);
	bool validate();
	bool write(const char* path);
	bool compile(uint32_t level, uint32_t pic);

	// The body of a defined function after cppgm_lowir_body_commit, or null.
	lowir::FunctionBody* committed_body(uint32_t symbol);
	// A location's record; false (after fail) for one the text form cannot hold.
	bool location(const CppgmDebugLocation& from, lowir::DebugLocation& to);
};

namespace backend {
namespace c_api {

lowir::Type type(CppgmType bits);
bool valid_type(CppgmType bits);

} // namespace c_api
} // namespace backend
