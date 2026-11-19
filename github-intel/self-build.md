# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`c6ed61003`](https://github.com/vishvananda/cppgm/commit/c6ed610030ba933d83205fb17744340b2206efa7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44481767416) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: c6ed610030ba933d83205fb17744340b2206efa7.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.22× | 3.80× |
| Self-built compiler speed | 1.00× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 559.390 |
| Clang | 503.720 |
| GCC-built cppgm | 132.470 |
| Self-built cppgm | 134.930 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 133.676 | 134.329 | 1.00× |
| 2 | 133.808 | 134.334 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 133.670 | 133.208 | 1.00× |
| 2 | 132.830 | 133.625 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.004. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
