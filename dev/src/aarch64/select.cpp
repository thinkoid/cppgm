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

void Selector::edge(BlockId from, BlockId to)
{
	// Snapshot all sources before committing any destination of this parallel copy.
	uint32_t offset = phi_area_;
	const InstId first = body_.blocks[to].first;
	for (InstId i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const Type type = body_.instructions[i].type;
		const auto source = phis_.incoming(body_, i, from);
		if (memory_value(type))
		{
			frame_address(10, offset);
			copy_value(10, source, type);
		}
		else
		{
			value(left, source, type);
			access(true, left, 31, offset, 8);
		}
		offset += (storage_bytes(type) + 7) & ~uint64_t(7);
	}
	offset = phi_area_;
	for (InstId i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		if (memory_value(phi.type))
		{
			frame_address(11, offset);
			if (phi.type.kind() == TypeKind::V128)
			{
				out_.emit(Op::LdrQ, 16, 11);
				save_vector(16, phi.result);
			}
			else
			{
				frame_address(10, homes_[phi.result]);
				copy_bytes(10, 11, storage_bytes(phi.type));
			}
		}
		else
		{
			access(false, left, 31, offset, 8);
			save(left, phi.result);
		}
		offset += (storage_bytes(phi.type) + 7) & ~uint64_t(7);
	}
	if (out_.exceptions && out_.exceptions->entry_selectors[to] != 0)
	{
		constant(9, out_.exceptions->entry_selectors[to]);
		access(true, 9, 31, exception_slot_ + 8, 8);
	}
	out_.reference(Op::B, Fixup::Block, to);
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
			frame_address(10, homes_[inst.result]);
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
			frame_address(10, homes_[inst.result]);
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
		constant(result_reg, storage_bytes(inst.type));
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
		value(result_reg, inst.ops[0], type_of(inst.ops[0], word));
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
		value(left, inst.ops[0], type_of(inst.ops[0], word));
		const uint32_t other = out_.labels.size();
		out_.labels.push_back(kNoId);
		out_.reference(Op::Cbz, Fixup::Block, other, left);
		edge(block, inst.ops[1].index);
		out_.bind(other);
		edge(block, inst.ops[2].index);
		return;
	}
	case Opcode::VaStart:
		va_start(inst);
		return;
	case Opcode::VaArg:
		va_arg(inst);
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
		frame_address(16, tls_vectors_);
		for (unsigned v = 0; v < 32; ++v)
			out_.emit(Op::StrD, v, 16, 0, v << 10);
	}
	for (const auto& reg : preserved_)
	{
		access(true, reg.first, 31, reg.second, 8);
		out_.frame_rule(FrameRule::Save, reg.first, frame_ - reg.second);
	}
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
			frame_address(29, frame_pointer_);
	}
	if (result_.indirect)
		access(true, 8, 31, result_pointer_, 8);
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
