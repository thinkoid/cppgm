# Compiler build and codegen benchmarks: Intel Xeon (dedicated)

Measured compiler: [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43924085160) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz.

Measured compiler: 50b6ccfce58613983aa027e54e11d6a071971a9a.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 16.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.94× | 3.35× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 431.710 |
| Clang | 367.350 |
| GCC-built cppgm | 109.700 |
| Self-built cppgm | 111.680 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 109.639 | 110.628 | 0.99× |
| 2 | 109.649 | 110.653 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 110.327 | 110.578 | 1.00× |
| 2 | 110.344 | 110.596 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
