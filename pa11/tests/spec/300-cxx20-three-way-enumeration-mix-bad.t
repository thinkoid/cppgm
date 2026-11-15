// VALIDATION: compile-fail
enum E { a }; enum F { b };
auto compare() { return a <=> b; }
