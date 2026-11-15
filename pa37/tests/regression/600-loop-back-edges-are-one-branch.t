// A loop's back edge is one `br_if`: the moves of the loop's own values run
// before it when no read of those values follows the edge that leaves at the
// back edge's test. `find` reads its position after the loop, but on the exit
// in the loop's middle: its moves run before the test too. `before_limit`
// reads the value after the back edge's test fails and keeps its moves on the
// taken side. Where one edge of a test leaves the loop, that edge is the one
// branched on (`find`, `match`): the loop's own code follows the test. A test
// of a comparison's result reads the result as it is.
extern "C" __attribute__((noinline)) unsigned mixed(const unsigned* values, unsigned count, unsigned seed) {
    for (unsigned i = 0; i < count; ++i) seed = (seed ^ values[i]) * 16777619u + i;
    return seed;
}
extern "C" __attribute__((noinline)) unsigned find(const unsigned char* text, unsigned size, unsigned stop) {
    unsigned at = 0;
    while (at < size && text[at] != stop) ++at;
    return at;
}
extern "C" __attribute__((noinline)) unsigned before_limit(unsigned start, unsigned limit) {
    unsigned at = start, previous;
    do { previous = at; at = at * 3 + 1; } while (at < limit);
    return previous;
}
extern "C" __attribute__((noinline)) unsigned match(const unsigned char* a, const unsigned char* b, unsigned size) {
    unsigned length = 0;
    while (length < 130 && length < size && a[length] == b[length]) ++length;
    return length >= 3 ? length : 0;
}
extern "C" __attribute__((noinline)) unsigned larger(unsigned a, unsigned b, unsigned c) {
    if (a < b) return c + 1;
    return c - 1;
}
int main() {
    const unsigned values[] = {3, 1, 4, 1, 5};
    if (mixed(values, 5, 7) != 525490795u) return 1;
    if (mixed(values, 0, 7) != 7) return 2;
    const unsigned char text[] = "abc;def";
    if (find(text, 7, ';') != 3) return 3;
    if (find(text, 7, '!') != 7) return 4;
    if (before_limit(1, 100) != 40) return 5;
    if (before_limit(7, 5) != 7) return 6;
    if (match(text, text, 7) != 7) return 7;
    if (match(text, text + 4, 3) != 0) return 8;
    return larger(1, 2, 10) != 11 || larger(2, 1, 10) != 9;
}
