# index-cpp benchmarks

Compiler checkout: `50b6ccfce58613983aa027e54e11d6a071971a9a` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.097× | 1.091× |
| Compile CPU | 6.218× | 5.012× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,720 |
| gcc | 540,112 | 280,921 | 486,068 |
| clang | 513,720 | 264,561 | 319,042 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.038 | 0.907 | 1.034 | 0.873× | 1.001× | — |
| Base64::Encode | 1.007 | 1.228 | 0.962 | 1.219× | 0.959× | — |
| Binarytrees::Arena | 2.479 | 2.606 | 2.296 | 1.048× | 1.125× | — |
| Binarytrees::Obj | 1.153 | 1.047 | 1.217 | 0.905× | 1.191× | — |
| Brainfuck::Array | 2.040 | 2.062 | 2.130 | 1.011× | 1.037× | — |
| Brainfuck::Recursion | 1.413 | 1.510 | 1.780 | 1.072× | 1.261× | — |
| CLBG::Fannkuchredux | 1.122 | 1.203 | 1.042 | 1.074× | 0.932× | — |
| CLBG::Mandelbrot | 1.185 | 1.226 | 1.217 | 1.035× | 1.023× | — |
| CLBG::Nbody | 0.827 | 0.782 | 0.795 | 0.946× | 0.962× | — |
| CLBG::Spectralnorm | 1.223 | 1.175 | 1.649 | 0.962× | 1.348× | — |
| CSV::Parse | 1.062 | 0.986 | 1.157 | 0.929× | 1.092× | — |
| Calculator::Ast | 1.062 | 1.012 | 0.921 | 0.929× | 0.938× | — |
| Calculator::Interpreter | 1.414 | 1.452 | 1.292 | 1.013× | 1.040× | clang |
| Compress::ArithDecode | 1.097 | 1.269 | 1.867 | 1.155× | 1.702× | — |
| Compress::ArithEncode | 1.268 | 1.249 | 1.343 | 0.986× | 1.061× | — |
| Compress::BWTDecode | 1.614 | 1.611 | 1.616 | 0.998× | 1.000× | — |
| Compress::BWTEncode | 0.938 | 0.969 | 1.151 | 1.032× | 1.227× | — |
| Compress::HuffDecode | 0.552 | 0.905 | 0.480 | 1.627× | 0.869× | — |
| Compress::HuffEncode | 1.031 | 1.167 | 1.043 | 1.135× | 1.013× | — |
| Compress::LZWDecode | 0.692 | 0.691 | 0.667 | 0.999× | 0.964× | — |
| Compress::LZWEncode | 1.197 | 1.190 | 1.196 | 0.995× | 0.997× | — |
| Distance::Jaro | 1.448 | 1.487 | 1.507 | 1.027× | 1.041× | — |
| Distance::NGram | 1.474 | 1.487 | 1.410 | 1.009× | 0.956× | — |
| Etc::CacheSimulation | 1.020 | 0.983 | 1.009 | 0.964× | 0.989× | — |
| Etc::GameOfLife | 1.225 | 1.270 | 1.245 | 1.042× | 1.013× | — |
| Etc::LogParser | 0.496 | 1.499 | 0.552 | 3.032× | 1.097× | gcc |
| Etc::NeuralNet | 0.977 | 0.913 | 0.887 | 0.934× | 0.908× | — |
| Etc::Sieve | 2.655 | 3.540 | 2.673 | 1.336× | 1.007× | — |
| Etc::TextRaytracer | 0.809 | 0.793 | 1.037 | 0.980× | 1.282× | — |
| Etc::Words | 1.153 | 1.123 | 1.138 | 0.971× | 0.983× | — |
| Graph::AStar | 1.228 | 1.427 | 0.927 | 1.159× | 0.942× | — |
| Graph::BFS | 1.095 | 1.056 | 0.736 | 0.963× | 0.938× | — |
| Graph::DFS | 1.237 | 1.179 | 0.962 | 0.951× | 0.962× | — |
| Hash::CRC32 | 0.306 | 0.898 | 1.259 | 2.930× | 4.116× | — |
| Hash::SHA256 | 0.443 | 1.145 | 0.974 | 2.582× | 2.203× | — |
| Json::Generate | 1.043 | 1.052 | 1.049 | 1.009× | 1.006× | — |
| Json::ParseDom | 1.274 | 1.211 | 1.198 | 0.949× | 0.941× | — |
| Json::ParseMapping | 1.212 | 1.150 | 1.143 | 0.949× | 0.942× | — |
| Matmul::Single | 0.952 | 0.950 | 0.946 | 0.997× | 0.999× | — |
| Matmul::T16 | 0.883 | 0.883 | 0.871 | 0.998× | 0.995× | — |
| Matmul::T4 | 0.938 | 0.946 | 0.932 | 1.003× | 0.999× | — |
| Matmul::T8 | 0.919 | 0.925 | 0.913 | 1.000× | 1.000× | — |
| Maze::AStar | 1.308 | 1.631 | 0.955 | 1.036× | 1.177× | — |
| Maze::BFS | 0.847 | 0.853 | 0.853 | 0.996× | 1.030× | clang |
| Maze::Generator | 1.433 | 2.014 | 1.128 | 1.241× | 1.237× | — |
| Sort::Merge | 0.908 | 1.321 | 1.060 | 1.455× | 1.169× | — |
| Sort::Quick | 1.393 | 1.435 | 1.405 | 1.029× | 1.010× | — |
| Sort::Self | 1.472 | 1.357 | 1.377 | 0.922× | 0.937× | — |
| Template::Parse | 1.453 | 1.433 | 1.260 | 0.986× | 1.075× | gcc, clang |
| Template::Regex | 1.107 | 1.156 | 1.327 | 1.051× | 1.218× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.000×.
Compile clang A/A CPU ratio: 1.003×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.5 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43925787006)
