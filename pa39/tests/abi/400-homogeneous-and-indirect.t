struct Four { float lane[4]; };
struct Large { long a, b, c; };
extern "C" Four peer_float(Four);
extern "C" Large peer_large(Large);
extern "C" int exchange(Four f, Large l) {
    f.lane[1] += f.lane[3];
    Four g = peer_float(f);
    l.b += l.c;
    Large m = peer_large(l);
    return int(g.lane[0] + g.lane[1] + g.lane[2] + g.lane[3]) + int(m.a + m.b + m.c);
}

struct Word { long value; };
struct Box { long* value; };
extern "C" Word word_after_eight(long, long, long, long, long, long, long, long bias, Word w, Box b) {
    return Word{bias + w.value + *b.value};
}

extern "C" double fp_peer(double, float);
extern "C" double sum_samples(const float* a, const double* b, int n) {
    double sum = 0.5;
    for (int i = 0; i < n; ++i) sum += a[i] * b[i];
    return fp_peer(sum, a[0]) - sum;
}

struct Fields { unsigned long tag : 8, length : 8, payload : 48; };
struct Pair { unsigned long a, b; };
struct alignas(16) EvenPair { unsigned long a, b; };
struct TwoFloats { float a, b; };
extern "C" Pair records(long bias, Pair odd, Fields bits, EvenPair even, Pair last, TwoFloats f) {
    return Pair{odd.a ^ bits.payload ^ even.b ^ last.a,
                odd.b + bits.tag + bits.length + even.a + last.b + bias + long(f.a + f.b)};
}

struct TwoWords { unsigned first, second; };
struct EightBytes { unsigned char bytes[8]; };
extern "C" TwoWords stacked_words(long, long, long, long, long, long, long, long,
                                  unsigned char lead, TwoWords words, unsigned char tail, EightBytes bytes) {
    return TwoWords{words.first ^ (unsigned(lead) << 24) ^ bytes.bytes[7],
                    words.second + (unsigned(tail) << 8) + bytes.bytes[0]};
}

struct ThreeBytes { unsigned char x[3]; };
struct ThirteenBytes { unsigned char x[13]; };
extern "C" unsigned stacked_tails(long, long, long, long, long, long, long, long,
                                  unsigned char lead, ThreeBytes a, unsigned char middle, ThirteenBytes b, unsigned char tail) {
    return lead + 2u * a.x[2] + 4u * middle + 8u * b.x[12] + 16u * tail;
}
