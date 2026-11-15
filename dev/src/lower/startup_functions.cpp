#include "lower/program_lowering.h"

#include <algorithm>

namespace lower {

void ProgramLowering::startup_functions()
{
	if (graph_->startup_functions.empty())
		return;
	std::vector<sema::SemanticGraph::StartupFunction> functions(graph_->startup_functions);
	std::stable_sort(functions.begin(), functions.end(),
		[](const sema::SemanticGraph::StartupFunction& a, const sema::SemanticGraph::StartupFunction& b) {
			return a.priority < b.priority;
		});
	for (const auto& startup : functions)
	{
		if (startup.function->body == nullptr)
			continue;
		demand(startup.function);
		const lowir::SymbolId function = function_symbol(startup.function);
		const lowir::SymbolId table = new_symbol("__cppgm_startup");
		lowir::Global global = lowir::Global();
		global.typed = true;
		global.type = program_.pointer_type();
		global.init = lowir::GlobalInit::Address;
		global.address = function;
		program_.declare_global(table, lowir::SymbolKind::GlobalDefinition, global);
		const std::string section = ".init_array." + std::to_string(startup.priority);
		program_.symbols[table].metadata.section = intern(section.data(), static_cast<uint32_t>(section.size()));
		program_.symbols[table].metadata.binding = ir_model::SBM_INTERNAL;
		program_.symbols[table].metadata.flags = lowir::SF_OBJECT_ROOT;
		++counters_.globals;
	}
}

} // namespace lower
