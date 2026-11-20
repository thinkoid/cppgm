# WASI backend performance

Measured `94aaecc52ac26996bd3d654522334e3c28c68457` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/thinkoid/cppgm/actions/runs/44661842949)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.86× |
| Stanford/FloatMM | 1.74× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 1.07× |

The badge gives the geometric mean of the per-program CPU speedups.
