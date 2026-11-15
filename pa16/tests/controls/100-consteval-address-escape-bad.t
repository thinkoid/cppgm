// expect reject
consteval int answer() { return 42; }
auto pointer = &answer;
