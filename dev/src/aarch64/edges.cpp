#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

void Selector::copy_edge(BlockId from, BlockId to)
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
			value(10, source, type);
			access(true, 10, frame_base(), offset, 8);
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
				home_address(10, phi.result);
				copy_bytes(10, 11, storage_bytes(phi.type));
			}
		}
		else
		{
			access(false, 10, frame_base(), offset, 8);
			save(10, phi.result);
		}
		offset += (storage_bytes(phi.type) + 7) & ~uint64_t(7);
	}
}

bool Selector::register_edge(BlockId from, BlockId to)
{
	// Commit in order only when an earlier write cannot destroy a later source.
	uint32_t written[2] = {};
	const auto first = body_.blocks[to].first;
	for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		const bool simd = vectors_[phi.result] != kNoId;
		const auto dest = simd ? vectors_[phi.result] : registers_[phi.result];
		if (dest == kNoId ||
			!(source.is(ValueKind::Integer) || source.is(ValueKind::Temp) || source.is(ValueKind::Float)))
			return false;
		if (source.is(ValueKind::Temp))
		{
			const bool vector_source = vectors_[source.index] != kNoId;
			const auto reg = vector_source ? vectors_[source.index] : registers_[source.index];
			if (reg != kNoId && (written[vector_source] & (1u << reg)))
				return false;
			if (simd == vector_source && reg == dest)
				continue;
		}
		written[simd] |= 1u << dest;
	}
	for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		if (vectors_[phi.result] != kNoId)
			vector_move(vectors_[phi.result],
				phi.type.kind() == TypeKind::V128 ? vector_value(source, 16) : fp_operand(source, phi.type, 16));
		else
			value(registers_[phi.result], source, phi.type);
	}
	return true;
}

void Selector::conditional_edges(BlockId block, const lowir::Instruction& branch, Op test, unsigned operand)
{
	const BlockId yes = branch.ops[1].index, no = branch.ops[2].index;
	const auto direct = [&](BlockId to) {
		const auto first = body_.blocks[to].first;
		if (out_.exceptions && out_.exceptions->entry_selectors[to])
			return false;
		for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
		{
			const auto& phi = body_.instructions[i];
			const auto source = phis_.incoming(body_, i, block);
			if (!level_ || !source.is(ValueKind::Temp) ||
				!((registers_[phi.result] != kNoId && registers_[phi.result] == registers_[source.index]) ||
					(vectors_[phi.result] != kNoId && vectors_[phi.result] == vectors_[source.index])))
				return false;
		}
		return true;
	};
	if (no == fallthrough_ && direct(yes))
	{
		const auto inverse = test == Op::Cbz ? Op::Cbnz
			: test == Op::Cbnz               ? Op::Cbz
			: test == Op::CbzW               ? Op::CbnzW
			: test == Op::CbnzW              ? Op::CbzW
											 : Op::BCond;
		out_.reference(inverse, Fixup::Block, yes, test == Op::BCond ? operand ^ 1 : operand);
		edge(block, no, true);
		return;
	}
	if (level_ && direct(no))
	{
		out_.reference(test, Fixup::Block, no, operand);
		edge(block, yes, true);
		return;
	}
	const uint32_t other = out_.labels.size();
	out_.labels.push_back(kNoId);
	out_.reference(test, Fixup::Block, other, operand);
	edge(block, yes);
	out_.bind(other);
	edge(block, no, true);
}

void Selector::edge(BlockId from, BlockId to, bool last)
{
	if (!level_ || !register_edge(from, to))
		copy_edge(from, to);
	if (out_.exceptions && out_.exceptions->entry_selectors[to] != 0)
	{
		constant(9, out_.exceptions->entry_selectors[to]);
		access(true, 9, frame_base(), exception_slot_ + 8, 8);
	}
	if (!last || to != fallthrough_)
		out_.reference(Op::B, Fixup::Block, to);
}

} // namespace aarch64
