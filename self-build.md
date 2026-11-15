# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`de44b5cf8`](https://github.com/vishvananda/cppgm-extended/commit/de44b5cf8e143b4625737955531361b622b74bef) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43658653994) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: de44b5cf8e143b4625737955531361b622b74bef.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.04× | 3.95× |
| Self-built compiler speed | 0.99× | 0.99× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 555.390 |
| Clang | 543.890 |
| GCC-built cppgm++ | 137.540 |
| Self-built cppgm++ | 141.700 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 135.036 | 137.296 | 0.98× |
| 2 | 135.282 | 136.167 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.006. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 134.551 | 136.438 | 0.99× |
| 2 | 134.450 | 135.549 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
