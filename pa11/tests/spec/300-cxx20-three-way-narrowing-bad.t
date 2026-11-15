// VALIDATION: compile-fail
namespace std { struct strong_ordering {}; }
auto compare(int x) { return x <=> 0u; }
