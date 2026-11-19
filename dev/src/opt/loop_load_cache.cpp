#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"
#include "target/target.h"

#include <vector>

namespace opt {

using namespace lowir;

namespace {

// Carry a loaded boundary beside a conditionally updated pointer. Unlike
// invariant-load motion, this follows a small graph of pointer phis: unchanged
// edges keep the boundary, and changed edges reuse a load already on that path.
// Bound both the graph and the number of rewrites; no speculative search.
constexpr size_t kPhis = 4;
constexpr size_t kEdges = 16;
constexpr unsigned kRewrites = 16;

struct CacheEdge
{
	BlockId pred;
	Value pointer;
	InstId load;
	uint32_t node;
};

struct CacheNode
{
	InstId phi;
	BlockId block;
	Value cached;
	std::vector<CacheEdge> edges;
};

struct AdjacentLoads
{
	InstId first = kNoId, second = kNoId;
	BlockId update = kNoId;
	Value initial_index;
	Value updated;
};

class LoopLoadCache
{
public:
	explicit LoopLoadCache(FunctionContext& context) : c_(context), body_(context.body) {}
	bool run();
	bool carry_adjacent_loads();

private:
	bool forward_adjacent(const Loop& loop);
	bool adjacent_loads(const Loop& loop, BlockId latch, AdjacentLoads& pair) const;
	bool adjacent_update(const Loop& loop, AdjacentLoads& pair) const;
	void carry_adjacent(const Loop& loop, const AdjacentLoads& pair);
	void use_pointer_end(const Loop& loop, const AdjacentLoads& pair, Value seed);
	bool small_latch(const Loop& loop);
	void copy_latch(BlockId latch, BlockId update, BlockId header);
	bool eligible(const Loop& loop) const;
	bool plan(uint32_t loop, InstId index);
	uint32_t node(uint32_t loop, InstId phi);
	InstId edge_load(BlockId pred, Value pointer) const;
	Value emit(BlockId block, Instruction inst);
	Value boundary(BlockId block, Value loaded);
	bool apply(uint32_t loop);

	FunctionContext& c_;
	FunctionBody& body_;
	LoopForest forest_;
	std::vector<CacheNode> nodes_;
	InstId load_ = kNoId, index_ = kNoId;
	BlockId entry_ = kNoId;
	size_t edges_ = 0;
};

const Instruction* definition(const FunctionBody& body, Value value)
{
	if (!value.is(ValueKind::Temp))
		return nullptr;
	const InstId id = body.temps[value.index].def;
	return id == kNoId ? nullptr : &body.instructions[id];
}

bool increment_one(const FunctionBody& body, Value amount)
{
	return amount.is(ValueKind::Integer) && body.literals[amount.index].low == 1 &&
		body.literals[amount.index].high == 0;
}

// Address sinking may duplicate the same dynamic index in the update block.
bool same_index(const FunctionBody& body, Value a, Value b)
{
	if (a == b)
		return true;
	const auto* left = definition(body, a);
	const auto* right = definition(body, b);
	return left && right && left->op == Opcode::Index && right->op == Opcode::Index && left->type == right->type &&
		left->ops[0] == right->ops[0] && left->ops[1] == right->ops[1];
}

bool next_element(const FunctionBody& body, Value address, Value first, Type type)
{
	const Instruction* ix = definition(body, address);
	return ix && ix->op == Opcode::Index && ix->type == type && same_index(body, ix->ops[0], first) &&
		increment_one(body, ix->ops[1]);
}

bool LoopLoadCache::adjacent_loads(const Loop& loop, BlockId latch, AdjacentLoads& pair) const
{
	for (InstId i = body_.blocks[loop.header].first; i != body_.blocks[loop.header].last;
		i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		if (inst.op == Opcode::Load && inst.type.is_integer() && (inst.flags & (IF_TYPED | IF_VOLATILE)) == IF_TYPED)
		{
			if (pair.first == kNoId)
				pair.first = i;
			else if (pair.second == kNoId)
				pair.second = i;
			else
				return false;
		}
		else if (!is_pure(inst))
			return false;
	}
	if (pair.second == kNoId)
		return false;
	const Instruction& first = body_.instructions[pair.first];
	const Instruction& second = body_.instructions[pair.second];
	const Instruction* address = definition(body_, first.ops[0]);
	if (!address || address->op != Opcode::Index || address->type != first.type || second.type != first.type ||
		!next_element(body_, second.ops[0], first.ops[0], first.type))
		return false;
	const Value base = address->ops[0], index = address->ops[1];
	const Instruction* phi = definition(body_, index);
	if (!phi || phi->op != Opcode::Phi || phi->extra_count != 4 ||
		c_.block_of[body_.temps[index.index].def] != loop.header)
		return false;
	if (definition(body_, base) && !c_.cfg.dominates(c_.block_of[body_.temps[base.index].def], loop.preheader))
		return false;
	pair.initial_index = phi_incoming(body_, *phi, loop.preheader);
	const Instruction* step = definition(body_, phi_incoming(body_, *phi, latch));
	return step && step->op == Opcode::Binary && step->sub == static_cast<uint8_t>(BinaryOp::Add) &&
		(step->flags & IF_NO_WRAP) && step->ops[0] == index && increment_one(body_, step->ops[1]);
}

bool LoopLoadCache::adjacent_update(const Loop& loop, AdjacentLoads& pair) const
{
	const Instruction& first = body_.instructions[pair.first];
	pair.updated = Value::temp(body_.instructions[pair.second].result);
	for (InstId i = body_.blocks[pair.update].first; i != body_.blocks[pair.update].last;
		i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		if (inst.op == Opcode::Store && inst.type == first.type && (inst.flags & (IF_TYPED | IF_VOLATILE)) == IF_TYPED)
		{
			if (next_element(body_, inst.ops[1], first.ops[0], first.type))
				pair.updated = inst.ops[0];
			else if (!same_index(body_, inst.ops[1], first.ops[0]))
				return false;
		}
		else if (!is_pure(inst))
			return false;
	}
	const auto latch = loop.latches[0];
	for (InstId i = body_.blocks[latch].first; i != body_.blocks[latch].last; i = body_.instructions[i].next)
		if (body_.instructions[i].op == Opcode::Phi || !is_pure(body_.instructions[i]))
			return false;
	return true;
}

bool LoopLoadCache::small_latch(const Loop& loop)
{
	// Keep a separate native backedge for each carried value. Joining them
	// can put the x86 register transfer and an extra jump on the hot path.
	if (target_model::is_wasm(c_.program.target))
		return false;
	const BlockId latch = loop.latches[0];
	const auto& block = body_.blocks[latch];
	const auto& branch = body_.instructions[block.last];
	const BlockId exit = branch.ops[branch.ops[1].index == loop.header ? 2 : 1].index;
	if (body_.blocks[exit].first != kNoId && body_.instructions[body_.blocks[exit].first].op == Opcode::Phi)
		return false;
	unsigned count = 0;
	for (InstId i = block.first; i != block.last; i = body_.instructions[i].next)
	{
		const auto& inst = body_.instructions[i];
		if (++count > 3 || inst.result == kNoId || inst.extra_count ||
			(inst.op != Opcode::Binary && inst.op != Opcode::Convert && inst.op != Opcode::Compare))
			return false;
	}
	c_.entry_uses(forward_adjacent_loop_loads);
	for (InstId i = block.first; i != block.last; i = body_.instructions[i].next)
	{
		const Value result = Value::temp(body_.instructions[i].result);
		unsigned local = 0;
		for (InstId j = body_.instructions[i].next; j != kNoId; j = body_.instructions[j].next)
			for_each_operand(body_, body_.instructions[j], [&](Value v) { local += v == result; });
		for (InstId p = body_.blocks[loop.header].first; p != kNoId && body_.instructions[p].op == Opcode::Phi;
			p = body_.instructions[p].next)
			local += phi_incoming(body_, body_.instructions[p], latch) == result;
		if (local != c_.uses[result.index])
			return false;
	}
	return true;
}

void LoopLoadCache::copy_latch(BlockId latch, BlockId update, BlockId header)
{
	std::vector<std::pair<TempId, Value>> values;
	const auto remap = [&](Value value) {
		for (const auto& pair : values)
			if (value.is(ValueKind::Temp) && value.index == pair.first)
				return pair.second;
		return value;
	};
	const auto jump = body_.blocks[update].last;
	auto after = previous_in_block(body_, update, jump);
	unlink_after(body_, update, after, jump);
	for (InstId i = body_.blocks[latch].first; i != kNoId; i = body_.instructions[i].next)
	{
		Instruction inst = body_.instructions[i];
		for (Value& operand : inst.ops)
			operand = remap(operand);
		const InstId id = append_copy(body_, body_, i, inst);
		if (inst.result != kNoId)
		{
			const auto result = append_temp(body_, body_.temps[inst.result].type, id);
			body_.instructions[id].result = result;
			values.emplace_back(inst.result, Value::temp(result));
		}
		insert_after(body_, update, after, id);
		after = id;
	}
	for (InstId i = body_.blocks[header].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
	{
		auto& phi = body_.instructions[i];
		std::vector<Value> inputs(
			body_.operands.begin() + phi.extra_first, body_.operands.begin() + phi.extra_first + phi.extra_count);
		inputs.push_back(Value::block(update));
		inputs.push_back(remap(phi_incoming(body_, phi, latch)));
		phi.extra_first = append_operands(body_, inputs.data(), inputs.size());
		phi.extra_count = inputs.size();
	}
	c_.invalidate_cfg();
}

// A guarded scan from element one can compare its next pointer with the
// last element. Moving the pointer phi avoids recomputing base + index.
void LoopLoadCache::use_pointer_end(const Loop& loop, const AdjacentLoads& pair, Value seed)
{
	const BlockId latch = loop.latches[0], preheader = loop.preheader;
	if (!target_model::is_aarch64(c_.program.target) || c_.cfg.pred_count(preheader) != 1 ||
		!increment_one(body_, pair.initial_index))
		return;
	const auto& repeat = body_.instructions[body_.blocks[latch].last];
	const auto* test = definition(body_, repeat.ops[0]);
	const Type i32 = Type::scalar(TypeKind::I32), i64 = Type::scalar(TypeKind::I64);
	if (repeat.ops[1].index != loop.header || !test || test->op != Opcode::Compare || test->type != i32 ||
		static_cast<ComparePredicate>(test->sub) != ComparePredicate::Lt)
		return;
	const Value current = body_.instructions[pair.first].ops[0];
	const Instruction increment = *definition(body_, body_.instructions[pair.second].ops[0]);
	const InstId address_id = body_.temps[current.index].def;
	const Instruction address = body_.instructions[address_id];
	const auto* iv = definition(body_, address.ops[1]);
	const auto* narrow = definition(body_, test->ops[0]);
	if (address.index_bounds() != IndexBounds::InBounds || c_.block_of[address_id] != loop.header || !narrow ||
		narrow->op != Opcode::Convert || narrow->type != i32 ||
		static_cast<ConvertOp>(narrow->sub) != ConvertOp::Trunc || convert_source_type(*narrow) != i64 ||
		!(narrow->flags & IF_EXACT) || !(narrow->ops[0] == phi_incoming(body_, *iv, latch)))
		return;
	const Value upper = test->ops[1];
	const InstId guard_end = body_.blocks[c_.cfg.preds[c_.cfg.pred_first[preheader]]].last;
	if (guard_end == kNoId)
		return;
	const auto& guard = body_.instructions[guard_end];
	const auto* limit_test = definition(body_, guard.ops[0]);
	if (guard.op != Opcode::Branch || guard.ops[1].index != preheader || guard.ops[2].index == preheader ||
		!limit_test || limit_test->op != Opcode::Compare || limit_test->type != i32)
		return;
	const auto pred = static_cast<ComparePredicate>(limit_test->sub);
	if (!(pred == ComparePredicate::Gt && limit_test->ops[0] == upper && increment_one(body_, limit_test->ops[1])) &&
		!(pred == ComparePredicate::Lt && limit_test->ops[1] == upper && increment_one(body_, limit_test->ops[0])))
		return;
	const auto test_id = body_.temps[repeat.ops[0].index].def;
	if (c_.block_of[test_id] != latch)
		return;
	c_.entry_uses(forward_adjacent_loop_loads);
	if (c_.uses[iv->result] != 2 || c_.uses[narrow->ops[0].index] != 2 || c_.uses[narrow->result] != 1 ||
		c_.uses[test->result] != 1)
		return;

	Instruction widen = make_instruction(Opcode::Convert, i64);
	widen.sub = static_cast<uint8_t>(ConvertOp::ZExt);
	set_convert_source_type(widen, i32);
	widen.ops[0] = upper;
	widen.location = address.location;
	const InstId converted = append_instruction(body_, widen);
	const auto extended = append_temp(body_, i64, converted);
	body_.instructions[converted].result = extended;
	insert_after(body_, preheader, previous_in_block(body_, preheader, body_.blocks[preheader].last), converted);
	Instruction end = address;
	end.ops[1] = Value::temp(extended);
	const Value last = emit(preheader, end);

	// Select the load with an immediate offset. Advance the pointer after
	// the last use of the current address so both can share a register.
	const InstId advanced = append_instruction(body_, increment);
	const auto pointer_next = append_temp(body_, body_.pointer_type(), advanced);
	body_.instructions[advanced].result = pointer_next;
	insert_after(body_, latch, previous_in_block(body_, latch, test_id), advanced);
	const Value next = Value::temp(pointer_next);
	auto& comparison = body_.instructions[test_id];
	comparison.type = body_.pointer_type();
	comparison.sub = static_cast<uint8_t>(ComparePredicate::Ne);
	comparison.ops[0] = next;
	comparison.ops[1] = last;
	Instruction pointer = make_instruction(Opcode::Phi, body_.pointer_type());
	pointer.result = address.result;
	pointer.location = address.location;
	const Value inputs[] = { Value::block(preheader), seed, Value::block(latch), next };
	pointer.extra_count = 4;
	pointer.extra_first = append_operands(body_, inputs, 4);
	unlink_after(body_, loop.header, previous_in_block(body_, loop.header, address_id), address_id);
	body_.instructions[address_id] = pointer;
	insert_after(body_, loop.header, kNoId, address_id);
}

void LoopLoadCache::carry_adjacent(const Loop& loop, const AdjacentLoads& pair)
{
	const bool separate = small_latch(loop);
	const Instruction first = body_.instructions[pair.first];
	Instruction address = *definition(body_, first.ops[0]);
	address.ops[1] = pair.initial_index;
	Instruction load = first;
	load.ops[0] = emit(loop.preheader, address);
	if (separate)
		use_pointer_end(loop, pair, load.ops[0]);
	const InstId initial = append_instruction(body_, load);
	const Value seed = Value::temp(append_temp(body_, load.type, initial));
	body_.instructions[initial].result = seed.index;
	const auto jump = body_.blocks[loop.preheader].last;
	insert_after(body_, loop.preheader, previous_in_block(body_, loop.preheader, jump), initial);

	Instruction phi = make_instruction(Opcode::Phi, first.type);
	phi.location = first.location;
	const auto latch = loop.latches[0];
	Value next = Value::temp(body_.instructions[pair.second].result);
	if (separate)
		copy_latch(latch, pair.update, loop.header);
	else
	{
		const Value paths[] = { Value::block(loop.header), next, Value::block(pair.update), pair.updated };
		phi.extra_count = 4;
		phi.extra_first = append_operands(body_, paths, 4);
		const InstId merge = append_instruction(body_, phi);
		next = Value::temp(append_temp(body_, first.type, merge));
		body_.instructions[merge].result = next.index;
		insert_after(body_, latch, kNoId, merge);
	}
	const Value incoming[] = { Value::block(loop.preheader), seed, Value::block(latch), next, Value::block(pair.update),
		pair.updated };
	phi.extra_count = separate ? 6 : 4;
	phi.extra_first = append_operands(body_, incoming, phi.extra_count);
	phi.result = first.result;
	unlink_after(body_, loop.header, previous_in_block(body_, loop.header, pair.first), pair.first);
	body_.instructions[pair.first] = phi;
	insert_after(body_, loop.header, kNoId, pair.first);
	c_.invalidate_block_of();
	c_.invalidate_uses();
	++c_.stats.loads_reused;
}

// In a loop over neighboring elements, the untouched right-hand load or
// the write to that element supplies the next iteration's left value.
bool LoopLoadCache::forward_adjacent(const Loop& loop)
{
	if (loop.blocks.size() != 3 || loop.preheader == kNoId || loop.latches.size() != 1)
		return false;
	const auto latch = loop.latches[0];
	const Instruction& branch = body_.instructions[body_.blocks[loop.header].last];
	const Instruction& repeat = body_.instructions[body_.blocks[latch].last];
	if (branch.op != Opcode::Branch || repeat.op != Opcode::Branch ||
		(repeat.ops[1].index != loop.header && repeat.ops[2].index != loop.header))
		return false;
	AdjacentLoads pair;
	if (branch.ops[1].index == latch)
		pair.update = branch.ops[2].index;
	else if (branch.ops[2].index == latch)
		pair.update = branch.ops[1].index;
	if (pair.update == kNoId || pair.update == latch || pair.update == loop.header ||
		c_.cfg.pred_first[pair.update + 1] - c_.cfg.pred_first[pair.update] != 1 ||
		c_.cfg.pred_first[latch + 1] - c_.cfg.pred_first[latch] != 2)
		return false;
	const BlockId exit = repeat.ops[repeat.ops[1].index == loop.header ? 2 : 1].index;
	if (exit == latch || exit == pair.update || exit == loop.header)
		return false;
	const Instruction& jump = body_.instructions[body_.blocks[pair.update].last];
	if (jump.op != Opcode::Jump || jump.ops[0].index != latch || !adjacent_loads(loop, latch, pair) ||
		!adjacent_update(loop, pair))
		return false;
	carry_adjacent(loop, pair);
	return true;
}

bool LoopLoadCache::eligible(const Loop& loop) const
{
	bool store = false;
	const Type ptr = body_.pointer_type();
	for (BlockId b : loop.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if ((inst.flags & IF_VOLATILE) != 0)
				return false;
			if (inst.op == Opcode::Store)
			{
				if ((inst.flags & IF_TYPED) == 0 || !typed_types_apart(inst.type, ptr))
					return false;
				store = true;
			}
			else if (inst.op != Opcode::Load && !is_pure(inst) && inst.op != Opcode::Jump && inst.op != Opcode::Branch)
				return false;
		}
	return store;
}

InstId LoopLoadCache::edge_load(BlockId pred, Value pointer) const
{
	for (InstId i = body_.blocks[pred].first; i != kNoId; i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		if (inst.op == Opcode::Load && inst.type.is_pointer() && inst.ops[0] == pointer &&
			(inst.flags & (IF_TYPED | IF_VOLATILE)) == IF_TYPED)
			return i;
	}
	return kNoId;
}

uint32_t LoopLoadCache::node(uint32_t loop, InstId phi)
{
	for (uint32_t n = 0; n < nodes_.size(); ++n)
		if (nodes_[n].phi == phi)
			return n;
	if (nodes_.size() == kPhis)
		return kNoId;
	const uint32_t n = static_cast<uint32_t>(nodes_.size());
	const BlockId block = c_.block_of[phi];
	const Instruction& inst = body_.instructions[phi];
	if (!inst.type.is_pointer() || block == kNoId || !in_loop(forest_, loop, block))
		return kNoId;
	nodes_.push_back(CacheNode{ phi, block, Value::none(), {} });
	for (uint32_t k = 0; k < inst.extra_count; k += 2)
	{
		if (++edges_ > kEdges)
			return kNoId;
		const BlockId pred = body_.operands[inst.extra_first + k].index;
		const Value pointer = body_.operands[inst.extra_first + k + 1];
		CacheEdge edge{ pred, pointer, kNoId, kNoId };
		if (!in_loop(forest_, loop, pred))
		{
			if (n != 0 || pred != entry_)
				return kNoId;
		}
		else
		{
			const InstId def = pointer.is(ValueKind::Temp) ? body_.temps[pointer.index].def : kNoId;
			if (def != kNoId && body_.instructions[def].op == Opcode::Phi)
			{
				edge.node = node(loop, def);
				if (edge.node == kNoId)
					return kNoId;
			}
			else
			{
				edge.load = edge_load(pred, pointer);
				if (edge.load == kNoId)
					return kNoId;
			}
		}
		nodes_[n].edges.push_back(edge);
	}
	return n;
}

bool LoopLoadCache::plan(uint32_t loop, InstId index)
{
	const Loop& l = forest_.loops[loop];
	const Instruction& ix = body_.instructions[index];
	if (ix.op != Opcode::Index || !ix.ops[1].is(ValueKind::Integer) || !ix.ops[0].is(ValueKind::Temp) ||
		ix.result == kNoId || c_.uses[ix.result] == 0)
		return false;
	const InstId load = body_.temps[ix.ops[0].index].def;
	if (load == kNoId || c_.block_of[load] != l.header || c_.uses[ix.ops[0].index] != 1)
		return false;
	const Instruction& ld = body_.instructions[load];
	if (ld.op != Opcode::Load || !ld.type.is_pointer() || (ld.flags & (IF_TYPED | IF_VOLATILE)) != IF_TYPED ||
		!ld.ops[0].is(ValueKind::Temp))
		return false;
	const InstId phi = body_.temps[ld.ops[0].index].def;
	if (phi == kNoId || c_.block_of[phi] != l.header || body_.instructions[phi].op != Opcode::Phi)
		return false;
	entry_ = kNoId;
	for (uint32_t k = c_.cfg.pred_first[l.header]; k < c_.cfg.pred_first[l.header + 1]; ++k)
	{
		const BlockId pred = c_.cfg.preds[k];
		if (!in_loop(forest_, loop, pred))
		{
			if (entry_ != kNoId || (c_.cfg.flags[pred] & BF_EH) != 0)
				return false;
			entry_ = pred;
		}
	}
	if (entry_ == kNoId || !eligible(l))
		return false;
	nodes_.clear();
	edges_ = 0;
	load_ = load;
	index_ = index;
	return node(loop, phi) == 0;
}

Value LoopLoadCache::emit(BlockId block, Instruction inst)
{
	const InstId id = append_instruction(body_, inst);
	body_.instructions[id].result = append_temp(body_, body_.pointer_type(), id);
	const InstId before = previous_in_block(body_, block, body_.blocks[block].last);
	insert_after(body_, block, before, id);
	return Value::temp(body_.instructions[id].result);
}

Value LoopLoadCache::boundary(BlockId block, Value loaded)
{
	const Instruction original = body_.instructions[index_];
	Instruction ix = make_instruction(Opcode::Index, original.type);
	ix.location = original.location;
	ix.ops[0] = loaded;
	ix.ops[1] = original.ops[1];
	return emit(block, ix);
}

bool LoopLoadCache::apply(uint32_t loop)
{
	BlockId pre = forest_.loops[loop].preheader;
	if (pre == kNoId)
	{
		// Split the taken entry edge: a zero-trip guard must not acquire a read.
		if (!make_loop_preheader(body_, c_.cfg, forest_, loop))
			return false;
		pre = static_cast<BlockId>(body_.blocks.size() - 1);
	}
	for (CacheNode& n : nodes_)
	{
		Instruction phi = make_instruction(Opcode::Phi, body_.pointer_type());
		phi.location = body_.instructions[n.phi].location;
		const InstId id = append_instruction(body_, phi);
		body_.instructions[id].result = append_temp(body_, phi.type, id);
		n.cached = Value::temp(body_.instructions[id].result);
		insert_after(body_, n.block, kNoId, id);
	}
	for (const CacheNode& n : nodes_)
	{
		std::vector<Value> incoming;
		for (const CacheEdge& edge : n.edges)
		{
			BlockId pred = edge.pred;
			Value value;
			if (pred == entry_)
			{
				pred = pre;
				Instruction ld = body_.instructions[load_];
				ld.ops[0] = edge.pointer;
				ld.flags = 0;
				value = boundary(pred, emit(pred, ld));
			}
			else if (edge.node != kNoId)
				value = nodes_[edge.node].cached;
			else
				value = boundary(pred, Value::temp(body_.instructions[edge.load].result));
			incoming.push_back(Value::block(pred));
			incoming.push_back(value);
		}
		const uint32_t first = append_operands(body_, incoming.data(), static_cast<uint32_t>(incoming.size()));
		Instruction& phi = body_.instructions[body_.temps[n.cached.index].def];
		phi.extra_first = first;
		phi.extra_count = static_cast<uint32_t>(incoming.size());
	}
	const TempId result = body_.instructions[index_].result;
	replace_all_uses(body_, result, nodes_[0].cached);
	c_.invalidate_cfg();
	c_.invalidate_block_of();
	c_.invalidate_uses();
	++c_.stats.invariants_hoisted;
	return true;
}

bool LoopLoadCache::run()
{
	bool changed = false;
	for (unsigned round = 0; round < kRewrites; ++round)
	{
		c_.ensure_cfg();
		find_loops(body_, c_.cfg, forest_);
		c_.entry_block_of(cache_loop_loads, round == 0);
		c_.entry_uses(cache_loop_loads, round == 0);
		bool rewritten = false;
		for (uint32_t l = static_cast<uint32_t>(forest_.loops.size()); l-- > 0 && !rewritten;)
		{
			const Loop& loop = forest_.loops[l];
			for (InstId i = body_.blocks[loop.header].first; i != kNoId && !rewritten; i = body_.instructions[i].next)
				if (plan(l, i))
					rewritten = apply(l);
		}
		if (!rewritten)
			break;
		changed = true;
	}
	return changed;
}

bool LoopLoadCache::carry_adjacent_loads()
{
	c_.ensure_cfg();
	find_loops(body_, c_.cfg, forest_);
	c_.entry_block_of(forward_adjacent_loop_loads);
	for (auto l = forest_.loops.rbegin(); l != forest_.loops.rend(); ++l)
		if (forward_adjacent(*l))
			return true;
	return false;
}

} // namespace

bool cache_loop_loads(FunctionContext& context)
{
	return LoopLoadCache(context).run();
}

bool forward_adjacent_loop_loads(FunctionContext& context)
{
	return LoopLoadCache(context).carry_adjacent_loads();
}

} // namespace opt
