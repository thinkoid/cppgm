# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43967972273) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 7763 64-Core Processor.

Measured compiler: 0785eb82196d630572f71a1967b3aa589dce33d3.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.02× | 4.43× |
| Self-built compiler speed | 1.00× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 797.070 |
| Clang | 878.840 |
| GCC-built cppgm | 198.420 |
| Self-built cppgm | 199.440 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 197.313 | 196.433 | 1.00× |
| 2 | 197.713 | 196.836 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 203.997 | 201.901 | 1.01× |
| 2 | 202.016 | 201.261 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
