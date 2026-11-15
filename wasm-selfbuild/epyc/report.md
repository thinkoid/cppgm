# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 463 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 134.6 s | 875.1 s | 6.50× |
| Build the WASI compiler, elapsed | 73.7 s | 445.2 s | 6.04× |
| Rebuild with the WASI compiler, CPU | 207.9 s | 218.0 s | 1.048× |
| Rebuild with the WASI compiler, elapsed | 110.9 s | 116.1 s | 1.046× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43740486475).
