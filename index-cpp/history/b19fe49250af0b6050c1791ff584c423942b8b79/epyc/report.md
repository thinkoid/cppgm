# index-cpp benchmarks

Compiler checkout: `b19fe49250af0b6050c1791ff584c423942b8b79` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.046× | 1.046× |
| Compile CPU | 6.243× | 4.975× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,906 |
| gcc | 540,112 | 280,921 | 486,100 |
| clang | 513,720 | 264,561 | 319,122 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.837 | 0.679 | 0.708 | 0.810× | 0.859× | gcc |
| Base64::Encode | 0.849 | 0.865 | 0.671 | 1.016× | 0.793× | gcc |
| Binarytrees::Arena | 1.593 | 1.648 | 1.637 | 1.021× | 1.040× | — |
| Binarytrees::Obj | 0.684 | 0.633 | 0.754 | 0.934× | 1.088× | gcc |
| Brainfuck::Array | 1.333 | 1.392 | 1.224 | 1.045× | 0.909× | gcc, clang |
| Brainfuck::Recursion | 0.861 | 0.737 | 0.847 | 0.858× | 0.966× | gcc, clang |
| CLBG::Fannkuchredux | 0.782 | 0.770 | 0.800 | 0.978× | 1.048× | — |
| CLBG::Mandelbrot | 0.864 | 0.843 | 0.866 | 0.966× | 1.000× | — |
| CLBG::Nbody | 0.629 | 0.627 | 0.627 | 0.994× | 1.006× | — |
| CLBG::Spectralnorm | 0.729 | 0.713 | 1.010 | 0.974× | 1.386× | — |
| CSV::Parse | 0.615 | 0.601 | 0.633 | 0.979× | 1.018× | gcc |
| Calculator::Ast | 0.596 | 0.689 | 0.577 | 1.161× | 0.977× | gcc |
| Calculator::Interpreter | 0.750 | 0.736 | 0.766 | 0.944× | 1.045× | — |
| Compress::ArithDecode | 0.706 | 0.663 | 1.211 | 0.931× | 1.715× | — |
| Compress::ArithEncode | 0.835 | 0.764 | 0.793 | 0.918× | 0.945× | — |
| Compress::BWTDecode | 0.415 | 0.416 | 0.411 | 0.994× | 0.999× | — |
| Compress::BWTEncode | 0.580 | 0.613 | 0.726 | 1.030× | 1.269× | gcc, clang |
| Compress::HuffDecode | 0.297 | 0.377 | 0.262 | 1.259× | 0.883× | — |
| Compress::HuffEncode | 0.526 | 0.504 | 0.687 | 0.953× | 1.308× | — |
| Compress::LZWDecode | 0.403 | 0.412 | 0.401 | 1.032× | 0.989× | — |
| Compress::LZWEncode | 0.742 | 0.726 | 0.730 | 0.969× | 0.988× | gcc |
| Distance::Jaro | 0.899 | 0.903 | 0.897 | 0.993× | 0.983× | — |
| Distance::NGram | 0.901 | 0.867 | 0.867 | 0.960× | 0.959× | gcc |
| Etc::CacheSimulation | 0.637 | 0.613 | 0.633 | 0.982× | 0.998× | — |
| Etc::GameOfLife | 0.923 | 0.680 | 0.668 | 0.703× | 0.773× | gcc, clang |
| Etc::LogParser | 0.267 | 0.867 | 0.275 | 3.270× | 1.043× | gcc |
| Etc::NeuralNet | 0.686 | 0.605 | 0.595 | 0.871× | 0.894× | clang |
| Etc::Sieve | 0.915 | 1.268 | 0.857 | 1.390× | 0.928× | — |
| Etc::TextRaytracer | 0.595 | 0.587 | 0.724 | 0.984× | 1.215× | — |
| Etc::Words | 0.726 | 0.702 | 0.734 | 0.959× | 1.012× | gcc |
| Graph::AStar | 0.975 | 1.069 | 0.919 | 1.065× | 0.959× | clang |
| Graph::BFS | 1.159 | 1.327 | 1.010 | 1.082× | 0.925× | — |
| Graph::DFS | 1.135 | 1.089 | 1.055 | 0.912× | 0.955× | clang |
| Hash::CRC32 | 0.209 | 0.577 | 0.657 | 2.685× | 3.136× | gcc |
| Hash::SHA256 | 0.467 | 0.902 | 0.927 | 1.906× | 2.005× | — |
| Json::Generate | 0.665 | 0.651 | 0.656 | 0.970× | 0.988× | — |
| Json::ParseDom | 0.773 | 0.742 | 0.754 | 0.964× | 0.972× | gcc |
| Json::ParseMapping | 0.736 | 0.708 | 0.714 | 0.953× | 0.967× | clang |
| Matmul::Single | 0.627 | 0.628 | 0.626 | 0.998× | 1.004× | gcc |
| Matmul::T16 | 1.293 | 1.293 | 1.328 | 1.000× | 1.026× | gcc |
| Matmul::T4 | 0.627 | 0.627 | 0.635 | 0.998× | 1.000× | gcc |
| Matmul::T8 | 0.657 | 0.667 | 0.681 | 1.010× | 1.055× | — |
| Maze::AStar | 1.158 | 1.185 | 0.948 | 0.992× | 0.881× | clang |
| Maze::BFS | 0.944 | 1.044 | 0.820 | 1.048× | 0.912× | clang |
| Maze::Generator | 1.177 | 1.194 | 1.145 | 0.980× | 0.999× | clang |
| Sort::Merge | 0.636 | 0.933 | 0.679 | 1.452× | 1.077× | — |
| Sort::Quick | 1.065 | 1.033 | 1.070 | 0.992× | 0.979× | — |
| Sort::Self | 1.026 | 0.992 | 1.018 | 0.956× | 0.959× | gcc, clang |
| Template::Parse | 0.666 | 0.724 | 0.624 | 0.761× | 0.994× | gcc, clang |
| Template::Regex | 0.704 | 0.879 | 0.780 | 1.041× | 1.168× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.007×.
Compile clang A/A CPU ratio: 1.036×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677178)
