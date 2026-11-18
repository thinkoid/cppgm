# WASI backend performance

Measured `1763cb9b6e07c8c5cf27f44cc0ee379db6efff19` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44390936409)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.73× |
| Stanford/FloatMM | 1.71× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 1.03× |

The badge gives the geometric mean of the per-program CPU speedups.
