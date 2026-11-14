# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 124.7 s | 805.1 s | 6.46× |
| Build the WASI compiler, elapsed | 68.1 s | 409.9 s | 6.02× |
| Rebuild with the WASI compiler, CPU | 195.0 s | 198.6 s | 1.017× |
| Rebuild with the WASI compiler, elapsed | 103.9 s | 105.6 s | 1.015× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287703).
