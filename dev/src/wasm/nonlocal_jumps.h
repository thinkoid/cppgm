#pragma once

#include "wasm/module.h"
#include "wasm/object.h"

namespace wasm {

void append_nonlocal_objects(const Module& module, Object& object, std::vector<uint32_t>& symbols);
void make_nonlocal_wrapper(const Module& module, Function& function);

} // namespace wasm
