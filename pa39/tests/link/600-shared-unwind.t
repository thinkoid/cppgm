extern "C" int exported_add(int x) { return x + 7; }
extern "C" int exported_scale(int x) { return x * 3; }

int main() { return exported_add(8) + exported_scale(5); }
