#include "aarch64/selector.h"

#include "aarch64/error.h"
#include "machine/call_arguments.h"

namespace aarch64 {

using namespace lowir;

// Darwin TLV thunks accept a descriptor in x0. x0, IP0, IP1 and LR may
// change. Preserve operands already prepared by the enclosing instruction.
void Selector::darwin_tls_address(unsigned reg, SymbolId symbol)
{
	out_.emit(Op::SubI, 31, 31, 0, 48 << 10);
	if (!dynamic_stack_)
		out_.frame_rule(FrameRule::Offset, 31, frame_ + 48);
	access(true, 0, 31, 0, 8);
	access(true, 16, 31, 8, 8);
	access(true, 17, 31, 16, 8);
	access(true, 30, 31, 24, 8);
	out_.reference(Op::Adrp, Fixup::TlvPage, symbol, 0);
	out_.reference(Op::LdrX, Fixup::TlvLoad, symbol, 0, 0);
	access(false, 16, 0, 0, 8);
	out_.emit(Op::Blr, 0, 16);
	access(true, 0, 31, 32, 8);
	access(false, 0, 31, 0, 8);
	access(false, 16, 31, 8, 8);
	access(false, 17, 31, 16, 8);
	access(false, 30, 31, 24, 8);
	access(false, reg, 31, 32, 8);
	out_.emit(Op::AddI, 31, 31, 0, 48 << 10);
	if (!dynamic_stack_)
		out_.frame_rule(FrameRule::Offset, 31, frame_);
}

// dst and src are address registers. A zero-register source fills with zero.
void Selector::copy_bytes(unsigned dst, unsigned src, uint64_t size)
{
	// A loop keeps machine-code size bounded for large aggregates.
	if (size >= 64)
	{
		move(16, dst);
		if (src != 31)
			move(17, src);
		constant(9, size / 8);
		const unsigned loop = out_.labels.size();
		out_.labels.resize(loop + 2);
		out_.bind(loop);
		if (src != 31)
		{
			access(false, 15, 17, 0, 8);
			out_.emit(Op::AddI, 17, 17, 0, 8 << 10);
		}
		access(true, src == 31 ? 31 : 15, 16, 0, 8);
		out_.emit(Op::AddI, 16, 16, 0, 8 << 10);
		out_.emit(Op::SubI, 9, 9, 0, 1 << 10);
		out_.reference(Op::Cbz, Fixup::Block, loop + 1, 9);
		out_.reference(Op::B, Fixup::Block, loop);
		out_.bind(loop + 1);
		dst = 16;
		if (src != 31)
			src = 17;
		size %= 8;
	}
	unsigned offset = 0;
	for (unsigned n : { 8u, 4u, 2u, 1u })
		while (size - offset >= n)
		{
			if (src != 31)
				access(false, 9, src, offset, n);
			access(true, src == 31 ? 31 : 9, dst, offset, n);
			offset += n;
		}
}

void Selector::copy_value(unsigned dst, Value src, Type type)
{
	if (type.kind() == TypeKind::V128)
	{
		out_.emit(Op::StrQ, vector_value(src, 16), dst);
		return;
	}
	if (type.kind() == TypeKind::I128 && src.is(ValueKind::Integer))
	{
		pair(src, 16, 17);
		access(true, 16, dst, 0, 8);
		access(true, 17, dst, 8, 8);
		return;
	}
	address(11, src);
	copy_bytes(dst, 11, storage_bytes(type));
}

void Selector::fp_move(bool to_fp, unsigned fp, unsigned gp, Type type)
{
	const bool single = type.kind() == TypeKind::F32;
	if (to_fp)
		out_.emit(single ? Op::FmovSW : Op::FmovDX, fp, gp);
	else
		out_.emit(single ? Op::FmovWS : Op::FmovXD, gp, fp);
}

// An aggregate may end at the last byte of a mapped page. Access only
// the bytes belonging to each general-register piece, including its tail.
void Selector::transfer(bool load, const Argument& arg, unsigned base, Type type)
{
	for (unsigned i = 0; i < arg.pieces; ++i)
	{
		if (arg.bank == Bank::General)
		{
			const unsigned reg = arg.first + i;
			unsigned offset = 0, bytes = std::min<uint64_t>(8, storage_bytes(type) - i * 8);
			for (unsigned chunk : { 8u, 4u, 2u, 1u })
			{
				if (!(bytes & chunk))
					continue;
				const unsigned part = offset ? 15 : reg;
				if (!load && offset)
					out_.emit(Op::Ubfm, 15, reg, 0, (offset * 8 << 16) | (63u << 10));
				access(!load, part, base, i * 8 + offset, chunk);
				if (load && offset)
					out_.emit(Op::Orr, reg, reg, 15, offset * 8 << 10);
				offset += chunk;
			}
		}
		else
		{
			const Op op = arg.piece_bytes == 16 ? (load ? Op::LdrQ : Op::StrQ)
				: arg.piece_bytes == 8          ? (load ? Op::LdrD : Op::StrD)
												: (load ? Op::LdrS : Op::StrS);
			out_.emit(op, arg.first + i, base, 0, i << 10);
		}
	}
}

void Selector::parameter(TempId id, const Argument& arg)
{
	if (!arg.pieces)
		return;
	const Type type = body_.temps[id].type;
	const unsigned offset = frame_ + arg.first;
	if (type.kind() == TypeKind::V128)
	{
		if (arg.bank == Bank::Stack)
		{
			frame_address(10, offset);
			out_.emit(Op::LdrQ, 16, 10);
		}
		save_vector(arg.bank == Bank::Stack ? 16 : arg.first, id);
	}
	else if (memory_value(type))
	{
		home_address(10, id);
		if (arg.indirect || arg.bank == Bank::Stack)
		{
			if (!arg.indirect)
				frame_address(11, offset);
			else if (arg.bank == Bank::Stack)
				access(false, 11, frame_base(), offset, 8);
			else
				move(11, arg.first);
			copy_bytes(10, 11, storage_bytes(type));
		}
		else
			transfer(false, arg, 10, type);
	}
	else
	{
		const unsigned dest = registers_[id] == kNoId ? 10 : registers_[id];
		if (arg.bank == Bank::Stack)
			access(false, dest, frame_base(), offset, storage_bytes(type));
		else if (arg.bank == Bank::Simd)
			fp_move(false, arg.first, dest, type);
		else
			move(dest, arg.first);
		save(dest, id);
	}
}

Selector::CallLayout Selector::call_layout(const lowir::Instruction& inst) const
{
	const auto* signature = program_.call_boundary(inst);
	if (!signature || inst.extra_count < signature->parameter_count ||
		(signature->boundary.arity == ir_model::CAM_FIXED && inst.extra_count != signature->parameter_count))
		throw AArch64Error("invalid AArch64 call boundary");
	const auto params = program_.parameters_of(*signature);
	CallLayout plan;
	machine::call_argument_types(body_, inst, *signature, params, plan.types);
	Arguments layout(named_.darwin);
	for (uint32_t i = 0; i < plan.types.size(); ++i)
	{
		const auto shape = i < signature->parameter_count ? params[i].shape : machine::argument_shape(body_, inst, i);
		plan.args.push_back(i < signature->parameter_count && params[i].pass == ir_model::PPM_INDIRECT_RESULT
				? Argument{ Bank::General, 8, 1, 8, false }
				: layout.next(plan.types[i], shape, i >= signature->parameter_count));
	}
	uint64_t bytes = layout.stack;
	plan.copies.resize(plan.args.size(), 0);
	for (uint32_t i = 0; i < plan.args.size(); ++i)
		if (plan.args[i].indirect)
		{
			bytes = (bytes + 15) & ~uint64_t(15);
			plan.copies[i] = bytes;
			bytes += storage_bytes(plan.types[i]) + (std::max(16u, data_alignment(plan.types[i])) - 16);
			if (bytes > INT32_MAX)
				throw AArch64Error("AArch64 call frame too large");
		}
	plan.size = bytes;
	return plan;
}

void Selector::pass(const Argument& arg, Value src, Type type, unsigned copy_offset)
{
	if (!arg.pieces)
		return;
	if (arg.indirect)
	{
		base_address(10, 31, copy_offset, data_alignment(type));
		copy_value(10, src, type);
		if (arg.bank == Bank::Stack)
			access(true, 10, 31, arg.first, 8);
		else
			move(arg.first, 10);
	}
	else if (type.kind() == TypeKind::V128 && arg.bank == Bank::Simd)
		vector_move(arg.first, vector_value(src, 16));
	else if (type.kind() == TypeKind::I128 && arg.bank == Bank::General)
		pair(src, arg.first, arg.first + 1);
	else if (memory_value(type))
	{
		if (arg.bank == Bank::Stack)
		{
			base_address(10, 31, arg.first);
			copy_value(10, src, type);
		}
		else
		{
			address(10, src);
			transfer(true, arg, 10, type);
		}
	}
	else
	{
		value(10, src, type);
		if (arg.bank == Bank::Stack)
			access(true, 10, 31, arg.first, storage_bytes(type));
		else if (arg.bank == Bank::Simd)
			fp_move(true, arg.first, 10, type);
		else
		{
			if (named_.darwin && type.is_integer() && integer_bits(type.kind()) < 32)
				extend(10, integer_bits(type.kind()), !is_unsigned(type.kind()) && type.kind() != TypeKind::I1);
			move(arg.first, 10);
		}
	}
}

void Selector::call(const lowir::Instruction& inst)
{
	const auto& layout = calls_[call_indices_[&inst - body_.instructions.data()]];
	for (uint32_t i = 0; i < layout.args.size(); ++i)
		pass(layout.args[i], body_.operands[inst.extra_first + i], layout.types[i], layout.copies[i]);
	const Argument ret = classify(inst.type, program_.call_boundary(inst)->boundary.result_shape);
	if (ret.indirect)
		home_address(8, inst.result);
	if (inst.ops[0].kind == ValueKind::Symbol)
		out_.reference(Op::Bl, Fixup::Call, inst.ops[0].index);
	else
	{
		value(10, inst.ops[0], program_.pointer_type());
		out_.emit(Op::Blr, 0, 10);
	}
	record_call(inst);
	if (inst.result == kNoId || ret.indirect)
		return;
	if (inst.type.kind() == TypeKind::V128)
		save_vector(0, inst.result);
	else if (memory_value(inst.type))
	{
		home_address(10, inst.result);
		transfer(false, ret, 10, inst.type);
	}
	else
	{
		if (ret.bank == Bank::Simd)
			fp_move(false, 0, 0, inst.type);
		save(0, inst.result);
	}
}

void Selector::epilogue(const lowir::Instruction& inst)
{
	const Type type = signature_.result;
	if (type.kind() == TypeKind::V128)
		vector_move(0, vector_value(inst.ops[0], 16));
	else if (type.kind() == TypeKind::I128)
		pair(inst.ops[0], 0, 1);
	else if (memory_value(type))
	{
		if (result_.indirect)
		{
			access(false, 10, frame_base(), result_pointer_, 8);
			copy_value(10, inst.ops[0], type);
		}
		else
		{
			address(10, inst.ops[0]);
			transfer(true, result_, 10, type);
		}
	}
	else if (type.kind() != TypeKind::Void)
	{
		value(0, inst.ops[0], type);
		if (type.is_float())
			fp_move(true, 0, 0, type);
		else if (named_.darwin && type.is_integer() && integer_bits(type.kind()) < 32)
			extend(0, integer_bits(type.kind()), !is_unsigned(type.kind()) && type.kind() != TypeKind::I1);
	}
	if (frame_)
		out_.frame_rule(FrameRule::RememberState);
	if (dynamic_stack_)
	{
		out_.emit(Op::AddI, 31, 28);
		out_.frame_rule(FrameRule::Register, 31);
	}
	if (frame_pointer_ != kNoId)
	{
		access(false, 29, 31, frame_pointer_, 8);
		out_.frame_rule(FrameRule::Restore, 29);
	}
	if (link_ != kNoId)
	{
		access(false, 30, 31, link_, 8);
		out_.frame_rule(FrameRule::Restore, 30);
	}
	saved_registers(false);
	if (tls_vectors_ != kNoId)
	{
		base_address(16, 31, tls_vectors_);
		for (unsigned v = 0; v < 32; ++v)
			out_.emit(Op::LdrD, v, 16, 0, v << 10);
	}
	stack_adjust(false);
	out_.emit(Op::Ret, 0, 30);
	if (frame_)
		out_.frame_rule(FrameRule::RestoreState);
}

} // namespace aarch64
