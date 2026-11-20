# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 502 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 87.5 s | 478.1 s | 5.47× |
| Build the WASI compiler, elapsed | 50.2 s | 246.9 s | 4.91× |
| Rebuild with the WASI compiler, CPU | 130.8 s | 134.3 s | 1.031× |
| Rebuild with the WASI compiler, elapsed | 72.8 s | 74.5 s | 1.025× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/thinkoid/cppgm/actions/runs/44661842949).
