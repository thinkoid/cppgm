# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 467 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 169.1 s | 1128.2 s | 6.67× |
| Build the WASI compiler, elapsed | 90.8 s | 572.2 s | 6.30× |
| Rebuild with the WASI compiler, CPU | 265.4 s | 277.5 s | 1.045× |
| Rebuild with the WASI compiler, elapsed | 139.7 s | 146.0 s | 1.047× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43916760546).
