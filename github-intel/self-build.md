# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`94aaecc52`](https://github.com/vishvananda/cppgm/commit/94aaecc52ac26996bd3d654522334e3c28c68457) · [CI run](https://github.com/thinkoid/cppgm/actions/runs/44661842949) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz.

Measured compiler: 94aaecc52ac26996bd3d654522334e3c28c68457.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.30× | 3.98× |
| Self-built compiler speed | 1.01× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 804.240 |
| Clang | 744.290 |
| GCC-built cppgm | 186.950 |
| Self-built cppgm | 187.380 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 185.465 | 184.736 | 1.00× |
| 2 | 185.236 | 183.960 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 185.811 | 183.628 | 1.01× |
| 2 | 185.492 | 183.522 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
