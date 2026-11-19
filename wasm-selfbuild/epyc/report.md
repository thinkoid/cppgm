# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 500 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 144.2 s | 930.4 s | 6.45× |
| Build the WASI compiler, elapsed | 78.9 s | 473.2 s | 6.00× |
| Rebuild with the WASI compiler, CPU | 216.8 s | 227.2 s | 1.048× |
| Rebuild with the WASI compiler, elapsed | 115.7 s | 121.0 s | 1.045× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44402206984).
