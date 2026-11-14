# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`13d6afdf5`](https://github.com/vishvananda/cppgm-extended/commit/13d6afdf5bac47b7d64eb4438784eee62a4f3c21) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658313) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: 13d6afdf5bac47b7d64eb4438784eee62a4f3c21.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 3.98× | 3.95× |
| Self-built compiler speed | 1.00× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 521.690 |
| Clang | 518.740 |
| GCC-built cppgm++ | 131.230 |
| Self-built cppgm++ | 135.990 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 132.702 | 132.863 | 1.00× |
| 2 | 133.029 | 133.059 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 133.275 | 133.084 | 1.00× |
| 2 | 133.711 | 132.822 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
