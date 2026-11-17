#include "aarch64/backend.h"

#include "aarch64/selector.h"
#include "machine/global_data.h"
#include "machine/wide_helpers.h"
#include "lowir/startup_sections.h"
#include "aarch64/link.h"
#include "aarch64/error.h"

namespace aarch64 {

namespace obj = native::object;
using namespace lowir;

namespace {
void define_global(const Program& program, SymbolId id, const std::vector<uint32_t>& symbols, obj::ObjectFile& out)
{
	const auto& source = program.symbols[id];
	const Global& global = program.globals[source.detail];
	if (source.metadata.storage == ir_model::GSM_THREAD_LOCAL)
		throw AArch64Error("AArch64 TLS object is unsupported");
	uint32_t align;
	const uint64_t size = machine::global_size(program, global, align);
	const bool readonly = source.metadata.storage == ir_model::GSM_READONLY;
	const bool bss = !readonly && machine::global_is_zero(program, global);
	const char* name = source.metadata.section ? program.spelling(source.metadata.section)
		: readonly                             ? ".rodata"
		: bss                                  ? ".bss"
											   : ".data";
	auto& symbol = out.symbols[symbols[id]];
	uint32_t priority = 0;
	const auto kind = initializer_section(name, priority) ? obj::SectionKind::InitArray
		: readonly                                        ? obj::SectionKind::Rodata
		: bss                                             ? obj::SectionKind::Bss
														  : obj::SectionKind::Data;
	symbol.section = out.add_section(name, kind, align);
	auto& section = out.sections[symbol.section];
	section.size = symbol.size = size;
	if (!bss)
	{
		section.bytes.resize(size);
		std::vector<machine::GlobalAddress> addresses;
		machine::write_global(program, global, section.bytes, 0, addresses);
		for (const auto& fix : addresses)
			section.relocations.push_back(obj::Relocation{ fix.offset, Abs64, symbols.at(fix.target), fix.addend });
	}
}

void create_symbols(const Program& program, const std::vector<SymbolId>& canonical, std::vector<uint32_t>& symbols,
	obj::ObjectFile& object)
{
	for (SymbolId id : program.order)
	{
		if (canonical[id] != id)
			continue;
		const auto& src = program.symbols[id];
		const NameId name = src.metadata.object ? src.metadata.object : src.name;
		obj::Symbol sym;
		sym.name = object.add_string(program.spelling(name), program.names.length(name));
		sym.binding = src.metadata.binding == ir_model::SBM_INTERNAL ? obj::Binding::Local
			: src.metadata.binding == ir_model::SBM_WEAK             ? obj::Binding::Weak
																	 : obj::Binding::Global;
		sym.type = is_function_kind(src.kind) ? obj::SymbolType::Function : obj::SymbolType::Object;
		symbols[id] = object.add_symbol(sym);
	}
	for (SymbolId id : program.order)
		if (canonical[id] != kNoId)
			symbols[id] = symbols[canonical[id]];
}
}

void compile_object(
	Program& program, obj::ObjectFile& object, int level, bool pic, std::string* dump, bool function_sections)
{
	if (program.explicit_target && program.target != target_model::Target::AArch64Linux)
		throw AArch64Error("input and output target profiles differ");
	if (program.assembly || !program.aliases.empty())
		throw AArch64Error("unsupported AArch64 assembly or object alias");
	object.architecture = target_model::Architecture::AArch64;
	if (!machine::legalize_wide_helpers(program))
		throw AArch64Error("conflicting AArch64 arithmetic helper identity");
	order_as_written(program);
	std::vector<SymbolId> canonical;
	if (machine::object_identities(program, canonical) != kNoId)
		throw AArch64Error("conflicting AArch64 object definitions");
	std::vector<uint32_t> symbols(program.symbols.size(), kNoId);
	create_symbols(program, canonical, symbols, object);
	const uint32_t code = object.add_section(".text", obj::SectionKind::Text, 4);
	const uint32_t eh = object.add_section(".eh_frame", obj::SectionKind::Rodata, 8);
	for (SymbolId id : program.order)
	{
		const auto& src = program.symbols[id];
		if (canonical[id] != id)
			continue;
		if (src.kind == SymbolKind::GlobalDefinition)
			define_global(program, id, symbols, object);
		if (src.kind != SymbolKind::FunctionDefinition)
			continue;
		Function function;
		Selector(program, program.functions[src.detail], function, level, pic).run();
		auto& sym = object.symbols[symbols[id]];
		const char* name = object.symbol_name(symbols[id]);
		if (dump)
			dump_function(function, program, name, *dump);
		sym.section = function_sections
			? object.add_section((std::string(".text.") + name).c_str(), obj::SectionKind::Text, 4)
			: code;
		auto& section = object.sections[sym.section];
		sym.value = section.bytes.size();
		encode(function, symbols, section);
		sym.size = section.bytes.size() - sym.value;
		emit_unwind(function, symbols[id], object.sections[eh]);
		if (src.metadata.role == ir_model::SR_INIT || src.metadata.role == ir_model::SR_FINI)
		{
			const bool init = src.metadata.role == ir_model::SR_INIT;
			const auto index = object.add_section(init ? ".init_array" : ".fini_array",
				init ? obj::SectionKind::InitArray : obj::SectionKind::FiniArray, 8);
			auto& startup = object.sections[index];
			startup.size = 8;
			startup.bytes.resize(8);
			startup.relocations.push_back(obj::Relocation{ 0, Abs64, symbols[id], 0 });
		}
		if (src.metadata.role == ir_model::SR_ENTRY && std::strcmp(object.symbol_name(symbols[id]), "main") != 0)
		{
			obj::Symbol entry = sym;
			entry.name = object.add_string("main", 4);
			object.add_symbol(entry);
		}
	}
}

} // namespace aarch64
