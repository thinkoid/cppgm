#include "backend/lowir_c_module.h"

#include <cstring>

#include "lowir/assembly_builder.h"

// Assembly templates of the C interface (ABI version 3): one CppgmAssembly
// becomes the checked packet a source frontend makes (asm/packet.h). The
// conversion checks what the fixed-width records add: null tables, reserved
// bytes, truth values and the positions inside the record. The validator
// checks the template (lowir/assembly_validation.h).

using namespace backend::c_api;

namespace {

template<typename T>
bool zero(const T& bytes)
{
	for (const uint8_t byte : bytes)
		if (byte != 0)
			return false;
	return true;
}

bool slice(uint32_t first, uint32_t count, uint32_t size)
{
	return first <= size && count <= size - first;
}

template<typename T>
assembly::View<T> view(const std::vector<T>& values)
{
	assembly::View<T> result;
	result.data = values.data();
	result.size = static_cast<uint32_t>(values.size());
	return result;
}

bool registers(const CppgmAsmRegister* from, uint32_t count, std::vector<asm_model::Register>& to)
{
	for (uint32_t i = 0; i < count; ++i)
	{
		if (!zero(from[i].reserved))
			return false;
		asm_model::Register reg;
		reg.bank = static_cast<asm_model::RegisterBank>(from[i].bank);
		reg.number = from[i].number;
		reg.bits = from[i].bits;
		reg.offset = from[i].offset;
		to.push_back(reg);
	}
	return true;
}

// The tables of one template, with their positions still inside the record.
struct Tables
{
	std::vector<asm_model::Operand> operands;
	std::vector<lowir::Type> types;
	std::vector<asm_model::Alternative> alternatives;
	std::vector<asm_model::RegisterGroup> groups;
	std::vector<asm_model::Immediate> immediates;
	std::vector<asm_model::Piece> pieces;
	std::vector<asm_model::Register> registers;
	std::vector<asm_model::Register> clobbers;
};

const char* constraints(const CppgmAssembly& input, Tables& tables)
{
	for (uint32_t i = 0; i < input.group_count; ++i)
	{
		const CppgmAsmGroup& from = input.groups[i];
		if (from.reserved != 0 || !slice(from.first_register, from.register_count, input.register_count))
			return "invalid assembly register group";
		asm_model::RegisterGroup group;
		group.first_register = from.first_register;
		group.register_count = from.register_count;
		tables.groups.push_back(group);
	}
	for (uint32_t i = 0; i < input.immediate_count; ++i)
	{
		const CppgmAsmImmediate& from = input.immediates[i];
		if (from.is_signed > 1 || !zero(from.reserved))
			return "invalid assembly immediate domain";
		asm_model::Immediate value;
		value.kind = static_cast<asm_model::ImmediateKind>(from.kind);
		value.is_signed = from.is_signed != 0;
		value.low = asm_model::Bits{ from.low.low, from.low.high };
		value.high = asm_model::Bits{ from.high.low, from.high.high };
		tables.immediates.push_back(value);
	}
	for (uint32_t i = 0; i < input.alternative_count; ++i)
	{
		const CppgmAsmAlternative& from = input.alternatives[i];
		if (from.early_write > 1 || from.reserved != 0 ||
			!slice(from.first_group, from.group_count, input.group_count) ||
			!slice(from.first_immediate, from.immediate_count, input.immediate_count))
			return "invalid assembly alternative";
		asm_model::Alternative alternative;
		alternative.first_group = from.first_group;
		alternative.first_immediate = from.first_immediate;
		alternative.matching = from.matching;
		alternative.group_count = from.group_count;
		alternative.immediate_count = from.immediate_count;
		alternative.locations = from.locations;
		alternative.early_write = from.early_write != 0;
		tables.alternatives.push_back(alternative);
	}
	return nullptr;
}

const char* operands(const CppgmAssembly& input, Tables& tables)
{
	for (uint32_t i = 0; i < input.operand_count; ++i)
	{
		const CppgmAsmOperand& from = input.operands[i];
		if (!valid_type(from.type) || from.input_storage > 1 || !zero(from.reserved) ||
			!slice(from.first_alternative, from.alternative_count, input.alternative_count))
			return "invalid assembly operand boundary";
		asm_model::Operand operand;
		operand.input = from.input;
		operand.output = from.output;
		operand.first_alternative = from.first_alternative;
		operand.alternative_count = from.alternative_count;
		operand.flags = from.flags;
		operand.input_storage = from.input_storage != 0;
		operand.condition = from.condition;
		tables.operands.push_back(operand);
		tables.types.push_back(type(from.type));
	}
	for (uint32_t i = 0; i < input.piece_count; ++i)
	{
		const CppgmAsmPiece& from = input.pieces[i];
		if (!zero(from.reserved))
			return "invalid assembly template piece";
		if (from.kind == static_cast<uint8_t>(asm_model::PieceKind::Text) &&
			!slice(from.first, from.count, input.text_size))
			return "assembly text piece is out of bounds";
		asm_model::Piece piece;
		piece.kind = static_cast<asm_model::PieceKind>(from.kind);
		piece.format = static_cast<asm_model::Format>(from.format);
		piece.bits = from.bits;
		piece.offset = from.offset;
		piece.operand = from.operand;
		piece.first = from.first;
		piece.count = from.count;
		tables.pieces.push_back(piece);
	}
	return nullptr;
}

const char* convert(const CppgmAssembly& input, Tables& tables)
{
	if ((input.text_size != 0 && input.text == nullptr) || (input.operand_count != 0 && input.operands == nullptr) ||
		(input.alternative_count != 0 && input.alternatives == nullptr) ||
		(input.group_count != 0 && input.groups == nullptr) ||
		(input.register_count != 0 && input.registers == nullptr) ||
		(input.immediate_count != 0 && input.immediates == nullptr) ||
		(input.piece_count != 0 && input.pieces == nullptr) || (input.clobber_count != 0 && input.clobbers == nullptr))
		return "null assembly table";
	if (input.text_size != 0 && std::memchr(input.text, 0, input.text_size) != nullptr)
		return "null byte in assembly text";
	if (!registers(input.registers, input.register_count, tables.registers))
		return "invalid assembly register view";
	if (!registers(input.clobbers, input.clobber_count, tables.clobbers))
		return "invalid assembly register clobber";
	const char* problem = constraints(input, tables);
	return problem != nullptr ? problem : operands(input, tables);
}

} // namespace

uint32_t CppgmLowir::assembly(const CppgmAssembly& input)
{
	if (!ready())
		return CPPGM_NO_ID;
	Tables tables;
	lowir::DebugLocation where = lowir::DebugLocation{ 0, 0, 0 };
	const char* problem = convert(input, tables);
	if (problem != nullptr)
	{
		fail(problem);
		return CPPGM_NO_ID;
	}
	if (input.location != nullptr && !location(*input.location, where))
		return CPPGM_NO_ID;
	assembly::Packet packet;
	packet.definition.dialect = static_cast<asm_model::Dialect>(input.dialect);
	packet.definition.memory = static_cast<asm_model::Memory>(input.memory);
	packet.definition.properties = input.properties;
	packet.definition.state_read = input.state_read;
	packet.definition.state_write = input.state_write;
	packet.definition.argument_count = input.argument_count;
	packet.definition.operand_count = input.operand_count;
	packet.definition.piece_count = input.piece_count;
	packet.definition.clobber_count = input.clobber_count;
	packet.text = input.text_size != 0 ? input.text : "";
	packet.text_size = input.text_size;
	packet.operands = view(tables.operands);
	packet.alternatives = view(tables.alternatives);
	packet.groups = view(tables.groups);
	packet.immediates = view(tables.immediates);
	packet.pieces = view(tables.pieces);
	packet.registers = view(tables.registers);
	packet.clobbers = view(tables.clobbers);
	return lowir::add_assembly(program, packet, tables.types.data(), where);
}
