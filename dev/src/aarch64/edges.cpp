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
	uint32_t written = 0;
	const auto first = body_.blocks[to].first;
	for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		const auto source = phis_.incoming(body_, i, from);
		const auto dest = registers_[phi.result];
		if (dest == kNoId ||
			!(source.is(ValueKind::Integer) || source.is(ValueKind::Temp) || source.is(ValueKind::Float)))
			return false;
		if (source.is(ValueKind::Temp) && registers_[source.index] != kNoId &&
			(written & (1u << registers_[source.index])))
			return false;
		written |= 1u << dest;
	}
	for (auto i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi; i = body_.instructions[i].next)
	{
		const auto& phi = body_.instructions[i];
		value(registers_[phi.result], phis_.incoming(body_, i, from), phi.type);
	}
	return true;
}

void Selector::conditional_edges(BlockId block, const lowir::Instruction& branch, Op test, unsigned operand)
{
	const BlockId yes = branch.ops[1].index, no = branch.ops[2].index;
	const auto direct = [&](BlockId to) {
		const auto first = body_.blocks[to].first;
		return (first == kNoId || body_.instructions[first].op != Opcode::Phi) &&
			(!out_.exceptions || !out_.exceptions->entry_selectors[to]);
	};
	if (no == fallthrough_ && direct(yes))
	{
		out_.reference(
			test == Op::Cbz ? Op::Cbnz : Op::BCond, Fixup::Block, yes, test == Op::Cbz ? operand : operand ^ 1);
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
