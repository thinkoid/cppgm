#pragma once

#include "aarch64/mir.h"
#include "aarch64/abi.h"
#include "machine/phi_inputs.h"

namespace aarch64 {

class Selector
{
public:
	Selector(const lowir::Program& program, lowir::SymbolId symbol, Function& out, int level, bool pic);
	void run();

private:
	void plan();
	void prepare_exceptions();
	void landing(lowir::BlockId block);
	void resume(uint32_t site);
	void record_call(const lowir::Instruction& inst);
	void exception_value(const lowir::Instruction& inst);
	uint32_t site(const lowir::Instruction& inst) const;
	void allocate();
	unsigned vector_value(lowir::Value value, unsigned scratch);
	void save_vector(unsigned reg, lowir::TempId result);
	void vector_instruction(const lowir::Instruction& inst);
	void vector_shift(lowir::VectorOp op, unsigned dest, unsigned source, uint64_t count);
	void vector_shuffle(const lowir::Instruction& inst, unsigned source);
	void vector_move(unsigned to, unsigned from);
	void pair(lowir::Value src, unsigned lo, unsigned hi);
	void save_pair(lowir::TempId dest, unsigned lo, unsigned hi);
	void wide_binary(const lowir::Instruction& inst);
	void wide_shift(lowir::BinaryOp op);
	bool wide(const lowir::Instruction& inst);
	void save_variadic_registers();
	void emit_va_start(const lowir::Instruction& inst);
	void stack_va_arg(const lowir::Instruction& inst, const Argument& arg, bool aligned);
	void emit_va_arg(const lowir::Instruction& inst);
	void read_variadic_value(const lowir::Instruction& inst, const Argument& arg, bool stacked);
	unsigned frame_base() const { return dynamic_stack_ ? 28 : 31; }
	void base_address(unsigned reg, unsigned base, uint32_t offset, unsigned alignment = 1);
	void frame_address(unsigned reg, uint32_t offset) { base_address(reg, frame_base(), offset); }
	void home_address(unsigned reg, lowir::TempId temp);
	void stack_alloc(const lowir::Instruction& inst);
	void copy_bytes(unsigned dst, unsigned src, uint64_t size);
	void copy_value(unsigned dst, lowir::Value src, lowir::Type type);
	struct CallLayout
	{
		std::vector<Argument> args;
		std::vector<lowir::Type> types;
		std::vector<unsigned> copies;
		unsigned size;
	};
	CallLayout call_layout(const lowir::Instruction& inst) const;
	void parameter(lowir::TempId id, const Argument& arg);
	void pass(const Argument& arg, lowir::Value src, lowir::Type type, unsigned copy_offset);
	void transfer(bool load, const Argument& arg, unsigned base, lowir::Type type);
	void float_instruction(const lowir::Instruction& inst);
	void fp_move(bool to_fp, unsigned fp, unsigned gp, lowir::Type type);
	bool floating(const lowir::Instruction& inst) const;
	uint32_t reserve(uint64_t size, uint32_t alignment);
	void stack_adjust(bool subtract);
	void saved_registers(bool store);
	void constant(unsigned reg, uint64_t bits);
	void move(unsigned to, unsigned from);
	void extend(unsigned reg, unsigned bits, bool sign);
	void access(bool store, unsigned reg, unsigned base, uint32_t offset, unsigned bytes);
	void darwin_tls_address(unsigned reg, lowir::SymbolId symbol);
	void address(unsigned reg, lowir::Value value);
	unsigned address_register(lowir::Value operand, unsigned scratch);
	void value(unsigned reg, lowir::Value value, lowir::Type type);
	void save(unsigned reg, lowir::TempId temp, bool normalized = false);
	lowir::Type type_of(lowir::Value v, lowir::Type fallback) const;
	bool register_edge(lowir::BlockId from, lowir::BlockId to);
	void copy_edge(lowir::BlockId from, lowir::BlockId to);
	void edge(lowir::BlockId from, lowir::BlockId to, bool last = false);
	void select(const lowir::Instruction& inst, lowir::BlockId block);
	void atomic(const lowir::Instruction& inst);
	void switch_edges(const lowir::Instruction& inst, lowir::BlockId block);
	unsigned condition_register(lowir::Value operand, unsigned scratch);
	unsigned operand_register(lowir::Value operand, lowir::Type type, unsigned scratch);
	bool simple_binary(const lowir::Instruction& inst);
	void integer_unary(const lowir::Instruction& inst);
	void binary(const lowir::Instruction& inst);
	void compare(const lowir::Instruction& inst);
	void compare_flags(const lowir::Instruction& inst);
	lowir::InstId address_sequence(lowir::InstId id);
	bool compare_branch(const lowir::Instruction& inst, lowir::BlockId block);
	void conditional_edges(lowir::BlockId block, const lowir::Instruction& branch, Op test, unsigned operand);
	void call(const lowir::Instruction& inst);
	void epilogue(const lowir::Instruction& inst);

	const lowir::Program& program_;
	lowir::SymbolId symbol_;
	std::vector<uint32_t> selectors_;
	uint32_t exception_slot_ = lowir::kNoId;
	const lowir::FunctionBody& body_;
	const lowir::Signature& signature_;
	Function& out_;
	int level_;
	bool pic_;
	bool dynamic_stack_ = false;
	lowir::BlockId fallthrough_ = lowir::kNoId;
	uint32_t outgoing_ = 0;
	std::vector<uint32_t> slots_, homes_, registers_, vectors_, uses_;
	std::vector<std::pair<unsigned, uint32_t>> preserved_;
	machine::PhiInputs phis_;
	std::vector<CallLayout> calls_;
	std::vector<uint32_t> call_indices_;
	Argument result_ = {};
	Arguments named_;
	uint32_t tls_vectors_ = lowir::kNoId;
	uint32_t frame_pointer_ = lowir::kNoId;
	uint32_t variadic_area_ = lowir::kNoId;
	uint32_t result_pointer_ = lowir::kNoId;
	uint32_t frame_ = 0, phi_area_ = 0, link_ = lowir::kNoId;
};

} // namespace aarch64
