#pragma once

#include <cstdint>
#include <vector>

namespace machine {

// SSA liveness propagates from reads to the defining block. The caller supplies
// phi reads at their incoming edges and records the live-out predecessors. One
// budget covers the whole function, including exceptional edges and long loops.
class SsaLiveness
{
public:
	SsaLiveness(const std::vector<uint32_t>& first, const std::vector<uint32_t>& preds, uint64_t items)
		: first_(first), preds_(preds), marks_(first.size() - 1), budget_(64 * items + 4096)
	{}

	void exception_edges(const std::vector<uint32_t>& first, const std::vector<uint32_t>& preds)
	{
		exception_first_ = &first;
		exception_preds_ = &preds;
	}

	void begin(uint32_t uses)
	{
		++epoch_;
		steps_ += uses;
	}
	bool live_in(uint32_t block) const { return marks_[block] == epoch_; }
	void mark_entry(uint32_t block) { marks_[block] = epoch_; }
	void enter(uint32_t block)
	{
		if (!live_in(block))
		{
			mark_entry(block);
			work_.push_back(block);
		}
	}
	uint64_t steps() const { return steps_; }

	template<typename LiveOut>
	bool propagate(uint32_t definition, LiveOut live_out)
	{
		auto visit = [&](uint32_t block, const std::vector<uint32_t>& first, const std::vector<uint32_t>& preds) {
			steps_ += first[block + 1] - first[block];
			for (uint32_t k = first[block]; k < first[block + 1]; ++k)
			{
				const uint32_t p = preds[k];
				live_out(p);
				if (p != definition)
					enter(p);
			}
		};
		while (!work_.empty() && steps_ <= budget_)
		{
			const uint32_t block = work_.back();
			work_.pop_back();
			visit(block, first_, preds_);
			if (exception_first_)
				visit(block, *exception_first_, *exception_preds_);
		}
		return steps_ <= budget_;
	}

private:
	const std::vector<uint32_t>&first_, &preds_;
	const std::vector<uint32_t>*exception_first_ = nullptr, *exception_preds_ = nullptr;
	std::vector<uint32_t> marks_, work_;
	uint32_t epoch_ = 0;
	uint64_t budget_, steps_ = 0;
};

} // namespace machine
