# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`32b57ecb1`](https://github.com/vishvananda/cppgm-extended/commit/32b57ecb146865fc206be7a79a159bc13e644dc1) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138796) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 32b57ecb146865fc206be7a79a159bc13e644dc1.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.15× | 3.67× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 484.590 |
| Clang | 428.310 |
| GCC-built cppgm++ | 116.760 |
| Self-built cppgm++ | 119.020 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 117.050 | 118.048 | 0.99× |
| 2 | 117.099 | 118.881 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.997. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 116.794 | 116.881 | 1.00× |
| 2 | 116.978 | 117.729 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
