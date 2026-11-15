# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`393bcf16e`](https://github.com/vishvananda/cppgm-extended/commit/393bcf16e6a1102a419fcfd176ee8b4bcb60b16a) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43674677916) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: 393bcf16e6a1102a419fcfd176ee8b4bcb60b16a.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 3.97× | 3.92× |
| Self-built compiler speed | 0.98× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 528.960 |
| Clang | 523.240 |
| GCC-built cppgm++ | 133.330 |
| Self-built cppgm++ | 134.850 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 136.595 | 140.822 | 0.97× |
| 2 | 133.844 | 135.092 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.017. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 134.420 | 134.252 | 1.00× |
| 2 | 133.342 | 133.394 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.988. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
