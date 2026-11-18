#pragma once

#include "lowir/program.h"

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

} // namespace machine
