# index-cpp benchmarks

Compiler checkout: `90ebfa8f4eed49b0d61b4b4993914107c23a761e` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.100× | 1.100× |
| Compile CPU | 6.237× | 5.033× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,618 |
| gcc | 540,112 | 280,921 | 486,068 |
| clang | 513,720 | 264,561 | 319,158 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.861 | 0.756 | 0.855 | 0.872× | 1.002× | gcc |
| Base64::Encode | 0.827 | 1.018 | 0.800 | 1.233× | 0.969× | gcc |
| Binarytrees::Arena | 2.064 | 2.211 | 2.240 | 1.064× | 1.097× | gcc |
| Binarytrees::Obj | 1.040 | 0.945 | 1.237 | 0.904× | 1.185× | gcc |
| Brainfuck::Array | 1.635 | 1.647 | 1.711 | 1.012× | 1.041× | — |
| Brainfuck::Recursion | 1.127 | 1.201 | 1.427 | 1.068× | 1.262× | — |
| CLBG::Fannkuchredux | 0.897 | 0.962 | 0.849 | 1.062× | 0.942× | — |
| CLBG::Mandelbrot | 0.944 | 0.978 | 0.972 | 1.037× | 1.025× | — |
| CLBG::Nbody | 0.660 | 0.623 | 0.635 | 0.944× | 0.959× | — |
| CLBG::Spectralnorm | 0.978 | 0.937 | 1.317 | 0.959× | 1.343× | — |
| CSV::Parse | 0.850 | 0.792 | 0.933 | 0.933× | 1.096× | — |
| Calculator::Ast | 0.919 | 0.853 | 0.858 | 0.927× | 0.937× | — |
| Calculator::Interpreter | 1.467 | 1.364 | 1.543 | 0.927× | 1.057× | gcc |
| Compress::ArithDecode | 0.879 | 1.013 | 1.498 | 1.152× | 1.703× | — |
| Compress::ArithEncode | 1.013 | 0.997 | 1.077 | 0.986× | 1.062× | — |
| Compress::BWTDecode | 1.301 | 1.301 | 1.304 | 1.000× | 1.001× | — |
| Compress::BWTEncode | 0.754 | 0.781 | 0.922 | 1.037× | 1.224× | clang |
| Compress::HuffDecode | 0.445 | 0.722 | 0.391 | 1.637× | 0.877× | — |
| Compress::HuffEncode | 0.827 | 0.927 | 0.831 | 1.117× | 1.005× | — |
| Compress::LZWDecode | 0.575 | 0.570 | 0.550 | 0.989× | 0.957× | gcc |
| Compress::LZWEncode | 0.956 | 0.946 | 0.961 | 0.990× | 1.004× | — |
| Distance::Jaro | 1.160 | 1.190 | 1.210 | 1.026× | 1.042× | — |
| Distance::NGram | 1.183 | 1.187 | 1.130 | 1.006× | 0.954× | gcc |
| Etc::CacheSimulation | 0.816 | 0.785 | 0.804 | 0.963× | 0.980× | — |
| Etc::GameOfLife | 1.097 | 1.112 | 1.091 | 1.013× | 0.995× | — |
| Etc::LogParser | 0.401 | 1.161 | 0.438 | 2.893× | 1.094× | gcc |
| Etc::NeuralNet | 0.783 | 0.724 | 0.710 | 0.926× | 0.903× | — |
| Etc::Sieve | 2.416 | 3.100 | 2.390 | 1.282× | 0.989× | — |
| Etc::TextRaytracer | 0.646 | 0.633 | 0.831 | 0.980× | 1.277× | — |
| Etc::Words | 0.926 | 0.903 | 0.911 | 0.975× | 0.979× | — |
| Graph::AStar | 1.053 | 1.252 | 1.091 | 1.188× | 1.040× | — |
| Graph::BFS | 1.006 | 0.977 | 0.959 | 0.963× | 0.962× | gcc |
| Graph::DFS | 1.075 | 1.030 | 1.040 | 0.955× | 0.966× | — |
| Hash::CRC32 | 0.244 | 0.715 | 1.006 | 2.932× | 4.104× | — |
| Hash::SHA256 | 0.354 | 0.915 | 0.782 | 2.572× | 2.192× | — |
| Json::Generate | 0.847 | 0.853 | 0.855 | 1.006× | 1.006× | — |
| Json::ParseDom | 1.022 | 0.977 | 0.972 | 0.954× | 0.943× | gcc |
| Json::ParseMapping | 0.972 | 0.931 | 0.926 | 0.957× | 0.954× | gcc |
| Matmul::Single | 0.762 | 0.760 | 0.763 | 0.998× | 0.987× | — |
| Matmul::T16 | 1.612 | 1.625 | 1.602 | 1.008× | 0.986× | — |
| Matmul::T4 | 0.774 | 0.770 | 0.774 | 0.999× | 1.002× | — |
| Matmul::T8 | 0.823 | 0.824 | 0.825 | 1.003× | 1.002× | — |
| Maze::AStar | 1.574 | 1.652 | 1.685 | 1.038× | 1.094× | gcc |
| Maze::BFS | 0.847 | 1.195 | 1.192 | 1.275× | 1.576× | gcc, clang |
| Maze::Generator | 1.475 | 1.956 | 1.901 | 1.322× | 1.340× | gcc |
| Sort::Merge | 0.728 | 1.056 | 0.852 | 1.452× | 1.163× | — |
| Sort::Quick | 1.116 | 1.147 | 1.128 | 1.029× | 1.004× | — |
| Sort::Self | 1.177 | 1.087 | 1.106 | 0.924× | 0.934× | — |
| Template::Parse | 1.281 | 1.297 | 1.294 | 0.997× | 0.992× | gcc, clang |
| Template::Regex | 0.976 | 1.038 | 1.185 | 1.040× | 1.213× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.001×.
Compile clang A/A CPU ratio: 1.001×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.6 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407516)
