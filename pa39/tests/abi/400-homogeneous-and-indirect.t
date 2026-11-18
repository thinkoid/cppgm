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
