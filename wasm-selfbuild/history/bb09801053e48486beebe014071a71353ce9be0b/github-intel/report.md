# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 462 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 80.3 s | 423.4 s | 5.28× |
| Build the WASI compiler, elapsed | 46.7 s | 218.8 s | 4.69× |
| Rebuild with the WASI compiler, CPU | 124.7 s | 127.1 s | 1.021× |
| Rebuild with the WASI compiler, elapsed | 69.1 s | 70.4 s | 1.017× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43701438121).
