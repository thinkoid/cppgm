# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 465 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 102.1 s | 657.0 s | 6.43× |
| Build the WASI compiler, elapsed | 57.4 s | 335.8 s | 5.85× |
| Rebuild with the WASI compiler, CPU | 154.9 s | 161.4 s | 1.035× |
| Rebuild with the WASI compiler, elapsed | 84.1 s | 87.4 s | 1.036× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43785224200).
