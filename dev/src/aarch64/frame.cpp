#include "aarch64/selector.h"

#include <algorithm>
#include "lowir/literals.h"
#include "machine/frame_lifetimes.h"
#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;

Selector::Selector(const Program& program, SymbolId symbol, Function& out, int level, bool pic)
	: program_(program), symbol_(symbol), body_(*program.functions[program.symbols[symbol].detail].body),
	  signature_(program.signatures[program.functions[program.symbols[symbol].detail].signature]), out_(out),
	  level_(level), pic_(pic), named_(target_model::is_darwin(program.target))
{}

uint32_t Selector::reserve(uint64_t size, uint32_t alignment)
{
	if (size > UINT32_MAX)
		throw AArch64Error("unsupported AArch64 frame alignment or size");
	if (alignment > 16)
	{
		size += alignment - 16;
		alignment = 16;
	}
	const uint64_t start = (uint64_t(frame_) + alignment - 1) & ~uint64_t(alignment - 1);
	if (start + size > INT32_MAX)
		throw AArch64Error("AArch64 stack frame exceeds 2 GiB");
	frame_ = start + size;
	return start;
}

void Selector::plan()
{
	out_.labels.resize(body_.blocks.size(), kNoId);
	uint32_t outgoing = 0, max_phis = 0;
	result_ = classify(signature_.result, signature_.boundary.result_shape);
	const auto tls_access = [&](Value v) {
		return named_.darwin && v.is(ValueKind::Symbol) &&
			program_.symbols[v.index].metadata.storage == ir_model::GSM_THREAD_LOCAL;
	};
	bool calls = named_.darwin && std::any_of(body_.operands.begin(), body_.operands.end(), tls_access),
		 starts_variadic = false, eh = false;
	for (BlockId block : body_.layout)
	{
		uint32_t count = 0;
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			if (named_.darwin && !calls)
				for (const auto operand : inst.ops)
					calls |= tls_access(operand);
			dynamic_stack_ |= inst.op == Opcode::StackSave || inst.op == Opcode::StackAlloc ||
				inst.op == Opcode::StackRestore;
			if (inst.op == Opcode::FrameAddress)
				frame_pointer_ = 0;
			starts_variadic |= inst.op == Opcode::VaStart;
			eh |= (inst.op >= Opcode::EhTry && inst.op <= Opcode::Resume) || inst.op == Opcode::Exception ||
				inst.op == Opcode::ExceptionSelector;
			calls |= inst.op == Opcode::Resume;
			if (inst.op == Opcode::Phi)
				count += (storage_bytes(inst.type) + 7) / 8;
			if (inst.op == Opcode::Call)
			{
				calls = true;
				if (call_indices_.empty())
					call_indices_.resize(body_.instructions.size(), kNoId);
				call_indices_[i] = calls_.size();
				calls_.push_back(call_layout(inst));
				outgoing = std::max(outgoing, calls_.back().size);
			}
		}
		max_phis = std::max(max_phis, count);
	}
	outgoing_ = (outgoing + 15) & ~15u;
	reserve(outgoing_, 16);
	if (eh)
		prepare_exceptions();
	if (starts_variadic && !named_.darwin)
		variadic_area_ = reserve(64 + 128, 16);
	if (result_.indirect)
		result_pointer_ = reserve(8, 8);
	if (calls || dynamic_stack_ || frame_pointer_ != kNoId)
	{
		if (named_.darwin || frame_pointer_ != kNoId)
			frame_pointer_ = reserve(8, 16);
		link_ = reserve(8, 8);
	}
	const auto owners = level_ ? machine::sequential_copy_slots(program_, body_) : std::vector<uint32_t>();
	for (uint32_t i = 0; i < body_.slots.size(); ++i)
	{
		const Type type = body_.slots[i].type;
		if (!owners.empty() && owners[i] < i)
			slots_.push_back(slots_[owners[i]]);
		else
			slots_.push_back(reserve((storage_bytes(type) + 7) & ~uint64_t(7), data_alignment(type)));
	}
	if (dynamic_stack_)
		preserved_.push_back({ 28, reserve(8, 8) });
	allocate();
	if (named_.darwin && program_.symbols[symbol_].metadata.tls_for != kNoId)
	{
		// Darwin C++ TLS accessors may call initializers. Their callers
		// retain these GP registers and every scalar SIMD lane across the call.
		for (unsigned reg : { 1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u, 10u, 11u, 12u, 13u, 14u })
			preserved_.push_back({ reg, reserve(8, 8) });
		tls_vectors_ = reserve(32 * 8, 16);
	}
	phi_area_ = reserve(uint64_t(max_phis) * 8, 8);
	reserve(0, 16);
	phis_.reset(body_.instructions.size());
}

void Selector::move(unsigned to, unsigned from)
{
	if (to != from)
		out_.emit(Op::Orr, to, 31, from);
}

// A logical immediate is a rotated run of ones repeated across the register.
bool Selector::logical_immediate(uint64_t bits, unsigned width, uint32_t& field)
{
	if (width == 32)
		bits = static_cast<uint32_t>(bits);
	if (!bits || bits == (~uint64_t(0) >> (64 - width)))
		return false;
	unsigned size = width;
	while (size > 2)
	{
		const uint64_t half = (uint64_t(1) << (size / 2)) - 1;
		if ((bits & half) != (bits >> (size / 2)))
			break;
		bits &= half;
		size /= 2;
	}
	const uint64_t starts = bits & ~((bits << 1) | (bits >> (size - 1)));
	if (!starts || (starts & (starts - 1)))
		return false;
	const unsigned rotation = (size - __builtin_ctzll(starts)) & (size - 1);
	const unsigned imms = ((-2u * size) & 63) | (__builtin_popcountll(bits) - 1);
	field = ((size == 64) << 22) | (rotation << 16) | (imms << 10);
	return true;
}

void Selector::constant(unsigned reg, uint64_t bits)
{
	if (!level_ || bits < 65536)
	{
		out_.emit(Op::MovZ, reg, 0, 0, (bits & 65535) << 5);
		for (unsigned shift = 16; shift < 64; shift += 16)
			if (const unsigned half = (bits >> shift) & 65535)
				out_.emit(Op::MovK, reg, 0, 0, ((shift / 16) << 21) | (half << 5));
		return;
	}
	const unsigned width = bits >> 32 ? 64 : 32;
	unsigned zeros = 0, ones = 0;
	for (unsigned shift = 0; shift < width; shift += 16)
	{
		const unsigned half = (bits >> shift) & 65535;
		zeros += half == 0;
		ones += half == 65535;
	}
	uint32_t mask = 0;
	if (std::max(zeros, ones) + 1 < width / 16 && logical_immediate(bits, width, mask))
	{
		out_.emit(width == 64 ? Op::OrrImm : Op::OrrImmW, reg, 31, 0, mask);
		return;
	}
	const bool invert = ones > zeros;
	const unsigned fill = invert ? 65535 : 0;
	bool first = true;
	for (unsigned shift = 0; shift < width; shift += 16)
	{
		const unsigned half = (bits >> shift) & 65535;
		if (half == fill && (!first || shift + 16 < width))
			continue;
		const Op op = !first ? Op::MovK : !invert ? Op::MovZ : width == 32 ? Op::MovNW : Op::MovN;
		out_.emit(op, reg, 0, 0, ((shift / 16) << 21) | ((first ? half ^ fill : half) << 5));
		first = false;
	}
}

void Selector::saved_registers(bool store)
{
	for (size_t i = 0; i < preserved_.size(); ++i)
	{
		const auto current = preserved_[i];
		const bool pair = level_ && i + 1 < preserved_.size() && current.second <= 504 &&
			preserved_[i + 1].second == current.second + 8;
		const auto rule = store ? FrameRule::Save : FrameRule::Restore;
		if (pair)
		{
			const auto next = preserved_[++i];
			out_.emit(
				store ? Op::StpX : Op::LdpX, current.first, 31, 0, (next.first << 10) | ((current.second / 8) << 15));
			out_.frame_rule(rule, next.first, frame_ - next.second);
		}
		else
			access(store, current.first, 31, current.second, 8);
		out_.frame_rule(rule, current.first, frame_ - current.second);
	}
}

void Selector::stack_adjust(bool subtract)
{
	const Op op = subtract ? Op::SubI : Op::AddI;
	uint32_t amount = frame_;
	while (amount >= 4096)
	{
		const uint32_t pages = std::min(amount >> 12, 4095u);
		out_.emit(op, 31, 31, 0, (1u << 22) | (pages << 10));
		amount -= pages << 12;
		out_.frame_rule(FrameRule::Offset, 31, subtract ? frame_ - amount : amount);
	}
	if (amount)
	{
		out_.emit(op, 31, 31, 0, amount << 10);
		out_.frame_rule(FrameRule::Offset, 31, subtract ? frame_ : 0);
	}
}

// SP and the fixed frame base are 16-byte aligned. Over-aligned objects
// reserve padding inside the frame, leaving DWARF save offsets constant.
void Selector::base_address(unsigned reg, unsigned base, uint32_t offset, unsigned alignment)
{
	if (alignment > 16)
		offset += alignment - 16;
	if (offset <= 4095)
		out_.emit(Op::AddI, reg, base, 0, offset << 10);
	else
	{
		const unsigned scratch = reg == base ? 16 : reg;
		constant(scratch, offset);
		out_.emit(Op::Add, reg, base, scratch, 0x206000);
	}
	if (alignment > 16)
	{
		unsigned bits = 0;
		for (; (1u << bits) < alignment; ++bits)
		{
		}
		out_.emit(Op::AndI, reg, reg, 0, ((64 - bits) << 16) | ((63 - bits) << 10));
	}
}

void Selector::home_address(unsigned reg, TempId temp)
{
	base_address(reg, frame_base(), homes_[temp], data_alignment(body_.temps[temp].type));
}

void Selector::stack_alloc(const lowir::Instruction& inst)
{
	const Type size = type_of(inst.ops[0], Type::scalar(TypeKind::I64));
	value(11, inst.ops[0], size);
	out_.emit(Op::AddI, 9, 31);
	out_.emit(Op::Sub, 9, 9, 11);
	out_.emit(Op::AndI, 9, 9, 0, (60u << 16) | (59u << 10));
	out_.emit(Op::AddI, 31, 9);
	// Keep space for this function's outgoing stack arguments at the new SP.
	base_address(9, 9, outgoing_);
	save(9, inst.result);
}

void Selector::extend(unsigned reg, unsigned bits, bool sign)
{
	if (bits != 0 && bits < 64)
		out_.emit(sign ? Op::Sbfm : Op::Ubfm, reg, reg, 0, (bits - 1) << 10);
}

void Selector::access(bool store, unsigned reg, unsigned base, uint32_t offset, unsigned bytes)
{
	Op op;
	switch (bytes)
	{
	case 1:
		op = store ? Op::StrB : Op::LdrB;
		break;
	case 2:
		op = store ? Op::StrH : Op::LdrH;
		break;
	case 4:
		op = store ? Op::StrW : Op::LdrW;
		break;
	case 8:
		op = store ? Op::StrX : Op::LdrX;
		break;
	default:
		throw AArch64Error("unsupported AArch64 scalar memory width");
	}
	if (offset % bytes || offset / bytes >= 4096)
	{
		unsigned scratch = 16;
		if (base == scratch || (store && reg == scratch))
			scratch = (base == 17 || (store && reg == 17)) ? 15 : 17;
		constant(scratch, offset);
		// ADD (extended register), UXTX. This form can use SP as the base.
		out_.emit(Op::Add, scratch, base, scratch, 0x206000);
		base = scratch;
		offset = 0;
	}
	out_.emit(op, reg, base, 0, (offset / bytes) << 10);
}

Type Selector::type_of(Value v, Type fallback) const
{
	if (v.kind == ValueKind::Temp)
		return body_.temps[v.index].type;
	if (v.kind == ValueKind::Slot)
		return body_.slots[v.index].type;
	return fallback;
}

unsigned Selector::address_register(Value operand, unsigned scratch)
{
	if (operand.is(ValueKind::Temp) && registers_[operand.index] != kNoId)
		return registers_[operand.index];
	address(scratch, operand);
	return scratch;
}

void Selector::address(unsigned reg, Value operand)
{
	if (operand.kind == ValueKind::Slot)
		base_address(reg, frame_base(), slots_[operand.index], data_alignment(body_.slots[operand.index].type));
	else if (operand.kind == ValueKind::Temp && memory_value(body_.temps[operand.index].type))
		home_address(reg, operand.index);
	else if (operand.kind == ValueKind::Symbol)
	{
		if (program_.symbols[operand.index].metadata.storage == ir_model::GSM_THREAD_LOCAL)
		{
			if (named_.darwin)
				darwin_tls_address(reg, operand.index);
			else if (pic_)
			{
				const unsigned tp = reg == 16 ? 17 : 16;
				out_.reference(Op::Adrp, Fixup::TlsPage, operand.index, reg);
				out_.reference(Op::LdrX, Fixup::TlsGotLoad, operand.index, reg, reg);
				out_.emit(Op::ReadThreadPointer, tp);
				out_.emit(Op::Add, reg, tp, reg);
			}
			else
			{
				out_.emit(Op::ReadThreadPointer, reg);
				out_.reference(Op::AddPageI, Fixup::TlsHi, operand.index, reg, reg);
				out_.reference(Op::AddI, Fixup::TlsLo, operand.index, reg, reg);
			}
			return;
		}
		const bool got = pic_ && program_.symbols[operand.index].metadata.binding != ir_model::SBM_INTERNAL;
		out_.reference(Op::Adrp, got ? Fixup::GotPage : Fixup::Page, operand.index, reg);
		out_.reference(got ? Op::LdrX : Op::AddI, got ? Fixup::GotLoad : Fixup::PageOffset, operand.index, reg, reg);
	}
	else
		value(reg, operand, program_.pointer_type());
}

void Selector::value(unsigned reg, Value operand, Type type)
{
	if ((!type.is_integer() && !type.is_pointer() && !type.is_float()) || storage_bytes(type) > 8)
		throw AArch64Error("unsupported AArch64 scalar type");
	switch (operand.kind)
	{
	case ValueKind::Integer:
	{
		const auto& literal = body_.literals[operand.index];
		const unsigned bits = integer_bits(type.kind());
		const uint64_t mask = bits && bits < 64 ? (uint64_t(1) << bits) - 1 : UINT64_MAX;
		constant(reg, type.is_float() ? integer_as_float(type.kind(), literal).low : literal.low & mask);
		break;
	}
	case ValueKind::Float:
		constant(reg, body_.literals[operand.index].low);
		break;
	case ValueKind::Temp:
		if (memory_value(body_.temps[operand.index].type))
		{
			address(reg, operand);
			if (!type.is_pointer())
				access(false, reg, reg, 0, storage_bytes(type));
		}
		else if (registers_[operand.index] != kNoId)
			move(reg, registers_[operand.index]);
		else
			access(false, reg, frame_base(), homes_[operand.index], 8);
		break;
	case ValueKind::Slot:
		address(reg, operand);
		access(false, reg, reg, 0, storage_bytes(type));
		break;
	case ValueKind::Symbol:
		address(reg, operand);
		break;
	default:
		throw AArch64Error("unsupported AArch64 operand");
	}
}

void Selector::save(unsigned reg, TempId temp, bool normalized)
{
	const Type type = body_.temps[temp].type;
	if ((!type.is_integer() && !type.is_pointer() && !type.is_float()) || storage_bytes(type) > 8)
		throw AArch64Error("unsupported AArch64 result type");
	if (!normalized)
		extend(reg, integer_bits(type.kind()), false);
	if (registers_[temp] != kNoId)
		move(registers_[temp], reg);
	else
		access(true, reg, frame_base(), homes_[temp], 8);
}

} // namespace aarch64
