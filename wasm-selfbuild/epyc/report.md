# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 500 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 111.4 s | 707.8 s | 6.35× |
| Build the WASI compiler, elapsed | 62.5 s | 361.8 s | 5.79× |
| Rebuild with the WASI compiler, CPU | 157.4 s | 162.0 s | 1.033× |
| Rebuild with the WASI compiler, elapsed | 86.1 s | 88.1 s | 1.029× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44390936409).
