#pragma once

#include "opt/function_ir.h"

namespace opt {

// Only these root operations can narrow a floating bit projection or
// reassemble two adjacent integer halves into a single load.
inline bool packed_load_candidate(const lowir::Instruction& inst)
{
	return (inst.op == lowir::Opcode::Copy && inst.type.is_float()) ||
		(inst.op == lowir::Opcode::Binary && inst.sub == static_cast<unsigned>(lowir::BinaryOp::Or));
}

bool simplify_packed_load(lowir::FunctionBody& body, const std::vector<uint32_t>& uses,
	const std::vector<lowir::BlockId>& block_of, lowir::BlockId block, lowir::InstId& previous,
	lowir::InstId instruction);

} // namespace opt
