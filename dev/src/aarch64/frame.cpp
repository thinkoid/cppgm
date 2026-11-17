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
	if (alignment > 16 || size > UINT32_MAX)
		throw AArch64Error("unsupported AArch64 frame alignment or size");
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
	reserve(outgoing, 16);
	if (eh)
		prepare_exceptions();
	if (starts_variadic && !named_.darwin)
		variadic_area_ = reserve(64 + 128, 16);
	if (result_.indirect)
		result_pointer_ = reserve(8, 8);
	if (calls)
	{
		if (named_.darwin)
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

void Selector::constant(unsigned reg, uint64_t bits)
{
	out_.emit(Op::MovZ, reg, 0, 0, (bits & 65535) << 5);
	for (unsigned shift = 16; shift < 64; shift += 16)
	{
		const unsigned half = (bits >> shift) & 65535;
		if (half)
			out_.emit(Op::MovK, reg, 0, 0, ((shift / 16) << 21) | (half << 5));
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
		constant(16, offset);
		// ADD (extended register), UXTX. This form can use SP as the base.
		out_.emit(Op::Add, 16, base, 16, 0x206000);
		base = 16;
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

void Selector::address(unsigned reg, Value operand)
{
	if (operand.kind == ValueKind::Slot)
		frame_address(reg, slots_[operand.index]);
	else if (operand.kind == ValueKind::Temp && memory_value(body_.temps[operand.index].type))
		frame_address(reg, homes_[operand.index]);
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
		constant(reg,
			type.is_float() ? integer_as_float(type.kind(), body_.literals[operand.index]).low
							: body_.literals[operand.index].low);
		break;
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
			access(false, reg, 31, homes_[operand.index], 8);
		break;
	case ValueKind::Slot:
		access(false, reg, 31, slots_[operand.index], storage_bytes(type));
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
		access(true, reg, 31, homes_[temp], 8);
}

} // namespace aarch64
