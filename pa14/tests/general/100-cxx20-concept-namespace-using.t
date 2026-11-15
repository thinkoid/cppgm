namespace N {template<class T> concept Integral = __is_integral(T);}
using N::Integral;

int main() { return !N::Integral<unsigned>; }
