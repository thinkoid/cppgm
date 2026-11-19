# Arm64 backend performance

Measured `03db3c34a507ea98ae7816600ed3fd7bd054a1a9` on aarch64. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44402206984)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.05× |
| Stanford/Bubblesort | 0.67× |
| Stanford/FloatMM | 2.33× |
| Stanford/Puzzle | 1.34× |
| Stanford/Treesort | 0.95× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.13× | 0.91× |
| calls | 0.85× | 0.90× |
| memory | 1.03× | 0.98× |
| vectors | 1.00× | 0.99× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: None.

Measured compiler: 03db3c34a507ea98ae7816600ed3fd7bd054a1a9.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.09× | 4.27× |
| Self-built compiler speed | 0.97× | 0.96× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 486.110 |
| Clang | 408.000 |
| GCC-built cppgm | 95.550 |
| Self-built cppgm | 98.820 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 91.858 | 95.233 | 0.96× |
| 2 | 94.206 | 96.551 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 93.724 | 97.661 | 0.96× |
| 2 | 93.008 | 96.458 | 0.96× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.987. A/A variation limits conclusions about small differences.
