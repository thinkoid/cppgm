using U = unsigned long;
extern "C" U kernel(U);
extern "C" int check_registers(U, U (*)(U), U);
extern "C" U sample(U x) {
    x = (x ^ (x >> 31)) * 0x9e3779b97f4a7c15ul;
    return x & 1 ? x ^ (x << 17) : x + (x >> 23);
}
int main() {
    U seed = 0x243f6a8885a308d3ul;
    for (int n = 0; n < 64; ++n) {
        U expected = 0;
        for (U i = 0; i < 12; i += 2) expected ^= sample(seed+i) + sample(seed+i+1);
        if (!check_registers(seed, kernel, expected)) return 1;
        seed = seed * 6364136223846793005ul + 1442695040888963407ul;
    }
    return 39;
}
