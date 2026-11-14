# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`b19fe4925`](https://github.com/vishvananda/cppgm-extended/commit/b19fe49250af0b6050c1791ff584c423942b8b79) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677138) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: b19fe49250af0b6050c1791ff584c423942b8b79.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 3.88× | 3.49× |
| Self-built compiler speed | 0.97× | 0.98× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 467.960 |
| Clang | 420.590 |
| GCC-built cppgm++ | 120.620 |
| Self-built cppgm++ | 118.150 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 117.565 | 119.713 | 0.98× |
| 2 | 109.353 | 115.020 | 0.95× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 109.564 | 112.103 | 0.98× |
| 2 | 110.398 | 112.007 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.978. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
