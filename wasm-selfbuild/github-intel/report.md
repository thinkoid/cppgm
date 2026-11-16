# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 465 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 165.0 s | 1027.8 s | 6.23× |
| Build the WASI compiler, elapsed | 89.0 s | 521.8 s | 5.86× |
| Rebuild with the WASI compiler, CPU | 256.1 s | 264.1 s | 1.030× |
| Rebuild with the WASI compiler, elapsed | 135.1 s | 139.2 s | 1.030× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43801643862).
