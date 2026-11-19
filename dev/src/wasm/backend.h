#pragma once

#include "backend/options.h"
#include "lowir/program.h"
#include "wasm/object.h"

namespace opt {
struct OptimizerStats;
}

namespace wasm {

// The LowIR optimizer as compile_object runs it before the back end: the
// program -S -emit-lowir writes.
void optimize_object_program(lowir::Program& program, const backend::Options& options, opt::OptimizerStats* stats);
// Builds an object in memory. The CLI wrapper can also write a MIR dump.
bool build_object(
	lowir::Program& program, const backend::Options& options, Object& object, std::string& dump, std::string& error);
bool compile_object(
	lowir::Program& program, const backend::Options& options, Object& object, std::string& dump, std::string& error);
bool output_objects(LinkInputs& inputs, const backend::Options& options, bool relocatable, std::string& error);
bool compile_program(lowir::Program& program, const backend::Options& options, std::string& error);

} // namespace wasm
