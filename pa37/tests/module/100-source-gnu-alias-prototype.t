extern "C" int implementation(int left, int right) { return left + right; }
// GNU/LLVM aliases preserve the body's ABI even with another declared prototype.
extern "C" int other_prototype(int) __attribute__((alias("implementation")));
extern "C" int observe() {
  using Actual = int (*)(int, int);
  Actual volatile function = reinterpret_cast<Actual>(other_prototype);
  return function(19, 23);
}
