# x86-64 backend performance

Measured `c6ed610030ba933d83205fb17744340b2206efa7` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44481767416)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.67× |
| Stanford/FloatMM | 0.79× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 1.07× |

The badge gives the geometric mean of the per-program CPU speedups.
