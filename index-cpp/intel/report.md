# index-cpp benchmarks

Compiler checkout: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.087× | 1.073× |
| Compile CPU | 6.124× | 4.921× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 229,526 |
| gcc | 540,112 | 280,921 | 486,100 |
| clang | 513,720 | 264,561 | 319,098 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.026 | 0.921 | 1.026 | 0.898× | 1.000× | — |
| Base64::Encode | 1.098 | 1.206 | 0.991 | 1.098× | 0.903× | — |
| Binarytrees::Arena | 2.141 | 2.212 | 2.321 | 1.011× | 1.127× | gcc |
| Binarytrees::Obj | 1.042 | 1.040 | 1.288 | 0.968× | 1.240× | clang |
| Brainfuck::Array | 1.946 | 2.295 | 2.135 | 1.180× | 1.098× | — |
| Brainfuck::Recursion | 1.393 | 1.502 | 1.440 | 1.076× | 1.037× | — |
| CLBG::Fannkuchredux | 1.151 | 1.256 | 1.074 | 1.083× | 0.944× | gcc |
| CLBG::Mandelbrot | 1.315 | 1.310 | 1.295 | 0.996× | 0.985× | — |
| CLBG::Nbody | 0.851 | 0.807 | 0.829 | 0.948× | 0.974× | — |
| CLBG::Spectralnorm | 1.223 | 1.170 | 1.639 | 0.957× | 1.341× | — |
| CSV::Parse | 1.135 | 1.028 | 1.148 | 0.906× | 1.015× | — |
| Calculator::Ast | 1.046 | 0.994 | 0.984 | 0.926× | 0.940× | gcc |
| Calculator::Interpreter | 1.187 | 1.141 | 1.209 | 0.966× | 1.016× | clang |
| Compress::ArithDecode | 1.115 | 1.264 | 1.870 | 1.134× | 1.677× | gcc |
| Compress::ArithEncode | 1.332 | 1.264 | 1.363 | 0.948× | 1.023× | — |
| Compress::BWTDecode | 1.601 | 1.591 | 1.601 | 0.994× | 1.000× | — |
| Compress::BWTEncode | 0.927 | 0.979 | 1.152 | 1.054× | 1.242× | — |
| Compress::HuffDecode | 0.559 | 0.917 | 0.482 | 1.624× | 0.858× | — |
| Compress::HuffEncode | 1.044 | 1.236 | 1.026 | 1.181× | 0.984× | — |
| Compress::LZWDecode | 0.732 | 0.728 | 0.702 | 0.997× | 0.958× | — |
| Compress::LZWEncode | 1.204 | 1.201 | 1.198 | 0.998× | 0.995× | — |
| Distance::Jaro | 1.513 | 1.540 | 1.680 | 1.019× | 1.112× | — |
| Distance::NGram | 1.481 | 1.502 | 1.418 | 1.015× | 0.959× | — |
| Etc::CacheSimulation | 1.042 | 1.004 | 1.032 | 0.964× | 0.994× | — |
| Etc::GameOfLife | 1.274 | 1.280 | 1.229 | 1.003× | 0.968× | — |
| Etc::LogParser | 0.503 | 1.465 | 0.544 | 2.901× | 1.081× | — |
| Etc::NeuralNet | 0.994 | 0.916 | 0.901 | 0.916× | 0.908× | — |
| Etc::Sieve | 2.522 | 3.395 | 2.481 | 1.343× | 0.984× | — |
| Etc::TextRaytracer | 0.832 | 0.818 | 1.061 | 0.983× | 1.275× | — |
| Etc::Words | 1.153 | 1.109 | 1.135 | 0.958× | 0.983× | — |
| Graph::AStar | 1.002 | 1.207 | 0.936 | 1.086× | 0.961× | gcc, clang |
| Graph::BFS | 0.796 | 0.744 | 0.712 | 0.923× | 0.890× | gcc, clang |
| Graph::DFS | 1.058 | 1.030 | 0.982 | 0.910× | 0.973× | gcc, clang |
| Hash::CRC32 | 0.308 | 0.890 | 1.244 | 2.890× | 4.039× | — |
| Hash::SHA256 | 0.424 | 1.285 | 1.073 | 3.029× | 2.529× | — |
| Json::Generate | 1.093 | 1.084 | 1.084 | 0.992× | 0.996× | — |
| Json::ParseDom | 1.316 | 1.258 | 1.240 | 0.957× | 0.941× | — |
| Json::ParseMapping | 1.250 | 1.197 | 1.179 | 0.958× | 0.943× | — |
| Matmul::Single | 0.913 | 0.913 | 0.901 | 1.000× | 0.986× | — |
| Matmul::T16 | 0.863 | 0.864 | 0.861 | 0.999× | 0.998× | — |
| Matmul::T4 | 0.919 | 0.919 | 0.917 | 0.998× | 0.998× | — |
| Matmul::T8 | 0.904 | 0.905 | 0.904 | 0.999× | 1.002× | — |
| Maze::AStar | 0.956 | 0.912 | 0.889 | 0.950× | 0.935× | gcc, clang |
| Maze::BFS | 0.800 | 0.793 | 0.790 | 0.994× | 0.983× | — |
| Maze::Generator | 1.111 | 1.200 | 1.124 | 1.049× | 1.149× | gcc, clang |
| Sort::Merge | 0.907 | 1.346 | 1.055 | 1.484× | 1.163× | — |
| Sort::Quick | 1.496 | 1.466 | 1.422 | 0.980× | 0.951× | — |
| Sort::Self | 1.515 | 1.377 | 1.403 | 0.909× | 0.925× | — |
| Template::Parse | 1.095 | 1.155 | 1.132 | 1.009× | 1.051× | gcc |
| Template::Regex | 1.163 | 1.178 | 1.281 | 0.982× | 1.120× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.000×.
Compile clang A/A CPU ratio: 1.006×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43789570692)
