# index-cpp benchmarks

Compiler checkout: `8401c869bd9c750084470a8686c057b7f9a0da61` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.065× | 1.053× |
| Compile CPU | 6.266× | 5.727× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,842 |
| gcc | 540,112 | 280,921 | 485,994 |
| clang | 513,720 | 264,561 | 319,066 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.411 | 1.212 | 1.195 | 0.856× | 0.858× | — |
| Base64::Encode | 1.728 | 1.477 | 1.266 | 0.849× | 0.758× | — |
| Binarytrees::Arena | 2.398 | 2.471 | 2.523 | 1.023× | 1.064× | — |
| Binarytrees::Obj | 1.433 | 1.480 | 1.605 | 0.985× | 1.149× | gcc |
| Brainfuck::Array | 2.814 | 2.811 | 2.833 | 0.999× | 1.016× | — |
| Brainfuck::Recursion | 1.741 | 1.742 | 1.702 | 1.005× | 0.971× | — |
| CLBG::Fannkuchredux | 1.000 | 1.151 | 0.974 | 1.147× | 0.978× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.989× | 0.978× | — |
| CLBG::Nbody | 1.037 | 1.058 | 1.057 | 1.018× | 1.020× | — |
| CLBG::Spectralnorm | 1.184 | 1.140 | 1.739 | 0.963× | 1.469× | — |
| CSV::Parse | 1.180 | 1.086 | 1.149 | 0.917× | 0.975× | — |
| Calculator::Ast | 1.034 | 0.959 | 0.981 | 0.931× | 0.945× | gcc |
| Calculator::Interpreter | 1.386 | 1.335 | 1.341 | 0.962× | 1.008× | gcc, clang |
| Compress::ArithDecode | 0.940 | 0.949 | 1.602 | 1.009× | 1.703× | — |
| Compress::ArithEncode | 1.088 | 0.981 | 1.111 | 0.902× | 1.021× | — |
| Compress::BWTDecode | 0.644 | 0.652 | 0.655 | 1.009× | 1.027× | — |
| Compress::BWTEncode | 1.099 | 1.139 | 1.352 | 1.020× | 1.224× | — |
| Compress::HuffDecode | 0.625 | 0.783 | 0.512 | 1.248× | 0.822× | — |
| Compress::HuffEncode | 0.980 | 1.223 | 1.034 | 1.247× | 1.055× | — |
| Compress::LZWDecode | 0.735 | 0.735 | 0.700 | 0.995× | 0.952× | gcc |
| Compress::LZWEncode | 1.328 | 1.292 | 1.307 | 0.974× | 0.991× | — |
| Distance::Jaro | 1.206 | 1.171 | 1.148 | 0.971× | 0.953× | — |
| Distance::NGram | 1.364 | 1.321 | 1.297 | 0.968× | 0.952× | gcc |
| Etc::CacheSimulation | 1.145 | 1.105 | 1.123 | 0.961× | 0.982× | gcc |
| Etc::GameOfLife | 1.242 | 1.260 | 1.157 | 0.990× | 1.012× | clang |
| Etc::LogParser | 0.529 | 1.985 | 0.663 | 3.751× | 1.249× | gcc |
| Etc::NeuralNet | 1.251 | 1.101 | 1.081 | 0.887× | 0.824× | gcc, clang |
| Etc::Sieve | 1.385 | 1.821 | 1.372 | 1.285× | 0.991× | clang |
| Etc::TextRaytracer | 1.043 | 1.024 | 1.338 | 0.982× | 1.283× | — |
| Etc::Words | 1.333 | 1.273 | 1.330 | 0.952× | 0.997× | clang |
| Graph::AStar | 1.179 | 1.317 | 1.026 | 1.114× | 0.902× | clang |
| Graph::BFS | 1.751 | 1.254 | 1.036 | 0.712× | 0.665× | clang |
| Graph::DFS | 1.383 | 1.185 | 1.175 | 0.855× | 0.907× | clang |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.751× | 3.125× | — |
| Hash::SHA256 | 0.452 | 1.473 | 1.379 | 3.260× | 3.050× | — |
| Json::Generate | 1.150 | 1.133 | 1.143 | 0.983× | 0.996× | gcc |
| Json::ParseDom | 1.267 | 1.199 | 1.188 | 0.949× | 0.939× | — |
| Json::ParseMapping | 1.204 | 1.143 | 1.131 | 0.947× | 0.940× | — |
| Matmul::Single | 1.386 | 1.386 | 1.382 | 1.000× | 0.997× | — |
| Matmul::T16 | 2.619 | 2.621 | 2.618 | 1.005× | 1.000× | — |
| Matmul::T4 | 1.354 | 1.353 | 1.353 | 0.999× | 1.000× | — |
| Matmul::T8 | 1.372 | 1.373 | 1.375 | 0.999× | 1.004× | — |
| Maze::AStar | 1.310 | 1.309 | 1.071 | 0.951× | 1.010× | gcc, clang |
| Maze::BFS | 1.498 | 1.724 | 1.103 | 1.082× | 1.098× | gcc, clang |
| Maze::Generator | 1.264 | 1.336 | 1.233 | 1.051× | 1.012× | clang |
| Sort::Merge | 0.869 | 1.130 | 1.024 | 1.296× | 1.179× | — |
| Sort::Quick | 1.346 | 1.234 | 1.250 | 0.916× | 0.928× | — |
| Sort::Self | 1.250 | 1.208 | 1.229 | 0.965× | 0.983× | — |
| Template::Parse | 1.541 | 1.631 | 1.137 | 1.032× | 0.966× | gcc, clang |
| Template::Regex | 1.450 | 1.530 | 1.417 | 0.982× | 1.128× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.999×.
Compile clang A/A CPU ratio: 0.989×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638392000)
