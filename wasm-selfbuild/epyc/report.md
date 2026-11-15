# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 428 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 125.4 s | 807.4 s | 6.44× |
| Build the WASI compiler, elapsed | 68.7 s | 411.0 s | 5.98× |
| Rebuild with the WASI compiler, CPU | 200.8 s | 204.1 s | 1.025× |
| Rebuild with the WASI compiler, elapsed | 106.7 s | 108.8 s | 1.026× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794239).
