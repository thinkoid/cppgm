#include "aarch64/logical_immediate.h"
#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"

#include <vector>

namespace opt {

using namespace lowir;

namespace {

// The most literals one loop keeps in registers: the rest stay in memory.
constexpr size_t kHeld = 8;
constexpr size_t kHeldAddresses = 4;

// A loop without calls on its usual paths reads its floating literals from registers: each is
// copied once before the outermost such loop, and a register costs no load
// per iteration. (A value the allocator cannot keep is read from its frame
// home, as the literal would be from read-only data.) Zero is cheaper to
// clear than to keep.
class LoopLiterals
{
public:
	explicit LoopLiterals(FunctionContext& context) : c_(context), body_(context.body), cfg_(context.cfg) {}

	bool run();

private:
	struct Held
	{
		Value literal;
		Value temp;
		Type type;
	};

	bool held_literal(const Instruction& inst, Value v) const;
	bool has_call(const Loop& loop) const;
	bool reads_literal(const Loop& loop) const;
	bool same_literal(Value a, Value b) const;
	bool hold(uint32_t loop, BlockId pre);
	bool hold_addresses(uint32_t loop);

	FunctionContext& c_;
	FunctionBody& body_;
	Cfg& cfg_;
	LoopForest forest_;
	std::vector<Held> held_;
	bool across_call_ = false;
};

bool LoopLiterals::held_literal(const Instruction& inst, Value v) const
{
	if (v.is(ValueKind::Float))
		return !across_call_ && (v.float_kind == TypeKind::F32 || v.float_kind == TypeKind::F64) &&
			body_.literals[v.index].low != 0;
	if (!v.is(ValueKind::Integer) || !target_model::is_aarch64(c_.program.target) || inst.op != Opcode::Binary)
		return false;
	const auto op = static_cast<BinaryOp>(inst.sub);
	const auto width = integer_bits(inst.type.kind());
	const uint64_t raw = body_.literals[v.index].low;
	if ((width == 32 || width == 64) && (op == BinaryOp::Xor || op == BinaryOp::Or || op == BinaryOp::And))
	{
		uint32_t field = 0;
		return raw && !aarch64::logical_immediate(raw, width, field);
	}
	if (across_call_ || op != BinaryOp::Mul || width != 64)
		return false;
	// A multiply-add address needs a register stride, even if a single
	// move constructs the literal. A power of two already folds as a shift.
	const uint64_t stride = body_.literals[v.index].low;
	if (inst.next != kNoId && stride && (stride & (stride - 1)))
	{
		const auto& next = body_.instructions[inst.next];
		if (next.op == Opcode::Index && storage_bytes(next.type) == 1 && next.ops[1] == Value::temp(inst.result))
			return true;
	}
	// A multiply needs its literal in a register. Several MOVKs in the
	// loop cost more than using a register for the invariant multiplicand.
	uint64_t bits = body_.literals[v.index].low;
	unsigned nonzero = 0, nonones = 0;
	for (unsigned i = 0; i < 4; ++i, bits >>= 16)
	{
		nonzero += (bits & 65535) != 0;
		nonones += (bits & 65535) != 65535;
	}
	return nonzero >= 3 && nonones >= 3;
}

bool LoopLiterals::has_call(const Loop& loop) const
{
	for (BlockId b : loop.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			if (body_.instructions[i].op == Opcode::Call && !rare_float_path(body_, cfg_, b))
				return true;
	return false;
}

bool LoopLiterals::same_literal(Value a, Value b) const
{
	const Literal& x = body_.literals[a.index];
	const Literal& y = body_.literals[b.index];
	return a.kind == b.kind && x.low == y.low && x.high == y.high && a.float_kind == b.float_kind;
}

bool LoopLiterals::reads_literal(const Loop& loop) const
{
	bool found = false;
	for (BlockId b : loop.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId && !found; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (inst.op != Opcode::Store)
				for_each_operand(body_, inst, [&](const Value& v) { found = found || held_literal(inst, v); });
		}
	return found;
}

bool LoopLiterals::hold(uint32_t loop, BlockId pre)
{
	const Loop& l = forest_.loops[loop];
	InstId tail = previous_in_block(body_, pre, body_.blocks[pre].last);
	held_.clear();
	bool changed = false;
	for (BlockId b : l.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			if (body_.instructions[i].op == Opcode::Store)
				continue;
			// (Appending below moves the instructions and the operands.)
			const uint32_t extra = body_.instructions[i].extra_count;
			for (uint32_t k = 0; k < 3 + extra; ++k)
			{
				const uint32_t first = body_.instructions[i].extra_first;
				const Value v = k < 3 ? body_.instructions[i].ops[k] : body_.operands[first + k - 3];
				if (!held_literal(body_.instructions[i], v))
					continue;
				// (A phi's input from outside is read once.)
				if (k >= 3 && body_.instructions[i].op == Opcode::Phi &&
					!in_loop(forest_, loop, body_.operands[first + k - 4].index))
					continue;
				const Type type = v.is(ValueKind::Float) ? Type::scalar(v.float_kind) : body_.instructions[i].type;
				Value temp = Value::none();
				for (const Held& h : held_)
					if (h.type == type && same_literal(h.literal, v))
						temp = h.temp;
				if (temp.is(ValueKind::None))
				{
					if (held_.size() == kHeld)
						continue;
					Instruction copy = make_instruction(Opcode::Copy, type);
					copy.ops[0] = v;
					const InstId id = append_instruction(body_, copy);
					const TempId result = append_temp(body_, type, id);
					body_.instructions[id].result = result;
					insert_after(body_, pre, tail, id);
					tail = id;
					temp = Value::temp(result);
					held_.push_back(Held{ v, temp, type });
				}
				if (k < 3)
					body_.instructions[i].ops[k] = temp;
				else
					body_.operands[first + k - 3] = temp;
				changed = true;
			}
		}
	return changed;
}

// A compare in a loop reads a symbol's address, at most kHeldAddresses of
// them, from an `addr` in the block that dominates the outermost loop's
// header: a preheader, or the test that enters the loop. Read in place, the
// address takes a `lea` per pass. A general register survives a call, so a
// loop with calls holds them too.
bool LoopLiterals::hold_addresses(uint32_t loop)
{
	const Loop& l = forest_.loops[loop];
	const BlockId pre = cfg_.idom[l.header];
	InstId tail = previous_in_block(body_, pre, body_.blocks[pre].last);
	held_.clear();
	bool changed = false;
	for (BlockId b : l.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			for (unsigned k = 0; k < 2 && body_.instructions[i].op == Opcode::Compare; ++k)
			{
				const Value v = body_.instructions[i].ops[k];
				if (!v.is(ValueKind::Symbol))
					continue;
				Value temp = Value::none();
				for (const Held& h : held_)
					if (h.literal == v)
						temp = h.temp;
				if (temp.is(ValueKind::None))
				{
					if (held_.size() == kHeldAddresses)
						continue;
					const Type type = body_.pointer_type();
					Instruction addr = make_instruction(Opcode::Addr, type);
					addr.ops[0] = v;
					const InstId id = append_instruction(body_, addr);
					const TempId result = append_temp(body_, type, id);
					body_.instructions[id].result = result;
					insert_after(body_, pre, tail, id);
					tail = id;
					temp = Value::temp(result);
					held_.push_back(Held{ v, temp, type });
				}
				body_.instructions[i].ops[k] = temp;
				changed = true;
			}
	return changed;
}

bool LoopLiterals::run()
{
	if (body_.layout.size() == 1)
		return false;
	c_.ensure_cfg();
	find_loops(body_, cfg_, forest_);
	std::vector<uint8_t> held(forest_.loops.size(), 0);
	bool changed = false;
	for (uint32_t loop = 0; loop < forest_.loops.size(); ++loop)
	{
		const uint32_t parent = forest_.loops[loop].parent;
		if (parent != kNoId && held[parent] != 0)
		{
			held[loop] = 1;
			continue;
		}
		across_call_ = has_call(forest_.loops[loop]);
		if (across_call_ && !target_model::is_aarch64(c_.program.target))
			continue;
		// A retained integer mask can reside in a saved GPR. Floating
		// literals and nested call-free loops retain their own placement.
		held[loop] = !across_call_;
		const auto& l = forest_.loops[loop];
		// On Arm even a guarded loop can materialize an expensive immediate
		// once in its dominating test. A literal copy has no memory effects.
		const BlockId pre = l.preheader == kNoId && target_model::is_aarch64(c_.program.target) ? cfg_.idom[l.header]
																								: l.preheader;
		if (pre != kNoId && reads_literal(l))
			changed = hold(loop, pre) || changed;
	}
	std::vector<uint8_t> addressed(forest_.loops.size(), 0);
	for (uint32_t loop = 0; loop < forest_.loops.size(); ++loop)
	{
		const uint32_t parent = forest_.loops[loop].parent;
		if (parent != kNoId && addressed[parent] != 0)
		{
			addressed[loop] = 1;
			continue;
		}
		addressed[loop] = cfg_.idom[forest_.loops[loop].header] != kNoId;
		if (addressed[loop] != 0)
			changed = hold_addresses(loop) || changed;
	}
	if (changed)
		c_.invalidate_block_of();
	return changed;
}

} // namespace

bool hold_loop_literals(FunctionContext& context)
{
	if (!context.costs.floating_literal_loads && !target_model::is_aarch64(context.program.target))
		return false;
	LoopLiterals pass(context);
	return pass.run();
}

} // namespace opt
