using U = unsigned long;
extern "C" U sample(U);
extern "C" U kernel(U seed) {
    U a=sample(seed), b=sample(seed+1), c=sample(seed+2), d=sample(seed+3);
    U e=sample(seed+4), f=sample(seed+5), g=sample(seed+6), h=sample(seed+7);
    U i=sample(seed+8), j=sample(seed+9), k=sample(seed+10), l=sample(seed+11);
    return (a+b) ^ (c+d) ^ (e+f) ^ (g+h) ^ (i+j) ^ (k+l);
}

extern "C" double sample_fp(U);
extern "C" U fp_kernel(U seed) {
    double a=sample_fp(seed), b=sample_fp(seed+1), c=sample_fp(seed+2), d=sample_fp(seed+3);
    double e=sample_fp(seed+4), f=sample_fp(seed+5), g=sample_fp(seed+6), h=sample_fp(seed+7);
    U salt=sample(seed);
    return U(a+b+c+d+e+f+g+h) ^ salt;
}
