# index-cpp benchmarks

Compiler checkout: `de44b5cf8e143b4625737955531361b622b74bef` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.049× | 1.046× |
| Compile CPU | 6.129× | 5.724× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 339,570 | 228,866 |
| gcc | 540,112 | 280,921 | 485,984 |
| clang | 513,720 | 264,561 | 318,912 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.401 | 1.187 | 1.198 | 0.847× | 0.857× | — |
| Base64::Encode | 1.692 | 1.425 | 1.275 | 0.840× | 0.753× | — |
| Binarytrees::Arena | 2.371 | 2.439 | 2.515 | 1.027× | 1.060× | — |
| Binarytrees::Obj | 1.406 | 1.318 | 1.542 | 0.903× | 1.064× | gcc, clang |
| Brainfuck::Array | 2.617 | 2.808 | 2.761 | 1.091× | 1.067× | — |
| Brainfuck::Recursion | 1.779 | 1.741 | 1.700 | 0.979× | 0.966× | clang |
| CLBG::Fannkuchredux | 0.981 | 1.155 | 0.985 | 1.173× | 1.008× | — |
| CLBG::Mandelbrot | 1.366 | 1.351 | 1.336 | 0.989× | 0.978× | — |
| CLBG::Nbody | 1.036 | 1.058 | 1.058 | 1.020× | 1.020× | — |
| CLBG::Spectralnorm | 1.185 | 1.142 | 1.739 | 0.962× | 1.466× | — |
| CSV::Parse | 1.226 | 1.079 | 1.152 | 0.883× | 0.936× | — |
| Calculator::Ast | 1.027 | 0.956 | 0.982 | 0.925× | 0.963× | — |
| Calculator::Interpreter | 1.353 | 1.250 | 1.391 | 0.915× | 1.036× | — |
| Compress::ArithDecode | 0.947 | 0.948 | 1.603 | 1.003× | 1.694× | — |
| Compress::ArithEncode | 1.092 | 0.981 | 1.111 | 0.899× | 1.016× | — |
| Compress::BWTDecode | 1.302 | 0.647 | 0.659 | 0.482× | 0.488× | — |
| Compress::BWTEncode | 1.120 | 1.099 | 1.360 | 0.993× | 1.212× | — |
| Compress::HuffDecode | 0.616 | 0.776 | 0.512 | 1.261× | 0.833× | — |
| Compress::HuffEncode | 0.988 | 1.225 | 1.036 | 1.240× | 1.048× | — |
| Compress::LZWDecode | 0.740 | 0.764 | 0.700 | 1.035× | 0.950× | — |
| Compress::LZWEncode | 1.332 | 1.287 | 1.302 | 0.974× | 0.981× | — |
| Distance::Jaro | 1.208 | 1.171 | 1.149 | 0.969× | 0.951× | — |
| Distance::NGram | 1.364 | 1.325 | 1.292 | 0.970× | 0.947× | — |
| Etc::CacheSimulation | 1.132 | 1.107 | 1.120 | 0.981× | 0.987× | — |
| Etc::GameOfLife | 1.215 | 1.128 | 1.190 | 0.929× | 0.977× | — |
| Etc::LogParser | 0.518 | 2.026 | 0.653 | 3.912× | 1.250× | — |
| Etc::NeuralNet | 1.250 | 1.103 | 1.081 | 0.882× | 0.869× | gcc, clang |
| Etc::Sieve | 1.388 | 1.895 | 1.459 | 1.317× | 1.053× | gcc |
| Etc::TextRaytracer | 1.040 | 1.023 | 1.340 | 0.983× | 1.287× | — |
| Etc::Words | 1.320 | 1.278 | 1.341 | 0.968× | 1.019× | — |
| Graph::AStar | 1.131 | 1.285 | 1.047 | 1.139× | 0.926× | — |
| Graph::BFS | 1.208 | 1.147 | 1.087 | 0.933× | 0.913× | — |
| Graph::DFS | 1.337 | 1.139 | 1.219 | 0.853× | 0.911× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.751× | 3.123× | — |
| Hash::SHA256 | 0.453 | 1.476 | 1.361 | 3.255× | 3.013× | — |
| Json::Generate | 1.147 | 1.131 | 1.140 | 0.982× | 0.993× | — |
| Json::ParseDom | 1.259 | 1.190 | 1.191 | 0.944× | 0.945× | — |
| Json::ParseMapping | 1.196 | 1.135 | 1.135 | 0.946× | 0.949× | — |
| Matmul::Single | 1.389 | 1.389 | 1.387 | 1.000× | 0.998× | — |
| Matmul::T16 | 2.629 | 2.633 | 2.626 | 1.003× | 0.995× | — |
| Matmul::T4 | 1.357 | 1.356 | 1.357 | 0.999× | 1.000× | — |
| Matmul::T8 | 1.379 | 1.375 | 1.379 | 0.999× | 0.998× | — |
| Maze::AStar | 1.202 | 1.064 | 1.199 | 0.874× | 0.999× | clang |
| Maze::BFS | 1.332 | 1.260 | 1.377 | 1.001× | 1.032× | gcc |
| Maze::Generator | 1.169 | 1.203 | 1.196 | 1.032× | 1.020× | — |
| Sort::Merge | 0.867 | 1.121 | 1.024 | 1.292× | 1.181× | — |
| Sort::Quick | 1.350 | 1.232 | 1.252 | 0.913× | 0.927× | — |
| Sort::Self | 1.258 | 1.206 | 1.228 | 0.959× | 0.976× | — |
| Template::Parse | 1.276 | 1.229 | 1.249 | 0.962× | 1.017× | gcc |
| Template::Regex | 1.321 | 1.321 | 1.520 | 1.009× | 1.156× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.999×.
Compile clang A/A CPU ratio: 0.999×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658653986)
