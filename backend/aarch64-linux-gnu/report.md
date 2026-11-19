# Arm64 backend performance

Measured `c6ed610030ba933d83205fb17744340b2206efa7` on aarch64. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44481767416)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.06× |
| Stanford/Bubblesort | 0.68× |
| Stanford/FloatMM | 2.32× |
| Stanford/Puzzle | 1.34× |
| Stanford/Treesort | 0.95× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.10× | 0.91× |
| calls | 0.85× | 0.89× |
| memory | 1.03× | 0.98× |
| vectors | 0.99× | 0.98× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: None.

Measured compiler: c6ed610030ba933d83205fb17744340b2206efa7.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.99× | 4.39× |
| Self-built compiler speed | 0.97× | 0.97× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 483.320 |
| Clang | 425.150 |
| GCC-built cppgm | 96.950 |
| Self-built cppgm | 101.620 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 96.225 | 100.037 | 0.96× |
| 2 | 96.081 | 98.861 | 0.97× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.995. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 95.509 | 99.074 | 0.96× |
| 2 | 95.805 | 98.556 | 0.97× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.
