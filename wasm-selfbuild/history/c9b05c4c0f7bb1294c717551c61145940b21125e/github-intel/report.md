# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 464 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 80.3 s | 435.8 s | 5.42× |
| Build the WASI compiler, elapsed | 46.6 s | 224.9 s | 4.83× |
| Rebuild with the WASI compiler, CPU | 124.4 s | 127.4 s | 1.024× |
| Rebuild with the WASI compiler, elapsed | 69.1 s | 70.4 s | 1.021× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43750859051).
