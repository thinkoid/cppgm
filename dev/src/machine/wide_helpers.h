#pragma once

#include "lowir/program.h"

namespace machine {

// Lower wide scalar arithmetic that requires an ABI runtime helper to a typed
// call before register allocation. Returns false on a reserved-name conflict.
bool legalize_wide_helpers(lowir::Program& program);

} // namespace machine
