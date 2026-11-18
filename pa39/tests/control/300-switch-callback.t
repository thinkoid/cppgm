extern "C" int dispatch(int tag, int (*callback)(int), int x) {
    switch (tag) {
    case -201: return callback(x + 1);
    case 3:
    case 4:
    case 5: return callback(x + 2);
    case 9001: return callback(x + 3);
    default: return callback(x - 1);
    }
}
extern "C" int dense(long tag, int (*f)(int), int x) {
    switch (tag) {
    case -5: return f(x) + x;
    case -4: return f(x - 2) - x;
    case -2:
    case -1: return f(x) ^ x;
    case 0:  return f(x * x);
    case 1:  return f(x + 2) + 1;
    case 3:  return x - f(x);
    case 4:  return x | f(x+1);
    default: return f(x) + 13;
    }
}
