# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`b8749c615`](https://github.com/vishvananda/cppgm/commit/b8749c61550bdf9b4d65e7e01182a1f856100a46) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43712368944) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: b8749c61550bdf9b4d65e7e01182a1f856100a46.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.19× | 3.47× |
| Self-built compiler speed | 0.98× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 481.210 |
| Clang | 397.790 |
| GCC-built cppgm | 114.790 |
| Self-built cppgm | 114.670 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 114.030 | 117.604 | 0.97× |
| 2 | 113.583 | 115.728 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.990. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 110.329 | 112.069 | 0.98× |
| 2 | 121.553 | 119.235 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.017. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
