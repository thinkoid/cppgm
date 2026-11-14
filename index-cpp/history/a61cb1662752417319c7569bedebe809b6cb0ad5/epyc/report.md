# index-cpp benchmarks

Compiler checkout: `a61cb1662752417319c7569bedebe809b6cb0ad5` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.066× | 1.052× |
| Compile CPU | 6.200× | 5.676× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,640 |
| gcc | 540,112 | 280,921 | 485,992 |
| clang | 513,720 | 264,561 | 317,784 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.408 | 1.199 | 1.210 | 0.850× | 0.866× | — |
| Base64::Encode | 1.708 | 1.444 | 1.285 | 0.843× | 0.754× | — |
| Binarytrees::Arena | 2.385 | 2.473 | 2.533 | 1.031× | 1.062× | — |
| Binarytrees::Obj | 1.409 | 1.414 | 1.627 | 0.987× | 1.162× | gcc, clang |
| Brainfuck::Array | 2.812 | 2.810 | 2.808 | 0.998× | 0.990× | clang |
| Brainfuck::Recursion | 1.743 | 1.744 | 1.704 | 1.004× | 0.983× | — |
| CLBG::Fannkuchredux | 1.001 | 1.151 | 0.982 | 1.146× | 0.984× | — |
| CLBG::Mandelbrot | 1.365 | 1.350 | 1.335 | 0.989× | 0.978× | — |
| CLBG::Nbody | 1.039 | 1.055 | 1.057 | 1.014× | 1.018× | — |
| CLBG::Spectralnorm | 1.185 | 1.141 | 1.735 | 0.962× | 1.464× | — |
| CSV::Parse | 1.181 | 1.092 | 1.156 | 0.924× | 0.981× | — |
| Calculator::Ast | 1.042 | 0.962 | 0.984 | 0.922× | 0.952× | — |
| Calculator::Interpreter | 1.412 | 1.361 | 1.374 | 0.947× | 0.997× | gcc, clang |
| Compress::ArithDecode | 0.942 | 0.946 | 1.603 | 1.004× | 1.701× | — |
| Compress::ArithEncode | 1.088 | 0.982 | 1.111 | 0.902× | 1.021× | — |
| Compress::BWTDecode | 0.645 | 0.649 | 0.657 | 1.008× | 1.024× | — |
| Compress::BWTEncode | 1.103 | 1.096 | 1.348 | 0.993× | 1.223× | — |
| Compress::HuffDecode | 0.627 | 0.778 | 0.514 | 1.253× | 0.825× | — |
| Compress::HuffEncode | 0.980 | 1.226 | 1.032 | 1.254× | 1.058× | clang |
| Compress::LZWDecode | 0.732 | 0.728 | 0.698 | 0.990× | 0.957× | — |
| Compress::LZWEncode | 1.327 | 1.296 | 1.310 | 0.979× | 0.985× | — |
| Distance::Jaro | 1.206 | 1.171 | 1.148 | 0.973× | 0.952× | — |
| Distance::NGram | 1.363 | 1.319 | 1.288 | 0.969× | 0.950× | — |
| Etc::CacheSimulation | 1.144 | 1.111 | 1.132 | 0.968× | 0.985× | — |
| Etc::GameOfLife | 1.198 | 1.188 | 1.200 | 0.990× | 1.005× | — |
| Etc::LogParser | 0.529 | 1.942 | 0.661 | 3.634× | 1.246× | clang |
| Etc::NeuralNet | 1.250 | 1.107 | 1.080 | 0.925× | 0.855× | gcc, clang |
| Etc::Sieve | 1.383 | 1.819 | 1.375 | 1.312× | 0.995× | — |
| Etc::TextRaytracer | 1.042 | 1.022 | 1.339 | 0.981× | 1.286× | — |
| Etc::Words | 1.335 | 1.281 | 1.335 | 0.968× | 0.995× | — |
| Graph::AStar | 1.179 | 1.317 | 1.058 | 1.113× | 0.902× | — |
| Graph::BFS | 1.732 | 1.256 | 1.121 | 0.713× | 0.662× | gcc |
| Graph::DFS | 1.377 | 1.183 | 1.232 | 0.857× | 0.896× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.749× | 3.125× | — |
| Hash::SHA256 | 0.452 | 1.473 | 1.378 | 3.257× | 3.050× | — |
| Json::Generate | 1.146 | 1.131 | 1.140 | 0.987× | 0.996× | — |
| Json::ParseDom | 1.264 | 1.195 | 1.192 | 0.941× | 0.943× | — |
| Json::ParseMapping | 1.205 | 1.140 | 1.138 | 0.946× | 0.945× | — |
| Matmul::Single | 1.387 | 1.386 | 1.382 | 0.999× | 0.998× | — |
| Matmul::T16 | 2.630 | 2.635 | 2.643 | 1.001× | 1.008× | — |
| Matmul::T4 | 1.354 | 1.354 | 1.354 | 0.998× | 1.001× | — |
| Matmul::T8 | 1.374 | 1.373 | 1.375 | 1.000× | 1.001× | gcc |
| Maze::AStar | 1.312 | 1.234 | 1.277 | 0.905× | 0.989× | — |
| Maze::BFS | 1.377 | 1.627 | 1.413 | 1.116× | 1.100× | gcc |
| Maze::Generator | 1.265 | 1.316 | 1.249 | 1.029× | 0.999× | gcc, clang |
| Sort::Merge | 0.871 | 1.131 | 1.026 | 1.294× | 1.181× | — |
| Sort::Quick | 1.347 | 1.232 | 1.250 | 0.914× | 0.929× | — |
| Sort::Self | 1.250 | 1.208 | 1.229 | 0.966× | 0.984× | — |
| Template::Parse | 1.426 | 1.573 | 1.314 | 1.082× | 0.891× | — |
| Template::Regex | 1.369 | 1.489 | 1.525 | 1.038× | 1.137× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.987×.
Compile clang A/A CPU ratio: 1.012×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774531)
