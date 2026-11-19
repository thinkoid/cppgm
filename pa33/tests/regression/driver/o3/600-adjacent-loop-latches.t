// Each inner iteration either keeps the larger value or takes the new one.
// The outer loop resets the cursor and the carried value for another sweep.
extern "C" __attribute__((noinline)) void sweep(int* data, int last)
{
    while (last > 1)
    {
        for (int i = 1; i < last; ++i)
        {
            int left = data[i];
            int right = data[i + 1];
            if (left > right)
            {
                data[i] = right;
                data[i + 1] = left;
            }
        }
        --last;
    }
}

int main()
{
    sweep(nullptr, 1);
    int values[] = {99, 5, -4, 2, 5, 0, -2, 98};
    sweep(values, 6);
    const int expected[] = {99, -4, -2, 0, 2, 5, 5, 98};
    for (int i = 0; i != 8; ++i)
        if (values[i] != expected[i]) return 1;
    return 0;
}
