#pragma once

#include "lowir/program.h"

namespace machine {

// Destination address covers the entire object slot, with no offset.
uint32_t whole_object_slot(const lowir::FunctionBody& body, lowir::Value destination, uint64_t bytes);
// The whole local object most frequently returned by value. Excluded slots
// already belong to an incoming parameter. A target supplies the result ABI.
uint32_t returned_object_slot(
	const lowir::FunctionBody& body, lowir::Type type, const std::vector<uint32_t>& parameter_of);

// Slot initialized by the sole read of an incoming object of the same size.
// Callers establish first access and any target-specific ABI constraints.
uint32_t parameter_copy_slot(
	const lowir::FunctionBody& body, const lowir::Instruction& inst, const std::vector<uint32_t>& reads);

// A call result read only by an immediately following whole-slot copy.
uint32_t call_result_copy_slot(
	const lowir::FunctionBody& body, const lowir::Instruction& call, const std::vector<uint32_t>& reads);

// Complete object copies consumed by one by-value call in one block.
// Address escape, partial writes, EH and dynamic-stack operations pin storage.
// A nonempty result maps each eligible slot to an earlier owner of its type.
std::vector<uint32_t> sequential_copy_slots(const lowir::Program& program, const lowir::FunctionBody& body);

} // namespace machine
