using U = unsigned long;
extern "C" U sample(U);
extern "C" U kernel(U seed) {
    U a=sample(seed), b=sample(seed+1), c=sample(seed+2), d=sample(seed+3);
    U e=sample(seed+4), f=sample(seed+5), g=sample(seed+6), h=sample(seed+7);
    U i=sample(seed+8), j=sample(seed+9), k=sample(seed+10), l=sample(seed+11);
    return (a+b) ^ (c+d) ^ (e+f) ^ (g+h) ^ (i+j) ^ (k+l);
}
