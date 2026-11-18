# index-cpp benchmarks

Compiler checkout: `c49e45b16cddb1f5665d1f308b5e8e71622aea59` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.086× | 1.072× |
| Compile CPU | 6.431× | 5.551× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,776 |
| gcc | 540,112 | 280,921 | 485,940 |
| clang | 513,720 | 264,561 | 319,438 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.194 | 1.071 | 1.183 | 0.899× | 0.989× | — |
| Base64::Encode | 1.438 | 1.535 | 1.249 | 1.069× | 0.875× | — |
| Binarytrees::Arena | 2.331 | 2.417 | 2.478 | 1.039× | 1.074× | — |
| Binarytrees::Obj | 1.664 | 1.612 | 1.794 | 0.975× | 1.081× | — |
| Brainfuck::Array | 1.824 | 2.077 | 1.979 | 1.139× | 1.085× | — |
| Brainfuck::Recursion | 1.469 | 1.610 | 1.360 | 1.104× | 0.925× | — |
| CLBG::Fannkuchredux | 0.970 | 1.079 | 0.950 | 1.111× | 0.982× | — |
| CLBG::Mandelbrot | 1.665 | 1.645 | 1.655 | 0.988× | 0.994× | — |
| CLBG::Nbody | 0.931 | 0.885 | 0.903 | 0.950× | 0.968× | — |
| CLBG::Spectralnorm | 1.283 | 1.372 | 1.827 | 1.069× | 1.428× | — |
| CSV::Parse | 1.098 | 1.020 | 1.095 | 0.931× | 0.998× | — |
| Calculator::Ast | 1.200 | 1.106 | 1.111 | 0.919× | 0.921× | clang |
| Calculator::Interpreter | 2.270 | 2.152 | 2.188 | 0.919× | 1.037× | gcc |
| Compress::ArithDecode | 1.014 | 1.137 | 1.641 | 1.122× | 1.619× | — |
| Compress::ArithEncode | 1.164 | 1.191 | 1.253 | 1.021× | 1.076× | — |
| Compress::BWTDecode | 1.527 | 1.511 | 1.530 | 0.973× | 1.010× | — |
| Compress::BWTEncode | 1.030 | 1.077 | 1.211 | 1.034× | 1.164× | — |
| Compress::HuffDecode | 0.607 | 0.941 | 0.521 | 1.554× | 0.863× | gcc |
| Compress::HuffEncode | 0.966 | 1.002 | 1.083 | 1.051× | 1.116× | — |
| Compress::LZWDecode | 0.800 | 0.782 | 0.756 | 0.990× | 0.958× | gcc |
| Compress::LZWEncode | 1.115 | 1.111 | 1.133 | 0.996× | 1.017× | — |
| Distance::Jaro | 1.291 | 1.289 | 1.294 | 0.999× | 1.001× | — |
| Distance::NGram | 1.434 | 1.421 | 1.369 | 0.990× | 0.956× | — |
| Etc::CacheSimulation | 1.033 | 0.986 | 1.038 | 0.948× | 1.009× | — |
| Etc::GameOfLife | 2.677 | 2.652 | 2.713 | 0.985× | 1.036× | gcc |
| Etc::LogParser | 0.514 | 1.353 | 0.574 | 2.661× | 1.124× | gcc |
| Etc::NeuralNet | 1.176 | 1.031 | 1.051 | 0.877× | 0.888× | — |
| Etc::Sieve | 2.760 | 3.428 | 2.766 | 1.249× | 0.976× | gcc, clang |
| Etc::TextRaytracer | 1.023 | 0.995 | 1.206 | 0.973× | 1.179× | — |
| Etc::Words | 1.207 | 1.175 | 1.211 | 0.975× | 1.001× | clang |
| Graph::AStar | 1.079 | 1.191 | 1.062 | 1.085× | 0.988× | clang |
| Graph::BFS | 0.963 | 0.952 | 0.956 | 1.000× | 0.997× | gcc, clang |
| Graph::DFS | 1.112 | 1.054 | 1.063 | 0.951× | 0.956× | gcc, clang |
| Hash::CRC32 | 0.281 | 0.806 | 0.958 | 2.879× | 3.409× | gcc |
| Hash::SHA256 | 0.416 | 1.359 | 1.279 | 3.274× | 3.071× | — |
| Json::Generate | 1.172 | 1.180 | 1.171 | 1.009× | 0.997× | clang |
| Json::ParseDom | 1.462 | 1.398 | 1.381 | 0.962× | 0.936× | — |
| Json::ParseMapping | 1.392 | 1.331 | 1.317 | 0.969× | 0.945× | — |
| Matmul::Single | 1.669 | 1.657 | 1.645 | 0.994× | 0.986× | — |
| Matmul::T16 | 3.463 | 3.499 | 3.458 | 1.014× | 0.988× | — |
| Matmul::T4 | 1.659 | 1.659 | 1.652 | 0.998× | 0.994× | — |
| Matmul::T8 | 1.837 | 1.915 | 1.820 | 1.013× | 0.970× | gcc, clang |
| Maze::AStar | 1.648 | 1.615 | 1.739 | 0.984× | 1.054× | gcc |
| Maze::BFS | 1.394 | 1.391 | 1.407 | 0.993× | 1.032× | gcc, clang |
| Maze::Generator | 1.516 | 1.526 | 1.492 | 0.987× | 1.006× | — |
| Sort::Merge | 0.835 | 1.205 | 0.987 | 1.442× | 1.181× | — |
| Sort::Quick | 1.307 | 1.330 | 1.312 | 1.018× | 1.003× | — |
| Sort::Self | 1.365 | 1.296 | 1.292 | 0.950× | 0.945× | — |
| Template::Parse | 2.240 | 2.306 | 2.289 | 1.015× | 1.035× | — |
| Template::Regex | 1.704 | 1.640 | 1.832 | 0.957× | 1.070× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.995×.
Compile clang A/A CPU ratio: 0.992×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.6 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912267)
