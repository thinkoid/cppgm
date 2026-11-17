#pragma once

#include "lowir/program.h"

namespace aarch64 {

enum class Bank
{
	General,
	Simd,
	Stack
};
struct Argument
{
	Bank bank;
	unsigned first; // first register or byte offset on entry to the callee
	unsigned pieces, piece_bytes;
	bool indirect;
};

struct Arguments
{
	explicit Arguments(bool apple) : darwin(apple) {}
	bool darwin;
	unsigned general = 0, simd = 0, stack = 0;
	Argument next(lowir::Type type, ir_model::AggregateShape shape, bool unnamed = false);
};

bool memory_value(lowir::Type type);
Argument classify(lowir::Type type, ir_model::AggregateShape shape);

} // namespace aarch64
