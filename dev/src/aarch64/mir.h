#pragma once

#include "aarch64/opcodes.h"
#include "lowir/program.h"
#include "native/object/object_file.h"

namespace aarch64 {

// The base word identifies the A64 instruction. Registers and immediates
// remain separate until block placement fixes the branch displacements.
enum class Op : uint32_t
{
#define A64_OPCODE(name, bits) name = bits,
	CPPGM_AARCH64_OPCODES(A64_OPCODE)
#undef A64_OPCODE
};

enum class Fixup : uint8_t
{
	None,
	Block,
	Call,
	Page,
	PageOffset,
	GotPage,
	GotLoad
};

struct Instruction
{
	Op op;
	unsigned rd, rn, rm;
	uint32_t field;
	Fixup fixup;
	uint32_t target;
};

enum class FrameRule
{
	Offset,
	Save,
	Restore,
	RememberState,
	RestoreState
};
struct FrameEvent
{
	uint32_t pc;
	FrameRule rule;
	unsigned reg, offset;
};

struct Function
{
	std::vector<FrameEvent> frame_events;
	void frame_rule(FrameRule rule, unsigned reg = 0, unsigned offset = 0);
	std::vector<Instruction> code;
	std::vector<uint32_t> labels;
	void emit(Op op, unsigned rd = 0, unsigned rn = 0, unsigned rm = 0, uint32_t field = 0);
	void reference(Op op, Fixup fixup, uint32_t target, unsigned rd = 0, unsigned rn = 0);
	void bind(uint32_t label);
};

void emit_unwind(const Function& function, uint32_t symbol, native::object::Section& section);
void dump_function(const Function& function, const lowir::Program& program, const char* name, std::string& dump);

void encode(const Function& function, const std::vector<uint32_t>& symbols, native::object::Section& text);

} // namespace aarch64
