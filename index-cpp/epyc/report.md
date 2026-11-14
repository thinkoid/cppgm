# index-cpp benchmarks

Compiler checkout: `13d6afdf5bac47b7d64eb4438784eee62a4f3c21` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.066× | 1.054× |
| Compile CPU | 6.209× | 5.641× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 339,762 | 228,784 |
| gcc | 540,112 | 280,921 | 485,908 |
| clang | 513,720 | 264,561 | 319,252 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.401 | 1.187 | 1.199 | 0.848× | 0.856× | — |
| Base64::Encode | 1.694 | 1.426 | 1.281 | 0.841× | 0.754× | — |
| Binarytrees::Arena | 2.365 | 2.424 | 2.503 | 1.024× | 1.062× | — |
| Binarytrees::Obj | 1.636 | 1.594 | 1.727 | 0.976× | 1.053× | — |
| Brainfuck::Array | 2.611 | 2.809 | 2.868 | 1.099× | 1.086× | — |
| Brainfuck::Recursion | 1.778 | 1.740 | 1.712 | 0.983× | 0.978× | — |
| CLBG::Fannkuchredux | 0.996 | 1.141 | 0.978 | 1.149× | 0.980× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.990× | 0.978× | — |
| CLBG::Nbody | 1.038 | 1.057 | 1.056 | 1.018× | 1.019× | — |
| CLBG::Spectralnorm | 1.186 | 1.141 | 1.739 | 0.962× | 1.465× | — |
| CSV::Parse | 1.146 | 1.083 | 1.149 | 0.946× | 0.998× | — |
| Calculator::Ast | 1.030 | 0.962 | 0.980 | 0.935× | 0.949× | — |
| Calculator::Interpreter | 1.334 | 1.290 | 1.358 | 0.982× | 1.022× | — |
| Compress::ArithDecode | 0.940 | 0.945 | 1.604 | 1.005× | 1.707× | — |
| Compress::ArithEncode | 1.092 | 0.980 | 1.109 | 0.899× | 1.016× | — |
| Compress::BWTDecode | 0.641 | 0.647 | 0.657 | 1.009× | 1.026× | — |
| Compress::BWTEncode | 1.110 | 1.116 | 1.353 | 0.993× | 1.211× | gcc |
| Compress::HuffDecode | 0.623 | 0.777 | 0.514 | 1.248× | 0.821× | — |
| Compress::HuffEncode | 0.938 | 1.228 | 1.032 | 1.312× | 1.100× | — |
| Compress::LZWDecode | 0.730 | 0.729 | 0.699 | 1.001× | 0.960× | — |
| Compress::LZWEncode | 1.333 | 1.286 | 1.301 | 0.968× | 0.974× | — |
| Distance::Jaro | 1.201 | 1.171 | 1.148 | 0.976× | 0.955× | — |
| Distance::NGram | 1.362 | 1.322 | 1.294 | 0.972× | 0.946× | — |
| Etc::CacheSimulation | 1.155 | 1.105 | 1.127 | 0.952× | 0.976× | — |
| Etc::GameOfLife | 1.192 | 1.136 | 1.190 | 0.948× | 0.977× | — |
| Etc::LogParser | 0.530 | 1.992 | 0.661 | 3.720× | 1.246× | gcc, clang |
| Etc::NeuralNet | 1.257 | 1.099 | 1.078 | 0.838× | 0.860× | clang |
| Etc::Sieve | 1.387 | 1.901 | 1.382 | 1.300× | 0.991× | gcc, clang |
| Etc::TextRaytracer | 1.040 | 1.022 | 1.339 | 0.982× | 1.288× | — |
| Etc::Words | 1.322 | 1.281 | 1.328 | 0.971× | 0.998× | gcc |
| Graph::AStar | 1.167 | 1.295 | 1.054 | 1.117× | 0.905× | — |
| Graph::BFS | 1.673 | 1.162 | 1.086 | 0.697× | 0.665× | — |
| Graph::DFS | 1.343 | 1.160 | 1.215 | 0.859× | 0.908× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.746× | 3.125× | — |
| Hash::SHA256 | 0.453 | 1.473 | 1.375 | 3.256× | 3.037× | — |
| Json::Generate | 1.128 | 1.123 | 1.128 | 0.991× | 1.005× | — |
| Json::ParseDom | 1.266 | 1.191 | 1.189 | 0.944× | 0.936× | — |
| Json::ParseMapping | 1.205 | 1.132 | 1.135 | 0.943× | 0.939× | — |
| Matmul::Single | 1.390 | 1.389 | 1.387 | 1.000× | 0.997× | — |
| Matmul::T16 | 2.628 | 2.630 | 2.636 | 1.008× | 1.001× | — |
| Matmul::T4 | 1.357 | 1.356 | 1.356 | 0.999× | 0.998× | — |
| Matmul::T8 | 1.378 | 1.378 | 1.381 | 1.002× | 1.001× | — |
| Maze::AStar | 1.192 | 1.078 | 1.219 | 0.962× | 1.022× | — |
| Maze::BFS | 1.273 | 1.389 | 1.366 | 1.110× | 1.089× | gcc, clang |
| Maze::Generator | 1.187 | 1.227 | 1.206 | 1.057× | 1.008× | — |
| Sort::Merge | 0.868 | 1.125 | 1.024 | 1.296× | 1.180× | — |
| Sort::Quick | 1.347 | 1.232 | 1.250 | 0.916× | 0.928× | — |
| Sort::Self | 1.258 | 1.207 | 1.229 | 0.959× | 0.977× | — |
| Template::Parse | 1.235 | 1.204 | 1.203 | 0.973× | 0.978× | clang |
| Template::Regex | 1.262 | 1.321 | 1.478 | 1.031× | 1.164× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.986×.
Compile clang A/A CPU ratio: 0.995×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658294)
