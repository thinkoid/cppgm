template<class T> concept Integral = __is_integral(T);
struct Object {};
int main() { return !Integral<int> || Integral<Object> || sizeof(Integral<void>) != sizeof(bool); }
