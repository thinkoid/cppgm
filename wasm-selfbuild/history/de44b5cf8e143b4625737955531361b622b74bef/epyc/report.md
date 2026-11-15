# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 168.5 s | 1221.3 s | 7.25× |
| Build the WASI compiler, elapsed | 90.4 s | 618.6 s | 6.84× |
| Rebuild with the WASI compiler, CPU | 290.8 s | 298.8 s | 1.027× |
| Rebuild with the WASI compiler, elapsed | 152.1 s | 156.2 s | 1.025× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 7763 64-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654148).
