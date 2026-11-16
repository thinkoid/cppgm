# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`4b05c8780`](https://github.com/vishvananda/cppgm/commit/4b05c87802afb837551466590e3eb75c8099ec82) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43822097722) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 4b05c87802afb837551466590e3eb75c8099ec82.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.27× | 3.84× |
| Self-built compiler speed | 0.99× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 514.900 |
| Clang | 463.220 |
| GCC-built cppgm | 120.690 |
| Self-built cppgm | 123.060 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 125.617 | 126.218 | 1.00× |
| 2 | 125.479 | 126.305 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 127.506 | 128.340 | 0.99× |
| 2 | 127.366 | 127.870 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
