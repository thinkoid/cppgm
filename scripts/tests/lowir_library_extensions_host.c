/* Host of the object that scripts/tests/lowir_library_extensions.c makes. */
#include <stdarg.h>

struct Pair
{
	double d;
	long n;
};

double pair_sum(struct Pair pair);
long ext_bump(long value);
double ext_pick(double d, long n);
void ext_stop(int code);
extern const long ext_limit;

double host_pick(int count, ...)
{
	va_list arguments;
	va_start(arguments, count);
	struct Pair pair = va_arg(arguments, struct Pair);
	int last = va_arg(arguments, int);
	va_end(arguments);
	return pair.d + (double)pair.n + count + last;
}

int main(void)
{
	struct Pair pair = { 1.5, 2 };
	if (pair_sum(pair) != 3.5)
		return 1;
	if (ext_bump(37) != 42)
		return 2;
	if (ext_pick(0.25, 4) != 14.25)
		return 3;
	if (ext_limit != 40)
		return 4;
	ext_stop(0);
	return 5;
}
