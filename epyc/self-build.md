# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`6ddc5326a`](https://github.com/vishvananda/cppgm/commit/6ddc5326a8c4d8752e1d92ecedf5228df07a50e8) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44597827043) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: 6ddc5326a8c4d8752e1d92ecedf5228df07a50e8.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.90× | 3.92× |
| Self-built compiler speed | 0.98× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 628.010 |
| Clang | 630.900 |
| GCC-built cppgm | 161.120 |
| Self-built cppgm | 162.410 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 157.719 | 161.088 | 0.98× |
| 2 | 157.908 | 159.912 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 160.676 | 159.056 | 1.01× |
| 2 | 157.859 | 158.105 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.008. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
