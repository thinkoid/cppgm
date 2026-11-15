#include <vector>

#include "native/select/mir_cleanup.h"
#include "native/select/mir_facts.h"

// Edge transfers (O1+, before the blocks are placed): see
// hoist_edge_moves in mir_cleanup.h. One pass over the instructions for the
// blocks' entering branches, then a bounded read of each two-way block's
// successors.
namespace native {

namespace {

// The most transfers of one edge block, and the instructions of the other
// successor read for the write that makes a transfer's register dead.
const uint32_t kEdgeMoves = 3;
const uint32_t kOverwriteScan = 12;

// A GPR set to a constant or to another GPR's value (a full write).
bool transfer(const Inst& inst)
{
	return inst.op == Op::Mov && inst.nops == 2 && plain_gpr(inst.ops[0]) &&
		(inst.ops[1].is_imm() || plain_gpr(inst.ops[1])) && simple_inst(inst);
}

bool names(const Inst& inst, Reg r)
{
	for (unsigned k = 0; k < inst.nops; ++k)
		if (inst.ops[k].uses_reg(r))
			return true;
	const bool variable_shift = (inst.op == Op::Shl || inst.op == Op::Shr || inst.op == Op::Sar || inst.op == Op::Rol ||
									inst.op == Op::Ror) &&
		!inst.ops[1].is_imm();
	return variable_shift && r == RCX;
}

// Whether a simple instruction writes all of r and reads none of it.
bool assigns(const Inst& inst, Reg r)
{
	if (inst.nops != 2 || !plain_gpr(inst.ops[0]) || inst.ops[0].reg != r || inst.ops[1].uses_reg(r))
		return false;
	return inst.op == Op::Mov || inst.op == Op::Load || inst.op == Op::Lea || inst.op == Op::Movzx ||
		inst.op == Op::Zext || inst.op == Op::Sext;
}

// Whether block t writes all of r before it reads it or branches.
bool overwrites(const Function& f, uint32_t t, Reg r)
{
	const Block& block = f.blocks[t];
	uint32_t read = 0;
	for (uint32_t i = block.first; i < block.first + block.count; ++i)
	{
		const Inst& inst = f.insts[i];
		if (inst.op == Op::Nop)
			continue;
		if (++read > kOverwriteScan || !simple_inst(inst))
			return false;
		if (assigns(inst, r))
			return true;
		if (names(inst, r))
			return false;
	}
	return false;
}

// Whether the edge taken when `test` finds its operands equal makes the
// transfer `move` a write of the value its register already holds.
bool holds_already(const Inst& test, const Inst& move)
{
	if (!wide_kind(test.type) || !plain_gpr(test.ops[0]))
		return false;
	const Reg r = move.ops[0].reg;
	const Operand& value = move.ops[1];
	if (test.op == Op::Test)
		return plain_gpr(test.ops[1]) && test.ops[1].reg == test.ops[0].reg && test.ops[0].reg == r && value.is_imm() &&
			value.imm == 0;
	if (test.op != Op::Cmp)
		return false;
	if (test.ops[1].is_imm())
		return test.ops[0].reg == r && value.is_imm() && value.imm == test.ops[1].imm;
	if (!plain_gpr(test.ops[1]) || !plain_gpr(value))
		return false;
	return (test.ops[0].reg == r && test.ops[1].reg == value.reg) ||
		(test.ops[1].reg == r && test.ops[0].reg == value.reg);
}

struct Edge
{
	uint32_t moves[kEdgeMoves];
	bool hoisted[kEdgeMoves];
	uint32_t count = 0;
	uint32_t jump = 0;
};

// The edge block e's transfers and its jump on, when it holds nothing else.
bool edge_block(const Function& f, uint32_t e, Edge& edge)
{
	const Block& block = f.blocks[e];
	if (block.count == 0 || block.landing)
		return false;
	const uint32_t last = block.first + block.count - 1;
	if (f.insts[last].op != Op::Jmp || f.insts[last].ops[0].kind != OperandKind::Label)
		return false;
	edge.jump = last;
	for (uint32_t i = block.first; i < last; ++i)
	{
		if (f.insts[i].op == Op::Nop)
			continue;
		if (edge.count == kEdgeMoves || !transfer(f.insts[i]))
			return false;
		edge.moves[edge.count++] = i;
	}
	return edge.count != 0;
}

} // namespace

uint32_t hoist_edge_moves(Function& f)
{
	const uint32_t n = static_cast<uint32_t>(f.blocks.size());
	if (n < 3 || !f.code_labels.empty())
		return 0;
	// How many branches enter each block: 2 stands for more, and for an
	// entry that is no plain branch.
	std::vector<uint8_t> entries(n, 0);
	auto enter = [&](uint32_t b, bool branch) {
		if (b < n)
			entries[b] = static_cast<uint8_t>(branch && entries[b] == 0 ? 1 : 2);
	};
	enter(0, false);
	for (const EhLanding& landing : f.eh.landings)
	{
		enter(landing.pad, false);
		enter(landing.select, false);
	}
	for (uint32_t b = 0; b < n; ++b)
	{
		const Block& block = f.blocks[b];
		if (block.landing)
			enter(b, false);
		Op last = Op::Nop;
		for (uint32_t i = block.first; i < block.first + block.count; ++i)
		{
			const Inst& inst = f.insts[i];
			if (inst.op == Op::Nop)
				continue;
			last = inst.op;
			if (inst.op == Op::JumpTable || inst.op == Op::IndirectJump)
				for (uint32_t k = inst.aux; k < inst.aux + inst.aux2; ++k)
					enter(f.jump_targets[k], false);
			if (inst.op == Op::WideCmpBranch)
				enter(inst.aux, false);
			for (unsigned k = 0; k < inst.nops; ++k)
				if (inst.ops[k].kind == OperandKind::Label)
					enter(inst.ops[k].symbol, inst.op == Op::Jcc || inst.op == Op::Jmp);
		}
		if (last != Op::Jmp && last != Op::Ret && last != Op::FRet && last != Op::TailJump && last != Op::JumpTable &&
			last != Op::IndirectJump && last != Op::Trap && last != Op::Resume && last != Op::Throw)
			enter(b + 1, false);
	}
	uint32_t moved = 0;
	std::vector<Inst> hoisted;
	for (uint32_t b = 0; b < n; ++b)
	{
		const Block block = f.blocks[b];
		if (block.count < 3)
			continue;
		const uint32_t end = block.first + block.count;
		const Inst jump = f.insts[end - 1];
		const Inst jcc = f.insts[end - 2];
		const Inst test = f.insts[end - 3];
		if (jump.op != Op::Jmp || jcc.op != Op::Jcc || jump.ops[0].kind != OperandKind::Label ||
			jcc.ops[0].kind != OperandKind::Label || !simple_inst(test))
			continue;
		for (unsigned side = 0; side < 2; ++side)
		{
			const uint32_t e = side == 0 ? jcc.ops[0].symbol : jump.ops[0].symbol;
			const uint32_t t = side == 0 ? jump.ops[0].symbol : jcc.ops[0].symbol;
			Edge edge;
			if (e >= n || t >= n || e == t || e == b || entries[e] != 1 || !edge_block(f, e, edge))
				continue;
			const Cond equal = side == 0 ? CC_E : CC_NE;
			const bool on_equal = static_cast<Cond>(jcc.sub) == equal;
			// Each transfer goes (its register holds the value on this edge:
			// no earlier transfer of the block wrote either register) or runs
			// before the test, which names neither register it writes or
			// reads, where the other successor overwrites its register.
			uint32_t written = 0;
			bool all = true;
			for (uint32_t k = 0; k < edge.count && all; ++k)
			{
				const Inst& move = f.insts[edge.moves[k]];
				const Reg r = move.ops[0].reg;
				const uint32_t read = plain_gpr(move.ops[1]) ? 1u << move.ops[1].reg : 0;
				edge.hoisted[k] = !(on_equal && (written & ((1u << r) | read)) == 0 && holds_already(test, move));
				if (edge.hoisted[k])
					all = !names(test, r) && (read == 0 || written_reg(test) != move.ops[1].reg) && overwrites(f, t, r);
				written |= 1u << r;
			}
			if (!all)
				continue;
			hoisted.clear();
			for (uint32_t k = 0; k < edge.count; ++k)
				if (edge.hoisted[k])
					hoisted.push_back(f.insts[edge.moves[k]]);
			if (!hoisted.empty())
			{
				// The block again at the end, the transfers before its test.
				const uint32_t first = static_cast<uint32_t>(f.insts.size());
				f.insts.reserve(f.insts.size() + block.count + hoisted.size());
				for (uint32_t i = block.first; i < end - 3; ++i)
					f.insts.push_back(f.insts[i]);
				f.insts.insert(f.insts.end(), hoisted.begin(), hoisted.end());
				f.insts.push_back(test);
				f.insts.push_back(jcc);
				f.insts.push_back(jump);
				f.blocks[b].first = first;
				f.blocks[b].count = static_cast<uint32_t>(f.insts.size()) - first;
			}
			f.blocks[e].first = edge.jump;
			f.blocks[e].count = 1;
			++moved;
			break;
		}
	}
	return moved;
}

} // namespace native
