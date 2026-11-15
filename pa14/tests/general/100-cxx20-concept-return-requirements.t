template<class T, class U> concept Same = __is_same(T,U);
template<class T> concept Integral = __is_integral(T);
template<class T> concept Void = __is_same(T,void);
template<class T> concept Returning = requires(T value) {
  { value.field } -> Same<int&>;
  { value.run() } noexcept -> Integral;
};
struct Good { int field; int run() noexcept; };
struct WrongField { long field; int run() noexcept; };
struct Throwing { int field; int run(); };
struct WrongResult { int field; void* run() noexcept; };

template<class T> concept FixedOperand = requires { { 0 } -> Same<T>; };

void nothing();

int main() {
  return !Returning<Good> || Returning<WrongField> || Returning<Throwing> || Returning<WrongResult>
      || Returning<int> || !FixedOperand<int> || FixedOperand<long>
      || !requires { { nothing() } -> Void; }
      || !requires(const int value) { { value } -> Same<const int&>; }
      || !requires(int&& value) { { static_cast<int&&>(value) } -> Same<int&&>; };
}
