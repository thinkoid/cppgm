#include "aarch64/selector.h"

#include <algorithm>

namespace aarch64 {
using namespace lowir;

namespace {
struct LayoutBlock
{
	Opcode terminator;
	uint32_t position;
	bool calls = false, cold = false;
};

struct LayoutEdge
{
	uint64_t weight;
	BlockId from, to;
	bool adjacent;
};

// Shares are in thousandths of one execution. Prefer explicit expectations,
// loop backedges and paths that avoid a rare call. The lowered branch commonly
// puts an if body immediately after its guard and the continuation further on.
uint32_t true_share(
	const FunctionBody& body, const lowir::Instruction& branch, const std::vector<LayoutBlock>& blocks, BlockId from)
{
	const auto prediction = static_cast<BranchPrediction>(branch.sub);
	if (prediction != BranchPrediction::None)
		return prediction == BranchPrediction::Likely ? 992 : 8;
	const auto& yes = blocks[branch.ops[1].index];
	const auto& no = blocks[branch.ops[2].index];
	if (yes.cold != no.cold)
		return yes.cold ? 8 : 992;
	const auto position = blocks[from].position;
	if (yes.position <= position)
		return 768;
	if (no.position <= position)
		return 232;
	if (yes.position == position + 1)
		return no.calls && !yes.calls && no.terminator == Opcode::Jump ? 768 : 320;
	if (yes.calls != no.calls)
		return yes.calls ? 256 : 672;
	const auto condition = branch.ops[0];
	const auto definition = condition.is(ValueKind::Temp) ? body.temps[condition.index].def : kNoId;
	if (definition != kNoId)
	{
		const auto& cmp = body.instructions[definition];
		if (cmp.op == Opcode::Compare && cmp.ops[1].is(ValueKind::Integer))
		{
			const auto pred = static_cast<ComparePredicate>(cmp.sub);
			const bool zero = !body.literals[cmp.ops[1].index].low;
			if (cmp.type.is_pointer() && zero)
				return pred == ComparePredicate::Eq ? 128 : pred == ComparePredicate::Ne ? 872 : 500;
			if (!zero && (pred == ComparePredicate::Eq || pred == ComparePredicate::Ne))
				return pred == ComparePredicate::Eq ? 320 : 680;
		}
	}
	if (yes.terminator != no.terminator && (yes.terminator == Opcode::Branch || no.terminator == Opcode::Branch))
		return yes.terminator == Opcode::Branch ? 600 : 400;
	return 500;
}

// Join a chain's tail to another chain's head in descending order of edge
// traffic. Never close a cycle or put another block before the function entry.
std::vector<BlockId> chain_order(const FunctionBody& body, std::vector<LayoutEdge>& edges)
{
	std::stable_sort(edges.begin(), edges.end(), [](const LayoutEdge& a, const LayoutEdge& b) {
		return a.weight == b.weight ? a.adjacent > b.adjacent : a.weight > b.weight;
	});
	const auto count = body.blocks.size();
	std::vector<BlockId> head(count), tail(count), next(count, kNoId), previous(count, kNoId);
	for (auto b : body.layout)
		head[b] = tail[b] = b;
	for (const auto& edge : edges)
	{
		if (next[edge.from] != kNoId || previous[edge.to] != kNoId || head[edge.from] == edge.to)
			continue;
		next[edge.from] = edge.to;
		previous[edge.to] = edge.from;
		const auto first = head[edge.from], last = tail[edge.to];
		head[last] = first;
		tail[first] = last;
	}
	std::vector<BlockId> order;
	order.reserve(body.layout.size());
	for (auto root : body.layout)
		if (previous[root] == kNoId)
			for (auto b = root; b != kNoId; b = next[b])
				order.push_back(b);
	return order;
}

std::vector<BlockId> predicted_order(const Program& program, const FunctionBody& body)
{
	std::vector<LayoutBlock> blocks(body.blocks.size());
	for (uint32_t pos = 0; pos < body.layout.size(); ++pos)
	{
		const auto b = body.layout[pos];
		const auto last = body.blocks[b].last;
		if (last == kNoId || !is_terminator(body.instructions[last].op))
			return {};
		auto& facts = blocks[b];
		facts.position = pos;
		facts.terminator = body.instructions[last].op;
		facts.cold = facts.terminator == Opcode::Throw || facts.terminator == Opcode::Resume ||
			facts.terminator == Opcode::Unreachable;
		for (auto i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
		{
			const auto& inst = body.instructions[i];
			facts.calls |= inst.op == Opcode::Call;
			facts.cold |= program.rare_call(inst);
		}
	}

	// Propagate entry frequency over forward edges once. A backedge still
	// competes for fallthrough, without feeding the estimate around a cycle.
	const auto entry = body.layout.front();
	std::vector<uint64_t> flow(body.blocks.size());
	flow[entry] = 1u << 20;
	std::vector<LayoutEdge> edges;
	for (auto b : body.layout)
	{
		const auto& term = body.instructions[body.blocks[b].last];
		const bool jump = term.op == Opcode::Jump;
		if (!jump && term.op != Opcode::Branch)
			continue;
		const auto taken = jump ? 1000u : true_share(body, term, blocks, b);
		for (unsigned i = 0; i < (jump ? 1u : 2u); ++i)
		{
			const auto to = term.ops[jump ? 0 : i + 1].index;
			const auto share = i ? 1000 - taken : taken;
			if (blocks[to].position > blocks[b].position)
				flow[to] += std::max<uint64_t>(8, flow[b]) * share / 1000;
			if (to != b && to != entry)
				edges.push_back(
					{ std::max<uint64_t>(1, flow[b]) * share, b, to, blocks[to].position == blocks[b].position + 1 });
		}
	}
	return chain_order(body, edges);
}
bool can_fall_through(const FunctionBody& body, BlockId from, BlockId to)
{
	if (from == kNoId || to == kNoId)
		return false;
	const auto last = body.blocks[from].last;
	if (last == kNoId)
		return true;
	const auto& term = body.instructions[last];
	if (term.op == Opcode::Jump)
		return term.ops[0].index == to;
	if (term.op == Opcode::Branch)
		return term.ops[1].index == to || term.ops[2].index == to;
	return term.op != Opcode::Return && term.op != Opcode::Unreachable;
}
} // namespace

// Place an unconditional branch's target directly after it when neither
// neighbor of the target uses the original adjacency. This makes one more
// edge fall through without taking a fallthrough away from another path.
std::vector<BlockId> Selector::order_blocks() const
{
	if (level_ >= 2 && body_.layout.size() >= 4 && body_.code_labels.empty())
	{
		auto order = predicted_order(program_, body_);
		if (!order.empty())
			return order;
	}
	if (!level_ || out_.exceptions || body_.layout.size() < 4 || !body_.code_labels.empty())
		return {};
	std::vector<BlockId> prev, next;
	bool changed = false;
	for (size_t k = 0; k < body_.layout.size(); ++k)
	{
		const auto block = body_.layout[k], last = body_.blocks[block].last;
		if (last == kNoId || body_.instructions[last].op != Opcode::Jump)
			continue;
		const auto to = body_.instructions[last].ops[0].index;
		const auto after = next.empty() ? (k + 1 < body_.layout.size() ? body_.layout[k + 1] : kNoId) : next[block];
		if (to == after || to == block || to == body_.layout.front())
			continue;
		if (next.empty())
		{
			prev.assign(body_.blocks.size(), kNoId);
			next.assign(body_.blocks.size(), kNoId);
			for (size_t j = 1; j < body_.layout.size(); ++j)
			{
				prev[body_.layout[j]] = body_.layout[j - 1];
				next[body_.layout[j - 1]] = body_.layout[j];
			}
		}
		if (prev[to] == kNoId || can_fall_through(body_, prev[to], to) || can_fall_through(body_, to, next[to]))
			continue;
		next[prev[to]] = next[to];
		if (next[to] != kNoId)
			prev[next[to]] = prev[to];
		next[block] = to;
		prev[to] = block;
		next[to] = after;
		if (after != kNoId)
			prev[after] = to;
		changed = true;
	}
	std::vector<BlockId> order;
	if (changed)
		for (auto b = body_.layout.front(); b != kNoId; b = next[b])
			order.push_back(b);
	// Put the latch before a two-block loop test. The preheader jumps to
	// the test once; each successful trip then falls back into the test
	// and the terminating trip falls straight through to its successor.
	for (size_t i = 1; i + 2 < body_.layout.size(); ++i)
	{
		const auto& placed = order.empty() ? body_.layout : order;
		const auto pre = placed[i - 1], header = placed[i], latch = placed[i + 1], exit = placed[i + 2];
		const auto h = body_.blocks[header].last, l = body_.blocks[latch].last, p = body_.blocks[pre].last;
		if (p == kNoId || h == kNoId || l == kNoId)
			continue;
		const auto& test = body_.instructions[h];
		const auto jumps_to_header = [&](InstId id) {
			const auto& term = body_.instructions[id];
			return term.op == Opcode::Jump && term.ops[0].index == header;
		};
		if (test.op != Opcode::Branch || !jumps_to_header(l) || !jumps_to_header(p) ||
			!((test.ops[1].index == latch && test.ops[2].index == exit) ||
				(test.ops[2].index == latch && test.ops[1].index == exit)))
			continue;
		if (order.empty())
			order = body_.layout;
		std::swap(order[i], order[i + 1]);
		++i;
	}
	return order;
}

} // namespace aarch64
