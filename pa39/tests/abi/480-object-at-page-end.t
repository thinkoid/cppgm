struct Triple { unsigned char bytes[3]; };
extern "C" Triple exchange(Triple v) {
    Triple result = {{v.bytes[2], v.bytes[0], v.bytes[1]}};
    return result;
}
extern "C" Triple from_boundary(const Triple* from) { return exchange(*from); }
