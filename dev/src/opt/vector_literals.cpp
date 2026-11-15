#include "lowir/builder.h"
#include "opt/passes.h"

#include <cstdio>
#include <vector>

namespace opt {

using namespace lowir;

namespace {

// The most operations between a literal lane and the vector it is part of.
constexpr unsigned kDepth = 4;

// x86-64 has no vector immediate: a vector of literal lanes goes through a
// general register, two instructions for each half and one to join them.
// Read-only data holds the sixteen bytes instead, one global for each value of
// the program, and one load reads them. A zero vector is cleared, and a
// single literal lane is one move.
class VectorLiterals
{
public:
	explicit VectorLiterals(FunctionContext& context) : c_(context), body_(context.body) {}
	bool run();

private:
	struct Lanes
	{
		uint64_t low, high;
		uint64_t word(unsigned k) const { return ((k < 2 ? low : high) >> (k % 2 * 32)) & 0xffffffffu; }
	};

	static Lanes words(uint64_t a, uint64_t b, uint64_t c, uint64_t d) { return Lanes{ a | b << 32, c | d << 32 }; }
	bool lanes(Value v, Lanes& out, unsigned depth) const;
	bool holds(SymbolId symbol, const Lanes& value) const;
	SymbolId global(const Lanes& value);

	FunctionContext& c_;
	FunctionBody& body_;
};

// Whether the operation joins lanes of its operands and computes nothing.
bool joins(VectorOp op)
{
	switch (op)
	{
	case VectorOp::Punpcklqdq:
	case VectorOp::Unpcklpd:
	case VectorOp::Movlhps:
	case VectorOp::Punpckldq:
	case VectorOp::Unpcklps:
	case VectorOp::Pshufd:
	case VectorOp::Shufps:
		return true;
	default:
		return false;
	}
}

// The sixteen bytes of v when literals alone give them.
bool VectorLiterals::lanes(Value v, Lanes& out, unsigned depth) const
{
	if (depth == kDepth || !v.is(ValueKind::Temp) || body_.temps[v.index].def == kNoId)
		return false;
	const Instruction& def = body_.instructions[body_.temps[v.index].def];
	if (def.op != Opcode::Vector)
		return false;
	const VectorOp op = static_cast<VectorOp>(def.sub);
	out = Lanes{ 0, 0 };
	if (shape_of(op) == VectorShape::Zero)
		return true;
	if (shape_of(op) == VectorShape::FromScalar)
	{
		const Type scalar = Type::scalar(vector_scalar_kind(op));
		const Value from = def.ops[0];
		if (scalar.is_float() ? !from.is(ValueKind::Float) || from.float_kind != scalar.kind()
							  : !from.is(ValueKind::Integer))
			return false;
		out.low = body_.literals[from.index].low & (storage_bytes(scalar) == 4 ? 0xffffffffu : ~uint64_t(0));
		return true;
	}
	Lanes a, b;
	const bool picks_lanes = op == VectorOp::Pshufd || op == VectorOp::Shufps;
	if (!joins(op) || (picks_lanes && !def.ops[2].is(ValueKind::Integer)) || !lanes(def.ops[0], a, depth + 1))
		return false;
	if (op == VectorOp::Pshufd)
	{
		const uint64_t picks = body_.literals[def.ops[2].index].low;
		out = words(a.word(picks & 3), a.word(picks >> 2 & 3), a.word(picks >> 4 & 3), a.word(picks >> 6 & 3));
		return true;
	}
	if (!lanes(def.ops[1], b, depth + 1))
		return false;
	if (op == VectorOp::Shufps)
	{
		const uint64_t picks = body_.literals[def.ops[2].index].low;
		out = words(a.word(picks & 3), a.word(picks >> 2 & 3), b.word(picks >> 4 & 3), b.word(picks >> 6 & 3));
	}
	else if (op == VectorOp::Punpckldq || op == VectorOp::Unpcklps)
		out = words(a.word(0), b.word(0), a.word(1), b.word(1));
	else
		out = Lanes{ a.low, b.low };
	return true;
}

// Whether the symbol is the read-only global that this pass makes for `value`.
bool VectorLiterals::holds(SymbolId symbol, const Lanes& value) const
{
	const Program& p = c_.program;
	const Symbol& s = p.symbols[symbol];
	if (s.kind != SymbolKind::GlobalDefinition || s.metadata.binding != ir_model::SBM_INTERNAL ||
		s.metadata.storage != ir_model::GSM_READONLY)
		return false;
	const Global& global = p.globals[s.detail];
	if (!global.typed || !(global.type == Type::object(16, 4)) || global.init != GlobalInit::Data ||
		global.item_count != 2)
		return false;
	for (uint32_t k = 0; k < 2; ++k)
	{
		const DataItem& item = p.data_items[global.first_item + k];
		if (item.kind != DataItemKind::Scalar || !(item.type == Type::scalar(TypeKind::I64)) ||
			item.constant.kind != ValueKind::Integer || item.constant.bits.low != (k == 0 ? value.low : value.high))
			return false;
	}
	return true;
}

// The global of a value: its name states the bytes, so every function of the
// program (and a later run over the written program) finds the same one.
SymbolId VectorLiterals::global(const Lanes& value)
{
	Program& p = c_.program;
	char spelling[64];
	const int length = std::snprintf(spelling, sizeof spelling, "__vector_literal_%016llx%016llx",
		static_cast<unsigned long long>(value.high), static_cast<unsigned long long>(value.low));
	const NameId name = p.names.intern(spelling, static_cast<uint32_t>(length));
	const SymbolId known = p.find_symbol(name);
	if (known != kNoId)
		return holds(known, value) ? known : kNoId;
	const SymbolId symbol = p.symbol_for(name);
	Global global = Global();
	global.typed = true;
	global.type = Type::object(16, 4);
	global.init = GlobalInit::Data;
	global.first_item = static_cast<uint32_t>(p.data_items.size());
	global.item_count = 2;
	for (uint32_t k = 0; k < 2; ++k)
	{
		DataItem item = DataItem();
		item.kind = DataItemKind::Scalar;
		item.type = Type::scalar(TypeKind::I64);
		item.constant.kind = ValueKind::Integer;
		item.constant.float_kind = TypeKind::Void;
		item.constant.bits = integer_literal(static_cast<int64_t>(k == 0 ? value.low : value.high));
		item.address = kNoId;
		p.data_items.push_back(item);
	}
	p.declare_global(symbol, SymbolKind::GlobalDefinition, global);
	p.symbols[symbol].metadata.binding = ir_model::SBM_INTERNAL;
	p.symbols[symbol].metadata.storage = ir_model::GSM_READONLY;
	return symbol;
}

bool VectorLiterals::run()
{
	struct Join
	{
		BlockId block;
		InstId prev, inst;
		Lanes value;
	};
	std::vector<Join> found;
	for (BlockId block : body_.layout)
	{
		InstId prev = kNoId;
		for (InstId i = body_.blocks[block].first; i != kNoId; prev = i, i = body_.instructions[i].next)
		{
			Lanes value;
			if (body_.instructions[i].op == Opcode::Vector && joins(static_cast<VectorOp>(body_.instructions[i].sub)) &&
				lanes(Value::temp(body_.instructions[i].result), value, 0))
				found.push_back(Join{ block, prev, i, value });
		}
	}
	if (found.empty())
		return false;
	// A join that only such joins read is part of their values.
	std::vector<uint8_t> part(body_.instructions.size(), 0), read(body_.temps.size(), 0);
	for (const Join& join : found)
		part[join.inst] = 1;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
			if (!part[i])
				for_each_operand(body_, body_.instructions[i], [&](const Value& v) {
					if (v.is(ValueKind::Temp))
						read[v.index] = 1;
				});
	bool changed = false;
	for (const Join& join : found)
	{
		const SymbolId symbol = !read[body_.instructions[join.inst].result] || (join.value.low | join.value.high) == 0
			? kNoId
			: global(join.value);
		if (symbol == kNoId)
			continue;
		Instruction base = make_instruction(Opcode::Addr, body_.pointer_type());
		base.ops[0] = Value::symbol(symbol);
		base.location = body_.instructions[join.inst].location;
		// (Appending moves the instructions.)
		const InstId address = append_instruction(body_, base);
		body_.instructions[address].result = append_temp(body_, body_.pointer_type(), address);
		insert_after(body_, join.block, join.prev, address);
		Instruction& inst = body_.instructions[join.inst];
		Instruction load = make_instruction(Opcode::Load, inst.type);
		load.ops[0] = Value::temp(body_.instructions[address].result);
		load.result = inst.result;
		load.next = inst.next;
		load.location = inst.location;
		inst = load;
		changed = true;
	}
	if (changed)
		c_.invalidate_block_of();
	return changed;
}

} // namespace

bool load_vector_literals(FunctionContext& context)
{
	if (!context.costs.floating_literal_loads)
		return false;
	VectorLiterals pass(context);
	return pass.run();
}

} // namespace opt
