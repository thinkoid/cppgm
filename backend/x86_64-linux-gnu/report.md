# x86-64 backend performance

Measured `94aaecc52ac26996bd3d654522334e3c28c68457` on AMD EPYC 9V45 96-Core Processor. [CI run and raw observations](https://github.com/thinkoid/cppgm/actions/runs/44661842949)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.16× |
| Stanford/Bubblesort | 0.90× |
| Stanford/FloatMM | 0.69× |
| Stanford/Puzzle | 0.95× |
| Stanford/Treesort | 1.01× |

The badge gives the geometric mean of the per-program CPU speedups.
