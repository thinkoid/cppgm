struct Triple { unsigned char bytes[3]; };
extern "C" Triple exchange(Triple v) {
    Triple result = {{v.bytes[2], v.bytes[0], v.bytes[1]}};
    return result;
}
extern "C" Triple from_boundary(const Triple* from) { return exchange(*from); }

template<int N> struct Bytes { unsigned char data[N]; };
extern "C" void copy31(Bytes<31>* to, const Bytes<31>* from) { *to = *from; }
extern "C" void copy65(Bytes<65>* to, const Bytes<65>* from) { *to = *from; }
extern "C" void copy149(Bytes<149>* to, const Bytes<149>* from) { *to = *from; }
extern "C" void clear149(Bytes<149>* to) { *to = Bytes<149>(); }
