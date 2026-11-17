// Common caller for the PA36 map/accessor kernels and the PA39 NEON kernels.
#include "../../pa36/kernels/lookup.h"

using U = unsigned long;
using Vec = int __attribute__((vector_size(16)));
using Float = float __attribute__((vector_size(16)));
extern "C" unsigned quality_lookup(const QualitySlot*, unsigned, unsigned);
extern "C" unsigned quality_loop(unsigned*, unsigned*, unsigned);
extern "C" Vec mix(Vec, Vec);
extern "C" Float scale(Float, Float);
extern "C" void transform(int*, const int*, int);
extern "C" void report(U);
extern "C" unsigned quality_observe(unsigned* value) { return *value = *value * 1664525u + 1013904223u; }

static QualitySlot slots[2048];
static int input[1024], output[1024];

static U lookup(unsigned n) {
    for (unsigned i=0; i<1024; ++i) {
        unsigned p = quality_hash((U(i) << 32) | i) & 2047;
        while (slots[p].value) p = (p+1) & 2047;
        slots[p].low = slots[p].high = i;
        slots[p].value = i+1;
    }
    return quality_lookup(slots, 2047, n);
}

static U memory(unsigned n) {
    U digest = 0;
    for (unsigned j=0; j<n/1024; ++j) {
        for (int i=0; i<1024; ++i) input[i] = i+j;
        transform(output, input, 1024);
        for (int x : output) digest = (digest ^ unsigned(x)) * 1099511628211ul;
    }
    return digest;
}

static U vectors(unsigned n) {
    Vec offsets = {1,2,3,4};
    Float factors = {2,4,8,16};
    U digest = 0;
    for (unsigned i=0; i<n; ++i) {
        int a = i & 32767;
        Vec v = {a, a-1, 7-a, a+17};
        Float f = {float(a), float(a+1), float(a+2), float(a+3)};
        Vec result = mix(v,offsets);
        Float scaled = scale(f,factors);
        digest = (digest << 5) ^ (digest >> 7) ^ unsigned(result[i & 3]) ^ unsigned(scaled[i & 3]);
    }
    return digest;
}

int main(int argc, char** argv) {
    if (argc!=2) return 1;
    const unsigned n = 1u << 22;
    unsigned a = 0x31415926, b = 7;
    U answer;
    switch (argv[1][0]) {
    case 'l': answer = lookup(n); break;
    case 'm': answer = memory(n); break;
    case 'v': answer = vectors(n); break;
    case 'c':
        answer = quality_loop(&a,&b,n);
        answer += U(a) << 32;
        break;
    default: return 2;
    }
    report(answer);
    return 0;
}
