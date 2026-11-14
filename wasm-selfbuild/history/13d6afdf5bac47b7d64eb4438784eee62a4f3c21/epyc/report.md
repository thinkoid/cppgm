# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 170.9 s | 1227.6 s | 7.18× |
| Build the WASI compiler, elapsed | 91.6 s | 621.9 s | 6.79× |
| Rebuild with the WASI compiler, CPU | 290.1 s | 298.5 s | 1.024× |
| Rebuild with the WASI compiler, elapsed | 152.0 s | 156.1 s | 1.024× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 7763 64-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658275).
