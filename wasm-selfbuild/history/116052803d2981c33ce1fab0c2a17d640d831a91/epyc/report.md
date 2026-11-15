# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 428 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 90.7 s | 581.6 s | 6.41× |
| Build the WASI compiler, elapsed | 51.0 s | 297.4 s | 5.83× |
| Rebuild with the WASI compiler, CPU | 132.2 s | 135.0 s | 1.021× |
| Rebuild with the WASI compiler, elapsed | 72.5 s | 73.7 s | 1.018× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517461).
