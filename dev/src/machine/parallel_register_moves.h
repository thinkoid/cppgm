#pragma once

#include <cstdint>

namespace machine {

// A small parallel copy has one writer per location. Emit the first move
// whose destination is no longer read. A remaining cycle needs one scratch:
// save its first destination and redirect every reader to that saved value.
// Native selectors supply the register or full-sized frame-slot transfers.
struct ScalarTransfer
{
	uint32_t destination, source;
};
constexpr unsigned kSmallTransfers = 8;
constexpr uint32_t kTransferLiteral = UINT32_MAX;
constexpr uint32_t kTransferSaved = UINT32_MAX - 1;

template<typename Save, typename Emit>
bool parallel_scalar_transfers(ScalarTransfer* moves, unsigned count, Save save, Emit emit)
{
	if (count > kSmallTransfers)
		return false;
	for (unsigned i = 0; i < count; ++i)
		for (unsigned j = 0; j < i; ++j)
			if (moves[i].destination == moves[j].destination)
				return false;
	unsigned pending = (1u << count) - 1;
	while (pending)
	{
		unsigned ready = pending;
		for (unsigned i = 0; i < count; ++i)
			if (pending & (1u << i))
				for (unsigned j = 0; j < count; ++j)
					if (i != j && moves[i].source == moves[j].destination)
						ready &= ~(1u << j);
		const unsigned next = __builtin_ctz(ready ? ready : pending);
		if (!ready)
		{
			save(next);
			for (unsigned i = 0; i < count; ++i)
				if (moves[i].source == moves[next].destination)
					moves[i].source = kTransferSaved;
		}
		emit(next, moves[next].source);
		pending &= ~(1u << next);
	}
	return true;
}
} // namespace machine
