#include "aarch64/selector.h"
#include "aarch64/lifetimes.h"
#include "machine/interval_slots.h"

#include <algorithm>

namespace aarch64 {
using namespace lowir;

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
	auto ranges = live_ranges(program_, body_, out_.exceptions != nullptr, uses_, calls);
	std::stable_sort(
		ranges.begin(), ranges.end(), [](const LiveRange& a, const LiveRange& b) { return a.first < b.first; });
	// x9-x11, x15-x17 and v16-v17 are selector scratch; x18 is platform-reserved.
	std::vector<unsigned> incoming(body_.parameter_count, kNoId);
	if (calls.empty())
	{
		Arguments args(named_.darwin);
		for (TempId id = 0; id < body_.parameter_count; ++id)
		{
			const auto& param = program_.parameters_of(signature_)[id];
			if (param.pass == ir_model::PPM_INDIRECT_RESULT)
				continue;
			const auto arg = args.next(param.type, param.shape);
			if ((arg.bank == Bank::General && !memory_value(param.type)) ||
				(arg.bank == Bank::Simd && param.type.kind() == TypeKind::V128))
				incoming[id] = arg.first;
		}
	}
	const unsigned bank[] = { 0, 1, 2, 3, 4, 5, 6, 7, 12, 13, 14, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28 };
	const unsigned vector_bank[] = { 0, 1, 2, 3, 4, 5, 6, 7, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
	uint32_t available[32] = {}, vector_available[32] = {};
	machine::IntervalSlots scalar_spills, vector_spills;
	for (const auto& range : ranges)
	{
		if (range.first == kNoId)
			continue;
		const auto call = std::lower_bound(calls.begin(), calls.end(), range.first);
		const bool across_call = call != calls.end() && *call < range.last;
		const auto type = body_.temps[range.id].type;
		const auto usable_argument = [&](unsigned reg) {
			return reg >= 8 ||
				(calls.empty() && (range.first != 0 || (range.id < incoming.size() && incoming[range.id] == reg)));
		};
		if (memory_value(type))
		{
			// A leaf can keep its incoming NEON arguments in v0-v7. A quadword
			// that crosses a call must be spilled, including its high half.
			if (type.kind() == TypeKind::V128 && !range.vector_address && !across_call)
				for (unsigned reg : vector_bank)
					if (usable_argument(reg) && vector_available[reg] <= range.first)
					{
						vector_available[reg] = range.last + 1;
						vectors_[range.id] = reg;
						break;
					}
			if (vectors_[range.id] == kNoId)
				homes_[range.id] = type.kind() == TypeKind::V128 && !range.vector_address
					? vector_spills.assign(range.first, range.last, [&]() { return home(range.id); })
					: home(range.id);
			continue;
		}
		for (unsigned reg : bank)
		{
			if (!usable_argument(reg))
				continue;
			if ((dynamic_stack_ && reg == 28) || available[reg] > range.first || (reg < 19 && across_call))
				continue;
			if (reg >= 19 && available[reg] == 0)
				preserved_.push_back({ reg, reserve(8, 8) });
			available[reg] = range.last + 1;
			registers_[range.id] = reg;
			break;
		}
		if (registers_[range.id] != kNoId)
			continue;
		homes_[range.id] = scalar_spills.assign(range.first, range.last, [&]() { return reserve(8, 8); });
	}
}
} // namespace aarch64
