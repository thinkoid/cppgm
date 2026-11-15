#pragma once

#include "wasm/mir.h"

namespace wasm {

// Reuse typed locals with disjoint live hulls. The sparse CFG walk has a
// linear work budget; exhausted budgets leave the selected function intact.
void reuse_locals(Function& function);

} // namespace wasm
