# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 468 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 81.0 s | 435.7 s | 5.38× |
| Build the WASI compiler, elapsed | 46.8 s | 225.0 s | 4.81× |
| Rebuild with the WASI compiler, CPU | 123.9 s | 125.9 s | 1.021× |
| Rebuild with the WASI compiler, elapsed | 68.8 s | 69.9 s | 1.016× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44260407513).
