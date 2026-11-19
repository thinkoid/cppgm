# x86-64 backend performance

Measured `7697b5524a9b033f6a1350581507ee478d068097` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44560957980)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.05× |
| Stanford/Bubblesort | 0.75× |
| Stanford/FloatMM | 0.89× |
| Stanford/Puzzle | 0.98× |
| Stanford/Treesort | 0.98× |

The badge gives the geometric mean of the per-program CPU speedups.
