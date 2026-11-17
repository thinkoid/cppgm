extern "C" long relay(long, long);
extern "C" void throw_remote(int n) { throw n; }
int main() {
    try { relay(5, 3); }
    catch (int n) { return n; }
    return 1;
}
