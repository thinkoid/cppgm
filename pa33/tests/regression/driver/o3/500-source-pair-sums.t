// Each pass takes the next two elements of each array and adds their two
// products: one operation makes a 32-bit lane's sum from that lane's two
// pairs of words, so a register of eight words of each array gives four
// passes. (`dot_product` is the output of a mixing network.)
__attribute__((noinline)) static int dot_product(const short* t, const short* w, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i += 2)
    sum += (t[i] * w[i] + t[i + 1] * w[i + 1]) >> 8;
  return sum;
}

// The second product's factors the other way round, and the sums stored.
__attribute__((noinline)) static void pair_sums(const short* a, const short* b, int* out, int n)
{
  for (int i = 0; i < n; ++i)
    out[i] = a[2 * i] * b[2 * i] + b[2 * i + 1] * a[2 * i + 1];
}

// One array with itself.
__attribute__((noinline)) static unsigned energy(const short* a, int n)
{
  unsigned sum = 0;
  for (int i = 0; i < n; i += 2)
    sum += (unsigned)(a[i] * a[i] + a[i + 1] * a[i + 1]) >> 4;
  return sum;
}

// Not a pair sum: the second product takes its factors two elements on.
__attribute__((noinline)) static unsigned apart(const short* t, const short* w, int n)
{
  unsigned sum = 0;
  for (int i = 0; i < n; i += 2)
    sum += (unsigned)(t[i] * w[i] + t[i + 2] * w[i + 2]);
  return sum;
}

// Not a pair sum either: the store goes to the array the products read.
__attribute__((noinline)) static void in_place(short* a, const short* b, int n)
{
  for (int i = 0; i < n; ++i)
    a[2 * i] = (short)((a[2 * i] * b[2 * i] + a[2 * i + 1] * b[2 * i + 1]) >> 12);
}

static short x[64], y[64];
static int sums[32];

int main()
{
  for (int i = 0; i < 64; ++i) {
    x[i] = (short)(i * 1237 - 32768);
    y[i] = (short)(32767 - i * 911);
  }
  x[62] = y[62] = -32768;
  x[63] = y[63] = 32767;
  unsigned all = (unsigned)dot_product(x, y, 64);
  all = all * 31 + (unsigned)dot_product(x + 1, y + 3, 26);
  pair_sums(x, y, sums, 32);
  for (int i = 0; i < 32; ++i)
    all = all * 31 + (unsigned)sums[i];
  all = all * 31 + energy(x, 64) + energy(y + 5, 22);
  all = all * 31 + apart(x, y, 60);
  in_place(x, y, 32);
  for (int i = 0; i < 64; ++i)
    all = all * 31 + (unsigned short)x[i];
  return all == 2796917751u ? 0 : 1;
}
