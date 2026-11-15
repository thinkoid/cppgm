# index-cpp benchmarks

Compiler checkout: `b8749c61550bdf9b4d65e7e01182a1f856100a46` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.058× | 1.061× |
| Compile CPU | 6.206× | 5.652× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 710,360 | 338,226 | 229,356 |
| gcc | 540,112 | 280,921 | 486,030 |
| clang | 513,720 | 264,561 | 319,008 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.398 | 1.184 | 1.204 | 0.845× | 0.860× | — |
| Base64::Encode | 1.655 | 1.425 | 1.280 | 0.861× | 0.775× | — |
| Binarytrees::Arena | 2.360 | 2.439 | 2.532 | 1.036× | 1.072× | — |
| Binarytrees::Obj | 1.535 | 1.508 | 1.679 | 0.981× | 1.120× | — |
| Brainfuck::Array | 2.673 | 2.817 | 2.805 | 1.051× | 1.037× | — |
| Brainfuck::Recursion | 1.780 | 1.738 | 1.701 | 0.977× | 0.975× | — |
| CLBG::Fannkuchredux | 0.977 | 1.143 | 0.982 | 1.177× | 0.997× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.989× | 0.979× | — |
| CLBG::Nbody | 1.036 | 1.057 | 1.057 | 1.018× | 1.020× | — |
| CLBG::Spectralnorm | 1.184 | 1.140 | 1.738 | 0.963× | 1.465× | — |
| CSV::Parse | 1.196 | 1.085 | 1.149 | 0.908× | 0.963× | — |
| Calculator::Ast | 1.011 | 0.949 | 0.978 | 0.943× | 0.962× | — |
| Calculator::Interpreter | 1.346 | 1.261 | 1.386 | 0.922× | 1.025× | — |
| Compress::ArithDecode | 0.939 | 0.947 | 1.603 | 1.011× | 1.705× | — |
| Compress::ArithEncode | 1.078 | 0.981 | 1.111 | 0.909× | 1.030× | — |
| Compress::BWTDecode | 0.643 | 0.651 | 0.657 | 1.010× | 1.021× | — |
| Compress::BWTEncode | 1.101 | 1.115 | 1.359 | 1.003× | 1.232× | — |
| Compress::HuffDecode | 0.617 | 0.774 | 0.516 | 1.254× | 0.839× | — |
| Compress::HuffEncode | 0.983 | 1.228 | 1.033 | 1.249× | 1.053× | — |
| Compress::LZWDecode | 0.734 | 0.738 | 0.695 | 1.008× | 0.954× | — |
| Compress::LZWEncode | 1.332 | 1.297 | 1.312 | 0.977× | 0.980× | gcc |
| Distance::Jaro | 1.210 | 1.171 | 1.148 | 0.967× | 0.951× | — |
| Distance::NGram | 1.368 | 1.323 | 1.294 | 0.965× | 0.949× | — |
| Etc::CacheSimulation | 1.156 | 1.107 | 1.117 | 0.965× | 0.963× | — |
| Etc::GameOfLife | 1.206 | 1.113 | 1.189 | 0.923× | 0.986× | — |
| Etc::LogParser | 0.522 | 1.982 | 0.658 | 3.761× | 1.271× | gcc |
| Etc::NeuralNet | 1.254 | 1.164 | 1.102 | 0.928× | 0.838× | clang |
| Etc::Sieve | 1.382 | 1.966 | 1.456 | 1.295× | 1.053× | gcc |
| Etc::TextRaytracer | 1.039 | 1.027 | 1.339 | 0.988× | 1.289× | — |
| Etc::Words | 1.329 | 1.278 | 1.332 | 0.961× | 1.003× | — |
| Graph::AStar | 1.138 | 1.288 | 1.059 | 1.139× | 0.931× | — |
| Graph::BFS | 1.435 | 1.143 | 1.095 | 0.796× | 0.775× | — |
| Graph::DFS | 1.343 | 1.144 | 1.226 | 0.855× | 0.916× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.916 | 2.749× | 3.126× | — |
| Hash::SHA256 | 0.452 | 1.478 | 1.381 | 3.272× | 3.058× | — |
| Json::Generate | 1.133 | 1.130 | 1.140 | 0.998× | 1.012× | — |
| Json::ParseDom | 1.276 | 1.187 | 1.187 | 0.928× | 0.932× | — |
| Json::ParseMapping | 1.214 | 1.135 | 1.131 | 0.936× | 0.933× | — |
| Matmul::Single | 1.387 | 1.386 | 1.382 | 1.000× | 0.997× | — |
| Matmul::T16 | 2.643 | 2.638 | 2.635 | 1.000× | 1.011× | clang |
| Matmul::T4 | 1.354 | 1.355 | 1.353 | 1.000× | 0.999× | — |
| Matmul::T8 | 1.373 | 1.373 | 1.375 | 0.998× | 1.002× | — |
| Maze::AStar | 1.239 | 1.119 | 1.204 | 0.857× | 0.991× | gcc, clang |
| Maze::BFS | 1.371 | 1.279 | 1.389 | 0.877× | 1.035× | clang |
| Maze::Generator | 1.190 | 1.224 | 1.224 | 1.022× | 1.033× | gcc |
| Sort::Merge | 0.863 | 1.125 | 1.024 | 1.303× | 1.188× | — |
| Sort::Quick | 1.346 | 1.232 | 1.252 | 0.915× | 0.930× | — |
| Sort::Self | 1.250 | 1.207 | 1.228 | 0.965× | 0.983× | — |
| Template::Parse | 1.284 | 1.204 | 1.301 | 0.881× | 1.000× | gcc, clang |
| Template::Regex | 1.256 | 1.298 | 1.547 | 1.027× | 1.182× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.007×.
Compile clang A/A CPU ratio: 1.006×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369025)
