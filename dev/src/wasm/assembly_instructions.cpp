#include "wasm/assembly_parser.h"

#include <cstdlib>
#include <cstring>

namespace wasm {
namespace assembly {

void Parser::instruction(const std::string& name, Line& line)
{
	if (active_ == lowir::kNoId || !functions_[active_].typed)
		throw WasmError("Wasm instruction requires a defined, typed function");
	Op operation = Op::Nop;
	bool found = read_operation(name.data(), name.size(), operation);
	if (name == "end_function" || name == "end_if" || name == "end_loop" || name == "end_block")
	{
		operation = Op::End;
		found = true;
	}
	if (!found)
		throw WasmError("unsupported Wasm assembly instruction: " + name);
	if (operation == Op::MemorySize || operation == Op::MemoryGrow || operation == Op::MemoryFill ||
		operation == Op::MemoryCopy)
		memory_ = true;
	if (operation == Op::MemoryFill || operation == Op::MemoryCopy)
		bulk_ = true;

	uint64_t first = 0, second = 0;
	uint32_t symbol_id = lowir::kNoId;
	RelocationKind relocation = RelocationKind::FunctionIndex;
	const Immediate form = immediate_form(operation);
	switch (form)
	{
	case Immediate::None:
		break;
	case Immediate::BlockType:
		first = block_type(line.empty() ? ValueType::Void : type(line));
		break;
	case Immediate::Index:
		if (operation == Op::GlobalGet || operation == Op::GlobalSet)
		{
			symbol_id = symbol(line.word(), Kind::Global);
			relocation = RelocationKind::GlobalIndex;
		}
		else if (operation == Op::Call || operation == Op::RefFunc)
			symbol_id = symbol(line.word(), Kind::Function);
		else
			first = line.integer();
		break;
	case Immediate::Byte:
		first = line.integer();
		break;
	case Immediate::Signed:
		if (!line.empty() && line.token().kind == PPTokenKind::Identifier)
		{
			if (operation != Op::I32Const)
				throw WasmError("Wasm data addresses require i32.const");
			symbol_id = symbol(line.word());
			relocation = RelocationKind::MemoryAddressSigned;
		}
		else
		{
			first = line.integer();
			if (operation == Op::I32Const)
				first = static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(first)));
		}
		break;
	case Immediate::Indices:
		if (operation != Op::MemoryCopy)
			throw WasmError("unsupported indexed Wasm assembly instruction: " + name);
		first = line.integer();
		line.expect(",");
		second = line.integer();
		break;
	case Immediate::Float32:
	case Immediate::Float64:
	{
		const bool negative = line.accept("-");
		std::string text;
		if (negative)
			text = "-";
		else
			line.accept("+");
		const auto& token = line.token();
		text.append(token.spelling, token.length);
		char* end = nullptr;
		if (form == Immediate::Float32)
		{
			const float value = std::strtof(text.c_str(), &end);
			uint32_t bits;
			std::memcpy(&bits, &value, sizeof(bits));
			first = bits;
		}
		else
		{
			const double value = std::strtod(text.c_str(), &end);
			std::memcpy(&first, &value, sizeof(first));
		}
		if (end != text.c_str() + text.size() || end == text.c_str())
			throw WasmError("invalid Wasm assembly floating constant");
		line.expect(std::string(token.spelling, token.length).c_str());
		break;
	}
	default:
		throw WasmError("unsupported Wasm assembly operand form: " + name);
	}
	line.done();
	auto& function = functions_[active_].body;
	function.location = location_;
	if (form == Immediate::None)
		function.emit(operation);
	else if (form == Immediate::Indices)
		function.emit(operation, { first, second });
	else
		function.emit(operation, { first });
	if (symbol_id != lowir::kNoId)
		function.relocate(relocation, symbol_id);
	if (name == "end_function")
	{
		active_ = lowir::kNoId;
		pending_label_ = lowir::kNoId;
	}
}

} // namespace assembly
} // namespace wasm
