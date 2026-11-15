template<class T> concept C = __is_same(T,int); template<class T> constexpr bool v=C<T>; static_assert(v<int> && !v<long>);
int main() { return !v<int> || v<long>; }
