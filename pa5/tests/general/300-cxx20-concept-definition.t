template<class T> concept Integral = __is_integral(T);
template<class T, class U> concept Same = __is_same(T,U);
template<class T> concept Returning = requires(T value) {
  { value.field } noexcept -> Same<int&>;
  requires Integral<T>;
};
