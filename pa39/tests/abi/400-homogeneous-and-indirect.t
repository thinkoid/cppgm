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
