# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`0b676f053`](https://github.com/vishvananda/cppgm-extended/commit/0b676f0538e48bc09cabec50cc9ce76155ba448f) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060678) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 0b676f0538e48bc09cabec50cc9ce76155ba448f.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.17× | 3.71× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 478.280 |
| Clang | 424.830 |
| GCC-built cppgm++ | 114.650 |
| Self-built cppgm++ | 116.540 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 114.252 | 115.187 | 0.99× |
| 2 | 114.246 | 115.454 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 115.037 | 115.184 | 1.00× |
| 2 | 115.276 | 115.606 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
