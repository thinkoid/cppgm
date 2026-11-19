# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`7697b5524`](https://github.com/vishvananda/cppgm/commit/7697b5524a9b033f6a1350581507ee478d068097) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44560957980) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 7697b5524a9b033f6a1350581507ee478d068097.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.20× | 3.75× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 583.880 |
| Clang | 520.730 |
| GCC-built cppgm | 138.980 |
| Self-built cppgm | 140.350 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 136.617 | 138.256 | 0.99× |
| 2 | 139.143 | 139.006 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.004. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 140.628 | 140.048 | 1.00× |
| 2 | 139.670 | 138.854 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
