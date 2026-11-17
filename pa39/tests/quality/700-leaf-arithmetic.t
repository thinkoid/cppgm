extern "C" long kernel(long a, long b) {
    return ((a + b) * 3 - b) ^ 53;
}
