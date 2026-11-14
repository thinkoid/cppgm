# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 150.5 s | 858.1 s | 5.70× |
| Build the WASI compiler, elapsed | 81.5 s | 436.7 s | 5.36× |
| Rebuild with the WASI compiler, CPU | 226.5 s | 228.5 s | 1.009× |
| Rebuild with the WASI compiler, elapsed | 120.0 s | 121.1 s | 1.008× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: INTEL(R) XEON(R) PLATINUM 8573C. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677230).
