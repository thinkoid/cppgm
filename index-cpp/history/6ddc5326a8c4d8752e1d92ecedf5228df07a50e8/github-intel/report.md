# index-cpp benchmarks

Compiler checkout: `6ddc5326a8c4d8752e1d92ecedf5228df07a50e8` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.089× | 1.080× |
| Compile CPU | 6.300× | 5.063× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,610 |
| gcc | 540,112 | 280,921 | 486,072 |
| clang | 513,720 | 264,561 | 319,256 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.992 | 0.733 | 0.835 | 0.741× | 0.840× | — |
| Base64::Encode | 0.903 | 1.002 | 0.786 | 1.109× | 0.872× | — |
| Binarytrees::Arena | 1.878 | 2.079 | 2.015 | 1.102× | 1.065× | clang |
| Binarytrees::Obj | 0.978 | 0.904 | 1.139 | 0.955× | 1.168× | gcc, clang |
| Brainfuck::Array | 1.639 | 1.661 | 1.699 | 1.013× | 1.037× | — |
| Brainfuck::Recursion | 1.127 | 1.204 | 1.422 | 1.077× | 1.260× | — |
| CLBG::Fannkuchredux | 0.898 | 0.964 | 0.835 | 1.075× | 0.931× | — |
| CLBG::Mandelbrot | 0.945 | 0.982 | 0.974 | 1.038× | 1.030× | — |
| CLBG::Nbody | 0.661 | 0.625 | 0.637 | 0.946× | 0.963× | — |
| CLBG::Spectralnorm | 0.978 | 0.941 | 1.321 | 0.962× | 1.349× | — |
| CSV::Parse | 0.851 | 0.794 | 0.927 | 0.931× | 1.094× | — |
| Calculator::Ast | 0.887 | 0.807 | 0.784 | 0.892× | 0.932× | clang |
| Calculator::Interpreter | 1.209 | 1.267 | 1.163 | 0.939× | 0.985× | gcc, clang |
| Compress::ArithDecode | 0.879 | 1.015 | 1.496 | 1.154× | 1.700× | — |
| Compress::ArithEncode | 1.014 | 1.000 | 1.079 | 0.988× | 1.062× | — |
| Compress::BWTDecode | 1.305 | 1.306 | 1.305 | 1.000× | 1.002× | — |
| Compress::BWTEncode | 0.754 | 0.780 | 0.922 | 1.032× | 1.224× | clang |
| Compress::HuffDecode | 0.445 | 0.728 | 0.394 | 1.636× | 0.875× | — |
| Compress::HuffEncode | 0.826 | 0.931 | 0.831 | 1.127× | 1.013× | — |
| Compress::LZWDecode | 0.575 | 0.571 | 0.553 | 0.992× | 0.963× | gcc |
| Compress::LZWEncode | 0.958 | 0.950 | 0.958 | 0.991× | 1.000× | — |
| Distance::Jaro | 1.161 | 1.190 | 1.210 | 1.024× | 1.042× | — |
| Distance::NGram | 1.180 | 1.191 | 1.131 | 1.008× | 0.959× | — |
| Etc::CacheSimulation | 0.816 | 0.788 | 0.808 | 0.966× | 0.990× | — |
| Etc::GameOfLife | 1.110 | 1.111 | 1.091 | 1.002× | 0.989× | — |
| Etc::LogParser | 0.398 | 1.202 | 0.440 | 2.978× | 1.097× | — |
| Etc::NeuralNet | 0.784 | 0.726 | 0.710 | 0.926× | 0.908× | — |
| Etc::Sieve | 2.421 | 3.114 | 2.395 | 1.283× | 0.990× | — |
| Etc::TextRaytracer | 0.648 | 0.635 | 0.829 | 0.981× | 1.280× | — |
| Etc::Words | 0.919 | 0.899 | 0.908 | 0.978× | 0.987× | — |
| Graph::AStar | 1.027 | 1.211 | 1.018 | 1.176× | 1.008× | — |
| Graph::BFS | 0.949 | 0.885 | 0.671 | 0.947× | 0.954× | gcc, clang |
| Graph::DFS | 1.054 | 1.010 | 0.992 | 0.944× | 0.987× | clang |
| Hash::CRC32 | 0.245 | 0.718 | 1.006 | 2.929× | 4.106× | — |
| Hash::SHA256 | 0.354 | 0.916 | 0.784 | 2.592× | 2.208× | — |
| Json::Generate | 0.851 | 0.858 | 0.853 | 1.009× | 1.005× | — |
| Json::ParseDom | 1.023 | 0.982 | 0.968 | 0.961× | 0.944× | — |
| Json::ParseMapping | 0.970 | 0.933 | 0.923 | 0.964× | 0.948× | — |
| Matmul::Single | 0.759 | 0.764 | 0.757 | 1.006× | 0.995× | — |
| Matmul::T16 | 1.625 | 1.651 | 1.610 | 1.010× | 0.985× | — |
| Matmul::T4 | 0.782 | 0.780 | 0.777 | 0.998× | 0.996× | — |
| Matmul::T8 | 0.835 | 0.838 | 0.835 | 1.004× | 0.993× | — |
| Maze::AStar | 0.959 | 1.387 | 0.908 | 0.930× | 1.040× | gcc, clang |
| Maze::BFS | 0.728 | 0.766 | 0.740 | 0.989× | 1.042× | gcc, clang |
| Maze::Generator | 1.274 | 1.783 | 1.333 | 1.324× | 1.274× | clang |
| Sort::Merge | 0.728 | 1.059 | 0.851 | 1.453× | 1.167× | — |
| Sort::Quick | 1.115 | 1.149 | 1.125 | 1.030× | 1.009× | — |
| Sort::Self | 1.175 | 1.087 | 1.105 | 0.921× | 0.939× | — |
| Template::Parse | 1.078 | 1.083 | 1.091 | 0.986× | 1.021× | gcc, clang |
| Template::Regex | 0.923 | 0.960 | 1.105 | 1.033× | 1.191× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.001×.
Compile clang A/A CPU ratio: 0.999×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043)
