# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`323a88769`](https://github.com/vishvananda/cppgm-extended/commit/323a88769fae13042a86c1b993819b966b906ca5) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819374) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

Measured compiler: 323a88769fae13042a86c1b993819b966b906ca5.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.11× | 3.62× |
| Self-built compiler speed | 0.99× | 0.99× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 636.520 |
| Clang | 560.500 |
| GCC-built cppgm++ | 154.900 |
| Self-built cppgm++ | 156.880 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 153.990 | 155.299 | 0.99× |
| 2 | 153.187 | 154.740 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 153.613 | 154.711 | 0.99× |
| 2 | 153.591 | 154.734 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.997. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
