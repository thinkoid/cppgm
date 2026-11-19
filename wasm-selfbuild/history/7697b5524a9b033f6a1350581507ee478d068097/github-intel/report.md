# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 501 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 86.7 s | 469.7 s | 5.42× |
| Build the WASI compiler, elapsed | 49.8 s | 242.2 s | 4.86× |
| Rebuild with the WASI compiler, CPU | 130.0 s | 134.0 s | 1.031× |
| Rebuild with the WASI compiler, elapsed | 72.4 s | 74.4 s | 1.027× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44560957980).
