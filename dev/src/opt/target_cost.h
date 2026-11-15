#pragma once

#include "lowir/program.h"

namespace opt {

// Approximate expansion work, excluding operand reads and local assignment.
// Unknown or data-dependent expansions remain unpriced (UINT32_MAX), never
// silently charged as one native instruction. Required inlining is separate.
uint32_t wasm_inline_instruction_cost(const lowir::FunctionBody& body, const lowir::Instruction& inst);

// A switch's runs of consecutive case values with one target: the selectors
// test a run with one range compare (machine::cluster_switch_cases). The
// number of cases when a value is no integer literal.
uint32_t switch_runs(const lowir::FunctionBody& body, const lowir::Instruction& inst);

} // namespace opt
