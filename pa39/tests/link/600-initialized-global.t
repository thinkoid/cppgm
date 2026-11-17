volatile int seed = 9;
int total;
int *selected = &total;
struct Setup {
    Setup() { *selected = seed + 30; }
};
Setup setup;
int main() { return *selected; }
