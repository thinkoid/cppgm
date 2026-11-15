// A recursive visitor's mutually exclusive cases need a bounded set of locals.
// Keeping every SSA result in a new Wasm local exhausts Safari's worker stack.
extern "C" __attribute__((noinline)) unsigned visit(unsigned value, unsigned depth) {
    if (!depth) return value;
    switch (value & 31u) {
#define CASE(n) case n: { unsigned a = (value ^ (n + 11u)) + depth * 3u; unsigned b = visit(a, depth - 1); return b + a * (n + 5u); }
        CASE(0) CASE(1) CASE(2) CASE(3) CASE(4) CASE(5) CASE(6) CASE(7)
        CASE(8) CASE(9) CASE(10) CASE(11) CASE(12) CASE(13) CASE(14) CASE(15)
        CASE(16) CASE(17) CASE(18) CASE(19) CASE(20) CASE(21) CASE(22) CASE(23)
        CASE(24) CASE(25) CASE(26) CASE(27) CASE(28) CASE(29) CASE(30) CASE(31)
#undef CASE
    }
    return 0;
}

extern "C" unsigned observe(unsigned value, unsigned depth) {
    if (depth > 128) return 1;
    unsigned add[128];
    unsigned cursor = value;
    for (unsigned i = 0; i < depth; ++i) {
        unsigned n = cursor & 31u;
        cursor = (cursor ^ (n + 11u)) + (depth - i) * 3u;
        add[i] = cursor * (n + 5u);
    }
    for (unsigned i = depth; i; --i) cursor += add[i - 1];
    return cursor == visit(value, depth) ? 17 : 1;
}

// Loop-carried values and conditional writes must retain their live ranges.
extern "C" __attribute__((noinline)) unsigned cycle(unsigned count) {
    unsigned a = 3, b = 5, result = 0;
    for (unsigned i = 0; i < count; ++i) {
        if (i & 1) a += b ^ i;
        else b += a * 3 + i;
        if (i % 7 == 0) result ^= visit(a, 3);
        unsigned previous = a;
        a = b + result;
        b = previous ^ (i * 11);
    }
    return a ^ b ^ result;
}
