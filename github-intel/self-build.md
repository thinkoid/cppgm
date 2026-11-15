# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`d9ff17ff1`](https://github.com/vishvananda/cppgm-extended/commit/d9ff17ff1c4afc36d90ba4a6551b659323cc65ec) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794254) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm++ CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: d9ff17ff1c4afc36d90ba4a6551b659323cc65ec.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm++ | 4.24× | 3.76× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm++ compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm++ binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 469.600 |
| Clang | 416.920 |
| GCC-built cppgm++ | 110.830 |
| Self-built cppgm++ | 113.040 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 115.898 | 115.830 | 1.00× |
| 2 | 112.844 | 114.207 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm++ (s) | Self-built cppgm++ (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 112.718 | 112.486 | 1.00× |
| 2 | 113.017 | 112.900 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
