// A value kept within the range of the narrow type and then cut to it is one
// saturating pack of the lanes: the selects that keep it there have no lanes.
// (`train` is the weight update of a mixing network.)
__attribute__((noinline)) static void train(const short* t, short* w, int n, int err)
{
  for (int i = 0; i < n; ++i) {
    int wt = w[i] + ((((t[i] * err * 2) >> 16) + 1) >> 1);
    if (wt < -32768)
      wt = -32768;
    if (wt > 32767)
      wt = 32767;
    w[i] = wt;
  }
}

// Words to bytes, 0 to 255.
__attribute__((noinline)) static void to_pixels(const short* x, unsigned char* out, int n)
{
  for (int i = 0; i < n; ++i) {
    short v = x[i];
    out[i] = v < 0 ? 0 : v > 255 ? 255 : v;
  }
}

// 32-bit lanes to bytes: two packs, the upper limit taken first.
__attribute__((noinline)) static void to_signed_bytes(const int* x, signed char* out, int n)
{
  for (int i = 0; i < n; ++i) {
    int v = x[i] * 3;
    if (v > 127)
      v = 127;
    if (v < -128)
      v = -128;
    out[i] = v;
  }
}

// Not the range of a pack: the selects keep their lanes.
__attribute__((noinline)) static void almost(const int* x, short* out, int n)
{
  for (int i = 0; i < n; ++i) {
    int v = x[i] * 3;
    if (v < -32767)
      v = -32767;
    if (v > 32767)
      v = 32767;
    out[i] = v;
  }
}

static short inputs[45], weights[45], narrow[45];
static int wide[45];
static unsigned char pixels[45];
static signed char bytes[45];

int main()
{
  for (int i = 0; i < 45; ++i) {
    inputs[i] = (short)(i * 2999 - 30000);
    weights[i] = (short)(32767 - i * 1601);
    wide[i] = (i - 22) * (i % 3 == 0 ? 5000 : 7);
  }
  train(inputs, weights, 45, 30000);
  train(inputs, weights, 45, -32000);
  to_pixels(inputs, pixels, 45);
  to_pixels(weights, pixels + 40, 5);
  to_signed_bytes(wide, bytes, 45);
  almost(wide, narrow, 45);
  unsigned all = 0;
  for (int i = 0; i < 45; ++i)
    all = all * 31 + (unsigned short)weights[i] + pixels[i] * 3u + (unsigned char)bytes[i] * 5u +
      (unsigned short)narrow[i] * 7u;
  return all == 2652421425u ? 0 : 1;
}
