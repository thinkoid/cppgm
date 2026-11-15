#include "sema/constant_interpreter.h"

#include "sema/expression_facts.h"

namespace sema {

bool ConstantInterpreter::materialize_comparison(const syntax::BinaryExpr& expr, const ConstPlace& target)
{
	const ThreeWayComparison& plan = *expr.facts->comparison;
	ConstValue left, right;
	if (!operand(*expr.left, left) || !operand(*expr.right, right))
		return false;
	const TokenKind tests[3] = { TokenKind::OP_EQ, TokenKind::OP_LT, TokenKind::OP_GT };
	const unsigned tested = plan.values[3] != nullptr ? 3 : 2;
	unsigned selected = 0;
	for (; selected < tested; ++selected)
	{
		ConstValue result;
		if (!scalar_comparison(tests[selected], left, right, result, expr.location))
			return false;
		if (result.bits != 0)
			break;
	}
	const syntax::Expr& value = *plan.values[selected < 2 ? 1 - selected : selected];
	return initialize_from(value, value.facts->conversion, target);
}

} // namespace sema
