#pragma once

#include <cstdint>

class PPTokenCursor;

namespace wasm {
struct Object;

// GNU Wasm assembly consumes the preprocessor's tokens directly. Instruction
// selection is already explicit; reuse the typed machine IR and object writer.
// `location` identifies the current statement if a WasmError is thrown.
void assemble(PPTokenCursor& tokens, Object& object, std::uint32_t& location);
} // namespace wasm
