# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43785224078) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 41e06a23e91609dbf050866ef3a7de4848cf17ed.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.21× | 3.78× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 511.400 |
| Clang | 459.570 |
| GCC-built cppgm | 121.520 |
| Self-built cppgm | 124.070 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 122.924 | 123.900 | 0.99× |
| 2 | 122.513 | 123.509 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 126.117 | 125.787 | 1.00× |
| 2 | 125.448 | 125.026 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.004. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
