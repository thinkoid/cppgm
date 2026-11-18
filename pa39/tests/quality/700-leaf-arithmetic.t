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

extern "C" unsigned long mix_bits(unsigned long x, unsigned shift, unsigned long divisor) {
    unsigned long v = (x << 17) ^ (x >> 13) ^ (x >> shift);
    return ((v & 0xff00ff00ff00ff00UL) | 0x000f000f000f000fUL) % divisor;
}
extern "C" int signed_remainder(int x, int divisor) { return x % divisor; }
extern "C" unsigned long widen_choice(bool a, unsigned x) { return a ? x : 0xffffffffu; }

extern "C" unsigned byte_offset(const unsigned* data, signed char i, unsigned char j) {
    return i < -4 && j >= 250 ? data[i] + data[j] : 0;
}
extern "C" bool signed_order(short left, short right) { return left < right; }

extern "C" unsigned adjacent(const unsigned* a, long i) {
    const unsigned* p = a + i;
    return p[0] - p[1];
}
extern "C" unsigned observed(const volatile unsigned* p, unsigned* target) {
    unsigned first = p[0];
    *target = first + 5;
    return first ^ p[1];
}
