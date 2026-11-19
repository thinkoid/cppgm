#include "src/backend/lowir_c_module.h"

#include <exception>
#include <memory>

#include "src/support/internal_error.h"
#include "src/support/version.h"

namespace {

// Last-resort foreign boundary. Reporting uses a fixed buffer so bad_alloc
// itself can be returned without allocating. Compiler errors never cross C.
template<class Result, class Action>
Result invoke(CppgmLowir* module, Result failure, Action action)
{
	if (module == nullptr || module->error[0] != 0)
		return failure;
	try
	{
		return action();
	}
	catch (const InternalError& error)
	{
		module->fail(error.what());
	}
	catch (const std::exception& error)
	{
		module->fail(error.what());
	}
	return failure;
}

constexpr target_model::Target targets[] = { target_model::Target::Linux, target_model::Target::MacOS,
	target_model::Target::Wasm32, target_model::Target::Wasi, target_model::Target::Emscripten,
	target_model::Target::AArch64Linux, target_model::Target::AArch64MacOS };
static_assert(sizeof targets / sizeof targets[0] == CPPGM_TARGET_AARCH64_MACOS + 1,
	"target table covers the public target enumeration");

} // namespace

extern "C" {

uint32_t cppgm_lowir_abi_version(void)
{
	return CPPGM_LOWIR_ABI_VERSION;
}

const char* cppgm_lowir_version(void)
{
	return CPPGM_VERSION;
}

CppgmLowir* cppgm_lowir_create(uint32_t version, uint32_t target)
{
	if (version < CPPGM_LOWIR_ABI_VERSION_MIN || version > CPPGM_LOWIR_ABI_VERSION ||
		target >= sizeof targets / sizeof targets[0] || (version < 5 && target > CPPGM_TARGET_MACOS))
		return nullptr;
	try
	{
		std::unique_ptr<CppgmLowir> module(new CppgmLowir());
		module->program.target = targets[target];
		module->program.explicit_target = true;
		return module.release();
	}
	catch (const InternalError&)
	{
		return nullptr;
	}
	catch (const std::exception&)
	{
		return nullptr;
	}
}

void cppgm_lowir_destroy(CppgmLowir* module)
{
	delete module;
}

const char* cppgm_lowir_error(const CppgmLowir* module)
{
	return module == nullptr ? "invalid ABI version, target, or allocation failure" : module->error;
}

uint32_t cppgm_lowir_symbol(CppgmLowir* module, const char* name, uint32_t length)
{
	return invoke(module, CPPGM_NO_ID, [&]() { return module->symbol(name, length); });
}

uint32_t cppgm_lowir_signature(
	CppgmLowir* module, CppgmType result, const CppgmType* parameters, uint32_t count, uint32_t variadic)
{
	return invoke(module, CPPGM_NO_ID, [&]() { return module->signature(result, parameters, count, variadic); });
}

int cppgm_lowir_function(CppgmLowir* module, uint32_t symbol, uint32_t signature, uint32_t binding, uint32_t definition)
{
	return invoke(module, 0, [&]() { return module->function(symbol, signature, binding, definition); });
}

int cppgm_lowir_global(CppgmLowir* module, uint32_t symbol, CppgmType type, uint32_t binding, uint32_t storage,
	const CppgmDataItem* items, uint32_t count, uint32_t declaration)
{
	return invoke(
		module, 0, [&]() { return module->global(symbol, type, binding, storage, items, count, declaration); });
}

int cppgm_lowir_body_reserve(
	CppgmLowir* module, uint32_t symbol, const CppgmBodyCounts* minimum, CppgmBodyBuffers* buffers)
{
	return invoke(module, 0, [&]() {
		return minimum != nullptr && buffers != nullptr ? module->reserve_body(symbol, *minimum, *buffers)
														: module->fail("null body buffer request");
	});
}

int cppgm_lowir_body_commit(CppgmLowir* module, uint32_t symbol, const CppgmBodyCounts* counts, uint32_t temp_count)
{
	return invoke(module, 0, [&]() {
		return counts != nullptr ? module->commit_body(symbol, *counts, temp_count) : module->fail("null body counts");
	});
}

uint32_t cppgm_lowir_boundary(CppgmLowir* module, CppgmType result, const CppgmParameter* parameters, uint32_t count,
	const CppgmBoundary* boundary)
{
	return invoke(module, CPPGM_NO_ID, [&]() { return module->boundary(result, parameters, count, boundary); });
}

CppgmType cppgm_lowir_record(
	CppgmLowir* module, uint64_t bytes, uint32_t alignment, const CppgmField* fields, uint32_t count)
{
	return invoke(module, CppgmType(0), [&]() { return module->record(bytes, alignment, fields, count); });
}

int cppgm_lowir_symbol_fact(CppgmLowir* module, uint32_t symbol, uint32_t key, uint32_t value)
{
	return invoke(module, 0, [&]() { return module->symbol_fact(symbol, key, value); });
}

int cppgm_lowir_symbol_name(CppgmLowir* module, uint32_t symbol, uint32_t key, const char* name, uint32_t length)
{
	return invoke(module, 0, [&]() { return module->symbol_name(symbol, key, name, length); });
}

int cppgm_lowir_body_argument_facts(CppgmLowir* module, uint32_t symbol, const CppgmArgumentFact* facts, uint32_t count)
{
	return invoke(module, 0, [&]() { return module->argument_facts(symbol, facts, count); });
}

uint32_t cppgm_lowir_assembly(CppgmLowir* module, const CppgmAssembly* assembly)
{
	return invoke(module, CPPGM_NO_ID, [&]() {
		if (assembly != nullptr)
			return module->assembly(*assembly);
		module->fail("null assembly template");
		return CPPGM_NO_ID;
	});
}

uint32_t cppgm_lowir_debug_file(CppgmLowir* module, const char* name, uint32_t length)
{
	return invoke(module, CPPGM_NO_ID, [&]() { return module->debug_file(name, length); });
}

int cppgm_lowir_function_location(CppgmLowir* module, uint32_t symbol, const CppgmDebugLocation* location)
{
	return invoke(module, 0, [&]() { return module->function_location(symbol, location); });
}

int cppgm_lowir_body_locations(
	CppgmLowir* module, uint32_t symbol, const CppgmDebugLocation* locations, uint32_t count, const uint32_t* indices)
{
	return invoke(module, 0, [&]() { return module->body_locations(symbol, locations, count, indices); });
}

uint32_t cppgm_lowir_debug_type(CppgmLowir* module, const CppgmDebugType* type)
{
	return invoke(module, CPPGM_NO_ID, [&]() {
		if (type != nullptr)
			return module->debug_type(*type);
		module->fail("null debug type");
		return CPPGM_NO_ID;
	});
}

uint32_t cppgm_lowir_debug_scope(CppgmLowir* module, uint32_t function, uint32_t parent)
{
	return invoke(module, CPPGM_NO_ID, [&]() { return module->debug_scope(function, parent); });
}

int cppgm_lowir_debug_local(CppgmLowir* module, uint32_t function, uint32_t slot, uint32_t type, uint32_t scope,
	const char* name, uint32_t length, const CppgmDebugLocation* declaration)
{
	return invoke(
		module, 0, [&]() { return module->debug_local(function, slot, type, scope, name, length, declaration); });
}

int cppgm_lowir_validate(CppgmLowir* module)
{
	return invoke(module, 0, [&]() { return module->validate(); });
}

int cppgm_lowir_write(CppgmLowir* module, const char* path)
{
	return invoke(module, 0, [&]() { return module->write(path); });
}

int cppgm_lowir_compile(CppgmLowir* module, uint32_t level, uint32_t pic)
{
	return invoke(module, 0, [&]() { return module->compile(level, pic); });
}

const uint8_t* cppgm_lowir_object_data(const CppgmLowir* module)
{
	return module == nullptr || module->error[0] != 0 ? nullptr : module->object.data();
}

uint64_t cppgm_lowir_object_size(const CppgmLowir* module)
{
	return module == nullptr || module->error[0] != 0 ? 0 : module->object.size();
}

} // extern "C"
