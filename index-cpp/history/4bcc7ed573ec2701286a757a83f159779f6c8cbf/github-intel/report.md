# index-cpp benchmarks

Compiler checkout: `4bcc7ed573ec2701286a757a83f159779f6c8cbf` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.090× | 1.090× |
| Compile CPU | 6.295× | 5.015× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,768 |
| gcc | 540,112 | 280,921 | 486,026 |
| clang | 513,720 | 264,561 | 319,588 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.839 | 0.734 | 0.837 | 0.873× | 1.000× | — |
| Base64::Encode | 0.825 | 1.002 | 0.789 | 1.213× | 0.957× | — |
| Binarytrees::Arena | 1.929 | 2.046 | 2.030 | 1.073× | 1.089× | gcc, clang |
| Binarytrees::Obj | 0.946 | 0.891 | 1.192 | 0.941× | 1.232× | gcc, clang |
| Brainfuck::Array | 1.634 | 1.655 | 1.706 | 1.013× | 1.038× | — |
| Brainfuck::Recursion | 1.128 | 1.207 | 1.422 | 1.074× | 1.264× | — |
| CLBG::Fannkuchredux | 0.898 | 0.975 | 0.833 | 1.086× | 0.928× | — |
| CLBG::Mandelbrot | 0.946 | 0.980 | 0.973 | 1.036× | 1.029× | — |
| CLBG::Nbody | 0.661 | 0.623 | 0.636 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.979 | 0.938 | 1.319 | 0.959× | 1.347× | — |
| CSV::Parse | 0.851 | 0.794 | 0.928 | 0.932× | 1.092× | — |
| Calculator::Ast | 0.853 | 0.797 | 0.832 | 0.926× | 0.970× | gcc, clang |
| Calculator::Interpreter | 1.137 | 1.099 | 1.248 | 0.978× | 1.076× | gcc, clang |
| Compress::ArithDecode | 0.879 | 1.015 | 1.493 | 1.152× | 1.698× | — |
| Compress::ArithEncode | 1.013 | 0.998 | 1.075 | 0.985× | 1.061× | — |
| Compress::BWTDecode | 1.307 | 1.306 | 1.308 | 0.998× | 1.003× | — |
| Compress::BWTEncode | 0.754 | 0.780 | 0.924 | 1.032× | 1.226× | — |
| Compress::HuffDecode | 0.445 | 0.730 | 0.391 | 1.641× | 0.886× | — |
| Compress::HuffEncode | 0.827 | 0.929 | 0.832 | 1.123× | 1.010× | — |
| Compress::LZWDecode | 0.575 | 0.573 | 0.548 | 0.998× | 0.952× | — |
| Compress::LZWEncode | 0.957 | 0.948 | 0.956 | 0.990× | 1.000× | — |
| Distance::Jaro | 1.157 | 1.190 | 1.205 | 1.028× | 1.042× | — |
| Distance::NGram | 1.179 | 1.189 | 1.127 | 1.009× | 0.956× | — |
| Etc::CacheSimulation | 0.817 | 0.786 | 0.806 | 0.961× | 0.987× | — |
| Etc::GameOfLife | 1.098 | 1.110 | 1.091 | 1.010× | 0.993× | — |
| Etc::LogParser | 0.398 | 1.192 | 0.441 | 3.028× | 1.105× | gcc, clang |
| Etc::NeuralNet | 0.784 | 0.728 | 0.710 | 0.927× | 0.906× | — |
| Etc::Sieve | 2.415 | 3.094 | 2.380 | 1.286× | 0.987× | — |
| Etc::TextRaytracer | 0.647 | 0.634 | 0.828 | 0.978× | 1.279× | — |
| Etc::Words | 0.926 | 0.900 | 0.905 | 0.972× | 0.978× | — |
| Graph::AStar | 1.015 | 1.183 | 1.056 | 1.157× | 0.955× | gcc, clang |
| Graph::BFS | 0.787 | 0.712 | 0.891 | 0.827× | 1.003× | gcc, clang |
| Graph::DFS | 1.051 | 0.966 | 1.022 | 0.933× | 0.967× | gcc, clang |
| Hash::CRC32 | 0.245 | 0.718 | 1.007 | 2.929× | 4.108× | — |
| Hash::SHA256 | 0.354 | 0.916 | 0.780 | 2.584× | 2.201× | — |
| Json::Generate | 0.848 | 0.855 | 0.851 | 1.008× | 1.003× | — |
| Json::ParseDom | 1.028 | 0.981 | 0.969 | 0.952× | 0.943× | — |
| Json::ParseMapping | 0.973 | 0.931 | 0.923 | 0.958× | 0.950× | — |
| Matmul::Single | 0.762 | 0.762 | 0.762 | 0.997× | 1.001× | — |
| Matmul::T16 | 1.618 | 1.618 | 1.594 | 0.997× | 0.992× | — |
| Matmul::T4 | 0.776 | 0.780 | 0.774 | 1.003× | 0.997× | — |
| Matmul::T8 | 0.829 | 0.829 | 0.826 | 1.006× | 0.993× | — |
| Maze::AStar | 0.960 | 0.908 | 0.923 | 0.949× | 1.089× | gcc, clang |
| Maze::BFS | 0.718 | 0.713 | 0.736 | 1.011× | 1.035× | gcc, clang |
| Maze::Generator | 1.188 | 1.529 | 1.503 | 1.212× | 1.221× | gcc |
| Sort::Merge | 0.728 | 1.058 | 0.850 | 1.453× | 1.168× | — |
| Sort::Quick | 1.115 | 1.148 | 1.126 | 1.028× | 1.008× | — |
| Sort::Self | 1.176 | 1.085 | 1.104 | 0.922× | 0.938× | — |
| Template::Parse | 1.051 | 1.062 | 1.101 | 0.971× | 1.035× | gcc |
| Template::Regex | 0.915 | 0.958 | 1.101 | 1.034× | 1.195× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.995×.
Compile clang A/A CPU ratio: 0.998×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.6 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592196)
