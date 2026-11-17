# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44000592089) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 4bcc7ed573ec2701286a757a83f159779f6c8cbf.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.25× | 3.78× |
| Self-built compiler speed | 1.00× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 505.690 |
| Clang | 449.250 |
| GCC-built cppgm | 118.890 |
| Self-built cppgm | 120.550 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 117.576 | 118.142 | 1.00× |
| 2 | 118.198 | 118.653 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 118.470 | 120.335 | 0.98× |
| 2 | 119.287 | 119.261 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.995. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
