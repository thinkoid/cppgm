# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 72.8 s | 387.9 s | 5.33× |
| Build the WASI compiler, elapsed | 42.2 s | 200.6 s | 4.75× |
| Rebuild with the WASI compiler, CPU | 115.2 s | 116.2 s | 1.010× |
| Rebuild with the WASI compiler, elapsed | 63.9 s | 64.6 s | 1.010× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890434).
