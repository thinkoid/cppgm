# index-cpp benchmarks

Compiler checkout: `323a88769fae13042a86c1b993819b966b906ca5` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.077× | 1.065× |
| Compile CPU | 5.994× | 4.760× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,896 |
| gcc | 540,112 | 280,921 | 486,024 |
| clang | 513,720 | 264,561 | 319,272 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.986 | 0.875 | 0.992 | 0.871× | 1.009× | — |
| Base64::Encode | 1.050 | 1.154 | 0.950 | 1.099× | 0.918× | — |
| Binarytrees::Arena | 2.034 | 1.829 | 2.171 | 0.897× | 1.056× | gcc, clang |
| Binarytrees::Obj | 1.025 | 0.915 | 1.297 | 0.893× | 1.260× | gcc, clang |
| Brainfuck::Array | 2.180 | 2.203 | 2.031 | 1.006× | 0.917× | — |
| Brainfuck::Recursion | 1.352 | 1.465 | 1.347 | 1.093× | 0.999× | — |
| CLBG::Fannkuchredux | 1.129 | 1.218 | 1.018 | 1.082× | 0.907× | gcc |
| CLBG::Mandelbrot | 1.259 | 1.259 | 1.244 | 0.993× | 0.980× | — |
| CLBG::Nbody | 0.812 | 0.769 | 0.802 | 0.935× | 0.987× | gcc, clang |
| CLBG::Spectralnorm | 1.175 | 1.131 | 1.594 | 0.967× | 1.333× | clang |
| CSV::Parse | 1.046 | 0.974 | 1.089 | 0.928× | 1.046× | — |
| Calculator::Ast | 0.991 | 0.947 | 0.966 | 0.959× | 0.932× | — |
| Calculator::Interpreter | 1.231 | 1.148 | 1.270 | 0.935× | 1.050× | — |
| Compress::ArithDecode | 1.072 | 1.242 | 1.796 | 1.146× | 1.670× | — |
| Compress::ArithEncode | 1.274 | 1.209 | 1.329 | 0.937× | 1.041× | clang |
| Compress::BWTDecode | 1.554 | 1.538 | 1.551 | 0.999× | 0.989× | clang |
| Compress::BWTEncode | 0.889 | 0.949 | 1.126 | 1.079× | 1.270× | — |
| Compress::HuffDecode | 0.609 | 0.853 | 0.471 | 1.437× | 0.795× | — |
| Compress::HuffEncode | 0.996 | 1.196 | 1.010 | 1.199× | 0.997× | — |
| Compress::LZWDecode | 0.718 | 0.719 | 0.700 | 1.010× | 0.955× | — |
| Compress::LZWEncode | 1.175 | 1.164 | 1.149 | 1.008× | 0.973× | gcc |
| Distance::Jaro | 1.458 | 1.476 | 1.639 | 1.010× | 1.120× | gcc |
| Distance::NGram | 1.421 | 1.467 | 1.402 | 1.033× | 0.960× | clang |
| Etc::CacheSimulation | 0.990 | 0.968 | 0.997 | 0.972× | 0.998× | clang |
| Etc::GameOfLife | 1.212 | 1.250 | 1.196 | 1.012× | 0.995× | — |
| Etc::LogParser | 0.495 | 1.398 | 0.528 | 2.816× | 1.046× | gcc |
| Etc::NeuralNet | 0.956 | 0.875 | 0.863 | 0.924× | 0.899× | clang |
| Etc::Sieve | 2.547 | 3.412 | 2.488 | 1.335× | 0.974× | — |
| Etc::TextRaytracer | 0.803 | 0.792 | 1.041 | 0.999× | 1.281× | — |
| Etc::Words | 1.111 | 1.056 | 1.103 | 0.954× | 0.995× | — |
| Graph::AStar | 0.968 | 1.123 | 0.992 | 1.152× | 0.972× | gcc |
| Graph::BFS | 0.748 | 0.696 | 0.704 | 0.926× | 0.954× | — |
| Graph::DFS | 1.015 | 0.926 | 1.060 | 0.934× | 0.985× | gcc, clang |
| Hash::CRC32 | 0.288 | 0.861 | 1.191 | 2.964× | 4.118× | — |
| Hash::SHA256 | 0.407 | 1.224 | 1.024 | 2.998× | 2.510× | clang |
| Json::Generate | 1.069 | 1.050 | 1.071 | 0.989× | 0.997× | clang |
| Json::ParseDom | 1.272 | 1.211 | 1.238 | 0.961× | 0.953× | gcc |
| Json::ParseMapping | 1.212 | 1.140 | 1.153 | 0.941× | 0.947× | — |
| Matmul::Single | 0.880 | 0.903 | 0.850 | 1.029× | 0.967× | — |
| Matmul::T16 | 1.827 | 1.772 | 1.784 | 0.972× | 0.986× | clang |
| Matmul::T4 | 0.895 | 0.904 | 0.879 | 1.004× | 0.977× | clang |
| Matmul::T8 | 0.944 | 0.938 | 0.948 | 0.992× | 1.016× | — |
| Maze::AStar | 0.982 | 0.945 | 0.907 | 0.967× | 0.916× | — |
| Maze::BFS | 0.815 | 0.798 | 0.792 | 0.973× | 0.982× | gcc |
| Maze::Generator | 0.933 | 1.008 | 1.193 | 1.078× | 1.164× | gcc, clang |
| Sort::Merge | 0.888 | 1.305 | 0.994 | 1.480× | 1.115× | clang |
| Sort::Quick | 1.450 | 1.415 | 1.375 | 0.996× | 0.937× | — |
| Sort::Self | 1.439 | 1.330 | 1.323 | 0.907× | 0.914× | — |
| Template::Parse | 1.229 | 1.136 | 1.202 | 0.932× | 0.992× | gcc, clang |
| Template::Regex | 1.230 | 1.082 | 1.311 | 0.891× | 1.059× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.984×.
Compile clang A/A CPU ratio: 0.992×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819275)
