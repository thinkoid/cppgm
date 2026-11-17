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
