# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 464 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 190.0 s | 1361.7 s | 7.17× |
| Build the WASI compiler, elapsed | 101.7 s | 689.2 s | 6.77× |
| Rebuild with the WASI compiler, CPU | 315.8 s | 326.6 s | 1.034× |
| Rebuild with the WASI compiler, elapsed | 165.2 s | 170.8 s | 1.034× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 7763 64-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43778388773).
