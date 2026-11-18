# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`c49e45b16`](https://github.com/vishvananda/cppgm/commit/c49e45b16cddb1f5665d1f308b5e8e71622aea59) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44362912193) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: c49e45b16cddb1f5665d1f308b5e8e71622aea59.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.23× | 3.79× |
| Self-built compiler speed | 1.00× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 523.350 |
| Clang | 468.520 |
| GCC-built cppgm | 123.610 |
| Self-built cppgm | 125.770 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 121.983 | 122.527 | 1.00× |
| 2 | 124.034 | 124.379 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 122.666 | 124.267 | 0.99× |
| 2 | 125.453 | 124.791 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
