struct Triple { unsigned char bytes[3]; };
extern "C" Triple from_boundary(const Triple*);
extern "C" Triple exchange(Triple);
extern "C" int getpagesize();
extern "C" void* mmap(void*, unsigned long, int, int, int, long);
extern "C" int mprotect(void*, unsigned long, int);
extern "C" int munmap(void*, unsigned long);
int main() {
    unsigned long page = getpagesize();
#ifdef __APPLE__
    const int anonymous = 0x1000;
#else
    const int anonymous = 0x20;
#endif
    auto base = static_cast<unsigned char*>(mmap(nullptr, 2*page, 3, 2|anonymous, -1, 0));
    if (base == reinterpret_cast<unsigned char*>(-1L) || mprotect(base+page,page,0)) return 1;
    auto v = reinterpret_cast<Triple*>(base+page-sizeof(Triple));
    v->bytes[0]=17; v->bytes[1]=22; v->bytes[2]=39;
    Triple a = from_boundary(v);
    Triple b = exchange(*v);
    int ok = a.bytes[0]==39 && a.bytes[1]==17 && a.bytes[2]==22 &&
             b.bytes[0]==39 && b.bytes[1]==17 && b.bytes[2]==22;
    return munmap(base,2*page)==0 && ok ? 39 : 2;
}
