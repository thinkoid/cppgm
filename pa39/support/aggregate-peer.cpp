struct Four { float lane[4]; };
struct Large { long a, b, c; };
extern "C" int exchange(Four, Large);
extern "C" Four peer_float(Four f) {
    f.lane[2] *= 2;
    return f;
}
extern "C" Large peer_large(Large l) {
    l.a -= 1;
    return l;
}
int main() {
    Four f = {{1, 2, 3, 4}};
    Large l = {7, 10, 14};
    return exchange(f, l);
}
