# index-cpp benchmarks

Compiler checkout: `32b57ecb146865fc206be7a79a159bc13e644dc1` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.076× | 1.065× |
| Compile CPU | 6.253× | 5.173× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 339,442 | 228,912 |
| gcc | 540,112 | 280,921 | 486,046 |
| clang | 513,720 | 264,561 | 319,058 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.164 | 0.946 | 0.994 | 0.813× | 0.848× | — |
| Base64::Encode | 1.292 | 1.188 | 1.003 | 0.920× | 0.773× | — |
| Binarytrees::Arena | 2.074 | 2.188 | 2.184 | 1.052× | 1.054× | — |
| Binarytrees::Obj | 2.016 | 1.929 | 2.021 | 0.977× | 0.996× | gcc, clang |
| Brainfuck::Array | 1.267 | 2.135 | 1.541 | 1.666× | 1.180× | gcc, clang |
| Brainfuck::Recursion | 1.172 | 1.177 | 1.147 | 1.007× | 0.977× | — |
| CLBG::Fannkuchredux | 0.907 | 0.972 | 0.899 | 1.068× | 0.987× | clang |
| CLBG::Mandelbrot | 1.228 | 1.170 | 1.115 | 0.953× | 0.908× | — |
| CLBG::Nbody | 0.890 | 0.891 | 0.895 | 1.002× | 1.006× | — |
| CLBG::Spectralnorm | 0.952 | 0.925 | 1.577 | 0.972× | 1.657× | — |
| CSV::Parse | 0.897 | 0.822 | 0.903 | 0.918× | 1.008× | — |
| Calculator::Ast | 0.821 | 0.741 | 0.790 | 0.903× | 0.969× | — |
| Calculator::Interpreter | 1.098 | 1.042 | 1.244 | 0.931× | 1.023× | gcc |
| Compress::ArithDecode | 0.801 | 0.820 | 1.395 | 1.019× | 1.740× | — |
| Compress::ArithEncode | 0.931 | 0.854 | 0.952 | 0.914× | 1.023× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.560 | 0.970× | 1.011× | — |
| Compress::BWTEncode | 0.835 | 0.854 | 0.994 | 1.020× | 1.192× | — |
| Compress::HuffDecode | 0.479 | 0.596 | 0.413 | 1.244× | 0.860× | — |
| Compress::HuffEncode | 0.738 | 0.776 | 0.918 | 1.058× | 1.243× | — |
| Compress::LZWDecode | 0.603 | 0.613 | 0.562 | 1.017× | 0.931× | gcc |
| Compress::LZWEncode | 0.996 | 0.980 | 0.996 | 0.984× | 1.001× | — |
| Distance::Jaro | 1.036 | 1.052 | 0.977 | 1.015× | 0.943× | — |
| Distance::NGram | 1.106 | 1.075 | 1.051 | 0.972× | 0.950× | — |
| Etc::CacheSimulation | 0.905 | 0.881 | 0.891 | 0.978× | 0.979× | — |
| Etc::GameOfLife | 1.085 | 0.960 | 1.159 | 0.892× | 1.042× | gcc, clang |
| Etc::LogParser | 0.420 | 1.754 | 0.522 | 4.193× | 1.238× | clang |
| Etc::NeuralNet | 0.974 | 0.913 | 0.819 | 0.886× | 0.793× | — |
| Etc::Sieve | 1.181 | 1.563 | 1.191 | 1.323× | 1.006× | — |
| Etc::TextRaytracer | 0.897 | 0.885 | 1.060 | 0.985× | 1.182× | — |
| Etc::Words | 1.007 | 0.966 | 1.012 | 0.960× | 1.006× | — |
| Graph::AStar | 1.046 | 1.225 | 1.017 | 1.163× | 0.948× | gcc |
| Graph::BFS | 1.599 | 1.251 | 1.216 | 0.786× | 0.714× | gcc |
| Graph::DFS | 1.402 | 1.210 | 1.247 | 0.869× | 0.887× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.169 | 1.178 | 3.048× | 3.076× | — |
| Json::Generate | 0.778 | 0.770 | 0.772 | 0.989× | 0.993× | — |
| Json::ParseDom | 0.937 | 0.915 | 0.895 | 0.977× | 0.956× | — |
| Json::ParseMapping | 0.897 | 0.865 | 0.851 | 0.961× | 0.949× | — |
| Matmul::Single | 1.186 | 1.183 | 1.186 | 0.996× | 1.000× | — |
| Matmul::T16 | 2.362 | 2.297 | 2.297 | 0.982× | 0.972× | — |
| Matmul::T4 | 1.168 | 1.168 | 1.163 | 1.000× | 0.997× | — |
| Matmul::T8 | 1.231 | 1.200 | 1.197 | 0.976× | 0.971× | — |
| Maze::AStar | 1.113 | 1.079 | 1.464 | 0.951× | 1.166× | gcc, clang |
| Maze::BFS | 0.947 | 1.043 | 1.258 | 1.074× | 1.045× | gcc, clang |
| Maze::Generator | 1.239 | 1.261 | 1.303 | 1.032× | 1.043× | gcc, clang |
| Sort::Merge | 0.751 | 0.986 | 0.879 | 1.314× | 1.170× | — |
| Sort::Quick | 1.135 | 1.084 | 1.099 | 0.956× | 0.969× | — |
| Sort::Self | 1.097 | 1.041 | 1.057 | 0.949× | 0.962× | — |
| Template::Parse | 1.022 | 0.988 | 1.248 | 1.000× | 1.043× | gcc, clang |
| Template::Regex | 0.994 | 1.071 | 1.345 | 1.102× | 1.215× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.994×.
Compile clang A/A CPU ratio: 0.991×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138980)
