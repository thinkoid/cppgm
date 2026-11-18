# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`03db3c34a`](https://github.com/vishvananda/cppgm/commit/03db3c34a507ea98ae7816600ed3fd7bd054a1a9) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44402206984) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 03db3c34a507ea98ae7816600ed3fd7bd054a1a9.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.22× | 3.77× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 548.190 |
| Clang | 490.030 |
| GCC-built cppgm | 129.940 |
| Self-built cppgm | 132.160 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 131.922 | 132.766 | 0.99× |
| 2 | 131.314 | 132.182 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 130.901 | 130.598 | 1.00× |
| 2 | 128.033 | 127.978 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
