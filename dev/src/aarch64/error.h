#pragma once

#include "native/backend_error.h"

namespace aarch64 {

class AArch64Error : public native::BackendError
{
public:
	explicit AArch64Error(const std::string& message) : native::BackendError(message) {}
};

} // namespace aarch64
