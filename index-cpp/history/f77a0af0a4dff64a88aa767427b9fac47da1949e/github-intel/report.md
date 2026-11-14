# index-cpp benchmarks

Compiler checkout: `f77a0af0a4dff64a88aa767427b9fac47da1949e` · CPU: Intel(R) Xeon(R) 6973P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.081× | 1.080× |
| Compile CPU | 6.035× | 4.894× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,916 |
| gcc | 540,112 | 280,921 | 486,070 |
| clang | 513,720 | 264,561 | 319,260 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.110 | 0.929 | 1.144 | 0.859× | 1.044× | — |
| Base64::Encode | 1.097 | 1.216 | 1.133 | 1.159× | 1.063× | gcc, clang |
| Binarytrees::Arena | 2.378 | 2.450 | 2.556 | 1.032× | 1.066× | — |
| Binarytrees::Obj | 1.136 | 1.034 | 1.386 | 0.920× | 1.235× | gcc, clang |
| Brainfuck::Array | 2.095 | 1.801 | 1.881 | 0.846× | 0.893× | — |
| Brainfuck::Recursion | 1.213 | 1.298 | 1.542 | 1.079× | 1.269× | — |
| CLBG::Fannkuchredux | 0.972 | 1.038 | 0.902 | 1.063× | 0.896× | — |
| CLBG::Mandelbrot | 1.031 | 1.055 | 1.051 | 1.011× | 1.012× | — |
| CLBG::Nbody | 0.712 | 0.673 | 0.685 | 0.943× | 0.966× | — |
| CLBG::Spectralnorm | 1.063 | 1.016 | 1.425 | 0.954× | 1.345× | — |
| CSV::Parse | 0.913 | 0.862 | 1.010 | 0.949× | 1.104× | — |
| Calculator::Ast | 1.018 | 0.954 | 0.944 | 0.938× | 0.918× | gcc |
| Calculator::Interpreter | 1.580 | 1.470 | 1.645 | 0.925× | 1.040× | — |
| Compress::ArithDecode | 0.954 | 1.099 | 1.611 | 1.151× | 1.681× | — |
| Compress::ArithEncode | 1.089 | 1.079 | 1.164 | 0.984× | 1.068× | — |
| Compress::BWTDecode | 1.419 | 1.411 | 1.403 | 0.993× | 0.999× | — |
| Compress::BWTEncode | 0.812 | 0.835 | 0.990 | 1.023× | 1.226× | — |
| Compress::HuffDecode | 0.532 | 0.784 | 0.414 | 1.466× | 0.775× | — |
| Compress::HuffEncode | 0.907 | 1.008 | 0.897 | 1.110× | 0.995× | — |
| Compress::LZWDecode | 0.607 | 0.613 | 0.587 | 1.012× | 0.959× | — |
| Compress::LZWEncode | 1.040 | 1.026 | 1.036 | 0.992× | 0.990× | — |
| Distance::Jaro | 1.249 | 1.284 | 1.301 | 1.024× | 1.035× | — |
| Distance::NGram | 1.258 | 1.288 | 1.217 | 1.020× | 0.961× | — |
| Etc::CacheSimulation | 0.881 | 0.851 | 0.867 | 0.975× | 0.985× | — |
| Etc::GameOfLife | 1.183 | 1.196 | 1.157 | 1.005× | 0.994× | gcc |
| Etc::LogParser | 0.452 | 1.346 | 0.475 | 3.001× | 1.059× | — |
| Etc::NeuralNet | 0.849 | 0.781 | 0.766 | 0.922× | 0.901× | clang |
| Etc::Sieve | 2.515 | 3.262 | 2.479 | 1.299× | 0.983× | — |
| Etc::TextRaytracer | 0.702 | 0.687 | 0.891 | 0.983× | 1.271× | — |
| Etc::Words | 1.000 | 0.977 | 0.988 | 0.975× | 0.984× | — |
| Graph::AStar | 1.169 | 1.379 | 1.208 | 1.176× | 1.028× | — |
| Graph::BFS | 1.082 | 1.058 | 1.064 | 0.977× | 0.979× | clang |
| Graph::DFS | 1.169 | 1.121 | 1.143 | 0.957× | 0.984× | — |
| Hash::CRC32 | 0.265 | 0.776 | 1.082 | 2.896× | 4.034× | — |
| Hash::SHA256 | 0.385 | 0.986 | 0.841 | 2.563× | 2.180× | — |
| Json::Generate | 0.922 | 0.921 | 0.919 | 1.005× | 0.994× | — |
| Json::ParseDom | 1.095 | 1.060 | 1.061 | 0.975× | 0.968× | — |
| Json::ParseMapping | 1.043 | 1.010 | 1.004 | 0.976× | 0.963× | — |
| Matmul::Single | 0.804 | 0.806 | 0.807 | 1.002× | 1.005× | — |
| Matmul::T16 | 1.722 | 1.718 | 1.720 | 1.001× | 0.992× | — |
| Matmul::T4 | 0.822 | 0.825 | 0.814 | 1.002× | 0.988× | — |
| Matmul::T8 | 0.885 | 0.889 | 0.885 | 1.002× | 0.997× | — |
| Maze::AStar | 1.867 | 1.869 | 1.973 | 1.001× | 1.049× | — |
| Maze::BFS | 1.367 | 1.478 | 1.516 | 1.071× | 1.125× | clang |
| Maze::Generator | 1.699 | 2.153 | 2.127 | 1.266× | 1.256× | — |
| Sort::Merge | 0.790 | 1.145 | 0.907 | 1.440× | 1.153× | — |
| Sort::Quick | 1.208 | 1.240 | 1.205 | 1.029× | 1.007× | — |
| Sort::Self | 1.273 | 1.177 | 1.195 | 0.930× | 0.941× | — |
| Template::Parse | 2.017 | 1.871 | 1.966 | 0.933× | 0.988× | gcc, clang |
| Template::Regex | 1.480 | 1.194 | 1.486 | 0.795× | 0.972× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.002×.
Compile clang A/A CPU ratio: 0.990×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287795)
