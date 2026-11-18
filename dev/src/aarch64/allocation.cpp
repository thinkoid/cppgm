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

// A straight-line function only needs the end of each register's last use.
// When a register has holes, query the same interference tree used on x86.
class RegisterBank
{
public:
	RegisterBank(const Segments& segments, uint32_t slots) : segments_(segments), slots_(slots) {}
	unsigned assign(const LiveRange& range, uint32_t allowed, unsigned preferred)
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
		const unsigned reg = preferred != kNoId && (allowed & (1u << preferred)) ? preferred : __builtin_ctz(allowed);
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
std::vector<uint8_t> Selector::call_registers() const
{
	std::vector<uint8_t> masks;
	if (calls_.empty())
		return masks;
	masks.assign(body_.temps.size(), 0xff);
	for (InstId i = 0; i < call_indices_.size(); ++i)
	{
		if (call_indices_[i] == kNoId)
			continue;
		const auto& inst = body_.instructions[i];
		const auto& layout = calls_[call_indices_[i]];
		if (inst.ops[0].is(ValueKind::Temp))
			masks[inst.ops[0].index] = 0;
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
			masks[src.index] &= matches ? 1u << arg.first : 0;
		}
	}
	return masks;
}

// Incoming objects can go straight into their named slots when the entry
// starts with whole-object initializations. On a backedge the LowIR copy
// must execute again. Slots that share frame storage may have an earlier owner.
void Selector::parameter_homes(opt::Cfg& cfg)
{
	if (body_.layout.empty() || out_.exceptions || !body_.code_labels.empty() || slots_.empty())
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
		if (body_.slots[slot].type != type || data_alignment(type) > 16 ||
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
		for (TempId id = 0; id < count; ++id)
			homes_[id] = home(id);
		return;
	}
	std::vector<uint32_t> calls;
	Segments segments;
	opt::Cfg cfg;
	auto ranges = live_ranges(program_, body_, out_.exceptions.get(), uses_, calls, segments, cfg);
	parameter_homes(cfg);
	std::stable_sort(
		ranges.begin(), ranges.end(), [](const LiveRange& a, const LiveRange& b) { return a.first < b.first; });
	// x9-x11, x15-x17 and v16-v17 are selector scratch; x18 is platform-reserved.
	std::vector<unsigned> incoming(body_.parameter_count, kNoId);
	Arguments args(named_.darwin);
	for (TempId id = 0; id < body_.parameter_count; ++id)
	{
		const auto& param = program_.parameters_of(signature_)[id];
		if (param.pass == ir_model::PPM_INDIRECT_RESULT)
			continue;
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
		const auto weight = spill_weights(program_, body_, cfg);
		order.resize(ranges.size());
		for (uint32_t i = 0; i < order.size(); ++i)
			order[i] = i;
		std::stable_sort(order.begin(), order.end(),
			[&](uint32_t a, uint32_t b) { return weight[ranges[a].id] > weight[ranges[b].id]; });
	}
	RegisterBank general(segments, slots), simd(segments, slots);
	for (uint32_t i = 0; i < ranges.size(); ++i)
	{
		const auto& range = ranges[order.empty() ? i : order[i]];
		if (range.first == kNoId)
			continue;
		bool at_call = false, across_call = false;
		if (!calls.empty())
			each_interval(range, segments, [&](uint32_t a, uint32_t b) {
				const auto call = std::lower_bound(calls.begin(), calls.end(), a);
				at_call |= call != calls.end() && *call <= b;
				across_call |= call != calls.end() && *call < b;
			});
		const auto type = body_.temps[range.id].type;
		uint32_t arguments = at_call ? (!across_call && outgoing[range.id] != 0xff ? outgoing[range.id] : 0) : 0xff;
		if (range.first == 0)
			arguments &= range.id < incoming.size() && incoming[range.id] != kNoId ? 1u << incoming[range.id] : 0;
		if (type.is_float() && !memory_value(type))
		{
			if (!across_call)
				vectors_[range.id] = simd.assign(
					range, arguments | 0xfffc0000, range.affinity == kNoId ? kNoId : vectors_[range.affinity]);
			if (vectors_[range.id] != kNoId)
				continue;
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
		const uint32_t caller = across_call ? 0 : arguments | (7u << 12);
		const uint32_t preserved = (dynamic_stack_ ? 0x1ffu : 0x3ffu) << 19;
		const unsigned preferred = range.affinity == kNoId ? kNoId : registers_[range.affinity];
		registers_[range.id] = general.assign(range, caller | preserved, preferred);
	}
	uint32_t saved = 0;
	machine::IntervalSlots scalar_spills, vector_spills;
	for (const auto& range : ranges)
	{
		const auto id = range.id;
		const auto reg = registers_[id];
		if (reg != kNoId && reg >= 19 && !(saved & (1u << reg)))
		{
			saved |= 1u << reg;
			preserved_.push_back({ reg, reserve(8, 8) });
		}
		if (range.first == kNoId || reg != kNoId || vectors_[id] != kNoId || homes_[id] != kNoId)
			continue;
		const auto type = body_.temps[id].type;
		if (!memory_value(type))
			homes_[id] = scalar_spills.assign(range.first, range.last, [&]() { return reserve(8, 8); });
		else if (type.kind() == TypeKind::V128 && !range.vector_address)
			homes_[id] = vector_spills.assign(range.first, range.last, [&]() { return home(id); });
		else
			homes_[id] = home(id);
	}
}
} // namespace aarch64
