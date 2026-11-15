/* Client of the LowIR library's record types (ABI version 4).
 * scripts/tests/test_lowir_library_records.py builds and runs it.
 *
 *   client <object> <text> <level> <case> <target>
 *
 * For each record type R of lowir_library_records_host.c, the module
 * defines ext_id_R (returns its parameter) and ext_call_R (returns
 * host_R of its parameter). ext_vsum passes records to the variadic
 * host_vsum, and ext_va reads records with va_arg.
 */
#include "lowir_interface.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_Static_assert(sizeof(CppgmField) == 24, "field ABI");

#define NAME(text) text, (uint32_t)(sizeof text - 1)

static const char* bad;
static CppgmLowir* module;

static int is(const char* name)
{
	return bad != NULL && strcmp(bad, name) == 0;
}

static void check(int result)
{
	if (!result)
	{
		fprintf(stderr, "%s\n", cppgm_lowir_error(module));
		exit(1);
	}
}

static uint32_t id(uint32_t result)
{
	check(result != CPPGM_NO_ID);
	return result;
}

static LowirValue value(uint32_t kind, uint32_t index)
{
	LowirValue result = { kind, 0, 0, index };
	return result;
}

static LowirInstruction instruction(uint8_t op, uint32_t result, CppgmType type)
{
	LowirInstruction inst = { 0 };
	inst.op = op;
	inst.result = result;
	inst.type = type;
	return inst;
}

static CppgmField field(uint64_t offset, CppgmType type, uint64_t count)
{
	CppgmField result = { offset, type, count };
	return result;
}

/* The record types, in the host's order. */
enum
{
	DI,     /* struct { double d; long n; } */
	FFF,    /* struct { float a, b, c; } */
	IF,     /* struct { int i; float f; } */
	PACKED, /* struct __attribute__((packed)) { char c; int i; } */
	BIG,    /* struct { long a, b, c; } */
	UNION,  /* union { double d; long n; } */
	NESTED, /* struct { struct { float a, b; } f; double d; } */
	LD,     /* struct { long double x; } */
	ARRAY,  /* struct { int a[3]; } */
	RECORDS
};
static const char* const names[RECORDS] = { "di", "fff", "if", "packed", "big", "union", "nested", "ld", "array" };
static CppgmType records[RECORDS];

static CppgmType record(uint64_t bytes, uint32_t alignment, const CppgmField* fields, uint32_t count)
{
	CppgmType result = cppgm_lowir_record(module, bytes, alignment, fields, count);
	check(result != 0);
	return result;
}

static void declare_records(void)
{
	CppgmField di[2] = { field(0, CPPGM_TYPE_F64, 0), field(8, CPPGM_TYPE_I64, 0) };
	records[DI] = record(16, 8, di, 2);
	CppgmField fff = field(0, CPPGM_TYPE_F32, 3);
	records[FFF] = record(12, 4, &fff, 1);
	CppgmField mixed[2] = { field(0, CPPGM_TYPE_I32, 0), field(4, CPPGM_TYPE_F32, 0) };
	records[IF] = record(8, 4, mixed, 2);
	CppgmField packed[2] = { field(0, CPPGM_TYPE_I8, 0), field(1, CPPGM_TYPE_I32, 0) };
	records[PACKED] = record(5, 1, packed, 2);
	CppgmField big = field(0, CPPGM_TYPE_I64, 3);
	records[BIG] = record(24, 8, &big, 1);
	CppgmField overlap[2] = { field(0, CPPGM_TYPE_F64, 0), field(0, CPPGM_TYPE_I64, 0) };
	records[UNION] = record(8, 8, overlap, 2);
	CppgmField pair = field(0, CPPGM_TYPE_F32, 2);
	CppgmField nested[2] = { field(0, record(8, 4, &pair, 1), 0), field(8, CPPGM_TYPE_F64, 0) };
	records[NESTED] = record(16, 8, nested, 2);
	CppgmField ld = field(0, CPPGM_TYPE_F80, 0);
	records[LD] = record(16, 16, &ld, 1);
	CppgmField array = field(0, CPPGM_TYPE_I32, 3);
	records[ARRAY] = record(12, 4, &array, 1);
}

/* Each bad record, rejected by cppgm_lowir_record. */
static int bad_record(void)
{
	CppgmField fields[1] = { field(0, CPPGM_TYPE_I64, 0) };
	if (is("bad-alignment"))
		return cppgm_lowir_record(module, 8, 3, fields, 1) == 0;
	if (is("bad-bounds"))
	{
		fields[0].count = 2;
		return cppgm_lowir_record(module, 8, 8, fields, 1) == 0;
	}
	if (is("bad-field-type"))
	{
		fields[0].type = CPPGM_TYPE_OBJ | (3u << 8) | ((CppgmType)8 << 16);
		return cppgm_lowir_record(module, 8, 8, fields, 1) == 0;
	}
	if (is("bad-record-id"))
	{
		fields[0].type = CPPGM_TYPE_RECORD | ((CppgmType)99 << 16);
		return cppgm_lowir_record(module, 8, 8, fields, 1) == 0;
	}
	if (is("bad-size"))
		return cppgm_lowir_record(module, 0, 1, NULL, 0) == 0;
	return 0;
}

static uint32_t function(const char* name, uint32_t signature)
{
	uint32_t symbol = id(cppgm_lowir_symbol(module, name, (uint32_t)strlen(name)));
	check(cppgm_lowir_function(module, symbol, signature, CPPGM_BINDING_STRONG, CPPGM_FUNCTION_DEFINITION));
	return symbol;
}

static LowirBodyBuffers reserve(uint32_t symbol, LowirBodyCounts counts)
{
	LowirBodyBuffers buffers;
	check(cppgm_lowir_body_reserve(module, symbol, &counts, &buffers));
	buffers.layout[0] = 0;
	return buffers;
}

/* ext_id_R(%x : R) -> R: return %x; ext_call_R(%x : R) -> R: return host_R(%x). */
static void pass_through(int r)
{
	char name[32];
	CppgmType type = records[r];
	/* The module's functions use the version 2 signature; the host's boundary. */
	uint32_t signature = id(cppgm_lowir_signature(module, type, &type, 1, CPPGM_ARITY_FIXED));
	CppgmParameter parameter = { 0 };
	parameter.type = type;
	uint32_t host_signature = id(cppgm_lowir_boundary(module, type, &parameter, 1, NULL));
	snprintf(name, sizeof name, "host_%s", names[r]);
	uint32_t host = id(cppgm_lowir_symbol(module, name, (uint32_t)strlen(name)));
	check(cppgm_lowir_function(module, host, host_signature, CPPGM_BINDING_DEFAULT, CPPGM_FUNCTION_DECLARATION));

	snprintf(name, sizeof name, "ext_id_%s", names[r]);
	uint32_t symbol = function(name, signature);
	LowirBodyCounts counts = { 1, 0, 0, 0, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.instructions[0] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, type);
	buffers.instructions[0].ops[0] = value(CPPGM_VALUE_TEMP, 0);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 1));

	snprintf(name, sizeof name, "ext_call_%s", names[r]);
	symbol = function(name, signature);
	LowirBodyCounts call_counts = { 2, 1, 0, 0, 1 };
	buffers = reserve(symbol, call_counts);
	buffers.operands[0] = value(CPPGM_VALUE_TEMP, 0);
	buffers.instructions[0] = instruction(CPPGM_OP_CALL, 1, type);
	buffers.instructions[0].ops[0] = value(CPPGM_VALUE_SYMBOL, host);
	buffers.instructions[0].extra_count = 1;
	buffers.instructions[1] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, type);
	buffers.instructions[1].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	check(cppgm_lowir_body_commit(module, symbol, &call_counts, 2));
}

/* ext_vsum(%a : di, %b : fff, %c : packed, %d : ld, %e : big) -> f64:
 * host_vsum(5, a, b, c, d, e), where host_vsum is `double host_vsum(int, ...)`.
 * The ld argument passes through a slot. */
static void variadic_call(void)
{
	CppgmParameter count = { 0 };
	count.type = CPPGM_TYPE_I32;
	CppgmBoundary variadic = { 0 };
	variadic.arity = CPPGM_ARITY_VARIADIC;
	uint32_t host_signature = id(cppgm_lowir_boundary(module, CPPGM_TYPE_F64, &count, 1, &variadic));
	uint32_t host = id(cppgm_lowir_symbol(module, NAME("host_vsum")));
	check(cppgm_lowir_function(module, host, host_signature, CPPGM_BINDING_DEFAULT, CPPGM_FUNCTION_DECLARATION));

	CppgmType parameters[5] = { records[DI], records[FFF], records[PACKED], records[LD], records[BIG] };
	uint32_t signature = id(cppgm_lowir_signature(module, CPPGM_TYPE_F64, parameters, 5, CPPGM_ARITY_FIXED));
	uint32_t symbol = function("ext_vsum", signature);
	LowirBodyCounts counts = { 4, 6, 1, 1, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.slots[0] = (LowirSlot){ 0, 0, 0, 0, records[LD] };
	buffers.literals[0] = (LowirLiteral){ 5, 0 };
	buffers.operands[0] = value(CPPGM_VALUE_INTEGER, 0);
	for (uint32_t i = 1; i < 6; ++i)
		buffers.operands[i] = value(CPPGM_VALUE_TEMP, i - 1);
	buffers.operands[4] = value(CPPGM_VALUE_SLOT, 0);
	LowirInstruction* code = buffers.instructions;
	code[0] = instruction(CPPGM_OP_ADDR, 5, CPPGM_TYPE_PTR);
	code[0].ops[0] = value(CPPGM_VALUE_SLOT, 0);
	code[1] = instruction(CPPGM_OP_STORE, CPPGM_NO_ID, records[LD]);
	code[1].ops[0] = value(CPPGM_VALUE_TEMP, 3);
	code[1].ops[1] = value(CPPGM_VALUE_TEMP, 5);
	code[2] = instruction(CPPGM_OP_CALL, 6, CPPGM_TYPE_F64);
	code[2].ops[0] = value(CPPGM_VALUE_SYMBOL, host);
	code[2].extra_count = 6;
	code[3] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, CPPGM_TYPE_F64);
	code[3].ops[0] = value(CPPGM_VALUE_TEMP, 6);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 7));
	if (is("stated-classes"))
	{
		/* A stated fact keeps its classes: the di argument as two INTEGER eightbytes. */
		CppgmArgumentFact fact = { 0 };
		fact.instruction = 2;
		fact.argument = 1;
		fact.classes = CPPGM_CLASSES(CPPGM_EIGHTBYTE_INTEGER, CPPGM_EIGHTBYTE_INTEGER);
		check(cppgm_lowir_body_argument_facts(module, symbol, &fact, 1));
	}
}

/* The body that ext_va builds. */
static LowirInstruction* code;
static uint32_t length, temp;
static LowirLiteral* literals;
static uint32_t literal_count;

static uint32_t emit(LowirInstruction inst)
{
	code[length++] = inst;
	return inst.result;
}

static uint32_t literal(uint64_t bits)
{
	literals[literal_count].low = bits;
	literals[literal_count].high = 0;
	return literal_count++;
}

/* The f64 value of the field of `type` at `offset` of the object at `address`. */
static uint32_t load_field(uint32_t address, uint64_t offset, CppgmType type)
{
	if (offset != 0)
	{
		LowirInstruction index = instruction(CPPGM_OP_INDEX, temp++, CPPGM_TYPE_I8);
		index.order = CPPGM_BOUNDS_IN_BOUNDS;
		index.ops[0] = value(CPPGM_VALUE_TEMP, address);
		index.ops[1] = value(CPPGM_VALUE_INTEGER, literal(offset));
		address = emit(index);
	}
	LowirInstruction load = instruction(CPPGM_OP_LOAD, temp++, type);
	load.ops[0] = value(CPPGM_VALUE_TEMP, address);
	uint32_t loaded = emit(load);
	if (type == CPPGM_TYPE_F64)
		return loaded;
	LowirInstruction convert = instruction(CPPGM_OP_CONVERT, temp++, CPPGM_TYPE_F64);
	convert.sub = type == CPPGM_TYPE_F32 ? CPPGM_CONVERT_FP_EXT : CPPGM_CONVERT_SI_TO_FP;
	convert.immediate = type;
	convert.ops[0] = value(CPPGM_VALUE_TEMP, loaded);
	return emit(convert);
}

static uint32_t add(uint32_t a, uint32_t b)
{
	LowirInstruction sum = instruction(CPPGM_OP_BINARY, temp++, CPPGM_TYPE_F64);
	sum.sub = CPPGM_BINARY_ADD;
	sum.ops[0] = value(CPPGM_VALUE_TEMP, a);
	sum.ops[1] = value(CPPGM_VALUE_TEMP, b);
	return emit(sum);
}

/* ext_va(%count : i32, ...) -> f64: reads a di, a fff and a big; returns
 * count + di.d + di.n + fff.a + fff.c + big.c. */
static void va_reader(void)
{
	CppgmType count = CPPGM_TYPE_I32;
	uint32_t signature = id(cppgm_lowir_signature(module, CPPGM_TYPE_F64, &count, 1, CPPGM_ARITY_VARIADIC));
	uint32_t symbol = function("ext_va", signature);
	LowirBodyCounts counts = { 64, 0, 8, 4, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.slots[0] = (LowirSlot){ 0, 0, 0, 0, CPPGM_TYPE_OBJ | (3u << 8) | ((CppgmType)24 << 16) };
	CppgmType read[3] = { records[DI], records[FFF], records[BIG] };
	code = buffers.instructions;
	literals = buffers.literals;
	length = literal_count = 0;
	temp = 1;
	LowirInstruction list = instruction(CPPGM_OP_ADDR, temp++, CPPGM_TYPE_PTR);
	list.ops[0] = value(CPPGM_VALUE_SLOT, 0);
	uint32_t pointer = emit(list);
	LowirInstruction start = instruction(CPPGM_OP_VA_START, CPPGM_NO_ID, CPPGM_TYPE_VOID);
	start.ops[0] = value(CPPGM_VALUE_TEMP, pointer);
	emit(start);
	uint32_t homes[3];
	for (uint32_t i = 0; i < 3; ++i)
	{
		/* The record into a slot of its type. */
		buffers.slots[i + 1] = (LowirSlot){ 0, 0, 0, 0, read[i] };
		LowirInstruction arg = instruction(CPPGM_OP_VA_ARG, temp++, read[i]);
		arg.ops[0] = value(CPPGM_VALUE_TEMP, pointer);
		uint32_t object = emit(arg);
		LowirInstruction home = instruction(CPPGM_OP_ADDR, temp++, CPPGM_TYPE_PTR);
		home.ops[0] = value(CPPGM_VALUE_SLOT, i + 1);
		homes[i] = emit(home);
		LowirInstruction store = instruction(CPPGM_OP_STORE, CPPGM_NO_ID, read[i]);
		store.ops[0] = value(CPPGM_VALUE_TEMP, object);
		store.ops[1] = value(CPPGM_VALUE_TEMP, homes[i]);
		emit(store);
	}
	LowirInstruction counted = instruction(CPPGM_OP_CONVERT, temp++, CPPGM_TYPE_F64);
	counted.sub = CPPGM_CONVERT_SI_TO_FP;
	counted.immediate = CPPGM_TYPE_I32;
	counted.ops[0] = value(CPPGM_VALUE_TEMP, 0);
	uint32_t sum = emit(counted);
	sum = add(sum, load_field(homes[0], 0, CPPGM_TYPE_F64));
	sum = add(sum, load_field(homes[0], 8, CPPGM_TYPE_I64));
	sum = add(sum, load_field(homes[1], 0, CPPGM_TYPE_F32));
	sum = add(sum, load_field(homes[1], 8, CPPGM_TYPE_F32));
	sum = add(sum, load_field(homes[2], 16, CPPGM_TYPE_I64));
	LowirInstruction result = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, CPPGM_TYPE_F64);
	result.ops[0] = value(CPPGM_VALUE_TEMP, sum);
	emit(result);
	counts.instructions = length;
	counts.literals = literal_count;
	check(cppgm_lowir_body_commit(module, symbol, &counts, temp));
}

/* global @ext_pair : di, { 2.5, 7 } */
static void global(void)
{
	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_pair")));
	CppgmDataItem data[2] = { { 0 }, { 0 } };
	double d = 2.5;
	data[0].type = CPPGM_TYPE_F64;
	memcpy(&data[0].bits.low, &d, sizeof d);
	data[0].kind = CPPGM_DATA_SCALAR;
	data[1].type = CPPGM_TYPE_I64;
	data[1].bits.low = 7;
	data[1].kind = CPPGM_DATA_SCALAR;
	check(cppgm_lowir_global(
		module, symbol, records[DI], CPPGM_BINDING_STRONG, CPPGM_STORAGE_DEFAULT, data, 2, CPPGM_GLOBAL_DEFINITION));
}

int main(int argc, char** argv)
{
	if (argc != 6)
		return 2;
	if (cppgm_lowir_abi_version() < 4)
		return 3;
	bad = strncmp(argv[4], "bad-", 4) == 0 ? argv[4] : NULL;
	module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, (uint32_t)atoi(argv[5]));
	check(module != NULL);
	if (bad != NULL)
	{
		/* The record call fails and keeps a diagnostic. */
		if (!bad_record() || cppgm_lowir_error(module)[0] == 0)
			return 5;
		puts(cppgm_lowir_error(module));
		cppgm_lowir_destroy(module);
		return 0;
	}
	if (strcmp(argv[4], "stated-classes") == 0)
		bad = argv[4];
	declare_records();
	for (int r = 0; r < RECORDS; ++r)
		pass_through(r);
	variadic_call();
	va_reader();
	global();
	check(cppgm_lowir_write(module, argv[2]));
	check(cppgm_lowir_compile(module, (uint32_t)atoi(argv[3]), CPPGM_CODE_FIXED));
	FILE* out = fopen(argv[1], "wb");
	uint64_t size = cppgm_lowir_object_size(module);
	if (out == NULL || size == 0 || fwrite(cppgm_lowir_object_data(module), 1, size, out) != size || fclose(out))
		return 6;
	cppgm_lowir_destroy(module);
	return 0;
}
