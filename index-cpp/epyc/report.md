# index-cpp benchmarks

Compiler checkout: `116052803d2981c33ce1fab0c2a17d640d831a91` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.070× | 1.060× |
| Compile CPU | 6.192× | 5.128× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,610 | 228,994 |
| gcc | 540,112 | 280,921 | 486,138 |
| clang | 513,720 | 264,561 | 319,288 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.161 | 0.944 | 0.987 | 0.812× | 0.850× | — |
| Base64::Encode | 1.289 | 1.187 | 0.995 | 0.920× | 0.773× | — |
| Binarytrees::Arena | 2.077 | 2.187 | 2.149 | 1.047× | 1.038× | — |
| Binarytrees::Obj | 2.024 | 1.917 | 2.042 | 0.935× | 1.005× | — |
| Brainfuck::Array | 1.273 | 2.149 | 1.541 | 1.641× | 1.192× | clang |
| Brainfuck::Recursion | 1.171 | 1.179 | 1.147 | 1.010× | 0.977× | clang |
| CLBG::Fannkuchredux | 0.901 | 0.977 | 0.914 | 1.071× | 1.009× | — |
| CLBG::Mandelbrot | 1.228 | 1.171 | 1.115 | 0.954× | 0.908× | — |
| CLBG::Nbody | 0.889 | 0.891 | 0.895 | 1.002× | 1.007× | — |
| CLBG::Spectralnorm | 0.952 | 0.926 | 1.579 | 0.973× | 1.660× | — |
| CSV::Parse | 0.901 | 0.821 | 0.907 | 0.911× | 1.003× | — |
| Calculator::Ast | 0.812 | 0.746 | 0.786 | 0.915× | 0.972× | gcc |
| Calculator::Interpreter | 1.106 | 1.023 | 1.131 | 0.921× | 1.028× | gcc |
| Compress::ArithDecode | 0.796 | 0.813 | 1.395 | 1.019× | 1.752× | — |
| Compress::ArithEncode | 0.918 | 0.855 | 0.952 | 0.927× | 1.039× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.558 | 0.969× | 1.008× | — |
| Compress::BWTEncode | 0.831 | 0.855 | 0.994 | 1.029× | 1.192× | — |
| Compress::HuffDecode | 0.477 | 0.597 | 0.412 | 1.248× | 0.868× | — |
| Compress::HuffEncode | 0.802 | 0.778 | 0.916 | 0.966× | 1.142× | gcc |
| Compress::LZWDecode | 0.609 | 0.635 | 0.565 | 1.044× | 0.930× | — |
| Compress::LZWEncode | 1.000 | 0.978 | 0.996 | 0.978× | 0.997× | — |
| Distance::Jaro | 1.038 | 1.051 | 0.977 | 1.015× | 0.941× | — |
| Distance::NGram | 1.114 | 1.074 | 1.055 | 0.964× | 0.945× | — |
| Etc::CacheSimulation | 0.903 | 0.875 | 0.891 | 0.970× | 0.982× | — |
| Etc::GameOfLife | 1.022 | 0.948 | 1.002 | 0.940× | 0.984× | — |
| Etc::LogParser | 0.415 | 1.707 | 0.508 | 4.115× | 1.232× | gcc, clang |
| Etc::NeuralNet | 0.972 | 0.829 | 0.823 | 0.794× | 0.790× | — |
| Etc::Sieve | 1.180 | 1.563 | 1.191 | 1.322× | 1.009× | — |
| Etc::TextRaytracer | 0.897 | 0.881 | 1.060 | 0.982× | 1.182× | — |
| Etc::Words | 1.020 | 0.971 | 1.014 | 0.960× | 0.994× | — |
| Graph::AStar | 1.040 | 1.187 | 0.988 | 1.140× | 0.943× | — |
| Graph::BFS | 1.462 | 1.191 | 1.097 | 0.828× | 0.753× | gcc |
| Graph::DFS | 1.372 | 1.179 | 1.212 | 0.859× | 0.881× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.173 | 1.176 | 3.059× | 3.059× | — |
| Json::Generate | 0.772 | 0.774 | 0.778 | 1.004× | 1.010× | — |
| Json::ParseDom | 0.954 | 0.917 | 0.891 | 0.961× | 0.935× | — |
| Json::ParseMapping | 0.907 | 0.869 | 0.847 | 0.960× | 0.933× | — |
| Matmul::Single | 1.183 | 1.186 | 1.186 | 1.008× | 1.001× | — |
| Matmul::T16 | 2.356 | 2.290 | 2.302 | 0.973× | 0.978× | — |
| Matmul::T4 | 1.169 | 1.168 | 1.163 | 1.000× | 0.996× | — |
| Matmul::T8 | 1.232 | 1.199 | 1.196 | 0.973× | 0.976× | — |
| Maze::AStar | 1.050 | 0.992 | 1.127 | 0.945× | 1.067× | gcc |
| Maze::BFS | 0.895 | 0.894 | 0.919 | 0.999× | 1.027× | — |
| Maze::Generator | 1.247 | 1.261 | 1.285 | 1.013× | 1.030× | — |
| Sort::Merge | 0.750 | 0.986 | 0.878 | 1.316× | 1.171× | — |
| Sort::Quick | 1.136 | 1.084 | 1.099 | 0.954× | 0.967× | — |
| Sort::Self | 1.079 | 1.041 | 1.056 | 0.964× | 0.980× | — |
| Template::Parse | 0.909 | 0.920 | 0.940 | 1.003× | 1.040× | gcc |
| Template::Regex | 0.959 | 1.039 | 1.099 | 1.075× | 1.148× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.997×.
Compile clang A/A CPU ratio: 1.005×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517507)
