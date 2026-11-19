#pragma once

#include "lowir/instruction.h"

namespace lowir {
struct FunctionBody;
}

namespace opt {

struct FunctionContext;

// Common lane semantics for loop widening and straight-line packing. A false
// result needs an expansion or a target capability, rather than a single op.
unsigned lane_bytes(lowir::Type type);
bool lane_operation(lowir::BinaryOp op, lowir::Type type, lowir::VectorOp& out);
lowir::Instruction make_lane_instruction(
	lowir::FunctionBody& body, lowir::VectorOp op, lowir::Value a, lowir::Value b, int immediate);

constexpr unsigned kMinLoopF64Phis = 16;
bool pack_loop_lanes(FunctionContext& context);

} // namespace opt
