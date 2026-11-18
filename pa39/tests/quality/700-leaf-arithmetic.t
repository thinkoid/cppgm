extern "C" long kernel(long a, long b) {
    return ((a + b) * 3 - b) ^ 53;
}

extern "C" int store_if_less(const int* a, int* b) {
    int n = *a;
    if (n < *b) *b = n;
    return n;
}
extern "C" bool unsigned_limit(unsigned x) { return x < 0xffffffffu; }

extern "C" unsigned indexed(const unsigned* data, int left, unsigned right) {
    return data[left] + data[right];
}
extern "C" void replace_half(unsigned short* data, long i, unsigned short v) { data[i] = v; }
