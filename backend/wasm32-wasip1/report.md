# WASI backend performance

Measured `c6ed610030ba933d83205fb17744340b2206efa7` on Intel(R) Xeon(R) 6973P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44481767416)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 0.99× |
| Stanford/Bubblesort | 0.75× |
| Stanford/FloatMM | 1.75× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
