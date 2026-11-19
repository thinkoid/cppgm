#pragma once

#include "lowir/program.h"

#include <algorithm>

namespace machine {

// Values connected by phi transfers form a web of register preferences.
// Joining two webs does not assert that their live ranges are disjoint.
class PhiWebs
{
public:
	void reset(uint32_t count)
	{
		parent_.resize(count);
		for (uint32_t i = 0; i < count; ++i)
			parent_[i] = i;
	}
	bool empty() const { return parent_.empty(); }
	uint32_t root(uint32_t id)
	{
		while (parent_[id] != id)
			id = parent_[id] = parent_[parent_[id]];
		return id;
	}
	void join(uint32_t a, uint32_t b) { parent_[root(a)] = root(b); }

private:
	std::vector<uint32_t> parent_;
};

// Logical predecessor/value lookup, independent of register, local or stack
// placement. Large joins are indexed once and reused by all incoming edges.
class PhiInputs
{
public:
	void reset(size_t instructions);
	lowir::Value incoming(const lowir::FunctionBody& body, lowir::InstId phi, lowir::BlockId predecessor);

private:
	std::vector<uint32_t> first_;
	std::vector<std::pair<uint32_t, uint32_t>> pairs_;
};

// One incoming value can initialize several independently live phi results.
// Identify those transfers before using them to form register preferences.
class PhiFanout
{
public:
	template<class Resolve>
	void read(const lowir::FunctionBody& body, lowir::BlockId block, Resolve resolve)
	{
		inputs_.clear();
		for (auto i = body.blocks[block].first; i != lowir::kNoId && body.instructions[i].op == lowir::Opcode::Phi;
			i = body.instructions[i].next)
		{
			const auto& phi = body.instructions[i];
			for (uint32_t k = 0; k + 1 < phi.extra_count; k += 2)
			{
				const auto input = resolve(body.operands[phi.extra_first + k + 1]);
				if (input.is(lowir::ValueKind::Temp))
					inputs_.push_back(key(body.operands[phi.extra_first + k].index, input.index));
			}
		}
		std::sort(inputs_.begin(), inputs_.end());
		size_t repeated = 0;
		for (size_t first = 0, last = 0; first < inputs_.size(); first = last)
		{
			last = first + 1;
			while (last < inputs_.size() && inputs_[last] == inputs_[first])
				++last;
			if (last - first > 1)
				inputs_[repeated++] = inputs_[first];
		}
		inputs_.resize(repeated);
	}

	bool contains(lowir::BlockId pred, lowir::TempId id) const
	{
		return std::binary_search(inputs_.begin(), inputs_.end(), key(pred, id));
	}

private:
	static uint64_t key(lowir::BlockId pred, lowir::TempId id) { return (uint64_t(pred) << 32) | id; }
	std::vector<uint64_t> inputs_;
};

} // namespace machine
