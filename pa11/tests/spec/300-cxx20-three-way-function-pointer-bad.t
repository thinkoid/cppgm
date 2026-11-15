// VALIDATION: compile-fail
int f();
auto compare() { return &f <=> &f; }
