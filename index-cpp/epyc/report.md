# index-cpp benchmarks

Compiler checkout: `03db3c34a507ea98ae7816600ed3fd7bd054a1a9` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.066× | 1.054× |
| Compile CPU | 6.388× | 5.832× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,658 |
| gcc | 540,112 | 280,921 | 485,932 |
| clang | 513,720 | 264,561 | 319,364 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.406 | 1.184 | 1.200 | 0.848× | 0.853× | — |
| Base64::Encode | 1.660 | 1.417 | 1.272 | 0.863× | 0.763× | — |
| Binarytrees::Arena | 2.330 | 2.409 | 2.495 | 1.035× | 1.067× | — |
| Binarytrees::Obj | 1.421 | 1.314 | 1.504 | 0.910× | 1.061× | — |
| Brainfuck::Array | 2.658 | 2.811 | 2.679 | 1.100× | 1.017× | clang |
| Brainfuck::Recursion | 1.740 | 1.743 | 1.707 | 1.001× | 0.983× | — |
| CLBG::Fannkuchredux | 0.993 | 1.145 | 0.976 | 1.167× | 0.982× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.989× | 0.978× | — |
| CLBG::Nbody | 1.037 | 1.057 | 1.058 | 1.017× | 1.021× | — |
| CLBG::Spectralnorm | 1.184 | 1.139 | 1.739 | 0.962× | 1.469× | — |
| CSV::Parse | 1.216 | 1.082 | 1.148 | 0.895× | 0.941× | — |
| Calculator::Ast | 1.031 | 0.956 | 0.978 | 0.924× | 0.937× | gcc |
| Calculator::Interpreter | 1.329 | 1.268 | 1.380 | 0.983× | 1.031× | — |
| Compress::ArithDecode | 0.937 | 0.948 | 1.602 | 1.011× | 1.708× | — |
| Compress::ArithEncode | 1.079 | 0.981 | 1.109 | 0.910× | 1.027× | — |
| Compress::BWTDecode | 0.641 | 0.645 | 0.663 | 1.003× | 1.024× | — |
| Compress::BWTEncode | 1.106 | 1.133 | 1.367 | 1.013× | 1.232× | — |
| Compress::HuffDecode | 0.618 | 0.774 | 0.518 | 1.255× | 0.834× | — |
| Compress::HuffEncode | 0.984 | 1.229 | 1.034 | 1.247× | 1.050× | — |
| Compress::LZWDecode | 0.738 | 0.731 | 0.698 | 0.992× | 0.945× | — |
| Compress::LZWEncode | 1.327 | 1.287 | 1.302 | 0.968× | 0.984× | clang |
| Distance::Jaro | 1.210 | 1.171 | 1.149 | 0.967× | 0.950× | — |
| Distance::NGram | 1.365 | 1.321 | 1.284 | 0.973× | 0.942× | — |
| Etc::CacheSimulation | 1.139 | 1.104 | 1.117 | 0.971× | 0.993× | — |
| Etc::GameOfLife | 1.248 | 1.137 | 1.207 | 0.941× | 0.978× | gcc, clang |
| Etc::LogParser | 0.520 | 1.963 | 0.661 | 3.840× | 1.255× | — |
| Etc::NeuralNet | 1.248 | 1.113 | 1.080 | 0.927× | 0.821× | gcc |
| Etc::Sieve | 1.387 | 1.967 | 1.471 | 1.352× | 0.995× | clang |
| Etc::TextRaytracer | 1.040 | 1.025 | 1.340 | 0.982× | 1.289× | — |
| Etc::Words | 1.330 | 1.286 | 1.336 | 0.965× | 1.015× | — |
| Graph::AStar | 1.137 | 1.287 | 1.067 | 1.137× | 0.930× | — |
| Graph::BFS | 1.449 | 1.131 | 1.152 | 0.798× | 0.769× | gcc, clang |
| Graph::DFS | 1.349 | 1.159 | 1.231 | 0.858× | 0.901× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.916 | 2.751× | 3.125× | — |
| Hash::SHA256 | 0.452 | 1.474 | 1.379 | 3.255× | 3.052× | — |
| Json::Generate | 1.123 | 1.118 | 1.128 | 1.000× | 1.005× | — |
| Json::ParseDom | 1.276 | 1.195 | 1.192 | 0.934× | 0.934× | — |
| Json::ParseMapping | 1.216 | 1.135 | 1.133 | 0.935× | 0.930× | — |
| Matmul::Single | 1.387 | 1.386 | 1.383 | 0.998× | 0.997× | — |
| Matmul::T16 | 2.632 | 2.606 | 2.632 | 0.998× | 1.000× | — |
| Matmul::T4 | 1.355 | 1.353 | 1.354 | 0.999× | 1.000× | — |
| Matmul::T8 | 1.373 | 1.371 | 1.379 | 0.998× | 1.004× | — |
| Maze::AStar | 1.265 | 1.027 | 1.394 | 0.893× | 1.032× | gcc, clang |
| Maze::BFS | 1.464 | 1.238 | 1.599 | 0.978× | 1.026× | gcc, clang |
| Maze::Generator | 1.210 | 1.250 | 1.232 | 1.065× | 1.019× | clang |
| Sort::Merge | 0.863 | 1.129 | 1.027 | 1.309× | 1.189× | — |
| Sort::Quick | 1.352 | 1.232 | 1.252 | 0.912× | 0.926× | — |
| Sort::Self | 1.258 | 1.207 | 1.230 | 0.959× | 0.978× | — |
| Template::Parse | 1.310 | 1.169 | 1.428 | 0.939× | 0.959× | gcc, clang |
| Template::Regex | 1.329 | 1.298 | 1.617 | 1.063× | 1.171× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.008×.
Compile clang A/A CPU ratio: 0.989×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.7 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984)
