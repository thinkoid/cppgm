# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 467 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 102.1 s | 711.7 s | 6.97× |
| Build the WASI compiler, elapsed | 57.5 s | 363.3 s | 6.32× |
| Rebuild with the WASI compiler, CPU | 149.4 s | 159.1 s | 1.048× |
| Rebuild with the WASI compiler, elapsed | 81.4 s | 86.2 s | 1.043× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43967972472).
