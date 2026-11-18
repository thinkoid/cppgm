#include "wasm/mir.h"
#include "wasm/local_lifetimes.h"

#include <algorithm>

namespace wasm {

namespace {

bool local_operation(Op op)
{
	return op == Op::LocalGet || op == Op::LocalSet || op == Op::LocalTee;
}

void count_reads(const Function& function, std::vector<uint32_t>& reads)
{
	reads.assign(function.locals.size(), 0);
	for (const Instruction& inst : function.instructions)
		if (inst.op == Op::LocalGet)
			++reads[function.operands[inst.operands.first]];
}

// The values an operation without an effect takes to leave one: a local or a
// constant read, or integer arithmetic that cannot trap. -1 for the others.
int value_inputs(Op op)
{
	const unsigned code = static_cast<unsigned>(op);
	if (op == Op::LocalGet || op == Op::I32Const || op == Op::I64Const)
		return 0;
	if (op == Op::I32Eqz || op == Op::I64Eqz || (code >= 0x67 && code <= 0x69) || (code >= 0x79 && code <= 0x7b) ||
		op == Op::I32WrapI64 || op == Op::I64ExtendI32S || op == Op::I64ExtendI32U || (code >= 0xc0 && code <= 0xc4))
		return 1;
	if ((code >= 0x46 && code <= 0x4f) || (code >= 0x51 && code <= 0x5a) || (code >= 0x6a && code <= 0x6c) ||
		(code >= 0x71 && code <= 0x78) || (code >= 0x7c && code <= 0x7e) || (code >= 0x83 && code <= 0x8a))
		return 2;
	return -1;
}

// Where the expression that leaves the value on top of the stack before
// `end` begins, when every operation of it may go with that value; else
// `end`. The expression may begin after a value another local keeps
// (`stored`): that local's `local.tee` is then a `local.set`. A relocated
// operand that goes is marked 2: its relocation goes too.
size_t unread_value(
	const Function& function, size_t end, std::vector<uint8_t>& relocated, std::vector<uint32_t>& reads, bool& stored)
{
	size_t need = 1, at = end;
	stored = false;
	while (need != 0 && at != 0 && !stored)
	{
		const Op op = function.instructions[at - 1].op;
		stored = op == Op::LocalTee && need == 1 && at != end;
		if (stored)
			break;
		const int inputs = value_inputs(op);
		if (inputs < 0)
			return end;
		need += static_cast<size_t>(inputs);
		--need;
		--at;
	}
	if (need != 0 && !stored)
		return end;
	for (size_t i = at; i < end; ++i)
	{
		const Instruction& inst = function.instructions[i];
		if (inst.op == Op::LocalGet)
			--reads[function.operands[inst.operands.first]];
		else if (inst.operands.count != 0 && relocated[inst.operands.first] != 0)
			relocated[inst.operands.first] = 2;
	}
	return at;
}

// Look for one straight-line store. A fixed window bounds the cost even
// when the whole function has many temporaries.
constexpr size_t kStackifyWindow = 24;

size_t find_local_store(const Function& function, uint64_t local, size_t end, size_t limit)
{
	for (size_t i = end; i > limit;)
	{
		const Instruction& inst = function.instructions[--i];
		if (inst.op == Op::LocalSet && function.operands[inst.operands.first] == local)
			return i;
		if (inst.op != Op::LocalSet && value_inputs(inst.op) < 0)
			break;
	}
	return end;
}

bool overwritten(const Function& function, uint64_t local, size_t begin, size_t end)
{
	for (size_t i = begin; i < end; ++i)
	{
		const Instruction& inst = function.instructions[i];
		if (inst.op == Op::LocalSet && function.operands[inst.operands.first] == local)
			return true;
	}
	return false;
}

// The encoder visits relocated operands in emission order. Keep those
// instructions in place, even when their values are safe to rematerialize.
size_t stackifiable_value(
	const Function& function, const std::vector<uint8_t>& relocated, size_t store, size_t end, size_t limit)
{
	size_t need = 1;
	for (size_t start = store; start > limit;)
	{
		const Instruction& inst = function.instructions[--start];
		const int inputs = value_inputs(inst.op);
		if (inputs < 0 || (inst.operands.count != 0 && relocated[inst.operands.first]))
			break;
		if (inst.op == Op::LocalGet && overwritten(function, function.operands[inst.operands.first], store, end))
			break;
		need = need + static_cast<size_t>(inputs) - 1;
		if (need == 0)
			return start;
	}
	return store;
}

// A pure producer and its local.set leave the stack unchanged. Move the
// producer to the single read of that local and drop the set and get.
void stackify_pure_values(Function& function, const std::vector<uint32_t>& reads, const std::vector<uint8_t>& relocated)
{
	auto& instructions = function.instructions;
	size_t kept = 0;
	for (const Instruction inst : instructions)
	{
		if (inst.op == Op::LocalGet)
		{
			const uint64_t local = function.operands[inst.operands.first];
			if (reads[local] == 1)
			{
				const size_t limit = kept > kStackifyWindow ? kept - kStackifyWindow : 0;
				const size_t store = find_local_store(function, local, kept, limit);
				if (store != kept)
				{
					const size_t start = stackifiable_value(function, relocated, store, kept, limit);
					if (start != store)
					{
						std::rotate(instructions.begin() + start, instructions.begin() + store + 1,
							instructions.begin() + kept);
						--kept;
						continue;
					}
				}
			}
		}
		instructions[kept++] = inst;
	}
	instructions.resize(kept);
}

// The integer comparison that holds when `op` does not; Nop when `op` is not
// an integer comparison of two values.
Op inverse_comparison(Op op)
{
	static const uint8_t kInverse[10] = { 1, 0, 8, 9, 6, 7, 4, 5, 2, 3 };
	const unsigned code = static_cast<unsigned>(op);
	if (code < 0x46 || code > 0x5a || code == 0x50)
		return Op::Nop;
	const unsigned base = code > 0x50 ? 0x51 : 0x46;
	return static_cast<Op>(base + kInverse[code - base]);
}

// Whether `op` leaves 0 or 1: a comparison or a zero test.
bool leaves_truth(Op op)
{
	const unsigned code = static_cast<unsigned>(op);
	return code >= 0x45 && code <= 0x66;
}

// A truth test reads only whether its value is zero: the test of a widened
// 32-bit value is the test of that value, and a doubled negation before an
// `if`, a `br_if` or a `select` goes. A negated integer comparison is the
// opposite comparison, and a truth value negated twice is that value. A
// widening that is narrowed at once goes too.
void fold_truth_tests(Function& function)
{
	size_t kept = 0;
	for (const Instruction& inst : function.instructions)
	{
		const Op last = kept != 0 ? function.instructions[kept - 1].op : Op::Nop;
		if (inst.op == Op::I64Eqz && last == Op::I64ExtendI32U)
		{
			function.instructions[kept - 1].op = Op::I32Eqz;
			continue;
		}
		if (inst.op == Op::I32WrapI64 && (last == Op::I64ExtendI32U || last == Op::I64ExtendI32S))
		{
			--kept;
			continue;
		}
		if (inst.op == Op::I32Eqz && inverse_comparison(last) != Op::Nop)
		{
			function.instructions[kept - 1].op = inverse_comparison(last);
			continue;
		}
		if (inst.op == Op::I32Eqz && last == Op::I32Eqz && kept >= 2 &&
			leaves_truth(function.instructions[kept - 2].op))
		{
			--kept;
			continue;
		}
		if ((inst.op == Op::If || inst.op == Op::BrIf || inst.op == Op::Select) && kept >= 2 && last == Op::I32Eqz &&
			function.instructions[kept - 2].op == Op::I32Eqz)
			kept -= 2;
		function.instructions[kept++] = inst;
	}
	function.instructions.resize(kept);
}

// A `br 0` goes where the `end` of its own block or `if` follows it: control
// reaches that `end` in any case. (A loop's `br 0` is its back edge.)
void drop_branches_to_next(Function& function)
{
	std::vector<Op> open;
	size_t kept = 0;
	for (size_t i = 0; i < function.instructions.size(); ++i)
	{
		const Instruction& inst = function.instructions[i];
		if (inst.op == Op::Block || inst.op == Op::Loop || inst.op == Op::If || inst.op == Op::TryTable)
			open.push_back(inst.op);
		else if (inst.op == Op::End && !open.empty())
			open.pop_back();
		else if (inst.op == Op::Br && function.operands[inst.operands.first] == 0 && !open.empty() &&
			(open.back() == Op::Block || open.back() == Op::If) && i + 1 < function.instructions.size() &&
			function.instructions[i + 1].op == Op::End)
			continue;
		function.instructions[kept++] = inst;
	}
	function.instructions.resize(kept);
}

} // namespace

void cleanup_locals(Function& function, bool optimize, bool minimize_size)
{
	std::vector<uint32_t> uses;
	if (optimize)
	{
		std::vector<uint8_t> relocated(function.operands.size() + 1, 0);
		for (const Relocation& relocation : function.relocations)
			relocated[relocation.offset] = 1;
		count_reads(function, uses);
		if (minimize_size)
		{
			stackify_pure_values(function, uses, relocated);
			count_reads(function, uses);
		}
		size_t kept = 0;
		for (size_t i = 0; i < function.instructions.size(); ++i)
		{
			Instruction inst = function.instructions[i];
			if (inst.op == Op::LocalSet && i + 1 < function.instructions.size())
			{
				const Instruction& next = function.instructions[i + 1];
				const uint64_t id = function.operands[inst.operands.first];
				if (next.op == Op::LocalGet && function.operands[next.operands.first] == id)
				{
					++i;
					if (uses[id] == 1)
						continue;
					inst.op = Op::LocalTee;
				}
			}
			function.instructions[kept++] = inst;
		}
		function.instructions.resize(kept);
		fold_truth_tests(function);
		drop_branches_to_next(function);
		// A value that no instruction reads is not stored, and not computed
		// when its operations have no effect: a step whose uses all went into
		// memory offsets. Removing one may leave the values it read unread.
		count_reads(function, uses);
		for (bool again = true; again;)
		{
			again = false;
			kept = 0;
			for (size_t i = 0; i < function.instructions.size(); ++i)
			{
				Instruction inst = function.instructions[i];
				if ((inst.op == Op::LocalSet || inst.op == Op::LocalTee) &&
					uses[function.operands[inst.operands.first]] == 0)
				{
					if (inst.op == Op::LocalTee)
						continue;
					bool stored = false;
					const size_t begin = unread_value(function, kept, relocated, uses, stored);
					if (begin != kept)
					{
						kept = begin;
						if (stored)
							function.instructions[kept - 1].op = Op::LocalSet;
						again = true;
						continue;
					}
					// (A value another local keeps is only stored there.)
					if (kept != 0 && function.instructions[kept - 1].op == Op::LocalTee)
					{
						function.instructions[kept - 1].op = Op::LocalSet;
						continue;
					}
					inst.op = Op::Drop;
					inst.operands.count = 0;
				}
				function.instructions[kept++] = inst;
			}
			function.instructions.resize(kept);
		}
		size_t named = 0;
		for (const Relocation& relocation : function.relocations)
			if (relocated[relocation.offset] != 2)
				function.relocations[named++] = relocation;
		function.relocations.resize(named);
	}
	// Parameters retain their public ABI indices, including unused parameters.
	// Ordinary locals need no allocation if no surviving instruction uses them.
	uses.assign(function.locals.size(), 0);
	for (const Instruction& inst : function.instructions)
		if (local_operation(inst.op))
			uses[function.operands[inst.operands.first]] = 1;
	uint32_t next = function.parameter_count;
	for (uint32_t i = 0; i < function.locals.size(); ++i)
		if (i < function.parameter_count)
			uses[i] = i;
		else if (uses[i] != 0)
		{
			uses[i] = next;
			function.locals[next++] = function.locals[i];
		}
	function.locals.resize(next);
	for (const Instruction& inst : function.instructions)
		if (local_operation(inst.op))
		{
			auto& operand = function.operands[inst.operands.first];
			operand = uses[operand];
		}
	if (optimize)
		reuse_locals(function);
}

} // namespace wasm
