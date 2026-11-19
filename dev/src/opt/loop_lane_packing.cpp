#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"
#include "opt/vector_lanes.h"

#include <algorithm>
#include <array>
#include <vector>

namespace opt {
namespace {
using namespace lowir;
using Pair = std::array<Value, 2>;
const Type kF64 = Type::scalar(TypeKind::F64);
const Type kVec = Type::scalar(TypeKind::V128);

// A bounded extension of block lane packing for a straight-line loop.
// Adjacent exit stores identify values that belong in the same lanes.
// Pack their header phis first, then use the same lane operation table as
// the block and loop vectorizers to pack the corresponding update graphs.
constexpr unsigned kMaxLoopInstructions = 512;
constexpr unsigned kMaxExitInstructions = 256;
constexpr unsigned kMaxPackedNodes = 192;
constexpr unsigned kMaxPlanDepth = 36;
constexpr unsigned kMaxFunctionInstructions = 4096;

struct Packed
{
	Pair lanes;
	Pair left{}, right{};
	VectorOp op = VectorOp::Pzero;
	Value packed = Value::none();
	bool phi = false;
	bool emitting = false;
};

class Recurrence
{
public:
	Recurrence(FunctionContext& c, BlockId loop, BlockId pre, BlockId exit)
		: cfg_(c.ensure_cfg()), body_(c.body), loop_(loop), pre_(pre), exit_(exit), owners_(body_.temps.size(), -1),
		  horizontal_(body_.temps.size(), -1), backedge_(body_.temps.size(), kNoId),
		  loop_defs_(body_.temps.size(), kNoId), emission_(body_.temps.size(), 0)
	{}
	bool rewrite();

private:
	bool collect();
	void find_pairs();
	void seed(Pair updates);
	void plan(Pair values, unsigned depth = 0);
	void reductions();
	Value input(InstId phi, BlockId edge) const;
	int owner(Value a) const;
	int match(Pair v) const;
	const Instruction* binary(Value v) const;
	void scalar(Value v);
	Value vector(Pair v);
	Value gather(Pair v, std::vector<InstId>& into);
	Value emit(std::vector<InstId>& into, VectorOp op, Value a, Value b = Value::none(), int immediate = -1,
		TempId result = kNoId, uint32_t location = 0);
	void extract(Value v, std::vector<InstId>& into);
	void emit_phis();
	void project_exit_values();
	void link();

	const Cfg& cfg_;
	FunctionBody& body_;
	BlockId loop_, pre_, exit_;
	std::vector<int> owners_, horizontal_;
	std::vector<InstId> backedge_, loop_defs_;
	std::vector<uint8_t> emission_;
	std::vector<InstId> scalar_phis_, new_phis_, hot_, cold_, init_;
	std::vector<Pair> updates_;
	std::vector<Packed> nodes_;
	std::vector<std::pair<Pair, Value>> gathers_;
	unsigned originals_ = 0;
	bool valid_ = true;
};

int Recurrence::owner(Value value) const
{
	return value.is(ValueKind::Temp) && value.index < owners_.size() ? owners_[value.index] : -1;
}

int Recurrence::match(Pair v) const
{
	const int n = owner(v[0]);
	return n >= 0 && nodes_[n].lanes == v ? n : -1;
}

Value Recurrence::input(InstId phi, BlockId edge) const
{
	const Instruction& inst = body_.instructions[phi];
	for (uint32_t k = 0; k < inst.extra_count; k += 2)
		if (body_.operands[inst.extra_first + k].index == edge)
			return body_.operands[inst.extra_first + k + 1];
	return Value::none();
}

const Instruction* Recurrence::binary(Value v) const
{
	if (!v.is(ValueKind::Temp) || loop_defs_[v.index] == kNoId)
		return nullptr;
	const Instruction& inst = body_.instructions[loop_defs_[v.index]];
	return inst.op == Opcode::Binary && inst.type == kF64 ? &inst : nullptr;
}

bool Recurrence::collect()
{
	unsigned floating_phis = 0;
	for (InstId i = body_.blocks[loop_].first; i != body_.blocks[loop_].last; i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		if (++originals_ > kMaxLoopInstructions || !is_pure(inst) || inst.result == kNoId ||
			(inst.op != Opcode::Phi && inst.extra_count != 0))
			return false;
		const BinaryOp operation = static_cast<BinaryOp>(inst.sub);
		if (inst.op == Opcode::Binary && inst.type.is_integer() && operation >= BinaryOp::Div &&
			operation <= BinaryOp::UMod)
			return false;
		loop_defs_[inst.result] = i;
		if (inst.op != Opcode::Phi)
			continue;
		scalar_phis_.push_back(i);
		if (inst.type != kF64 || inst.extra_count != 4)
			continue;
		const Value next = input(i, loop_);
		if (!next.is(ValueKind::Temp))
			continue;
		backedge_[next.index] = backedge_[next.index] == kNoId ? i : kNoId - 1;
		++floating_phis;
	}
	return floating_phis >= kMinLoopF64Phis;
}

void Recurrence::seed(Pair updates)
{
	const Instruction* a = binary(updates[0]);
	const Instruction* b = binary(updates[1]);
	VectorOp op;
	if (a == nullptr || b == nullptr || a->sub != b->sub || a->result == b->result ||
		!lane_operation(static_cast<BinaryOp>(a->sub), kF64, op))
		return;
	const InstId p = backedge_[a->result], q = backedge_[b->result];
	if (p >= kNoId - 1 || q >= kNoId - 1)
		return;
	const Pair phis{ { Value::temp(body_.instructions[p].result), Value::temp(body_.instructions[q].result) } };
	if (owner(phis[0]) >= 0 || owner(phis[1]) >= 0)
		return;
	for (Value v : phis)
		owners_[v.index] = nodes_.size();
	Packed node;
	node.lanes = phis;
	node.phi = true;
	nodes_.push_back(node);
	updates_.push_back(updates);
}

void Recurrence::find_pairs()
{
	struct Store
	{
		Value value;
		Located address;
	};
	std::vector<Store> run;
	int direction = 0;
	const auto flush = [&] {
		if (direction < 0)
			std::reverse(run.begin(), run.end());
		for (size_t n = 0; n + 1 < run.size(); n += 2)
			seed(Pair{ { run[n].value, run[n + 1].value } });
		run.clear();
		direction = 0;
	};
	unsigned count = 0;
	for (InstId i = body_.blocks[exit_].first; i != kNoId; i = body_.instructions[i].next)
	{
		if (++count > kMaxExitInstructions)
			break;
		const Instruction& inst = body_.instructions[i];
		if (inst.op != Opcode::Store || inst.type != kF64 || (inst.flags & IF_VOLATILE) != 0)
			continue;
		const Located at = locate_steps(body_, inst.ops[1]);
		if (!at.known)
		{
			flush();
			continue;
		}
		if (!run.empty())
		{
			const Located last = run.back().address;
			const uint64_t difference = static_cast<uint64_t>(at.offset) - static_cast<uint64_t>(last.offset);
			const int next = !(last.root == at.root) ? 0 : difference == 8 ? 1 : difference == uint64_t(-8) ? -1 : 0;
			if (next == 0 || (direction != 0 && direction != next))
				flush();
			else
				direction = next;
		}
		run.push_back(Store{ inst.ops[0], at });
	}
	flush();
}

void Recurrence::plan(Pair values, unsigned depth)
{
	if (depth == kMaxPlanDepth || nodes_.size() >= kMaxPackedNodes || values[0] == values[1] || owner(values[0]) >= 0 ||
		owner(values[1]) >= 0)
		return;
	const Instruction* a = binary(values[0]);
	const Instruction* b = binary(values[1]);
	VectorOp op;
	if (a == nullptr || b == nullptr || a->sub != b->sub || !lane_operation(static_cast<BinaryOp>(a->sub), kF64, op))
		return;
	Packed n;
	n.lanes = values;
	n.left = Pair{ { a->ops[0], b->ops[0] } };
	n.right = Pair{ { a->ops[1], b->ops[1] } };
	n.op = op;
	for (Value v : values)
		owners_[v.index] = nodes_.size();
	nodes_.push_back(n);
	plan(n.left, depth + 1);
	plan(n.right, depth + 1);
}

void Recurrence::reductions()
{
	for (InstId i = body_.blocks[loop_].first; i != body_.blocks[loop_].last; i = body_.instructions[i].next)
	{
		const Instruction& sum = body_.instructions[i];
		if (sum.op != Opcode::Binary || sum.type != kF64 || sum.sub != static_cast<uint8_t>(BinaryOp::Add))
			continue;
		const Instruction* a = binary(sum.ops[0]);
		const Instruction* b = binary(sum.ops[1]);
		if (a == nullptr || b == nullptr || a->sub != static_cast<uint8_t>(BinaryOp::Mul) || b->sub != a->sub ||
			!(a->ops[0] == a->ops[1]) || !(b->ops[0] == b->ops[1]) || match(Pair{ { a->ops[0], b->ops[0] } }) < 0)
			continue;
		const Pair lanes{ { sum.ops[0], sum.ops[1] } };
		plan(lanes);
		horizontal_[sum.result] = match(lanes);
	}
}

Value Recurrence::emit(
	std::vector<InstId>& into, VectorOp op, Value a, Value b, int immediate, TempId result, uint32_t location)
{
	Instruction inst = make_lane_instruction(body_, op, a, b, immediate);
	inst.location = location;
	const InstId id = append_instruction(body_, inst);
	if (result == kNoId)
		result = append_temp(body_, inst.type, id);
	else
		body_.temps[result].def = id;
	body_.instructions[id].result = result;
	into.push_back(id);
	return Value::temp(result);
}

Value Recurrence::gather(Pair v, std::vector<InstId>& into)
{
	const Value a = emit(into, VectorOp::Fromf64, phi_input(body_, kF64, v[0]));
	if (v[0] == v[1])
		return emit(into, VectorOp::Pshufd, a, Value::none(), 0x44);
	const Value b = emit(into, VectorOp::Fromf64, phi_input(body_, kF64, v[1]));
	return emit(into, VectorOp::Unpcklpd, a, b);
}

Value Recurrence::vector(Pair v)
{
	const int index = match(v);
	if (index >= 0)
	{
		Packed& n = nodes_[index];
		if (!n.packed.is(ValueKind::None))
			return n.packed;
		if (n.phi || n.emitting)
		{
			valid_ = false;
			return Value::none();
		}
		n.emitting = true;
		const Value a = vector(n.left), b = vector(n.right);
		n.emitting = false;
		const uint32_t location = body_.instructions[loop_defs_[n.lanes[0].index]].location;
		n.packed = emit(hot_, n.op, a, b, -1, kNoId, location);
		return n.packed;
	}
	for (const auto& known : gathers_)
		if (known.first == v)
			return known.second;
	bool local = false;
	for (Value lane : v)
	{
		local |= lane.is(ValueKind::Temp) && loop_defs_[lane.index] != kNoId;
		scalar(lane);
	}
	const Value packed = gather(v, local ? hot_ : init_);
	gathers_.emplace_back(v, packed);
	return packed;
}

void Recurrence::extract(Value v, std::vector<InstId>& into)
{
	const Packed& n = nodes_[owner(v)];
	Value packed = vector(n.lanes);
	const uint32_t location = body_.instructions[loop_defs_[v.index]].location;
	if (v == n.lanes[1])
		packed = emit(into, VectorOp::Unpckhpd, packed, packed, -1, kNoId, location);
	emit(into, VectorOp::Tof64, packed, Value::none(), -1, v.index, location);
}

void Recurrence::scalar(Value v)
{
	if (!v.is(ValueKind::Temp) || v.index >= loop_defs_.size() || loop_defs_[v.index] == kNoId)
		return;
	uint8_t& state = emission_[v.index];
	if (state == 1)
	{
		valid_ = false;
		return;
	}
	if (state != 0)
		return;
	state = 1;
	const int h = horizontal_[v.index];
	if (h >= 0)
	{
		const uint32_t location = body_.instructions[loop_defs_[v.index]].location;
		const Value pair = vector(nodes_[h].lanes);
		const Value swap = emit(hot_, VectorOp::Pshufd, pair, Value::none(), 0x4e, kNoId, location);
		const Value sum = emit(hot_, VectorOp::Addpd, pair, swap, -1, kNoId, location);
		emit(hot_, VectorOp::Tof64, sum, Value::none(), -1, v.index, location);
	}
	else if (owner(v) >= 0)
		extract(v, hot_);
	else
	{
		const InstId id = loop_defs_[v.index];
		const Instruction inst = body_.instructions[id];
		if (inst.op != Opcode::Phi)
		{
			for (Value operand : inst.ops)
				scalar(operand);
			hot_.push_back(id);
		}
	}
	state = 2;
}

void Recurrence::emit_phis()
{
	for (size_t n = 0; n < updates_.size(); ++n)
	{
		Packed& node = nodes_[n];
		const InstId id = append_instruction(body_, make_instruction(Opcode::Phi, kVec));
		const TempId out = append_temp(body_, kVec, id);
		body_.instructions[id].result = out;
		node.packed = Value::temp(out);
		new_phis_.push_back(id);
	}
	for (InstId p : scalar_phis_)
		if (owner(Value::temp(body_.instructions[p].result)) < 0)
			scalar(input(p, loop_));
	for (size_t n = 0; n < updates_.size(); ++n)
	{
		const Pair lanes = nodes_[n].lanes;
		const Pair initial{ { input(loop_defs_[lanes[0].index], pre_), input(loop_defs_[lanes[1].index], pre_) } };
		const Value start = gather(initial, init_);
		const Value step = vector(updates_[n]);
		Instruction& inst = body_.instructions[new_phis_[n]];
		inst.extra_first = body_.operands.size();
		inst.extra_count = 4;
		body_.operands.insert(body_.operands.end(), { Value::block(loop_), step, Value::block(pre_), start });
	}
}

void Recurrence::project_exit_values()
{
	// Build every live vector before adding cold extractions. A scalar
	// needed to construct any of these vectors must be computed in the loop.
	std::vector<Value> escaping;
	for (BlockId b : body_.layout)
	{
		if (b == loop_)
			continue;
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction inst = body_.instructions[i];
			const auto use = [&](Value v, BlockId at) {
				if (!v.is(ValueKind::Temp) || v.index >= loop_defs_.size() || loop_defs_[v.index] == kNoId)
					return;
				if (!cfg_.reachable(at) || !cfg_.dominates(exit_, at))
					valid_ = false;
				else if (owner(v) < 0)
					scalar(v);
				else if (emission_[v.index] == 0)
				{
					vector(nodes_[owner(v)].lanes);
					escaping.push_back(v);
				}
			};
			if (inst.op == Opcode::Phi)
				for (uint32_t n = 0; n < inst.extra_count; n += 2)
					use(body_.operands[inst.extra_first + n + 1], body_.operands[inst.extra_first + n].index);
			else
				for_each_operand(static_cast<const FunctionBody&>(body_), inst, [&](Value v) { use(v, b); });
		}
	}
	for (Value v : escaping)
		if (emission_[v.index] == 0)
		{
			extract(v, cold_);
			emission_[v.index] = 2;
		}
}

void Recurrence::link()
{
	InstId tail = kNoId;
	for (InstId p : scalar_phis_)
		if (owner(Value::temp(body_.instructions[p].result)) < 0)
		{
			if (tail == kNoId)
				body_.blocks[loop_].first = p;
			else
				body_.instructions[tail].next = p;
			tail = p;
		}
	for (const auto* list : { &new_phis_, &hot_ })
		for (InstId i : *list)
		{
			if (tail == kNoId)
				body_.blocks[loop_].first = i;
			else
				body_.instructions[tail].next = i;
			tail = i;
		}
	body_.instructions[tail].next = body_.blocks[loop_].last;
	tail = kNoId;
	for (InstId i = body_.blocks[pre_].first; i != body_.blocks[pre_].last; i = body_.instructions[i].next)
		tail = i;
	for (InstId i : init_)
	{
		insert_after(body_, pre_, tail, i);
		tail = i;
	}
	tail = kNoId;
	for (InstId i : cold_)
	{
		insert_after(body_, exit_, tail, i);
		tail = i;
	}
}

bool Recurrence::rewrite()
{
	if (!collect())
		return false;
	find_pairs();
	if (updates_.size() < 4)
		return false;
	for (const Pair& update : updates_)
		plan(update);
	if (nodes_.size() < updates_.size() * 2 + 6)
		return false;
	reductions();
	// The caller discards the trial body if scheduling fails or packing costs more.
	emit_phis();
	const Instruction term = body_.instructions[body_.blocks[loop_].last];
	for (Value v : term.ops)
		scalar(v);
	project_exit_values();
	if (!valid_ || hot_.size() + new_phis_.size() >= originals_)
		return false;
	link();
	return true;
}

} // namespace

bool pack_loop_lanes(FunctionContext& context)
{
	if (context.body.instructions.size() > kMaxFunctionInstructions || !context.no_eh())
		return false;
	const Cfg& cfg = context.ensure_cfg();
	for (BlockId b : cfg.rpo)
	{
		if (context.body.blocks[b].last == kNoId ||
			context.body.instructions[context.body.blocks[b].last].op != Opcode::Branch || cfg.pred_count(b) != 2 ||
			cfg.succ_count(b) != 2)
			continue;
		const auto pred = cfg.preds.begin() + cfg.pred_first[b];
		const auto succ = cfg.succs.begin() + cfg.succ_first[b];
		if (pred[0] != b && pred[1] != b)
			continue;
		const BlockId pre = pred[pred[0] == b], exit = succ[succ[0] == b];
		const InstId first = context.body.blocks[exit].first;
		if (cfg.pred_count(exit) != 1 || first == kNoId || context.body.instructions[first].op == Opcode::Phi)
			continue;
		unsigned phis = 0;
		for (InstId i = context.body.blocks[b].first; i != kNoId; i = context.body.instructions[i].next)
		{
			const Instruction& inst = context.body.instructions[i];
			if (inst.op != Opcode::Phi)
				break;
			phis += inst.type == kF64;
		}
		if (phis < kMinLoopF64Phis)
			continue;
		FunctionBody copy = context.body;
		FunctionContext trial(context.program, context.symbol, copy, context.stats, context.level);
		Recurrence change(trial, b, pre, exit);
		if (change.rewrite())
		{
			context.body = std::move(copy);
			context.invalidate_block_of();
			context.invalidate_uses();
			return true;
		}
	}
	return false;
}

} // namespace opt
