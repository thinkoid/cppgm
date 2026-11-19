#pragma once

#if __LDBL_MANT_DIG__ == 113
#include <cstdint>
#include <cmath>
#include <limits>
#endif

#if __LDBL_MANT_DIG__ != 64
// Convert between the x87 representation and the host floating type.
// The encoded buffer is the target's 16-byte storage, independent of the host.
long double LoadExtended80(const unsigned char* bytes);
void StoreExtended80(long double value, unsigned char* bytes);
#endif

#if __LDBL_MANT_DIG__ == 113
// The binary128 host can hold every x87 value exactly.
long double RoundExtended80(long double value);
long double IntegerExtended80(uint64_t low, uint64_t high, bool negative);
long double CalculateExtended80(char operation, long double left, long double right);
// SSE chooses the first NaN operand and the negative indefinite value for
// invalid arithmetic. Wasm permits either operand's payload, so select it
// explicitly when evaluating an x86 target constant on a binary128 host.
template<typename T>
long double CalculateIeeeFloat(char operation, T left, T right)
{
	if (std::isnan(left))
		return left + T(0);
	if (std::isnan(right))
		return right + T(0);
	T result = operation == '+' ? left + right
		: operation == '-'      ? left - right
		: operation == '*'      ? left * right
								: left / right;
	return std::isnan(result) ? -std::numeric_limits<T>::quiet_NaN() : result;
}
#endif
