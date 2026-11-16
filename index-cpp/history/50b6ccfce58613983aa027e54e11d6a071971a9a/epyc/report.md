# index-cpp benchmarks

Compiler checkout: `50b6ccfce58613983aa027e54e11d6a071971a9a` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.070× | 1.055× |
| Compile CPU | 6.385× | 5.875× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,712 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 318,944 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.419 | 1.209 | 1.216 | 0.852× | 0.855× | — |
| Base64::Encode | 1.691 | 1.466 | 1.305 | 0.867× | 0.771× | — |
| Binarytrees::Arena | 2.418 | 2.487 | 2.574 | 1.030× | 1.068× | — |
| Binarytrees::Obj | 1.572 | 1.617 | 1.737 | 1.035× | 1.104× | gcc |
| Brainfuck::Array | 2.610 | 2.814 | 2.764 | 1.120× | 1.057× | clang |
| Brainfuck::Recursion | 1.743 | 1.743 | 1.719 | 1.000× | 0.976× | gcc |
| CLBG::Fannkuchredux | 0.978 | 1.152 | 0.977 | 1.173× | 0.988× | — |
| CLBG::Mandelbrot | 1.365 | 1.352 | 1.337 | 0.989× | 0.979× | — |
| CLBG::Nbody | 1.038 | 1.059 | 1.058 | 1.021× | 1.020× | — |
| CLBG::Spectralnorm | 1.187 | 1.141 | 1.742 | 0.962× | 1.468× | — |
| CSV::Parse | 1.219 | 1.090 | 1.151 | 0.897× | 0.943× | — |
| Calculator::Ast | 1.033 | 0.972 | 0.986 | 0.928× | 0.958× | — |
| Calculator::Interpreter | 1.426 | 1.389 | 1.464 | 0.977× | 1.026× | gcc |
| Compress::ArithDecode | 0.938 | 0.947 | 1.605 | 1.010× | 1.708× | — |
| Compress::ArithEncode | 1.081 | 0.982 | 1.111 | 0.909× | 1.027× | — |
| Compress::BWTDecode | 0.652 | 0.656 | 0.665 | 1.008× | 1.022× | — |
| Compress::BWTEncode | 1.107 | 1.139 | 1.352 | 1.011× | 1.211× | — |
| Compress::HuffDecode | 0.621 | 0.782 | 0.519 | 1.256× | 0.835× | — |
| Compress::HuffEncode | 0.984 | 1.232 | 1.034 | 1.251× | 1.049× | — |
| Compress::LZWDecode | 0.735 | 0.734 | 0.698 | 0.993× | 0.951× | — |
| Compress::LZWEncode | 1.329 | 1.291 | 1.303 | 0.970× | 0.982× | — |
| Distance::Jaro | 1.214 | 1.171 | 1.150 | 0.965× | 0.948× | — |
| Distance::NGram | 1.371 | 1.325 | 1.293 | 0.971× | 0.943× | — |
| Etc::CacheSimulation | 1.144 | 1.104 | 1.117 | 0.971× | 0.986× | — |
| Etc::GameOfLife | 1.315 | 1.257 | 1.306 | 0.944× | 0.985× | gcc |
| Etc::LogParser | 0.521 | 2.005 | 0.669 | 3.800× | 1.304× | gcc |
| Etc::NeuralNet | 1.256 | 1.107 | 1.081 | 0.884× | 0.826× | gcc |
| Etc::Sieve | 1.460 | 1.957 | 1.383 | 1.359× | 0.950× | — |
| Etc::TextRaytracer | 1.039 | 1.024 | 1.341 | 0.984× | 1.288× | — |
| Etc::Words | 1.333 | 1.289 | 1.345 | 0.967× | 1.009× | — |
| Graph::AStar | 1.155 | 1.313 | 1.062 | 1.135× | 0.921× | — |
| Graph::BFS | 1.514 | 1.238 | 1.164 | 0.820× | 0.766× | — |
| Graph::DFS | 1.365 | 1.180 | 1.226 | 0.864× | 0.891× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.916 | 2.751× | 3.121× | — |
| Hash::SHA256 | 0.452 | 1.476 | 1.378 | 3.263× | 3.051× | — |
| Json::Generate | 1.141 | 1.136 | 1.147 | 0.993× | 1.006× | — |
| Json::ParseDom | 1.290 | 1.210 | 1.200 | 0.933× | 0.928× | — |
| Json::ParseMapping | 1.226 | 1.148 | 1.144 | 0.938× | 0.937× | — |
| Matmul::Single | 1.385 | 1.385 | 1.382 | 0.999× | 0.996× | — |
| Matmul::T16 | 2.635 | 2.635 | 2.636 | 0.998× | 0.991× | — |
| Matmul::T4 | 1.354 | 1.354 | 1.353 | 1.000× | 1.000× | — |
| Matmul::T8 | 1.377 | 1.373 | 1.379 | 0.995× | 1.004× | — |
| Maze::AStar | 1.380 | 1.272 | 1.424 | 0.915× | 1.033× | — |
| Maze::BFS | 1.510 | 1.542 | 1.503 | 0.971× | 1.004× | gcc |
| Maze::Generator | 1.236 | 1.300 | 1.266 | 1.051× | 1.023× | — |
| Sort::Merge | 0.865 | 1.133 | 1.029 | 1.309× | 1.190× | — |
| Sort::Quick | 1.353 | 1.235 | 1.254 | 0.913× | 0.926× | — |
| Sort::Self | 1.260 | 1.210 | 1.231 | 0.960× | 0.977× | — |
| Template::Parse | 1.601 | 1.613 | 1.555 | 0.994× | 0.969× | gcc |
| Template::Regex | 1.489 | 1.546 | 1.689 | 1.044× | 1.140× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.997×.
Compile clang A/A CPU ratio: 0.994×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.5 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760120)
