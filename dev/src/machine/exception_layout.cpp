#include "machine/exception_layout.h"
#include "opt/function_ir.h"

namespace machine {
using namespace lowir;
void analyze_exception_layout(const Program& program, SymbolId symbol, ExceptionLayout& plan, bool rematch)
{
	const auto& body = *program.functions[program.symbols[symbol].detail].body;
	opt::Cfg cfg;
	opt::build_cfg_light(program, body, cfg);
	auto& layout_of = plan.layout_of;
	layout_of.assign(body.blocks.size(), kNoId);
	for (uint32_t b = 0; b < body.layout.size(); ++b)
		layout_of[body.layout[b]] = b;
	auto& succ_first = plan.succ_first;
	auto& succs = plan.succs;
	auto& handler_first = plan.handler_first;
	auto& handlers = plan.handlers;
	auto& pred_first = plan.pred_first;
	auto& preds = plan.preds;
	for (BlockId b : body.layout)
	{
		plan.analysis.blocks_.push_back(
			machine::ExceptionBlock{ b, cfg.reachable(b), (cfg.flags[b] & opt::BF_HANDLER) != 0 });
		succ_first.push_back(static_cast<uint32_t>(succs.size()));
		handler_first.push_back(static_cast<uint32_t>(handlers.size()));
		pred_first.push_back(static_cast<uint32_t>(preds.size()));
		for (uint32_t k = cfg.succ_first[b]; k < cfg.succ_first[b + 1]; ++k)
			succs.push_back(layout_of[cfg.succs[k]]);
		for (uint32_t k = cfg.handler_first[b]; k < cfg.handler_first[b + 1]; ++k)
			handlers.push_back(layout_of[cfg.handlers[k]]);
		for (uint32_t k = cfg.pred_first[b]; k < cfg.pred_first[b + 1]; ++k)
			preds.push_back(layout_of[cfg.preds[k]]);
	}
	succ_first.push_back(static_cast<uint32_t>(succs.size()));
	handler_first.push_back(static_cast<uint32_t>(handlers.size()));
	pred_first.push_back(static_cast<uint32_t>(preds.size()));
	const machine::ExceptionGraph graph{ &layout_of, &succ_first, &succs, &pred_first, &preds, &handler_first,
		&handlers };
	plan.analysis.analyze(program, symbol, body, graph, plan.tables, rematch);
	plan.entry_selectors.assign(body.blocks.size(), 0);
	plan.landing_blocks.assign(plan.tables.landings.size(), kNoId);
	for (uint32_t b = 0; b < body.layout.size(); ++b)
	{
		const BlockId block = body.layout[b];
		plan.entry_selectors[block] = machine::exception_entry_selector(body, block, plan.analysis.blocks_[b].handler);
		const uint32_t landing = plan.analysis.eh_landing_index_[b];
		if (landing != kNoId)
			plan.landing_blocks[landing] = block;
	}
}
} // namespace machine
