extern "C" int dispatch(int, int (*)(int), int);
int twice(int x) { return 2 * x; }
int main() {
    return dispatch(-201, twice, 7) + dispatch(4, twice, 10)
        + dispatch(9001, twice, 15) + dispatch(0, twice, 10);
}
