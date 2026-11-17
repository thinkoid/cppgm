extern "C" int twice(int);
extern "C" int series(const int* a, int count) {
    int sum = 5;
    for (int i = 0; i < count; ++i)
        sum += a[i] < 0 ? twice(-a[i]) : a[i];
    return sum;
}
