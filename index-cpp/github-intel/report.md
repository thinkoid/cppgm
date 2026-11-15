# index-cpp benchmarks

Compiler checkout: `0b676f0538e48bc09cabec50cc9ce76155ba448f` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.091× | 1.076× |
| Compile CPU | 5.961× | 4.814× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,482 | 228,858 |
| gcc | 540,112 | 280,921 | 486,058 |
| clang | 513,720 | 264,561 | 319,160 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.893 | 0.800 | 0.894 | 0.897× | 0.999× | — |
| Base64::Encode | 0.961 | 1.053 | 0.867 | 1.096× | 0.900× | — |
| Binarytrees::Arena | 1.889 | 1.842 | 2.130 | 1.015× | 1.096× | gcc, clang |
| Binarytrees::Obj | 0.938 | 0.855 | 1.250 | 0.924× | 1.322× | gcc, clang |
| Brainfuck::Array | 1.683 | 1.986 | 1.851 | 1.187× | 1.101× | — |
| Brainfuck::Recursion | 1.254 | 1.305 | 1.248 | 1.045× | 0.998× | — |
| CLBG::Fannkuchredux | 0.981 | 1.087 | 0.929 | 1.111× | 0.950× | — |
| CLBG::Mandelbrot | 1.138 | 1.132 | 1.119 | 0.996× | 0.982× | — |
| CLBG::Nbody | 0.737 | 0.698 | 0.717 | 0.949× | 0.973× | — |
| CLBG::Spectralnorm | 1.058 | 1.013 | 1.418 | 0.957× | 1.338× | — |
| CSV::Parse | 0.970 | 0.891 | 0.994 | 0.917× | 1.025× | — |
| Calculator::Ast | 0.899 | 0.865 | 0.887 | 0.976× | 0.986× | gcc |
| Calculator::Interpreter | 1.177 | 1.111 | 1.163 | 0.944× | 0.982× | — |
| Compress::ArithDecode | 0.968 | 1.099 | 1.618 | 1.137× | 1.673× | — |
| Compress::ArithEncode | 1.159 | 1.095 | 1.178 | 0.943× | 1.015× | — |
| Compress::BWTDecode | 1.394 | 1.385 | 1.393 | 0.996× | 0.994× | gcc |
| Compress::BWTEncode | 0.808 | 0.857 | 1.002 | 1.065× | 1.244× | — |
| Compress::HuffDecode | 0.496 | 0.798 | 0.419 | 1.613× | 0.849× | — |
| Compress::HuffEncode | 0.899 | 1.092 | 0.893 | 1.212× | 0.997× | — |
| Compress::LZWDecode | 0.651 | 0.659 | 0.631 | 1.015× | 0.969× | — |
| Compress::LZWEncode | 1.046 | 1.042 | 1.039 | 1.006× | 0.992× | — |
| Distance::Jaro | 1.316 | 1.334 | 1.452 | 1.015× | 1.101× | — |
| Distance::NGram | 1.293 | 1.312 | 1.240 | 1.015× | 0.959× | — |
| Etc::CacheSimulation | 0.897 | 0.871 | 0.893 | 0.971× | 0.996× | — |
| Etc::GameOfLife | 1.149 | 1.176 | 1.139 | 1.027× | 0.990× | — |
| Etc::LogParser | 0.431 | 1.286 | 0.472 | 3.002× | 1.089× | clang |
| Etc::NeuralNet | 0.861 | 0.794 | 0.781 | 0.925× | 0.906× | — |
| Etc::Sieve | 2.412 | 3.170 | 2.375 | 1.313× | 0.985× | — |
| Etc::TextRaytracer | 0.722 | 0.707 | 0.918 | 0.982× | 1.271× | — |
| Etc::Words | 1.015 | 0.970 | 0.994 | 0.950× | 0.984× | clang |
| Graph::AStar | 0.946 | 1.086 | 0.904 | 1.115× | 0.950× | gcc |
| Graph::BFS | 0.694 | 0.647 | 0.657 | 0.942× | 0.940× | clang |
| Graph::DFS | 1.014 | 0.888 | 0.958 | 0.885× | 0.948× | gcc, clang |
| Hash::CRC32 | 0.266 | 0.770 | 1.076 | 2.895× | 4.045× | — |
| Hash::SHA256 | 0.370 | 1.113 | 0.928 | 3.011× | 2.512× | — |
| Json::Generate | 0.966 | 0.959 | 0.962 | 0.991× | 0.995× | — |
| Json::ParseDom | 1.167 | 1.114 | 1.102 | 0.956× | 0.941× | — |
| Json::ParseMapping | 1.107 | 1.058 | 1.050 | 0.955× | 0.950× | — |
| Matmul::Single | 0.796 | 0.796 | 0.787 | 1.006× | 0.989× | — |
| Matmul::T16 | 1.647 | 1.636 | 1.635 | 0.991× | 0.999× | gcc, clang |
| Matmul::T4 | 0.812 | 0.810 | 0.811 | 0.998× | 0.999× | — |
| Matmul::T8 | 0.856 | 0.847 | 0.847 | 0.983× | 0.989× | — |
| Maze::AStar | 0.913 | 0.883 | 0.898 | 0.972× | 0.954× | clang |
| Maze::BFS | 0.756 | 0.750 | 0.752 | 0.990× | 0.995× | — |
| Maze::Generator | 0.991 | 1.055 | 1.156 | 1.124× | 1.251× | gcc, clang |
| Sort::Merge | 0.785 | 1.167 | 0.915 | 1.488× | 1.168× | — |
| Sort::Quick | 1.296 | 1.270 | 1.234 | 0.981× | 0.952× | — |
| Sort::Self | 1.306 | 1.193 | 1.215 | 0.913× | 0.928× | — |
| Template::Parse | 1.106 | 1.092 | 1.187 | 1.017× | 1.024× | clang |
| Template::Regex | 1.107 | 1.069 | 1.226 | 0.976× | 1.102× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.002×.
Compile clang A/A CPU ratio: 1.000×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060735)
