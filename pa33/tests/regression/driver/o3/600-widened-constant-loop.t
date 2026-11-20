// A constant inner sweep can finish without a backedge after widening.
// Check both the empty outer loop and an ordered accumulation.
extern "C" __attribute__((noinline))
void accumulate_row(float* out, const float* weights, const float (*values)[40], int count)
{
    for (int i = 0; i < count; ++i)
        for (int j = 0; j < 40; ++j)
            out[j] += weights[i] * values[i][j];
}

int main()
{
    float a[40], b[3][40];
    const float weights[] = {2.0f, -3.0f, 1.0f};
    for (int j = 0; j < 40; ++j) {
        a[j] = j;
        b[0][j] = 2 * j;
        b[1][j] = j + 1;
        b[2][j] = -j;
    }
    accumulate_row(a, nullptr, nullptr, 0);
    accumulate_row(a, weights, b, 3);
    for (int j = 0; j < 40; ++j)
        if (a[j] != j - 3) return 1;

    for (int j = 0; j < 40; ++j) a[j] = j;
    accumulate_row(a, a + 1, b, 1);
    if (a[0] != 0 || a[1] != 3) return 2;
    for (int j = 2; j < 40; ++j)
        if (a[j] != 7 * j) return 3;
    return 0;
}
