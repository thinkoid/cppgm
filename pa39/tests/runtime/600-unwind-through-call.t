extern "C" void throw_remote(int);
extern "C" long relay(long a, long b) {
    long sum = a * 5 + b;
    throw_remote(int(sum));
    return sum + 1;
}

extern "C" void change_or_throw(long*, bool);
extern "C" long retained(long* p, bool fail) {
    long before = *p * 3 + 2;
    try {
        change_or_throw(p, fail);
        return before - *p;
    } catch (int error) {
        return before + *p + error;
    }
}
