#include "aarch64/mir.h"
#include "aarch64/link.h"
#include "native/object/dwarf_bytes.h"
#include "native/object/host_unwind.h"

namespace aarch64 {

void Function::frame_rule(FrameRule rule, unsigned reg, unsigned offset)
{
	frame_events.push_back(FrameEvent{ static_cast<uint32_t>(4 * code.size()), rule, reg, offset });
}

void emit_unwind(const Function& function, uint32_t symbol, native::object::Section& section)
{
	if (section.bytes.empty())
	{
		native::CieDescription cie;
		cie.return_column = 30;
		cie.initial = false;
		cie.initial_rules = { 0x0c, 31, 0 }; // DW_CFA_def_cfa SP, 0
		native::encode_cie(cie, section.bytes);
	}
	uint32_t pc = 0;
	std::vector<uint8_t> rules;
	native::DwarfBytes bytes(rules);
	for (const auto& event : function.frame_events)
	{
		const uint32_t delta = event.pc - pc;
		if (delta && delta < 64)
			rules.push_back(0x40 | delta);
		else if (delta)
		{
			rules.push_back(0x04); // DW_CFA_advance_loc4
			bytes.fixed(delta, 4);
		}
		pc = event.pc;
		switch (event.rule)
		{
		case FrameRule::Offset:
			rules.push_back(0x0e);
			bytes.uleb(event.offset);
			break;
		case FrameRule::Save:
			rules.push_back(0x80 | event.reg);
			bytes.uleb(event.offset / 8);
			break;
		case FrameRule::Restore:
			rules.push_back(0xc0 | event.reg);
			break;
		case FrameRule::RememberState:
			rules.push_back(0x0a);
			break;
		case FrameRule::RestoreState:
			rules.push_back(0x0b);
			break;
		}
	}
	uint32_t pc_field, unused;
	native::encode_fde(0, function.code.size() * 4, false, rules.data(), rules.size(), section.bytes, pc_field, unused);
	section.relocations.push_back(native::object::Relocation{ pc_field, Prel32, symbol, 0 });
	section.size = section.bytes.size();
}
} // namespace aarch64
