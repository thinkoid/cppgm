#pragma once

#include "machine/exception_analysis.h"

namespace machine {
struct ExceptionLayout
{
	ExceptionAnalysis analysis;
	ExceptionTables tables;
	std::vector<uint32_t> layout_of, succ_first, succs, pred_first, preds, handler_first, handlers;
	std::vector<int64_t> entry_selectors;
	std::vector<lowir::BlockId> landing_blocks;
};
void analyze_exception_layout(
	const lowir::Program& program, lowir::SymbolId symbol, ExceptionLayout& plan, bool rematch);
} // namespace machine
