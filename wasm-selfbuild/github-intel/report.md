# WASI compiler self-build

cppgm and Clang each build `cppgm++` for WASI. Both WASI compilers then rebuild `cppgm++` from the same 427 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 146.7 s | 919.7 s | 6.27× |
| Build the WASI compiler, elapsed | 79.0 s | 467.3 s | 5.91× |
| Rebuild with the WASI compiler, CPU | 231.6 s | 235.5 s | 1.017× |
| Rebuild with the WASI compiler, elapsed | 122.3 s | 124.2 s | 1.016× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz. [Raw CI observations](https://github.com/vishvananda/cppgm-extended/actions/runs/43639139012).
