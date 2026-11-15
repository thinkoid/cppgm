# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`54b8d0eeb`](https://github.com/vishvananda/cppgm-extended/commit/54b8d0eeb4b4d132a869dcf623e314c78269b705) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43682127051) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: AMD EPYC 7763 64-Core Processor.

Measured compiler: 54b8d0eeb4b4d132a869dcf623e314c78269b705.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.02× | 4.38× |
| Self-built compiler speed | 1.00× | 1.01× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 725.420 |
| Clang | 791.210 |
| GCC-built cppgm++ | 180.650 |
| Self-built cppgm++ | 184.060 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 181.923 | 182.039 | 1.00× |
| 2 | 181.758 | 181.649 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 183.190 | 181.533 | 1.01× |
| 2 | 182.575 | 181.402 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
