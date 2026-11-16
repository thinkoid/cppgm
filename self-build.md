# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43801643583) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: 33a92f123a1965a6a3ed154f1e785aef2f56b4a7.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.83× | 4.00× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 576.540 |
| Clang | 602.400 |
| GCC-built cppgm | 150.640 |
| Self-built cppgm | 153.680 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 150.778 | 152.235 | 0.99× |
| 2 | 150.364 | 150.581 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 153.288 | 153.103 | 1.00× |
| 2 | 148.987 | 149.260 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.993. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
