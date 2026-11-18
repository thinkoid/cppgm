#include "aarch64/selector.h"

#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;
namespace {
const unsigned result_reg = 9, left = 10, right = 11;
const Type word = Type::scalar(TypeKind::I64);
}

void Selector::binary(const lowir::Instruction& inst)
{
	const BinaryOp op = static_cast<BinaryOp>(inst.sub);
	const unsigned bits = integer_bits(inst.type.kind());
	value(left, inst.ops[0], inst.type);
	value(right, inst.ops[1], inst.type);
	const bool div = op == BinaryOp::Div || op == BinaryOp::Mod;
	if (div || op == BinaryOp::UDiv || op == BinaryOp::UMod || op == BinaryOp::Shr || op == BinaryOp::UShr)
	{
		extend(left, bits, div || op == BinaryOp::Shr);
		extend(right, bits, div);
	}
	static const Op ops[] = { Op::Add, Op::Sub, Op::Mul, Op::SDiv, Op::SDiv, Op::UDiv, Op::UDiv, Op::And, Op::Orr,
		Op::Eor, Op::Lsl, Op::Asr, Op::Lsr };
	out_.emit(ops[inst.sub], result_reg, left, right);
	if (op == BinaryOp::Mod || op == BinaryOp::UMod)
	{
		out_.emit(Op::Mul, result_reg, result_reg, right);
		out_.emit(Op::Sub, result_reg, left, result_reg);
	}
}

void Selector::select(const lowir::Instruction& inst, BlockId block)
{
	if ((inst.type.kind() == TypeKind::I128 ||
			(inst.op == Opcode::Convert && convert_source_type(inst).kind() == TypeKind::I128)) &&
		wide(inst))
		return;
	if (floating(inst))
	{
		float_instruction(inst);
		return;
	}
	switch (inst.op)
	{
	case Opcode::Phi:
		return;
	case Opcode::Const:
	case Opcode::Copy:
		if (vectors_[inst.result] != kNoId && inst.type.is_float())
		{
			save_fp(fp_operand(inst.ops[0], inst.type, vectors_[inst.result]), inst.result);
			return;
		}
		if (inst.type.kind() == TypeKind::V128)
		{
			save_vector(vector_value(inst.ops[0], 16), inst.result);
			return;
		}
		if (memory_value(inst.type))
		{
			home_address(10, inst.result);
			copy_value(10, inst.ops[0], inst.type);
			return;
		}
		if (level_)
		{
			const unsigned dest = registers_[inst.result] == kNoId ? result_reg : registers_[inst.result];
			value(dest, inst.ops[0], inst.type);
			save(dest, inst.result, inst.ops[0].is(ValueKind::Temp));
			return;
		}
		value(result_reg, inst.ops[0], inst.type);
		break;
	case Opcode::Addr:
		address(result_reg, inst.ops[0]);
		break;
	case Opcode::CopyObject:
		address(10, inst.ops[1]);
		address(11, inst.ops[0]);
		copy_bytes(10, 11, inst.immediate);
		return;
	case Opcode::ZeroInit:
		address(10, inst.ops[0]);
		copy_bytes(10, 31, inst.immediate);
		return;
	case Opcode::Load:
		if (inst.type.kind() == TypeKind::V128)
		{
			const unsigned base = address_register(inst.ops[0], 10);
			const unsigned dest = vectors_[inst.result] == kNoId ? 16 : vectors_[inst.result];
			out_.emit(Op::LdrQ, dest, base);
			save_vector(dest, inst.result);
			return;
		}
		if (memory_value(inst.type))
		{
			home_address(10, inst.result);
			address(11, inst.ops[0]);
			copy_bytes(10, 11, storage_bytes(inst.type));
			return;
		}
		if (level_)
		{
			const unsigned base = address_register(inst.ops[0], left);
			if (vectors_[inst.result] != kNoId)
			{
				out_.emit(inst.type.kind() == TypeKind::F32 ? Op::LdrS : Op::LdrD, vectors_[inst.result], base);
				return;
			}
			const unsigned dest = registers_[inst.result] == kNoId ? result_reg : registers_[inst.result];
			access(false, dest, base, 0, storage_bytes(inst.type));
			save(dest, inst.result, inst.type.kind() != TypeKind::I1);
			return;
		}
		address(left, inst.ops[0]);
		access(false, result_reg, left, 0, storage_bytes(inst.type));
		break;
	case Opcode::Store:
		if (inst.type.kind() == TypeKind::V128)
		{
			const unsigned base = address_register(inst.ops[1], 10);
			out_.emit(Op::StrQ, vector_value(inst.ops[0], 16), base);
			return;
		}
		if (memory_value(inst.type))
		{
			address(10, inst.ops[1]);
			copy_value(10, inst.ops[0], inst.type);
			return;
		}
		if (level_)
		{
			const unsigned base = address_register(inst.ops[1], left);
			if (inst.ops[0].is(ValueKind::Temp) && vectors_[inst.ops[0].index] != kNoId)
			{
				out_.emit(inst.type.kind() == TypeKind::F32 ? Op::StrS : Op::StrD, vectors_[inst.ops[0].index], base);
				return;
			}
			const unsigned source = operand_register(inst.ops[0], inst.type, right);
			access(true, source, base, 0, storage_bytes(inst.type));
			return;
		}
		address(left, inst.ops[1]);
		value(right, inst.ops[0], inst.type);
		access(true, right, left, 0, storage_bytes(inst.type));
		return;
	case Opcode::Index:
	{
		address(left, inst.ops[0]);
		const Type index = type_of(inst.ops[1], word);
		value(right, inst.ops[1], index);
		extend(right, integer_bits(index.kind()), !is_unsigned(index.kind()) && index.kind() != TypeKind::I1);
		const uint64_t stride = storage_bytes(inst.type);
		if (level_ && stride && (stride & (stride - 1)) == 0)
		{
			unsigned shift = 0;
			while ((uint64_t(1) << shift) != stride)
				++shift;
			out_.emit(Op::Add, result_reg, left, right, shift << 10);
			break;
		}
		constant(result_reg, stride);
		out_.emit(Op::Mul, result_reg, right, result_reg);
		out_.emit(Op::Add, result_reg, left, result_reg);
		break;
	}
	case Opcode::Vector:
		vector_instruction(inst);
		return;
	case Opcode::Binary:
		if (level_ && simple_binary(inst))
			return;
		binary(inst);
		break;
	case Opcode::Compare:
		compare(inst);
		return;
	case Opcode::Convert:
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		const Type from = convert_source_type(inst);
		if (op != ConvertOp::SExt && op != ConvertOp::ZExt && op != ConvertOp::Trunc)
			throw AArch64Error("unsupported AArch64 conversion");
		if (level_ && (op != ConvertOp::SExt || integer_bits(inst.type.kind()) == 64))
		{
			const unsigned src = operand_register(inst.ops[0], from, left);
			const unsigned dest = registers_[inst.result] == kNoId ? result_reg : registers_[inst.result];
			const unsigned bits = integer_bits(op == ConvertOp::Trunc ? inst.type.kind() : from.kind());
			if (op == ConvertOp::ZExt && inst.ops[0].is(ValueKind::Temp) && !memory_value(from))
				move(dest, src);
			else if (bits == 32 && op != ConvertOp::SExt)
				out_.emit(Op::OrrW, dest, 31, src);
			else if (bits && bits < 64)
				out_.emit(op == ConvertOp::SExt ? Op::Sbfm : Op::Ubfm, dest, src, 0, (bits - 1) << 10);
			else
				move(dest, src);
			save(dest, inst.result, true);
			return;
		}
		value(result_reg, inst.ops[0], from);
		extend(result_reg, integer_bits(from.kind()), op == ConvertOp::SExt);
		break;
	}
	case Opcode::Unary:
		integer_unary(inst);
		break;
	case Opcode::Switch:
		switch_edges(inst, block);
		return;
	case Opcode::AtomicLoad:
	case Opcode::AtomicStore:
	case Opcode::AtomicAddFetch:
	case Opcode::AtomicExchange:
	case Opcode::AtomicCompareExchange:
	case Opcode::AtomicThreadFence:
	case Opcode::AtomicSignalFence:
		atomic(inst);
		return;
	case Opcode::Select:
		if (level_ && !memory_value(inst.type) && !inst.ops[1].is(ValueKind::Symbol) &&
			!inst.ops[2].is(ValueKind::Symbol))
		{
			const unsigned cond = condition_register(inst.ops[0], result_reg);
			out_.emit(Op::Subs, 31, cond, 31);
			choose(inst, 1);
			return;
		}
		move(result_reg, condition_register(inst.ops[0], result_reg));
		value(left, inst.ops[1], inst.type);
		value(right, inst.ops[2], inst.type);
		out_.emit(Op::Subs, 31, result_reg, 31);
		out_.emit(Op::Csel, result_reg, left, right, 1u << 12);
		break;
	case Opcode::EhTry:
	case Opcode::EhCleanup:
	case Opcode::EhCatch:
	case Opcode::EhFilter:
	case Opcode::EhEnd:
	case Opcode::EhCatchAll:
		return;
	case Opcode::Exception:
	case Opcode::ExceptionSelector:
		exception_value(inst);
		return;
	case Opcode::Resume:
		resume(site(inst));
		return;
	case Opcode::Jump:
		if (site(inst))
			resume(site(inst));
		else
			edge(block, inst.ops[0].index, true);
		return;
	case Opcode::Branch:
		conditional_edges(block, inst, Op::Cbz, condition_register(inst.ops[0], left));
		return;
	case Opcode::StackAlloc:
		stack_alloc(inst);
		return;
	case Opcode::StackSave:
		out_.emit(Op::AddI, result_reg, 31);
		break;
	case Opcode::StackRestore:
		value(left, inst.ops[0], program_.pointer_type());
		out_.emit(Op::AddI, 31, left);
		return;
	case Opcode::FrameAddress:
		move(result_reg, 29);
		break;
	case Opcode::VaStart:
		emit_va_start(inst);
		return;
	case Opcode::VaArg:
		emit_va_arg(inst);
		return;
	case Opcode::Call:
		call(inst);
		return;
	case Opcode::Return:
		epilogue(inst);
		return;
	case Opcode::Unreachable:
		out_.emit(Op::Brk);
		return;
	default:
		throw AArch64Error(std::string("unsupported AArch64 instruction: ") + spelling(inst.op));
	}
	save(result_reg, inst.result);
}

void Selector::run()
{
	plan();
	stack_adjust(true);
	if (tls_vectors_ != kNoId)
	{
		base_address(16, 31, tls_vectors_);
		for (unsigned v = 0; v < 32; ++v)
			out_.emit(Op::StrD, v, 16, 0, v << 10);
	}
	saved_registers(true);
	if (frame_pointer_ != kNoId)
		base_address(29, 31, frame_pointer_);
	if (dynamic_stack_)
	{
		out_.emit(Op::AddI, 28, 31);
		out_.frame_rule(FrameRule::Register, 28);
	}
	if (result_.indirect)
		access(true, 8, frame_base(), result_pointer_, 8);
	save_variadic_registers();
	for (unsigned i = 0; i < body_.parameter_count; ++i)
	{
		const auto& param = program_.parameters_of(signature_)[i];
		parameter(i,
			param.pass == ir_model::PPM_INDIRECT_RESULT ? Argument{ Bank::General, 8, 1, 8, false }
														: named_.next(param.type, param.shape));
	}
	for (size_t index = 0; index < body_.layout.size(); ++index)
	{
		const BlockId block = body_.layout[index];
		// A landing prologue can precede its LowIR block label.
		fallthrough_ = level_ && index + 1 < body_.layout.size() ? body_.layout[index + 1] : kNoId;
		if (out_.exceptions && fallthrough_ != kNoId &&
			(!out_.exceptions->analysis.blocks_[index + 1].reachable ||
				out_.exceptions->analysis.eh_landing_index_[index + 1] != kNoId))
			fallthrough_ = kNoId;
		if (out_.exceptions)
		{
			const auto& plan = *out_.exceptions;
			if (!plan.analysis.blocks_[plan.layout_of[block]].reachable)
				continue;
			landing(block);
		}
		out_.bind(block);
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			if (level_ && (inst.op == Opcode::Index || inst.op == Opcode::Binary || inst.op == Opcode::Convert))
			{
				InstId last = inst.op == Opcode::Convert ? truncated_operand(inst, block) : address_sequence(i);
				if (last == kNoId && inst.op == Opcode::Binary)
					last = shifted_operand(inst);
				if (last != kNoId)
				{
					i = last;
					continue;
				}
			}
			if (level_ && inst.op == Opcode::Compare && compare_consumer(inst, block))
				i = inst.next;
			else
				select(inst, block);
		}
	}
}

} // namespace aarch64
