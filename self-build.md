# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`90ebfa8f4`](https://github.com/vishvananda/cppgm/commit/90ebfa8f4eed49b0d61b4b4993914107c23a761e) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44260407374) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: 90ebfa8f4eed49b0d61b4b4993914107c23a761e.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.85× | 3.56× |
| Self-built compiler speed | 0.98× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 479.700 |
| Clang | 442.440 |
| GCC-built cppgm | 124.440 |
| Self-built cppgm | 125.480 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 123.298 | 124.049 | 0.99× |
| 2 | 121.219 | 124.940 | 0.97× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 120.031 | 117.695 | 1.02× |
| 2 | 120.535 | 121.257 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.019. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
