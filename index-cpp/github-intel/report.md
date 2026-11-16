# index-cpp benchmarks

Compiler checkout: `0785eb82196d630572f71a1967b3aa589dce33d3` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.090× | 1.079× |
| Compile CPU | 6.286× | 5.086× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,656 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 319,342 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.834 | 0.731 | 0.834 | 0.876× | 1.001× | — |
| Base64::Encode | 0.821 | 1.007 | 0.787 | 1.225× | 0.959× | — |
| Binarytrees::Arena | 1.565 | 1.742 | 1.732 | 1.040× | 1.118× | gcc |
| Binarytrees::Obj | 0.829 | 0.764 | 0.966 | 0.915× | 1.174× | — |
| Brainfuck::Array | 1.627 | 1.645 | 1.698 | 1.012× | 1.043× | — |
| Brainfuck::Recursion | 1.125 | 1.205 | 1.417 | 1.072× | 1.259× | — |
| CLBG::Fannkuchredux | 0.895 | 0.972 | 0.831 | 1.075× | 0.921× | gcc |
| CLBG::Mandelbrot | 0.944 | 0.977 | 0.969 | 1.036× | 1.028× | — |
| CLBG::Nbody | 0.659 | 0.622 | 0.633 | 0.945× | 0.961× | — |
| CLBG::Spectralnorm | 0.974 | 0.935 | 1.314 | 0.959× | 1.348× | — |
| CSV::Parse | 0.847 | 0.792 | 0.925 | 0.935× | 1.092× | — |
| Calculator::Ast | 0.808 | 0.742 | 0.746 | 0.919× | 0.924× | gcc |
| Calculator::Interpreter | 1.137 | 1.107 | 1.162 | 0.972× | 1.011× | — |
| Compress::ArithDecode | 0.875 | 1.010 | 1.486 | 1.154× | 1.699× | — |
| Compress::ArithEncode | 1.008 | 0.994 | 1.072 | 0.984× | 1.063× | — |
| Compress::BWTDecode | 1.306 | 1.305 | 1.307 | 0.999× | 1.001× | — |
| Compress::BWTEncode | 0.753 | 0.778 | 0.927 | 1.033× | 1.232× | — |
| Compress::HuffDecode | 0.441 | 0.720 | 0.391 | 1.628× | 0.881× | — |
| Compress::HuffEncode | 0.823 | 0.925 | 0.827 | 1.122× | 1.011× | — |
| Compress::LZWDecode | 0.579 | 0.574 | 0.552 | 0.996× | 0.953× | — |
| Compress::LZWEncode | 0.954 | 0.944 | 0.953 | 0.988× | 0.999× | — |
| Distance::Jaro | 1.157 | 1.187 | 1.203 | 1.026× | 1.040× | — |
| Distance::NGram | 1.175 | 1.185 | 1.123 | 1.009× | 0.957× | — |
| Etc::CacheSimulation | 0.812 | 0.785 | 0.801 | 0.964× | 0.987× | — |
| Etc::GameOfLife | 1.127 | 1.155 | 1.105 | 1.023× | 0.979× | — |
| Etc::LogParser | 0.398 | 1.183 | 0.439 | 2.998× | 1.115× | gcc |
| Etc::NeuralNet | 0.780 | 0.726 | 0.708 | 0.929× | 0.908× | — |
| Etc::Sieve | 2.445 | 3.148 | 2.430 | 1.292× | 0.987× | — |
| Etc::TextRaytracer | 0.645 | 0.633 | 0.826 | 0.980× | 1.283× | — |
| Etc::Words | 0.921 | 0.895 | 0.910 | 0.975× | 0.984× | — |
| Graph::AStar | 0.801 | 0.934 | 0.756 | 1.138× | 0.943× | gcc |
| Graph::BFS | 0.650 | 0.614 | 0.606 | 0.941× | 0.929× | gcc |
| Graph::DFS | 0.819 | 0.812 | 0.782 | 0.961× | 0.953× | gcc |
| Hash::CRC32 | 0.244 | 0.715 | 1.003 | 2.930× | 4.111× | — |
| Hash::SHA256 | 0.353 | 0.914 | 0.778 | 2.582× | 2.207× | — |
| Json::Generate | 0.852 | 0.859 | 0.854 | 1.011× | 0.999× | — |
| Json::ParseDom | 1.022 | 0.984 | 0.973 | 0.961× | 0.952× | — |
| Json::ParseMapping | 0.970 | 0.935 | 0.927 | 0.961× | 0.955× | — |
| Matmul::Single | 0.750 | 0.749 | 0.755 | 0.993× | 0.999× | gcc |
| Matmul::T16 | 1.648 | 1.639 | 1.620 | 0.995× | 0.985× | — |
| Matmul::T4 | 0.779 | 0.779 | 0.773 | 1.000× | 0.994× | — |
| Matmul::T8 | 0.846 | 0.843 | 0.843 | 0.998× | 0.992× | — |
| Maze::AStar | 0.881 | 0.843 | 0.840 | 0.965× | 0.944× | — |
| Maze::BFS | 0.724 | 0.714 | 0.754 | 0.987× | 1.032× | — |
| Maze::Generator | 0.858 | 1.019 | 0.933 | 1.131× | 1.092× | gcc |
| Sort::Merge | 0.725 | 1.054 | 0.847 | 1.452× | 1.168× | — |
| Sort::Quick | 1.110 | 1.144 | 1.121 | 1.030× | 1.010× | — |
| Sort::Self | 1.172 | 1.081 | 1.098 | 0.922× | 0.938× | — |
| Template::Parse | 1.073 | 1.063 | 1.111 | 0.991× | 1.023× | — |
| Template::Regex | 0.923 | 0.958 | 1.102 | 1.035× | 1.188× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.001×.
Compile clang A/A CPU ratio: 0.990×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.6 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972492)
