#pragma once

#include <cstdio>
#include <unordered_map>

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
	// Record types by ID (lowir_c_records.cpp).
	struct Record
	{
		CppgmType object;     // the obj type it stands for
		uint32_t first_field; // its fields: [first_field, first_field + field_count) of `fields`
		uint32_t field_count;
		uint32_t placements; // for at most 16 bytes, its classes at each offset in `placements`, else CPPGM_NO_ID
		uint8_t classes;     // x86-64 classes= of a direct object, 0 for the default
		ir_model::AggregateShape shape; // Wasm and AArch64 boundary representation
	};
	std::vector<Record> records;
	std::vector<CppgmField> fields;
	// Per record of at most 16 bytes: the merged classes of its two
	// eightbytes when it is at byte 0 to 15 of an object of 16 bytes.
	std::vector<uint8_t> placements;
	// By program parameter: 1 + the record of a parameter of a record type, or 0.
	std::vector<uint32_t> parameter_records;
	// By function symbol: the temporaries and slots of a committed body
	// that have a record type, as (ID, record) pairs in ID order.
	struct BodyRecords
	{
		std::vector<std::pair<uint32_t, uint32_t>> temps, slots;
	};
	std::unordered_map<uint32_t, BodyRecords> body_records;
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
	// Since ABI version 4 (lowir_c_records.cpp).
	CppgmType record(uint64_t bytes, uint32_t alignment, const CppgmField* fields, uint32_t count);
	// The record of a record type, or CPPGM_NO_ID for another type; a record
	// type becomes the obj type it stands for.
	uint32_t resolve_record(CppgmType& bits) const;
	uint32_t resolve_record(lowir::Type& t) const;
	// The classes a direct object of `record` has unless `stated` is nonzero.
	uint8_t record_classes(uint32_t record, uint8_t stated) const
	{
		return stated != 0 || record == CPPGM_NO_ID ? stated : records[record].classes;
	}
	ir_model::AggregateShape record_shape(uint32_t record, ir_model::AggregateShape stated = {}) const
	{
		return stated.element != ir_model::AggregateElement::None || record == CPPGM_NO_ID ? stated
																						   : records[record].shape;
	}
	void note_parameter_record(uint32_t parameter, uint32_t record);
	// Before a body's commit: its record types become obj types.
	void resolve_body_records(uint32_t symbol, const CppgmBodyCounts& counts);
	// Before validation: the classes of record objects past a variadic
	// boundary's fixed parameters and of va_arg results.
	void state_record_facts();
	bool validate();
	bool write(const char* path);
	bool compile(uint32_t level, uint32_t pic);
	bool compile_native(uint32_t level, bool pic);

	// The body of a defined function after cppgm_lowir_body_commit, or null.
	lowir::FunctionBody* committed_body(uint32_t symbol);
	// A location's record; false (after fail) for one the text form cannot hold.
	bool location(const CppgmDebugLocation& from, lowir::DebugLocation& to);
	static CppgmType type_bits(uint64_t bytes, uint32_t alignment);
	// The merged classes of `record`'s eightbytes at byte `at` of an object
	// of 16 bytes; `steps` are its fields' element sizes.
	void place(const Record& record, const std::vector<uint64_t>& steps, uint64_t at, uint8_t* classes) const;
	void merge_facts(lowir::FunctionBody& body, const std::vector<lowir::ArgumentFacts>& derived);
	ir_model::AggregateShape aggregate_shape(const CppgmField* fields, uint32_t count, lowir::Type object) const;
};

namespace backend {
namespace c_api {

lowir::Type type(CppgmType bits);
bool valid_type(CppgmType bits, target_model::Target target);

} // namespace c_api
} // namespace backend
