#include "aarch64/selector.h"

#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;

void Selector::atomic(const lowir::Instruction& inst)
{
	if (inst.op == Opcode::AtomicSignalFence)
		return;
	if (inst.op == Opcode::AtomicThreadFence)
	{
		if (inst.order != MemoryOrder::Relaxed)
			out_.emit(Op::Dmb);
		return;
	}
	const unsigned bytes = storage_bytes(inst.type);
	if (bytes > 8)
		throw AArch64Error("unsupported wide AArch64 atomic access");
	const uint32_t size = (bytes == 1 ? 0u : bytes == 2 ? 1u : bytes == 4 ? 2u : 3u) << 30;
	const bool acquire = inst.order == MemoryOrder::Acquire || inst.order == MemoryOrder::Consume ||
		inst.order == MemoryOrder::AcqRel || inst.order == MemoryOrder::SeqCst;
	const bool release = inst.order == MemoryOrder::Release || inst.order == MemoryOrder::AcqRel ||
		inst.order == MemoryOrder::SeqCst;
	address(10, inst.ops[inst.op == Opcode::AtomicStore ? 1 : 0]);
	if (inst.op == Opcode::AtomicLoad)
	{
		if (acquire)
			out_.emit(Op::Ldar, 9, 10, 0, size);
		else
			access(false, 9, 10, 0, bytes);
		save(9, inst.result);
		return;
	}
	if (inst.op == Opcode::AtomicStore)
	{
		value(11, inst.ops[0], inst.type);
		if (release)
			out_.emit(Op::Stlr, 11, 10, 0, size);
		else
			access(true, 11, 10, 0, bytes);
		return;
	}
	const bool compare = inst.op == Opcode::AtomicCompareExchange;
	value(11, inst.ops[compare ? 2 : 1], inst.type);
	if (compare)
	{
		address(17, inst.ops[1]);
		access(false, 17, 17, 0, bytes);
	}
	const uint32_t retry = out_.labels.size(), failed = retry + 1, done = retry + 2;
	out_.labels.resize(done + 1);
	out_.bind(retry);
	out_.emit(Op::Ldxr, 9, 10, 0, size | (acquire || compare ? 0x8000 : 0));
	if (compare)
	{
		out_.emit(Op::Subs, 31, 9, 17);
		out_.reference(Op::BCond, Fixup::Block, failed, 1);
	}
	const bool add = inst.op == Opcode::AtomicAddFetch;
	if (add)
		out_.emit(Op::Add, 15, 9, 11);
	out_.emit(Op::Stxr, add ? 15 : 11, 10, 16, size | (release ? 0x8000 : 0));
	out_.reference(Op::Cbnz, Fixup::Block, retry, 16);
	if (compare)
	{
		constant(9, 1);
		out_.reference(Op::B, Fixup::Block, done);
		out_.bind(failed);
		out_.emit(Op::Clrex);
		address(17, inst.ops[1]);
		access(true, 9, 17, 0, bytes);
		constant(9, 0);
		out_.bind(done);
	}
	if (inst.result != kNoId)
		save(add ? 15 : 9, inst.result);
}

} // namespace aarch64
