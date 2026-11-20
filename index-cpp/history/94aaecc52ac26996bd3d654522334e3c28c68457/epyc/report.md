# index-cpp benchmarks

Compiler checkout: `94aaecc52ac26996bd3d654522334e3c28c68457` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.079× | 1.067× |
| Compile CPU | 6.652× | 5.397× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,694 |
| gcc | 540,112 | 280,921 | 486,070 |
| clang | 513,720 | 264,561 | 319,022 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.172 | 0.956 | 0.998 | 0.814× | 0.856× | — |
| Base64::Encode | 1.388 | 1.206 | 1.010 | 0.860× | 0.730× | — |
| Binarytrees::Arena | 2.077 | 2.192 | 2.155 | 1.056× | 1.041× | — |
| Binarytrees::Obj | 2.077 | 2.032 | 2.133 | 0.954× | 1.026× | gcc, clang |
| Brainfuck::Array | 1.260 | 2.134 | 1.582 | 1.738× | 1.229× | clang |
| Brainfuck::Recursion | 1.067 | 1.179 | 1.149 | 1.113× | 1.094× | — |
| CLBG::Fannkuchredux | 0.905 | 0.976 | 0.900 | 1.062× | 0.989× | — |
| CLBG::Mandelbrot | 1.228 | 1.172 | 1.115 | 0.955× | 0.908× | — |
| CLBG::Nbody | 0.889 | 0.892 | 0.895 | 1.003× | 1.003× | — |
| CLBG::Spectralnorm | 0.955 | 0.927 | 1.579 | 0.978× | 1.643× | — |
| CSV::Parse | 0.904 | 0.823 | 0.909 | 0.908× | 1.010× | — |
| Calculator::Ast | 0.836 | 0.752 | 0.791 | 0.902× | 0.960× | — |
| Calculator::Interpreter | 1.234 | 1.179 | 1.269 | 0.908× | 1.060× | gcc, clang |
| Compress::ArithDecode | 0.796 | 0.814 | 1.397 | 1.023× | 1.756× | — |
| Compress::ArithEncode | 0.921 | 0.854 | 0.952 | 0.927× | 1.034× | — |
| Compress::BWTDecode | 0.558 | 0.542 | 0.560 | 0.974× | 1.008× | — |
| Compress::BWTEncode | 0.832 | 0.856 | 0.984 | 1.031× | 1.181× | — |
| Compress::HuffDecode | 0.479 | 0.599 | 0.413 | 1.247× | 0.862× | — |
| Compress::HuffEncode | 0.804 | 0.776 | 0.919 | 0.965× | 1.144× | clang |
| Compress::LZWDecode | 0.601 | 0.637 | 0.565 | 1.051× | 0.939× | — |
| Compress::LZWEncode | 0.996 | 0.989 | 0.994 | 0.992× | 1.000× | — |
| Distance::Jaro | 1.039 | 1.050 | 0.977 | 1.011× | 0.940× | — |
| Distance::NGram | 1.115 | 1.075 | 1.051 | 0.970× | 0.941× | — |
| Etc::CacheSimulation | 0.903 | 0.876 | 0.889 | 0.971× | 0.984× | — |
| Etc::GameOfLife | 1.350 | 1.340 | 1.347 | 1.025× | 1.048× | clang |
| Etc::LogParser | 0.414 | 1.779 | 0.522 | 4.266× | 1.258× | gcc |
| Etc::NeuralNet | 0.972 | 0.830 | 0.846 | 0.852× | 0.858× | gcc |
| Etc::Sieve | 1.181 | 1.567 | 1.188 | 1.324× | 1.008× | — |
| Etc::TextRaytracer | 0.895 | 0.880 | 1.060 | 0.984× | 1.186× | — |
| Etc::Words | 0.996 | 0.965 | 1.002 | 0.974× | 1.005× | clang |
| Graph::AStar | 1.118 | 1.259 | 1.038 | 1.112× | 0.928× | — |
| Graph::BFS | 1.683 | 1.342 | 1.264 | 0.810× | 0.766× | gcc, clang |
| Graph::DFS | 1.448 | 1.244 | 1.274 | 0.857× | 0.885× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.177 | 1.179 | 3.073× | 3.076× | — |
| Json::Generate | 0.771 | 0.772 | 0.781 | 1.007× | 1.025× | — |
| Json::ParseDom | 0.955 | 0.927 | 0.891 | 0.962× | 0.937× | — |
| Json::ParseMapping | 0.915 | 0.882 | 0.852 | 0.956× | 0.938× | gcc, clang |
| Matmul::Single | 1.186 | 1.186 | 1.185 | 1.001× | 1.000× | — |
| Matmul::T16 | 2.351 | 2.338 | 2.322 | 0.981× | 0.991× | — |
| Matmul::T4 | 1.169 | 1.170 | 1.163 | 1.001× | 0.994× | — |
| Matmul::T8 | 1.232 | 1.206 | 1.202 | 0.984× | 0.976× | gcc |
| Maze::AStar | 1.393 | 1.353 | 1.498 | 1.007× | 1.140× | gcc, clang |
| Maze::BFS | 1.236 | 1.296 | 1.256 | 1.037× | 1.129× | — |
| Maze::Generator | 1.372 | 1.385 | 1.361 | 1.009× | 0.997× | gcc, clang |
| Sort::Merge | 0.751 | 0.990 | 0.879 | 1.314× | 1.172× | — |
| Sort::Quick | 1.139 | 1.087 | 1.100 | 0.954× | 0.966× | — |
| Sort::Self | 1.095 | 1.042 | 1.058 | 0.952× | 0.966× | — |
| Template::Parse | 1.377 | 1.262 | 1.328 | 1.095× | 1.017× | gcc, clang |
| Template::Regex | 1.227 | 1.278 | 1.284 | 1.046× | 1.077× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.992×.
Compile clang A/A CPU ratio: 1.038×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949)
