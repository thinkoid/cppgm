# index-cpp benchmarks

Compiler checkout: `54b8d0eeb4b4d132a869dcf623e314c78269b705` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.068× | 1.058× |
| Compile CPU | 6.116× | 5.587× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 710,360 | 338,226 | 228,860 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 318,820 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.385 | 1.175 | 1.186 | 0.849× | 0.856× | — |
| Base64::Encode | 1.632 | 1.404 | 1.254 | 0.860× | 0.770× | — |
| Binarytrees::Arena | 2.336 | 2.410 | 2.487 | 1.036× | 1.066× | — |
| Binarytrees::Obj | 1.369 | 1.252 | 1.453 | 0.917× | 1.060× | gcc |
| Brainfuck::Array | 2.657 | 2.811 | 2.844 | 1.074× | 1.108× | clang |
| Brainfuck::Recursion | 1.780 | 1.741 | 1.706 | 0.982× | 0.956× | — |
| CLBG::Fannkuchredux | 0.980 | 1.142 | 0.984 | 1.169× | 0.998× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.989× | 0.979× | — |
| CLBG::Nbody | 1.037 | 1.054 | 1.058 | 1.016× | 1.019× | — |
| CLBG::Spectralnorm | 1.185 | 1.139 | 1.740 | 0.960× | 1.469× | — |
| CSV::Parse | 1.195 | 1.080 | 1.147 | 0.907× | 0.960× | — |
| Calculator::Ast | 1.010 | 0.949 | 0.979 | 0.941× | 0.967× | — |
| Calculator::Interpreter | 1.286 | 1.214 | 1.321 | 0.946× | 1.030× | — |
| Compress::ArithDecode | 0.938 | 0.947 | 1.604 | 1.009× | 1.708× | — |
| Compress::ArithEncode | 1.079 | 0.980 | 1.111 | 0.909× | 1.029× | — |
| Compress::BWTDecode | 0.637 | 0.645 | 0.653 | 1.011× | 1.023× | — |
| Compress::BWTEncode | 1.125 | 1.125 | 1.343 | 1.009× | 1.193× | — |
| Compress::HuffDecode | 0.617 | 0.774 | 0.514 | 1.252× | 0.837× | — |
| Compress::HuffEncode | 0.982 | 1.228 | 1.033 | 1.247× | 1.053× | clang |
| Compress::LZWDecode | 0.726 | 0.724 | 0.692 | 0.997× | 0.956× | — |
| Compress::LZWEncode | 1.329 | 1.284 | 1.309 | 0.968× | 0.987× | — |
| Distance::Jaro | 1.211 | 1.170 | 1.149 | 0.966× | 0.949× | — |
| Distance::NGram | 1.361 | 1.324 | 1.285 | 0.969× | 0.943× | — |
| Etc::CacheSimulation | 1.147 | 1.102 | 1.112 | 0.962× | 0.964× | — |
| Etc::GameOfLife | 1.163 | 1.083 | 1.153 | 0.930× | 0.993× | — |
| Etc::LogParser | 0.522 | 1.990 | 0.657 | 3.773× | 1.263× | gcc, clang |
| Etc::NeuralNet | 1.252 | 1.100 | 1.080 | 0.902× | 0.863× | gcc |
| Etc::Sieve | 1.535 | 1.960 | 1.370 | 1.345× | 0.940× | clang |
| Etc::TextRaytracer | 1.039 | 1.024 | 1.339 | 0.986× | 1.288× | — |
| Etc::Words | 1.317 | 1.272 | 1.321 | 0.962× | 0.996× | — |
| Graph::AStar | 1.087 | 1.249 | 0.996 | 1.147× | 0.918× | — |
| Graph::BFS | 1.196 | 1.027 | 0.960 | 0.858× | 0.805× | — |
| Graph::DFS | 1.230 | 1.057 | 1.111 | 0.866× | 0.911× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.749× | 3.123× | — |
| Hash::SHA256 | 0.452 | 1.472 | 1.380 | 3.259× | 3.053× | — |
| Json::Generate | 1.133 | 1.136 | 1.139 | 1.001× | 1.004× | — |
| Json::ParseDom | 1.269 | 1.185 | 1.188 | 0.932× | 0.933× | — |
| Json::ParseMapping | 1.208 | 1.130 | 1.129 | 0.935× | 0.933× | — |
| Matmul::Single | 1.383 | 1.383 | 1.382 | 0.999× | 0.999× | — |
| Matmul::T16 | 2.632 | 2.615 | 2.627 | 0.999× | 0.990× | — |
| Matmul::T4 | 1.350 | 1.349 | 1.349 | 0.999× | 0.999× | — |
| Matmul::T8 | 1.369 | 1.370 | 1.375 | 1.002× | 1.003× | — |
| Maze::AStar | 1.021 | 0.925 | 1.001 | 0.906× | 0.979× | — |
| Maze::BFS | 0.931 | 0.990 | 1.019 | 1.067× | 1.089× | gcc |
| Maze::Generator | 1.145 | 1.184 | 1.159 | 1.034× | 1.008× | — |
| Sort::Merge | 0.860 | 1.125 | 1.023 | 1.305× | 1.189× | — |
| Sort::Quick | 1.345 | 1.232 | 1.250 | 0.916× | 0.929× | — |
| Sort::Self | 1.249 | 1.206 | 1.228 | 0.966× | 0.984× | — |
| Template::Parse | 1.125 | 1.121 | 1.124 | 0.979× | 1.001× | — |
| Template::Regex | 1.189 | 1.238 | 1.401 | 1.024× | 1.183× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.996×.
Compile clang A/A CPU ratio: 1.006×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43682127026)
