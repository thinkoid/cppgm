extern "C" __attribute__((noinline)) unsigned left(unsigned x)
{
    return ((x ^ 13579u) * 37u + 21u) ^ (x >> 2);
}

extern "C" unsigned right(unsigned);
using Callback = unsigned (*)(unsigned);
Callback volatile first = left;
Callback volatile second = right;

extern "C" unsigned check(unsigned x)
{
    if (first == second)
        return 1;
    if (first(x) != second(x))
        return 2;
    return left(x) + right(x);
}
