# index-cpp benchmarks

Compiler checkout: `c9b05c4c0f7bb1294c717551c61145940b21125e` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.066× | 1.059× |
| Compile CPU | 6.475× | 5.319× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 711,112 | 338,162 | 229,490 |
| gcc | 540,112 | 280,921 | 486,102 |
| clang | 513,720 | 264,561 | 319,362 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.164 | 0.947 | 0.990 | 0.814× | 0.852× | — |
| Base64::Encode | 1.292 | 1.188 | 0.999 | 0.921× | 0.771× | — |
| Binarytrees::Arena | 2.061 | 2.179 | 2.146 | 1.045× | 1.042× | — |
| Binarytrees::Obj | 1.985 | 1.918 | 2.018 | 0.972× | 1.009× | — |
| Brainfuck::Array | 1.251 | 2.136 | 1.570 | 1.638× | 1.285× | gcc, clang |
| Brainfuck::Recursion | 1.173 | 1.177 | 1.147 | 1.003× | 0.980× | gcc, clang |
| CLBG::Fannkuchredux | 0.925 | 0.972 | 0.901 | 1.076× | 0.983× | — |
| CLBG::Mandelbrot | 1.227 | 1.171 | 1.115 | 0.954× | 0.909× | — |
| CLBG::Nbody | 0.889 | 0.891 | 0.895 | 1.003× | 1.007× | — |
| CLBG::Spectralnorm | 0.954 | 0.926 | 1.578 | 0.971× | 1.652× | — |
| CSV::Parse | 0.906 | 0.823 | 0.907 | 0.904× | 1.003× | — |
| Calculator::Ast | 0.817 | 0.743 | 0.784 | 0.914× | 0.962× | — |
| Calculator::Interpreter | 1.136 | 1.024 | 1.128 | 0.917× | 1.015× | clang |
| Compress::ArithDecode | 0.796 | 0.813 | 1.395 | 1.021× | 1.753× | — |
| Compress::ArithEncode | 0.922 | 0.855 | 0.952 | 0.924× | 1.037× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.558 | 0.971× | 1.006× | — |
| Compress::BWTEncode | 0.835 | 0.855 | 0.990 | 1.031× | 1.184× | — |
| Compress::HuffDecode | 0.478 | 0.597 | 0.412 | 1.249× | 0.864× | — |
| Compress::HuffEncode | 0.803 | 0.774 | 0.917 | 0.963× | 1.138× | — |
| Compress::LZWDecode | 0.602 | 0.617 | 0.565 | 1.022× | 0.933× | — |
| Compress::LZWEncode | 1.001 | 0.983 | 0.996 | 0.984× | 1.000× | — |
| Distance::Jaro | 1.039 | 1.051 | 0.978 | 1.011× | 0.940× | — |
| Distance::NGram | 1.121 | 1.072 | 1.048 | 0.956× | 0.940× | — |
| Etc::CacheSimulation | 0.906 | 0.881 | 0.891 | 0.975× | 0.983× | — |
| Etc::GameOfLife | 1.052 | 0.976 | 1.028 | 0.871× | 0.971× | gcc |
| Etc::LogParser | 0.415 | 1.720 | 0.522 | 4.158× | 1.252× | gcc |
| Etc::NeuralNet | 0.972 | 0.835 | 0.825 | 0.861× | 0.803× | — |
| Etc::Sieve | 1.183 | 1.566 | 1.192 | 1.323× | 1.010× | — |
| Etc::TextRaytracer | 0.894 | 0.881 | 1.061 | 0.985× | 1.186× | — |
| Etc::Words | 1.019 | 0.970 | 1.010 | 0.960× | 0.985× | gcc |
| Graph::AStar | 1.063 | 1.196 | 0.984 | 1.119× | 0.915× | clang |
| Graph::BFS | 1.498 | 1.190 | 1.117 | 0.806× | 0.749× | gcc |
| Graph::DFS | 1.402 | 1.209 | 1.238 | 0.860× | 0.887× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.384 | 1.169 | 1.177 | 3.040× | 3.072× | — |
| Json::Generate | 0.770 | 0.769 | 0.772 | 0.997× | 1.000× | — |
| Json::ParseDom | 0.954 | 0.911 | 0.891 | 0.958× | 0.930× | — |
| Json::ParseMapping | 0.909 | 0.861 | 0.851 | 0.947× | 0.934× | — |
| Matmul::Single | 1.186 | 1.186 | 1.183 | 0.999× | 0.999× | — |
| Matmul::T16 | 2.358 | 2.311 | 2.297 | 0.987× | 0.971× | — |
| Matmul::T4 | 1.168 | 1.167 | 1.161 | 1.000× | 0.994× | — |
| Matmul::T8 | 1.228 | 1.200 | 1.197 | 0.978× | 0.976× | — |
| Maze::AStar | 1.122 | 0.994 | 1.147 | 0.876× | 1.103× | gcc, clang |
| Maze::BFS | 0.917 | 0.910 | 0.915 | 0.995× | 0.994× | clang |
| Maze::Generator | 1.218 | 1.226 | 1.236 | 1.011× | 1.008× | clang |
| Sort::Merge | 0.750 | 0.986 | 0.878 | 1.312× | 1.171× | — |
| Sort::Quick | 1.138 | 1.086 | 1.099 | 0.953× | 0.965× | — |
| Sort::Self | 1.081 | 1.040 | 1.056 | 0.962× | 0.978× | — |
| Template::Parse | 1.002 | 0.962 | 0.986 | 0.951× | 1.028× | gcc, clang |
| Template::Regex | 0.993 | 1.060 | 1.125 | 1.092× | 1.151× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.026×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.1 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858919)
