#include "lower/function_lowering.h"

#include "lower/program_lowering.h"
#include "sema/expression_facts.h"

namespace lower {

void FunctionLowering::materialize_comparison(const syntax::BinaryExpr& expr, lowir::Value object)
{
	const sema::ThreeWayComparison& plan = *expr.facts->comparison;
	// Convert and evaluate each operand exactly once, then copy the real
	// category object. Its layout and constant value remain library facts.
	const RValue left = operand(*expr.left, ConversionContext::Comparison);
	const RValue right = operand(*expr.right, ConversionContext::Comparison);
	const sema::Type* boolean = lowering_.graph().types.fundamental(FundamentalType::Bool);
	const lowir::BlockId end = new_block(lowir::BlockKind::CondEnd);
	const TokenKind tests[3] = { TokenKind::OP_EQ, TokenKind::OP_LT, TokenKind::OP_GT };
	const unsigned tested = plan.values[3] != nullptr ? 3 : 2;
	for (unsigned i = 0; i < tested; ++i)
	{
		const lowir::BlockId selected = new_block(lowir::BlockKind::CondThen);
		const lowir::BlockId next = new_block(lowir::BlockKind::CondElse);
		branch(scalar_comparison(tests[i], plan.operand, left, right, boolean), selected, next);
		place(selected);
		const syntax::Expr& value = *plan.values[i < 2 ? 1 - i : i];
		initialize_from(value, value.facts->conversion, object, expr.location);
		jump(end);
		place(next);
	}
	initialize_from(*plan.values[tested], plan.values[tested]->facts->conversion, object, expr.location);
	jump(end);
	place(end);
}

} // namespace lower
