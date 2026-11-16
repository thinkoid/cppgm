# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 467 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 137.4 s | 891.6 s | 6.49× |
| Build the WASI compiler, elapsed | 75.3 s | 453.5 s | 6.02× |
| Rebuild with the WASI compiler, CPU | 209.5 s | 219.0 s | 1.049× |
| Rebuild with the WASI compiler, elapsed | 111.8 s | 116.5 s | 1.046× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43822097741).
