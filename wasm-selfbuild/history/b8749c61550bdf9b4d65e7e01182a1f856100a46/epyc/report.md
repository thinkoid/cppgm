# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 462 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 188.4 s | 1304.2 s | 6.92× |
| Build the WASI compiler, elapsed | 100.7 s | 660.2 s | 6.55× |
| Rebuild with the WASI compiler, CPU | 314.4 s | 328.5 s | 1.045× |
| Rebuild with the WASI compiler, elapsed | 164.7 s | 171.6 s | 1.042× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 7763 64-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43712369026).
