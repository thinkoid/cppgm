extern "C" int twice(int);
extern "C" int series(const int* a, int count) {
    int sum = 5;
    for (int i = 0; i < count; ++i)
        sum += a[i] < 0 ? twice(-a[i]) : a[i];
    return sum;
}

extern "C" void overwrite(volatile int*);
extern "C" int pressure(volatile int* p, unsigned rounds) {
    int x = 3, y = 5, z = 7;
    for (unsigned i = 0; i < rounds; ++i) {
        int a = p[0], b = p[1], c = p[2], d = p[3], e = p[4], f = p[5];
        int g = p[6], h = p[7], j = p[8], k = p[9], m = p[10], n = p[11];
        overwrite(p);
        int next = x + a - b + 2*c - d + 3*e - f + 4*g - h + 5*j - k + 6*m - n;
        x = y;
        y = z;
        z = next;
    }
    return x + 3*y + 7*z;
}
