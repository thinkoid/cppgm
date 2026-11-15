template<class T> constexpr bool test(){return __is_same(T,int);} template<class T> concept C=test<T>();static_assert(C<int> && !C<long>);
int main() { return !C<int> || C<long>; }
