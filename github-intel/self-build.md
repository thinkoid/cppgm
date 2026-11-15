# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`97a28380a`](https://github.com/vishvananda/cppgm-extended/commit/97a28380aa74562cd03e9993b31f647e6729dd97) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398680) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 97a28380aa74562cd03e9993b31f647e6729dd97.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.18× | 3.70× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 490.410 |
| Clang | 434.820 |
| GCC-built cppgm++ | 117.430 |
| Self-built cppgm++ | 119.270 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 117.886 | 118.560 | 0.99× |
| 2 | 115.846 | 117.087 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 116.292 | 116.534 | 1.00× |
| 2 | 116.666 | 116.430 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
