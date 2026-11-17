extern "C" int series(const int*, int);
extern "C" int twice(int x) { return 2 * x; }
int values[] = {2, -7, 21, -1};
int main() { return series(values, 4); }
