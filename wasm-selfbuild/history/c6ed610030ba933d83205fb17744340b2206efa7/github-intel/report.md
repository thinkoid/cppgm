# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 500 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 84.9 s | 458.0 s | 5.39× |
| Build the WASI compiler, elapsed | 49.2 s | 236.0 s | 4.80× |
| Rebuild with the WASI compiler, CPU | 126.7 s | 131.6 s | 1.035× |
| Rebuild with the WASI compiler, elapsed | 70.8 s | 73.0 s | 1.029× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44481767416).
