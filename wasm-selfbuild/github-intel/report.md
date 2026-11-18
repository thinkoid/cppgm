# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 469 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 82.3 s | 445.5 s | 5.41× |
| Build the WASI compiler, elapsed | 47.3 s | 229.9 s | 4.87× |
| Rebuild with the WASI compiler, CPU | 123.6 s | 125.9 s | 1.019× |
| Rebuild with the WASI compiler, elapsed | 69.0 s | 69.8 s | 1.015× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44362912133).
