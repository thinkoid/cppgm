struct Empty {};
struct Floats { double x, y, z; };
extern "C" long fixed(int, __int128, Empty, int, int, int, int, int, signed char, signed char, short, long double);
extern "C" long varied(int, ...);
int bias = 11;
int main() {
    __int128 wide = (__int128(bias) << 64) + 3;
    if (fixed(1, wide, Empty(), 2, 3, 4, 5, 6, -7, -8, -9, 10.L) != 21) return 1;
    if (varied(bias, -2, Floats{1., 3., 4.}, wide, 9) != 35) return 2;
    return 39;
}
