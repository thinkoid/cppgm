# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 467 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 98.7 s | 534.0 s | 5.41× |
| Build the WASI compiler, elapsed | 56.0 s | 274.4 s | 4.90× |
| Rebuild with the WASI compiler, CPU | 137.5 s | 140.5 s | 1.022× |
| Rebuild with the WASI compiler, elapsed | 75.3 s | 77.0 s | 1.023× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/43969594721).
