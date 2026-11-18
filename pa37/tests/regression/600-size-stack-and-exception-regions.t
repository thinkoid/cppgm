extern int step_one(int);
extern int step_two(int, int);
extern int step_three(int, int);
extern volatile int calls;

extern "C" int grouped(int fail)
{
    calls = 0;
    try {
        int value = step_one(fail);
        value = step_two(value, fail);
        value = step_three(value, fail);
        return value * 10 + calls;
    } catch (...) {
        return -calls;
    }
}

static __attribute__((noinline)) int leaf(int x) { return x * 5 + 2; }

extern "C" int inferred(int fail)
{
    calls = 0;
    try {
        return leaf(step_two(leaf(1), fail));
    } catch (...) {
        return -calls;
    }
}

__attribute__((weak, noinline)) int replaceable(int x) { return x; }

extern "C" int override_catch(int x)
{
    try {
        return replaceable(x);
    } catch (...) {
        return -42;
    }
}

extern "C" unsigned expression(unsigned a, unsigned b, unsigned c, unsigned d)
{
    return ((a << 5) + (b >> 3)) ^ (c * 7 + (d >> 2));
}
