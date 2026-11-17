# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 467 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 77.4 s | 428.7 s | 5.54× |
| Build the WASI compiler, elapsed | 45.2 s | 221.4 s | 4.90× |
| Rebuild with the WASI compiler, CPU | 121.5 s | 123.9 s | 1.017× |
| Rebuild with the WASI compiler, elapsed | 68.0 s | 68.9 s | 1.013× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44000592125).
