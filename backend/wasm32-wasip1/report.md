# WASI backend performance

Measured `7697b5524a9b033f6a1350581507ee478d068097` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44560957980)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.90× |
| Stanford/FloatMM | 1.63× |
| Stanford/Puzzle | 0.85× |
| Stanford/Treesort | 1.07× |

The badge gives the geometric mean of the per-program CPU speedups.
