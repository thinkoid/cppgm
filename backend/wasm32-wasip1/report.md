# WASI backend performance

Measured `03db3c34a507ea98ae7816600ed3fd7bd054a1a9` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44402206984)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 0.99× |
| Stanford/Bubblesort | 0.76× |
| Stanford/FloatMM | 1.69× |
| Stanford/Puzzle | 0.93× |
| Stanford/Treesort | 1.03× |

The badge gives the geometric mean of the per-program CPU speedups.
