# index-cpp benchmarks

Compiler checkout: `7697b5524a9b033f6a1350581507ee478d068097` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.071× | 1.059× |
| Compile CPU | 6.489× | 5.344× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,642 |
| gcc | 540,112 | 280,921 | 485,994 |
| clang | 513,720 | 264,561 | 319,010 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.168 | 0.953 | 0.992 | 0.816× | 0.850× | — |
| Base64::Encode | 1.384 | 1.197 | 1.003 | 0.864× | 0.722× | — |
| Binarytrees::Arena | 2.064 | 2.181 | 2.147 | 1.048× | 1.044× | — |
| Binarytrees::Obj | 2.111 | 1.978 | 2.067 | 0.948× | 0.994× | clang |
| Brainfuck::Array | 1.301 | 2.139 | 1.546 | 1.643× | 1.196× | gcc, clang |
| Brainfuck::Recursion | 1.064 | 1.184 | 1.141 | 1.113× | 1.070× | clang |
| CLBG::Fannkuchredux | 0.907 | 0.983 | 0.896 | 1.077× | 0.988× | — |
| CLBG::Mandelbrot | 1.228 | 1.174 | 1.115 | 0.957× | 0.908× | — |
| CLBG::Nbody | 0.890 | 0.891 | 0.895 | 1.003× | 1.006× | — |
| CLBG::Spectralnorm | 0.954 | 0.927 | 1.577 | 0.964× | 1.654× | — |
| CSV::Parse | 0.904 | 0.821 | 0.909 | 0.913× | 1.002× | — |
| Calculator::Ast | 0.834 | 0.753 | 0.793 | 0.900× | 0.945× | gcc |
| Calculator::Interpreter | 1.215 | 1.105 | 1.183 | 0.880× | 1.006× | clang |
| Compress::ArithDecode | 0.797 | 0.813 | 1.395 | 1.018× | 1.750× | — |
| Compress::ArithEncode | 0.921 | 0.854 | 0.952 | 0.918× | 1.033× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.558 | 0.970× | 1.004× | — |
| Compress::BWTEncode | 0.837 | 0.855 | 0.984 | 1.022× | 1.178× | — |
| Compress::HuffDecode | 0.478 | 0.599 | 0.414 | 1.251× | 0.868× | — |
| Compress::HuffEncode | 0.806 | 0.776 | 0.917 | 0.965× | 1.136× | clang |
| Compress::LZWDecode | 0.601 | 0.658 | 0.564 | 1.099× | 0.939× | — |
| Compress::LZWEncode | 0.996 | 0.976 | 0.996 | 0.984× | 1.001× | — |
| Distance::Jaro | 1.040 | 1.051 | 0.978 | 1.010× | 0.942× | — |
| Distance::NGram | 1.113 | 1.074 | 1.052 | 0.964× | 0.951× | — |
| Etc::CacheSimulation | 0.909 | 0.879 | 0.891 | 0.975× | 0.974× | — |
| Etc::GameOfLife | 1.075 | 1.038 | 1.073 | 0.962× | 0.997× | gcc, clang |
| Etc::LogParser | 0.414 | 1.752 | 0.528 | 4.205× | 1.274× | gcc, clang |
| Etc::NeuralNet | 0.974 | 0.837 | 0.823 | 0.855× | 0.795× | clang |
| Etc::Sieve | 1.183 | 1.565 | 1.193 | 1.322× | 1.008× | — |
| Etc::TextRaytracer | 0.896 | 0.881 | 1.060 | 0.983× | 1.184× | — |
| Etc::Words | 1.002 | 0.970 | 1.008 | 0.966× | 1.011× | — |
| Graph::AStar | 1.108 | 1.256 | 0.998 | 1.102× | 0.934× | — |
| Graph::BFS | 1.603 | 1.294 | 1.196 | 0.815× | 0.752× | gcc |
| Graph::DFS | 1.437 | 1.244 | 1.264 | 0.838× | 0.884× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.169 | 1.179 | 3.060× | 3.080× | — |
| Json::Generate | 0.772 | 0.778 | 0.774 | 1.010× | 1.003× | — |
| Json::ParseDom | 0.954 | 0.913 | 0.887 | 0.950× | 0.917× | — |
| Json::ParseMapping | 0.911 | 0.865 | 0.850 | 0.949× | 0.932× | — |
| Matmul::Single | 1.187 | 1.182 | 1.184 | 0.998× | 0.993× | — |
| Matmul::T16 | 2.356 | 2.301 | 2.298 | 0.977× | 0.973× | — |
| Matmul::T4 | 1.170 | 1.170 | 1.164 | 1.000× | 0.993× | — |
| Matmul::T8 | 1.231 | 1.204 | 1.200 | 0.973× | 0.981× | — |
| Maze::AStar | 1.234 | 1.147 | 1.306 | 0.969× | 1.117× | clang |
| Maze::BFS | 1.094 | 1.038 | 1.066 | 0.979× | 0.998× | gcc |
| Maze::Generator | 1.312 | 1.379 | 1.321 | 0.987× | 0.997× | gcc |
| Sort::Merge | 0.750 | 0.988 | 0.878 | 1.318× | 1.172× | — |
| Sort::Quick | 1.138 | 1.087 | 1.101 | 0.955× | 0.967× | — |
| Sort::Self | 1.094 | 1.042 | 1.057 | 0.952× | 0.966× | — |
| Template::Parse | 0.964 | 0.991 | 1.021 | 1.040× | 1.078× | gcc, clang |
| Template::Regex | 1.011 | 1.081 | 1.148 | 1.056× | 1.146× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.991×.
Compile clang A/A CPU ratio: 1.002×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980)
