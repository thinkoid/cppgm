extern "C" void throw_remote(int);
extern "C" long relay(long a, long b) {
    long sum = a * 5 + b;
    throw_remote(int(sum));
    return sum + 1;
}
