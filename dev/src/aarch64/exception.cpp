#include "aarch64/selector.h"
#include "aarch64/error.h"

namespace aarch64 {
using namespace lowir;

void Selector::prepare_exceptions()
{
	out_.exceptions.reset(new machine::ExceptionLayout());
	auto& plan = *out_.exceptions;
	try
	{
		machine::analyze_exception_layout(program_, symbol_, plan, false);
	}
	catch (const machine::ExceptionError& error)
	{
		throw AArch64Error(error.what());
	}
	exception_slot_ = reserve(24, 8);
	out_.pads.assign(plan.tables.landings.size(), kNoId);
	selectors_.assign(plan.tables.landings.size(), kNoId);
	for (size_t i = 0; i < plan.tables.landings.size(); ++i)
	{
		const auto b = plan.layout_of[plan.landing_blocks[i]];
		if (plan.analysis.eh_selects(b, i))
		{
			selectors_[i] = out_.labels.size();
			out_.labels.push_back(kNoId);
		}
	}
}

uint32_t Selector::site(const lowir::Instruction& inst) const
{
	return out_.exceptions ? out_.exceptions->analysis.eh_sites_[&inst - body_.instructions.data()] : 0;
}

void Selector::record_call(const lowir::Instruction& inst)
{
	if (out_.exceptions)
	{
		const uint32_t end = 4 * out_.code.size();
		out_.sites.push_back(machine::ExceptionCallSite{ end - 4, end, site(inst), 0 });
	}
}

void Selector::landing(BlockId block)
{
	const auto& plan = *out_.exceptions;
	const auto b = plan.layout_of[block];
	const auto index = plan.analysis.eh_landing_index_[b];
	if (index == kNoId)
		return;
	out_.pads[index] = 4 * out_.code.size();
	access(true, 0, 31, exception_slot_, 8);
	extend(1, 32, true);
	access(true, 1, 31, exception_slot_ + 16, 8);
	if (selectors_[index] == kNoId || !plan.analysis.eh_translate_[index])
		access(true, 1, 31, exception_slot_ + 8, 8);
	if (selectors_[index] == kNoId)
		return;
	if (!plan.analysis.eh_translate_[index])
		out_.reference(Op::B, Fixup::Block, block);
	out_.bind(selectors_[index]);
	access(false, 10, 31, exception_slot_ + 16, 8);
	const auto& table = plan.tables.landings[index];
	constant(9, 0);
	for (uint32_t k = table.map_count; k-- > 0;)
	{
		const auto pos = table.map_first + 2 * k;
		constant(11, plan.tables.map[pos]);
		out_.emit(Op::Subs, 31, 10, 11);
		constant(11, plan.tables.map[pos + 1]);
		out_.emit(Op::Csel, 9, 11, 9);
	}
	access(true, 9, 31, exception_slot_ + 8, 8);
}

void Selector::exception_value(const lowir::Instruction& inst)
{
	access(false, 9, 31, exception_slot_ + (inst.op == Opcode::Exception ? 0 : 8), 8);
	save(9, inst.result);
}

void Selector::resume(uint32_t site)
{
	if (site == 0 || site == machine::ExceptionAnalysis::kResumeTerminal)
	{
		access(false, 0, 31, exception_slot_, 8);
		out_.needs_resume = true;
		out_.reference(Op::Bl, Fixup::Resume, 0);
		const uint32_t end = 4 * out_.code.size();
		out_.sites.push_back(machine::ExceptionCallSite{ end - 4, end, 0, 0 });
		out_.emit(Op::Brk);
		return;
	}
	const auto& plan = *out_.exceptions;
	const auto index = plan.analysis.eh_landing_index_[site - 1];
	const auto selector = index == kNoId ? kNoId : selectors_[index];
	out_.reference(Op::B, Fixup::Block, selector == kNoId ? body_.layout[site - 1] : selector);
}

} // namespace aarch64
