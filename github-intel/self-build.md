# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`f77a0af0a`](https://github.com/vishvananda/cppgm-extended/commit/f77a0af0a4dff64a88aa767427b9fac47da1949e) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287735) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

Measured compiler: f77a0af0a4dff64a88aa767427b9fac47da1949e.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.06× | 3.61× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 659.340 |
| Clang | 585.030 |
| GCC-built cppgm++ | 162.280 |
| Self-built cppgm++ | 164.600 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 161.093 | 162.703 | 0.99× |
| 2 | 162.229 | 163.717 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 161.899 | 162.853 | 0.99× |
| 2 | 161.180 | 161.316 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
