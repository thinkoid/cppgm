#include "lowir_interface.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void check(CppgmLowir* module, int ok)
{
	if (!ok)
	{
		fprintf(stderr, "%s\n", cppgm_lowir_error(module));
		exit(1);
	}
}

static uint32_t symbol(CppgmLowir* module, const char* name)
{
	uint32_t id = cppgm_lowir_symbol(module, name, (uint32_t)strlen(name));
	check(module, id != CPPGM_NO_ID);
	return id;
}

static LowirInstruction instruction(uint8_t op, CppgmType type, uint32_t result)
{
	LowirInstruction inst = { 0 };
	inst.op = op;
	inst.type = type;
	inst.result = result;
	return inst;
}

static LowirValue value(uint8_t kind, uint32_t index)
{
	return (LowirValue){ kind, CPPGM_TYPE_VOID, 0, index };
}

static void declare(CppgmLowir* module, uint32_t id, uint32_t sig, uint32_t definition)
{
	check(module, sig != CPPGM_NO_ID);
	check(module, cppgm_lowir_function(module, id, sig, CPPGM_BINDING_STRONG, definition));
}

static void pointer_call(CppgmLowir* module, CppgmType ptr)
{
	uint32_t callback = symbol(module, "host_adjust");
	uint32_t function = symbol(module, "typed_read");
	uint32_t global = symbol(module, "typed_bias");
	uint32_t sig = cppgm_lowir_signature(module, CPPGM_TYPE_I32, &ptr, 1, CPPGM_ARITY_FIXED);
	declare(module, callback, sig, CPPGM_FUNCTION_DECLARATION);
	declare(module, function, sig, CPPGM_FUNCTION_DEFINITION);
	CppgmDataItem data = { 0 };
	data.type = CPPGM_TYPE_I32;
	data.kind = CPPGM_DATA_SCALAR;
	data.bits.low = 7;
	check(module,
		cppgm_lowir_global(module, global, CPPGM_TYPE_VOID, CPPGM_BINDING_STRONG, CPPGM_STORAGE_READONLY, &data, 1,
			CPPGM_GLOBAL_DEFINITION));

	LowirBodyCounts counts = { 5, 1, 0, 0, 1 };
	LowirBodyBuffers body;
	check(module, cppgm_lowir_body_reserve(module, function, &counts, &body));
	body.instructions[0] = instruction(CPPGM_OP_CALL, CPPGM_TYPE_I32, 1);
	body.instructions[0].ops[0] = value(CPPGM_VALUE_SYMBOL, callback);
	body.instructions[0].extra_count = 1;
	body.operands[0] = value(CPPGM_VALUE_TEMP, 0);
	body.instructions[1] = instruction(CPPGM_OP_ADDR, ptr, 2);
	body.instructions[1].ops[0] = value(CPPGM_VALUE_SYMBOL, global);
	body.instructions[2] = instruction(CPPGM_OP_LOAD, CPPGM_TYPE_I32, 3);
	body.instructions[2].ops[0] = value(CPPGM_VALUE_TEMP, 2);
	body.instructions[3] = instruction(CPPGM_OP_BINARY, CPPGM_TYPE_I32, 4);
	body.instructions[3].sub = CPPGM_BINARY_ADD;
	body.instructions[3].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	body.instructions[3].ops[1] = value(CPPGM_VALUE_TEMP, 3);
	body.instructions[4] = instruction(CPPGM_OP_RETURN, CPPGM_TYPE_I32, CPPGM_NO_ID);
	body.instructions[4].ops[0] = value(CPPGM_VALUE_TEMP, 4);
	body.layout[0] = 0;
	check(module, cppgm_lowir_body_commit(module, function, &counts, 5));
}

static void record_call(CppgmLowir* module, const char* name, const char* host, CppgmType record)
{
	check(module, record != 0);
	const uint32_t function = symbol(module, name);
	const uint32_t callee = symbol(module, host);
	const uint32_t sig = cppgm_lowir_signature(module, record, &record, 1, CPPGM_ARITY_FIXED);
	const CppgmParameter parameter = { .type = record };
	const uint32_t boundary = cppgm_lowir_boundary(module, record, &parameter, 1, NULL);
	declare(module, function, boundary, CPPGM_FUNCTION_DEFINITION);
	declare(module, callee, sig, CPPGM_FUNCTION_DECLARATION);

	LowirBodyCounts counts = { 2, 1, 0, 0, 1 };
	LowirBodyBuffers body;
	check(module, cppgm_lowir_body_reserve(module, function, &counts, &body));
	body.instructions[0] = instruction(CPPGM_OP_CALL, record, 1);
	body.instructions[0].ops[0] = value(CPPGM_VALUE_SYMBOL, callee);
	body.instructions[0].extra_count = 1;
	body.operands[0] = value(CPPGM_VALUE_TEMP, 0);
	body.instructions[1] = instruction(CPPGM_OP_RETURN, record, CPPGM_NO_ID);
	body.instructions[1].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	body.layout[0] = 0;
	check(module, cppgm_lowir_body_commit(module, function, &counts, 2));
}

static void variadic_call(CppgmLowir* module, CppgmType record)
{
	const uint32_t function = symbol(module, "typed_variadic");
	const uint32_t callee = symbol(module, "host_variadic");
	const CppgmType tag = CPPGM_TYPE_I32;
	declare(module, function, cppgm_lowir_signature(module, CPPGM_TYPE_I32, &record, 1, CPPGM_ARITY_FIXED),
		CPPGM_FUNCTION_DEFINITION);
	declare(module, callee, cppgm_lowir_signature(module, CPPGM_TYPE_I32, &tag, 1, CPPGM_ARITY_VARIADIC),
		CPPGM_FUNCTION_DECLARATION);

	LowirBodyCounts counts = { 2, 2, 1, 0, 1 };
	LowirBodyBuffers body;
	check(module, cppgm_lowir_body_reserve(module, function, &counts, &body));
	body.instructions[0] = instruction(CPPGM_OP_CALL, CPPGM_TYPE_I32, 1);
	body.instructions[0].ops[0] = value(CPPGM_VALUE_SYMBOL, callee);
	body.instructions[0].extra_count = 2;
	body.operands[0] = value(CPPGM_VALUE_INTEGER, 0);
	body.operands[1] = value(CPPGM_VALUE_TEMP, 0);
	body.literals[0] = (LowirLiteral){ 10, 0 };
	body.instructions[1] = instruction(CPPGM_OP_RETURN, CPPGM_TYPE_I32, CPPGM_NO_ID);
	body.instructions[1].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	body.layout[0] = 0;
	check(module, cppgm_lowir_body_commit(module, function, &counts, 2));
}

static void records(CppgmLowir* module, CppgmType ptr)
{
	const CppgmField pointer = { 0, ptr, 1 };
	const CppgmField overlap[] = { { 0, CPPGM_TYPE_F32, 1 }, { 0, CPPGM_TYPE_F32, 1 } };
	const CppgmType inner = cppgm_lowir_record(module, 4, 4, overlap, 2);
	check(module, inner != 0);
	const CppgmField float_pair[] = { { 0, inner, 1 }, { 4, CPPGM_TYPE_F32, 1 } };
	const unsigned pointer_bytes = (unsigned)(ptr >> 16);
	const unsigned width = pointer_bytes != 0 ? pointer_bytes : 8;
	const CppgmType pointer_record = cppgm_lowir_record(module, width, width, &pointer, 1);
	record_call(module, "typed_pointer", "host_pointer", pointer_record);
	variadic_call(module, pointer_record);
	record_call(module, "typed_floats", "host_floats", cppgm_lowir_record(module, 8, 4, float_pair, 2));
}

int main(int argc, char** argv)
{
	if (argc != 6)
		return 2;
	const uint32_t target = (uint32_t)atoi(argv[1]);
	CppgmLowir* legacy = cppgm_lowir_create(4, CPPGM_TARGET_LINUX);
	check(legacy, legacy != NULL);
	cppgm_lowir_destroy(legacy);
	CppgmLowir* unsupported = cppgm_lowir_create(4, target);
	if (unsupported != NULL)
	{
		cppgm_lowir_destroy(unsupported);
		return 3;
	}
	const int wasm = target == CPPGM_TARGET_WASM32 || target == CPPGM_TARGET_WASIP1 ||
		target == CPPGM_TARGET_EMSCRIPTEN;
	const CppgmType ptr = CPPGM_TYPE_PTR | (wasm ? UINT64_C(4) << 16 : 0);
	CppgmLowir* module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, target);
	check(module, module != NULL);
	pointer_call(module, ptr);
	records(module, ptr);
	check(module, cppgm_lowir_validate(module));
	check(module, cppgm_lowir_write(module, argv[4]));
	check(module, cppgm_lowir_compile(module, (uint32_t)atoi(argv[2]), (uint32_t)atoi(argv[3])));
	const uint8_t* bytes = cppgm_lowir_object_data(module);
	const uint64_t size = cppgm_lowir_object_size(module);
	FILE* file = fopen(argv[5], "wb");
	if (file == NULL || bytes == NULL || size == 0 || fwrite(bytes, 1, size, file) != size || fclose(file))
		return 4;
	cppgm_lowir_destroy(module);

	if (wasm)
	{
		module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, target);
		check(module, module != NULL);
		if (cppgm_lowir_compile(module, 0, CPPGM_CODE_PIC) ||
			strstr(cppgm_lowir_error(module), "CPPGM_CODE_FIXED") == NULL)
			return 5;
		cppgm_lowir_destroy(module);

		module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, target);
		check(module, module != NULL);
		const CppgmType wrong_ptr = CPPGM_TYPE_PTR;
		if (cppgm_lowir_signature(module, CPPGM_TYPE_I32, &wrong_ptr, 1, CPPGM_ARITY_FIXED) != CPPGM_NO_ID ||
			strstr(cppgm_lowir_error(module), "invalid parameter type") == NULL)
			return 6;
		cppgm_lowir_destroy(module);
	}
	return 0;
}
