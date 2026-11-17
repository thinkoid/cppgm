#include "aarch64/selector.h"

#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;
namespace {
const unsigned result_reg = 9, left = 10, right = 11;
const Type word = Type::scalar(TypeKind::I64);
const unsigned conditions[] = { 0, 1, 11, 13, 12, 10, 3, 9, 8, 2 };
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

void Selector::compare(const lowir::Instruction& inst)
{
	const auto pred = static_cast<ComparePredicate>(inst.sub);
	const bool sign = pred >= ComparePredicate::Lt && pred <= ComparePredicate::Ge;
	value(left, inst.ops[0], inst.type);
	value(right, inst.ops[1], inst.type);
	extend(left, integer_bits(inst.type.kind()), sign);
	extend(right, integer_bits(inst.type.kind()), sign);
	out_.emit(Op::Subs, 31, left, right);
	out_.emit(Op::Csinc, result_reg, 31, 31, (conditions[inst.sub] ^ 1) << 12);
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
			address(10, inst.ops[0]);
			out_.emit(Op::LdrQ, 16, 10);
			save_vector(16, inst.result);
			return;
		}
		if (memory_value(inst.type))
		{
			home_address(10, inst.result);
			address(11, inst.ops[0]);
			copy_bytes(10, 11, storage_bytes(inst.type));
			return;
		}
		address(left, inst.ops[0]);
		access(false, result_reg, left, 0, storage_bytes(inst.type));
		break;
	case Opcode::Store:
		if (memory_value(inst.type))
		{
			address(10, inst.ops[1]);
			copy_value(10, inst.ops[0], inst.type);
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
		break;
	case Opcode::Convert:
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		const Type from = convert_source_type(inst);
		if (op != ConvertOp::SExt && op != ConvertOp::ZExt && op != ConvertOp::Trunc)
			throw AArch64Error("unsupported AArch64 conversion");
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
			edge(block, inst.ops[0].index);
		return;
	case Opcode::Branch:
	{
		const unsigned condition = condition_register(inst.ops[0], left);
		const auto false_block = inst.ops[2].index;
		const auto first = body_.blocks[false_block].first;
		if (level_ && (first == kNoId || body_.instructions[first].op != Opcode::Phi) &&
			(!out_.exceptions || !out_.exceptions->entry_selectors[false_block]))
		{
			out_.reference(Op::Cbz, Fixup::Block, false_block, condition);
			edge(block, inst.ops[1].index);
			return;
		}
		const uint32_t other = out_.labels.size();
		out_.labels.push_back(kNoId);
		out_.reference(Op::Cbz, Fixup::Block, other, condition);
		edge(block, inst.ops[1].index);
		out_.bind(other);
		edge(block, inst.ops[2].index);
		return;
	}
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
	{
		access(true, 29, 31, frame_pointer_, 8);
		out_.frame_rule(FrameRule::Save, 29, frame_ - frame_pointer_);
	}
	if (link_ != kNoId)
	{
		access(true, 30, 31, link_, 8);
		out_.frame_rule(FrameRule::Save, 30, frame_ - link_);
		if (frame_pointer_ != kNoId)
			base_address(29, 31, frame_pointer_);
	}
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
	for (BlockId block : body_.layout)
	{
		if (out_.exceptions)
		{
			const auto& plan = *out_.exceptions;
			if (!plan.analysis.blocks_[plan.layout_of[block]].reachable)
				continue;
			landing(block);
		}
		out_.bind(block);
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
			select(body_.instructions[i], block);
	}
}

} // namespace aarch64
