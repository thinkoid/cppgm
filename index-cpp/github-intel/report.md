# index-cpp benchmarks

Compiler checkout: `393bcf16e6a1102a419fcfd176ee8b4bcb60b16a` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.092× | 1.073× |
| Compile CPU | 5.851× | 4.758× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 710,360 | 338,226 | 228,848 |
| gcc | 540,112 | 280,921 | 486,060 |
| clang | 513,720 | 264,561 | 319,120 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.893 | 0.800 | 0.893 | 0.903× | 0.998× | — |
| Base64::Encode | 0.959 | 1.051 | 0.866 | 1.097× | 0.914× | — |
| Binarytrees::Arena | 1.720 | 1.728 | 1.958 | 1.015× | 1.137× | gcc, clang |
| Binarytrees::Obj | 0.917 | 0.859 | 1.155 | 0.937× | 1.230× | — |
| Brainfuck::Array | 1.683 | 1.993 | 1.846 | 1.194× | 1.093× | — |
| Brainfuck::Recursion | 1.256 | 1.304 | 1.249 | 1.040× | 0.992× | — |
| CLBG::Fannkuchredux | 0.981 | 1.089 | 0.933 | 1.111× | 0.951× | — |
| CLBG::Mandelbrot | 1.139 | 1.132 | 1.120 | 1.006× | 0.983× | — |
| CLBG::Nbody | 0.736 | 0.699 | 0.718 | 0.951× | 0.976× | — |
| CLBG::Spectralnorm | 1.058 | 1.012 | 1.419 | 0.957× | 1.332× | — |
| CSV::Parse | 0.975 | 0.891 | 0.992 | 0.914× | 1.017× | clang |
| Calculator::Ast | 0.893 | 0.865 | 0.857 | 0.968× | 0.956× | — |
| Calculator::Interpreter | 1.128 | 1.092 | 1.162 | 0.963× | 1.019× | clang |
| Compress::ArithDecode | 0.969 | 1.094 | 1.619 | 1.131× | 1.671× | gcc |
| Compress::ArithEncode | 1.144 | 1.095 | 1.177 | 0.955× | 1.028× | — |
| Compress::BWTDecode | 1.391 | 1.384 | 1.396 | 0.995× | 0.999× | — |
| Compress::BWTEncode | 0.806 | 0.854 | 1.006 | 1.060× | 1.246× | — |
| Compress::HuffDecode | 0.506 | 0.787 | 0.421 | 1.555× | 0.829× | gcc |
| Compress::HuffEncode | 0.895 | 1.098 | 0.891 | 1.217× | 0.998× | — |
| Compress::LZWDecode | 0.651 | 0.655 | 0.630 | 1.011× | 0.956× | — |
| Compress::LZWEncode | 1.044 | 1.040 | 1.040 | 0.998× | 0.997× | — |
| Distance::Jaro | 1.312 | 1.332 | 1.454 | 1.012× | 1.109× | — |
| Distance::NGram | 1.295 | 1.315 | 1.241 | 1.015× | 0.958× | — |
| Etc::CacheSimulation | 0.911 | 0.871 | 0.903 | 0.957× | 0.990× | — |
| Etc::GameOfLife | 1.127 | 1.157 | 1.167 | 1.029× | 1.003× | clang |
| Etc::LogParser | 0.438 | 1.230 | 0.473 | 2.899× | 1.085× | gcc |
| Etc::NeuralNet | 0.860 | 0.792 | 0.782 | 0.922× | 0.910× | — |
| Etc::Sieve | 2.380 | 3.122 | 2.413 | 1.316× | 1.006× | clang |
| Etc::TextRaytracer | 0.720 | 0.707 | 0.919 | 0.983× | 1.274× | — |
| Etc::Words | 1.010 | 0.972 | 0.995 | 0.960× | 0.982× | — |
| Graph::AStar | 0.882 | 1.048 | 0.838 | 1.138× | 0.947× | — |
| Graph::BFS | 0.683 | 0.640 | 0.637 | 0.936× | 0.943× | — |
| Graph::DFS | 0.912 | 0.855 | 0.881 | 0.940× | 0.971× | — |
| Hash::CRC32 | 0.266 | 0.770 | 1.075 | 2.897× | 4.045× | — |
| Hash::SHA256 | 0.369 | 1.116 | 0.929 | 3.031× | 2.516× | — |
| Json::Generate | 0.962 | 0.960 | 0.960 | 1.003× | 0.995× | — |
| Json::ParseDom | 1.163 | 1.115 | 1.103 | 0.959× | 0.948× | — |
| Json::ParseMapping | 1.105 | 1.061 | 1.051 | 0.961× | 0.953× | — |
| Matmul::Single | 0.794 | 0.794 | 0.786 | 1.001× | 0.987× | — |
| Matmul::T16 | 1.639 | 1.611 | 1.632 | 0.991× | 0.989× | — |
| Matmul::T4 | 0.812 | 0.811 | 0.811 | 0.996× | 1.003× | — |
| Matmul::T8 | 0.859 | 0.841 | 0.860 | 0.988× | 0.998× | — |
| Maze::AStar | 0.895 | 0.861 | 0.867 | 0.962× | 0.966× | — |
| Maze::BFS | 0.744 | 0.738 | 0.756 | 0.989× | 1.015× | — |
| Maze::Generator | 0.866 | 0.996 | 0.939 | 1.140× | 1.094× | clang |
| Sort::Merge | 0.786 | 1.166 | 0.912 | 1.485× | 1.159× | — |
| Sort::Quick | 1.295 | 1.268 | 1.233 | 0.980× | 0.950× | — |
| Sort::Self | 1.307 | 1.192 | 1.215 | 0.912× | 0.929× | — |
| Template::Parse | 1.082 | 1.075 | 1.110 | 1.006× | 1.018× | — |
| Template::Regex | 1.110 | 1.040 | 1.194 | 0.945× | 1.073× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.003×.
Compile clang A/A CPU ratio: 0.999×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674677955)
