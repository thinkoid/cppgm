# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`fd8d08c23`](https://github.com/vishvananda/cppgm/commit/fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43740486360) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.12× | 3.69× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 515.460 |
| Clang | 461.520 |
| GCC-built cppgm | 124.960 |
| Self-built cppgm | 127.210 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 122.549 | 124.107 | 0.99× |
| 2 | 124.195 | 124.354 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 124.514 | 124.913 | 1.00× |
| 2 | 124.864 | 124.839 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.008. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
