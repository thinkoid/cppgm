#include "aarch64/selector.h"
#include "aarch64/lifetimes.h"
#include "opt/function_ir.h"
#include "machine/frame_lifetimes.h"
#include "machine/interval_slots.h"
#include "machine/register_pressure.h"

#include <algorithm>

namespace aarch64 {
using namespace lowir;

namespace {
using Segments = std::vector<std::pair<uint32_t, uint32_t>>;
template<typename F>
void each_interval(const LiveRange& range, const Segments& segments, F f)
{
	if (!range.count)
		f(range.first, range.last);
	else
		for (uint32_t i = range.segments; i < range.segments + range.count; ++i)
			f(segments[i].first, segments[i].second);
}

// Count integer values that are definitely live simultaneously. Half-open
// segments omit values dying at a call and its newly defined result. If
// this lower bound fits, retain the cheap start-order assignment.
bool exceeds_capacity(const lowir::FunctionBody& body, const std::vector<LiveRange>& ranges, const Segments& segments,
	const std::vector<uint32_t>& calls, uint32_t slots, int preserved)
{
	if (segments.empty() || ranges.size() <= static_cast<unsigned>(preserved))
		return false;
	std::vector<int32_t> change(slots + 1);
	for (const auto& range : ranges)
	{
		const auto type = body.temps[range.id].type;
		if (range.first == kNoId || !(type.is_pointer() || (type.is_integer() && integer_bits(type.kind()) <= 64)))
			continue;
		each_interval(range, segments, [&](uint32_t first, uint32_t last) {
			++change[first];
			--change[last];
		});
	}
	uint32_t next = 0;
	int live = 0;
	for (uint32_t slot = 0; slot < slots; ++slot)
	{
		live += change[slot];
		const bool at_call = next < calls.size() && calls[next] == slot;
		if (live > preserved + (at_call ? 0 : 11))
			return true;
		if (at_call)
			++next;
	}
	return false;
}

// A guarded call that cannot repeat has a path to a return on which
// preserving its live registers would be unnecessary.
bool guarded_call(const FunctionBody& body, const opt::Cfg& cfg, BlockId site)
{
	if (cfg.succ_first.empty() || body.layout.size() < 3 || body.layout.size() > 96 || site == body.layout.front())
		return false;
	std::vector<uint8_t> seen(body.blocks.size());
	std::vector<BlockId> pending;
	auto successors = [&](BlockId b) {
		pending.insert(pending.end(), cfg.succs.begin() + cfg.succ_first[b], cfg.succs.begin() + cfg.succ_first[b + 1]);
	};
	successors(site);
	while (!pending.empty())
	{
		const auto b = pending.back();
		pending.pop_back();
		if (b == site)
			return false;
		if (!seen[b])
		{
			seen[b] = 1;
			successors(b);
		}
	}
	std::fill(seen.begin(), seen.end(), 0);
	seen[site] = 1;
	pending.push_back(body.layout.front());
	while (!pending.empty())
	{
		const auto b = pending.back();
		pending.pop_back();
		if (seen[b])
			continue;
		seen[b] = 1;
		const auto last = body.blocks[b].last;
		if (last != kNoId && body.instructions[last].op == Opcode::Return)
			return true;
		successors(b);
	}
	return false;
}

// A straight-line function only needs the end of each register's last use.
// When a register has holes, query the same interference tree used on x86.
class RegisterBank
{
public:
	RegisterBank(const Segments& segments, uint32_t slots) : segments_(segments), slots_(slots) {}
	uint32_t live_at(uint32_t slot) const { return initialized_ ? tree_.regs(slot, slot) : 0; }
	unsigned assign(const LiveRange& range, uint32_t allowed, unsigned preferred, unsigned alternate = kNoId)
	{
		if (!allowed)
			return kNoId;
		if (segments_.empty())
		{
			for (uint32_t regs = allowed; regs; regs &= regs - 1)
			{
				unsigned reg = __builtin_ctz(regs);
				if (until_[reg] > range.first)
					allowed &= ~(1u << reg);
			}
		}
		else
		{
			if (!initialized_)
			{
				tree_.build(std::vector<int32_t>(slots_, 0));
				initialized_ = true;
			}
			each_interval(range, segments_, [&](uint32_t a, uint32_t b) { allowed &= ~tree_.regs(a, b); });
		}
		if (!allowed)
			return kNoId;
		const unsigned reg = preferred != kNoId && (allowed & (1u << preferred)) ? preferred
			: alternate != kNoId && (allowed & (1u << alternate))                ? alternate
																				 : __builtin_ctz(allowed);
		if (segments_.empty())
			until_[reg] = range.last + 1;
		else
			each_interval(range, segments_, [&](uint32_t a, uint32_t b) { tree_.add(a, b, 1, 1u << reg); });
		return reg;
	}

private:
	const Segments& segments_;
	uint32_t slots_, until_[32] = {};
	machine::PressureTree tree_;
	bool initialized_ = false;
};
} // namespace

// A scalar dying at a call may already occupy its outgoing register. The
// argument layout never reuses a register between parameters; intersect the
// permitted registers over every occurrence, including indirect call targets.
std::vector<Selector::CallRegisters> Selector::call_registers() const
{
	std::vector<CallRegisters> masks;
	if (calls_.empty())
		return masks;
	masks.resize(body_.temps.size());
	for (InstId i = 0; i < call_indices_.size(); ++i)
	{
		if (call_indices_[i] == kNoId)
			continue;
		const auto& inst = body_.instructions[i];
		const auto& layout = calls_[call_indices_[i]];
		if (inst.ops[0].is(ValueKind::Temp))
			masks[representative(aliases_, inst.ops[0].index)].allowed = 0;
		for (uint32_t n = 0; n < layout.args.size(); ++n)
		{
			const auto src = body_.operands[inst.extra_first + n];
			if (!src.is(ValueKind::Temp))
				continue;
			const auto& arg = layout.args[n];
			const auto type = layout.types[n];
			const bool simd = type.is_float() || type.kind() == TypeKind::V128;
			const bool matches = !arg.indirect && arg.pieces == 1 && arg.first < 8 &&
				arg.bank == (simd ? Bank::Simd : Bank::General) &&
				(!memory_value(type) || type.kind() == TypeKind::V128);
			auto& choice = masks[representative(aliases_, src.index)];
			if (!layout.parallel)
				choice.allowed &= matches ? 1u << arg.first : 0;
			if (matches && choice.preferred == 8)
				choice.preferred = arg.first;
		}
	}
	return masks;
}

// Incoming objects can go straight into their named slots when the entry
// starts with whole-object initializations. On a backedge the LowIR copy
// must execute again. Slots that share frame storage may have an earlier owner.
void Selector::parameter_homes(opt::Cfg& cfg)
{
	if (body_.layout.empty() || !body_.code_labels.empty() || slots_.empty())
		return;
	const BlockId entry = body_.layout.front();
	InstId previous = kNoId;
	for (InstId i = body_.blocks[entry].first; i != kNoId; previous = i, i = body_.instructions[i].next)
	{
		const auto& inst = body_.instructions[i];
		if (inst.op == Opcode::Addr)
			continue;
		const uint32_t slot = machine::parameter_copy_slot(body_, inst, uses_);
		if (slot == kNoId)
			break;
		const auto id = inst.ops[0].index;
		const Type type = body_.temps[id].type;
		if (slot == result_slot_ || body_.slots[slot].type != type || data_alignment(type) > 16 ||
			std::count(slots_.begin(), slots_.end(), slots_[slot]) != 1 ||
			std::find(homes_.begin(), homes_.begin() + body_.parameter_count, slots_[slot]) !=
				homes_.begin() + body_.parameter_count)
			break;
		if (entry_elided_.empty() &&
			(body_.layout.size() != 1 || body_.instructions[body_.blocks[entry].last].op != Opcode::Return))
		{
			if (cfg.pred_first.empty())
				opt::build_cfg_light(program_, body_, cfg, true);
			if (cfg.pred_count(entry))
				break;
		}
		homes_[id] = slots_[slot];
		const Value dst = inst.ops[1];
		if (previous != kNoId && body_.instructions[previous].op == Opcode::Addr && dst.is(ValueKind::Temp) &&
			body_.temps[dst.index].def == previous && uses_[dst.index] == 1)
			entry_elided_.push_back(previous);
		entry_elided_.push_back(i);
	}
}

// A callee can write to its final destination when only a whole-object
// copy consumes the result and nothing exposes that slot to the callee.
void Selector::call_result_homes()
{
	if (calls_.empty() || body_.slots.empty())
		return;
	std::vector<uint8_t> escaped;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& call = body_.instructions[i];
			const auto slot = machine::call_result_copy_slot(body_, call, uses_);
			if (slot != kNoId && out_.exceptions && site(call) && opt::may_unwind(program_, call))
				continue;
			if (slot == kNoId || body_.slots[slot].type != call.type ||
				!classify(call.type, program_.call_boundary(call)->boundary.result_shape).indirect)
				continue;
			if (escaped.empty())
				escaped = opt::escaped_slots(body_, true);
			if (escaped[slot])
				continue;
			if (call_result_slots_.empty())
				call_result_slots_.resize(body_.temps.size(), kNoId);
			call_result_slots_[call.result] = slot;
		}
}

void Selector::allocate()
{
	const size_t count = body_.temps.size();
	registers_.assign(count, kNoId);
	vectors_.assign(count, kNoId);
	homes_.assign(count, kNoId);
	auto home = [&](TempId id) {
		const auto type = body_.temps[id].type;
		return reserve((storage_bytes(type) + 7) & ~uint64_t(7), std::max(8u, data_alignment(type)));
	};
	if (!level_)
	{
		plan_slots();
		if (dynamic_stack_)
			preserved_.push_back({ 28, reserve(8, 8) });
		for (TempId id = 0; id < count; ++id)
			homes_[id] = home(id);
		return;
	}
	std::vector<uint32_t> calls;
	Segments segments;
	opt::Cfg cfg;
	machine::PhiWebs webs;
	aliases_ = scalar_aliases(body_);
	auto ranges = live_ranges(
		program_, body_, out_.exceptions.get(), uses_, calls, segments, cfg, webs, entry_regs_, aliases_);
	std::vector<uint32_t> web_regs(webs.empty() ? 0 : count, kNoId);
	std::stable_sort(
		ranges.begin(), ranges.end(), [](const LiveRange& a, const LiveRange& b) { return a.first < b.first; });
	// x9-x11, x15-x17 and v16-v17 are selector scratch; x18 is platform-reserved.
	std::vector<unsigned> incoming(body_.parameter_count, kNoId);
	Arguments args(named_.darwin);
	bool free_x8 = !named_.darwin && !result_.indirect && !out_.exceptions;
	for (TempId id = 0; id < body_.parameter_count; ++id)
	{
		const auto& param = program_.parameters_of(signature_)[id];
		if (param.pass == ir_model::PPM_INDIRECT_RESULT)
		{
			free_x8 = false;
			continue;
		}
		const auto arg = args.next(param.type, param.shape);
		if ((arg.bank == Bank::General && !memory_value(param.type)) ||
			(arg.bank == Bank::Simd && (param.type.kind() == TypeKind::V128 || !memory_value(param.type))))
			incoming[id] = arg.first;
	}
	const uint32_t slots = 2 * (body_.instructions.size() + body_.layout.size()) + 3;
	const auto outgoing = call_registers();
	std::vector<uint32_t> order;
	if (exceeds_capacity(body_, ranges, segments, calls, slots, dynamic_stack_ ? 9 : 10))
	{
		const auto weight = spill_weights(program_, body_, cfg, aliases_, block_weights_);
		order.resize(ranges.size());
		for (uint32_t i = 0; i < order.size(); ++i)
			order[i] = i;
		std::stable_sort(order.begin(), order.end(),
			[&](uint32_t a, uint32_t b) { return weight[ranges[a].id] > weight[ranges[b].id]; });
	}
	const bool split_calls = level_ >= 2 && !out_.exceptions && !named_.darwin && !dynamic_stack_ &&
		body_.code_labels.empty() && calls.size() <= 64;
	if (split_calls && calls.size() > 1 && block_weights_.empty() && !cfg.succ_first.empty())
		block_frequencies(program_, body_, cfg, block_weights_);
	const bool single = split_calls && calls.size() == 1 && guarded_call(body_, cfg, calls_.front().block);
	RegisterBank general(segments, slots), simd(segments, slots);
	uint32_t saved_fp = 0;
	uint32_t saved = dynamic_stack_ ? 1u << 28 : 0;
	for (uint32_t i = 0; i < ranges.size(); ++i)
	{
		const auto& range = ranges[order.empty() ? i : order[i]];
		if (range.first == kNoId)
			continue;
		bool at_call = false, across_call = false;
		uint32_t kept = !out_.exceptions && !leaf_registers_.empty() ? (0xfcu | (7u << 12)) : 0;
		if (!calls.empty())
			each_interval(range, segments, [&](uint32_t a, uint32_t b) {
				const auto call = std::lower_bound(calls.begin(), calls.end(), a);
				at_call |= call != calls.end() && *call <= b;
				across_call |= call != calls.end() && *call < b;
				for (auto it = call; kept && it != calls.end() && *it <= b; ++it)
					kept &= calls_[it - calls.begin()].preserved_callers;
			});
		const auto type = body_.temps[range.id].type;
		// A fixed frame address is one add at the use. Computing it twice
		// can cost less than saving a register across the call.
		if (across_call && type.is_pointer() && uses_[range.id] <= 2 && body_.temps[range.id].def != kNoId)
		{
			const auto& def = body_.instructions[body_.temps[range.id].def];
			if (def.op == Opcode::Addr && def.ops[0].is(ValueKind::Slot) && def.ops[0].index != result_slot_ &&
				data_alignment(body_.slots[def.ops[0].index].type) <= 16)
			{
				if (remat_slots_.empty())
					remat_slots_.resize(count, kNoId);
				remat_slots_[range.id] = def.ops[0].index;
				continue;
			}
		}
		uint32_t arguments = at_call
			? (!across_call && outgoing[range.id].preferred < 8 ? outgoing[range.id].allowed : 0)
			: 0xff;
		if (range.first == 0)
			arguments &= range.id < incoming.size() && incoming[range.id] != kNoId ? 1u << incoming[range.id] : 0;
		if (type.is_float() && !memory_value(type))
		{
			// Both Arm ABIs preserve the low 64 bits of v8 through v15.
			const auto preferred = range.affinity == kNoId ? kNoId : vectors_[range.affinity];
			const uint32_t allowed = across_call ? 0xffu << 8 : arguments | 0xfffc0000;
			const auto reg = simd.assign(range, allowed, preferred);
			if (reg != kNoId)
			{
				vectors_[range.id] = reg;
				if (across_call)
					saved_fp |= 1u << reg;
				continue;
			}
			// The incoming SIMD argument does not own the corresponding GPR.
			if (range.first == 0 || at_call)
				arguments = 0;
		}
		if (memory_value(type))
		{
			// Argument registers are free between calls. A quadword
			// that crosses a call must be spilled, including its high half.
			if (type.kind() == TypeKind::V128 && !range.vector_address && !across_call)
				vectors_[range.id] = simd.assign(range, arguments | 0xfffc0000, kNoId);
			continue;
		}
		if (range.first == 0)
			kept &= ~0xffu | (range.id < incoming.size() && incoming[range.id] < 8 ? 1u << incoming[range.id] : 0);
		uint32_t caller = across_call ? kept : arguments | (7u << 12) | (!at_call && free_x8 ? 1u << 8 : 0);
		// Keep an incoming scalar in its ABI register when its live range
		// crosses only cold calls. The saved slot belongs to this register.
		uint64_t crossed = 0;
		if (across_call && split_calls && (single || !block_weights_.empty()))
		{
			uint64_t cost = 0;
			each_interval(range, segments, [&](uint32_t a, uint32_t b) {
				for (auto it = std::lower_bound(calls.begin(), calls.end(), a); it != calls.end() && *it < b; ++it)
				{
					const auto k = static_cast<unsigned>(it - calls.begin());
					crossed |= uint64_t(1) << k;
					if (!block_weights_.empty())
						cost += block_weights_[calls_[k].block];
				}
			});
			if (single || cost <= block_weights_[body_.layout.front()] / 2)
			{
				caller |= 7u << 12;
				if (range.id < incoming.size() && incoming[range.id] < 8)
					caller |= outgoing[range.id].allowed & (1u << incoming[range.id]);
				else if (range.first != 0)
					caller |= outgoing[range.id].allowed & 0xffu;
			}
		}
		const uint32_t preserved = (dynamic_stack_ ? 0x1ffu : 0x3ffu) << 19;
		unsigned preferred = range.affinity == kNoId ? kNoId : registers_[range.affinity];
		if (preferred == kNoId && at_call && !across_call && outgoing[range.id].preferred < 8)
			preferred = outgoing[range.id].preferred;
		const auto root = range.affinity == kNoId ? kNoId : webs.root(range.id);
		const auto reg = general.assign(range, caller | preserved, preferred, root == kNoId ? kNoId : web_regs[root]);
		registers_[range.id] = reg;
		if (across_call && reg < 15 && !(kept & (1u << reg)))
		{
			if (argument_spills_.empty())
				argument_spills_.resize(15, kNoId);
			if (argument_spills_[reg] == kNoId)
				argument_spills_[reg] = reserve(8, 8);
			for (; crossed; crossed &= crossed - 1)
				calls_[__builtin_ctzll(crossed)].saved_args |= 1u << reg;
		}
		if (reg != kNoId && reg >= 19)
			saved |= 1u << reg;
		if (root != kNoId && reg != kNoId && (web_regs[root] == kNoId || (reg >= 19 && web_regs[root] < 19)))
			web_regs[root] = reg;
	}
	for (auto& entry : entry_regs_)
		entry = general.live_at(entry);
	// Keeping callee saves together lets STP and LDP share both the transfer
	// and the stack adjustment, independently of the number of local slots.
	for (; saved; saved &= saved - 1)
		preserved_.push_back({ static_cast<unsigned>(__builtin_ctz(saved)), reserve(8, 8) });
	for (; saved_fp; saved_fp &= saved_fp - 1)
		preserved_fp_.push_back({ static_cast<unsigned>(__builtin_ctz(saved_fp)), reserve(8, 8) });
	const uint32_t slot_base = frame_;
	plan_slots();
	parameter_homes(cfg);
	register_objects();
	if (!object_words_.empty())
	{
		// Reuse the tail of the slot area when all its remaining owners
		// live in registers. The original slot offsets below it stay valid.
		frame_ = slot_base;
		for (SlotId i = 0; i < slots_.size(); ++i)
			if (!object_words_[i] && slots_[i] != kNoId)
			{
				const Type type = body_.slots[i].type;
				const uint64_t bytes = (storage_bytes(type) + 7) & ~uint64_t(7);
				const unsigned align = data_alignment(type);
				frame_ = std::max(frame_, static_cast<uint32_t>(slots_[i] + bytes + (align > 16 ? align - 16 : 0)));
			}
	}
	call_result_homes();
	machine::IntervalSlots scalar_spills, vector_spills;
	for (const auto& range : ranges)
	{
		const auto id = range.id;
		const auto reg = registers_[id];
		if (range.first == kNoId || rematerialized(id) || reg != kNoId || vectors_[id] != kNoId ||
			homes_[id] != kNoId || (!call_result_slots_.empty() && call_result_slots_[id] != kNoId))
			continue;
		const auto type = body_.temps[id].type;
		if (!memory_value(type))
			homes_[id] = scalar_spills.assign(range.first, range.last, [&]() { return reserve(8, 8); });
		else if (type.kind() == TypeKind::V128 && !range.vector_address)
			homes_[id] = vector_spills.assign(range.first, range.last, [&]() { return home(id); });
		else
			homes_[id] = home(id);
	}
	for (TempId id = 0; id < aliases_.size(); ++id)
		if (aliases_[id] != id)
		{
			if (!remat_slots_.empty())
				remat_slots_[id] = remat_slots_[aliases_[id]];
			registers_[id] = registers_[aliases_[id]];
			homes_[id] = homes_[aliases_[id]];
		}
}
} // namespace aarch64
