# index-cpp benchmarks

Compiler checkout: `fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.058× | 1.057× |
| Compile CPU | 6.328× | 5.811× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 711,112 | 338,162 | 229,268 |
| gcc | 540,112 | 280,921 | 486,038 |
| clang | 513,720 | 264,561 | 318,374 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.421 | 1.207 | 1.216 | 0.849× | 0.861× | — |
| Base64::Encode | 1.693 | 1.453 | 1.300 | 0.857× | 0.781× | — |
| Binarytrees::Arena | 2.446 | 2.514 | 2.581 | 1.028× | 1.069× | — |
| Binarytrees::Obj | 1.539 | 1.430 | 1.675 | 0.915× | 1.102× | clang |
| Brainfuck::Array | 2.663 | 2.810 | 2.700 | 1.096× | 1.081× | — |
| Brainfuck::Recursion | 1.781 | 1.743 | 1.710 | 0.980× | 0.963× | clang |
| CLBG::Fannkuchredux | 0.994 | 1.151 | 0.978 | 1.164× | 0.989× | — |
| CLBG::Mandelbrot | 1.366 | 1.351 | 1.336 | 0.987× | 0.977× | — |
| CLBG::Nbody | 1.038 | 1.056 | 1.058 | 1.017× | 1.019× | — |
| CLBG::Spectralnorm | 1.185 | 1.139 | 1.739 | 0.961× | 1.467× | — |
| CSV::Parse | 1.219 | 1.082 | 1.151 | 0.888× | 0.943× | — |
| Calculator::Ast | 1.015 | 0.963 | 0.986 | 0.955× | 0.967× | gcc |
| Calculator::Interpreter | 1.462 | 1.348 | 1.436 | 0.902× | 0.985× | gcc |
| Compress::ArithDecode | 0.938 | 0.948 | 1.605 | 1.011× | 1.715× | — |
| Compress::ArithEncode | 1.080 | 0.981 | 1.111 | 0.907× | 1.029× | — |
| Compress::BWTDecode | 0.649 | 0.648 | 0.661 | 1.003× | 1.016× | — |
| Compress::BWTEncode | 1.110 | 1.098 | 1.352 | 0.992× | 1.212× | — |
| Compress::HuffDecode | 0.621 | 0.777 | 0.518 | 1.261× | 0.830× | — |
| Compress::HuffEncode | 0.984 | 1.225 | 1.036 | 1.239× | 1.051× | — |
| Compress::LZWDecode | 0.734 | 0.729 | 0.694 | 0.999× | 0.946× | — |
| Compress::LZWEncode | 1.333 | 1.297 | 1.314 | 0.978× | 0.985× | — |
| Distance::Jaro | 1.209 | 1.172 | 1.148 | 0.970× | 0.950× | — |
| Distance::NGram | 1.369 | 1.328 | 1.296 | 0.972× | 0.952× | — |
| Etc::CacheSimulation | 1.162 | 1.113 | 1.125 | 0.958× | 0.962× | clang |
| Etc::GameOfLife | 1.321 | 1.165 | 1.235 | 0.891× | 0.920× | clang |
| Etc::LogParser | 0.519 | 1.959 | 0.659 | 3.751× | 1.265× | gcc |
| Etc::NeuralNet | 1.248 | 1.100 | 1.083 | 0.871× | 0.904× | — |
| Etc::Sieve | 1.390 | 1.825 | 1.393 | 1.292× | 0.998× | gcc, clang |
| Etc::TextRaytracer | 1.039 | 1.019 | 1.339 | 0.980× | 1.288× | — |
| Etc::Words | 1.331 | 1.286 | 1.335 | 0.968× | 1.000× | — |
| Graph::AStar | 1.162 | 1.308 | 1.060 | 1.125× | 0.913× | — |
| Graph::BFS | 1.512 | 1.226 | 1.163 | 0.804× | 0.769× | clang |
| Graph::DFS | 1.365 | 1.168 | 1.224 | 0.855× | 0.903× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.751× | 3.125× | — |
| Hash::SHA256 | 0.452 | 1.477 | 1.383 | 3.264× | 3.061× | — |
| Json::Generate | 1.141 | 1.131 | 1.151 | 0.991× | 1.006× | — |
| Json::ParseDom | 1.287 | 1.191 | 1.188 | 0.926× | 0.925× | — |
| Json::ParseMapping | 1.222 | 1.135 | 1.136 | 0.926× | 0.915× | — |
| Matmul::Single | 1.389 | 1.389 | 1.384 | 1.000× | 0.997× | — |
| Matmul::T16 | 2.641 | 2.643 | 2.644 | 0.994× | 0.999× | — |
| Matmul::T4 | 1.356 | 1.357 | 1.356 | 1.000× | 1.000× | — |
| Matmul::T8 | 1.379 | 1.373 | 1.379 | 0.995× | 0.995× | — |
| Maze::AStar | 1.390 | 1.235 | 1.396 | 0.877× | 1.006× | gcc, clang |
| Maze::BFS | 1.485 | 1.615 | 1.587 | 1.117× | 1.122× | gcc |
| Maze::Generator | 1.252 | 1.293 | 1.258 | 1.026× | 1.014× | gcc |
| Sort::Merge | 0.866 | 1.131 | 1.028 | 1.305× | 1.188× | — |
| Sort::Quick | 1.353 | 1.234 | 1.252 | 0.911× | 0.923× | — |
| Sort::Self | 1.250 | 1.208 | 1.230 | 0.966× | 0.984× | — |
| Template::Parse | 1.739 | 1.530 | 1.569 | 0.900× | 0.936× | clang |
| Template::Regex | 1.463 | 1.502 | 1.664 | 0.961× | 1.204× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.000×.
Compile clang A/A CPU ratio: 0.993×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486515)
