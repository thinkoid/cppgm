# index-cpp benchmarks

Compiler checkout: `e09af8489d07ffc3f9d61676d298292ae7b4df5d` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.086× | 1.069× |
| Compile CPU | 6.109× | 4.941× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,866 | 228,948 |
| gcc | 540,112 | 280,921 | 486,088 |
| clang | 513,720 | 264,561 | 319,078 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.839 | 0.735 | 0.839 | 0.873× | 1.002× | — |
| Base64::Encode | 0.827 | 1.003 | 0.790 | 1.212× | 0.957× | gcc |
| Binarytrees::Arena | 1.925 | 2.133 | 2.133 | 1.079× | 1.121× | gcc |
| Binarytrees::Obj | 0.974 | 0.871 | 1.196 | 0.880× | 1.270× | — |
| Brainfuck::Array | 1.920 | 1.656 | 1.720 | 0.866× | 0.898× | — |
| Brainfuck::Recursion | 1.133 | 1.206 | 1.428 | 1.061× | 1.262× | — |
| CLBG::Fannkuchredux | 0.909 | 0.966 | 0.844 | 1.056× | 0.929× | — |
| CLBG::Mandelbrot | 0.950 | 0.984 | 0.976 | 1.036× | 1.028× | — |
| CLBG::Nbody | 0.663 | 0.626 | 0.637 | 0.946× | 0.962× | — |
| CLBG::Spectralnorm | 0.986 | 0.941 | 1.321 | 0.955× | 1.342× | — |
| CSV::Parse | 0.839 | 0.798 | 0.931 | 0.954× | 1.113× | — |
| Calculator::Ast | 0.850 | 0.802 | 0.776 | 0.940× | 0.931× | clang |
| Calculator::Interpreter | 1.220 | 1.176 | 1.185 | 0.935× | 1.014× | gcc, clang |
| Compress::ArithDecode | 0.885 | 1.015 | 1.498 | 1.146× | 1.689× | — |
| Compress::ArithEncode | 1.014 | 1.000 | 1.079 | 0.988× | 1.062× | — |
| Compress::BWTDecode | 1.310 | 1.308 | 1.309 | 1.000× | 1.000× | — |
| Compress::BWTEncode | 0.756 | 0.782 | 0.925 | 1.029× | 1.223× | — |
| Compress::HuffDecode | 0.501 | 0.732 | 0.393 | 1.458× | 0.779× | clang |
| Compress::HuffEncode | 0.831 | 0.935 | 0.829 | 1.124× | 1.008× | — |
| Compress::LZWDecode | 0.571 | 0.579 | 0.556 | 1.027× | 0.977× | — |
| Compress::LZWEncode | 0.964 | 0.952 | 0.958 | 0.986× | 0.994× | — |
| Distance::Jaro | 1.163 | 1.194 | 1.208 | 1.028× | 1.039× | — |
| Distance::NGram | 1.172 | 1.193 | 1.128 | 1.019× | 0.965× | — |
| Etc::CacheSimulation | 0.815 | 0.786 | 0.803 | 0.964× | 0.988× | — |
| Etc::GameOfLife | 1.131 | 1.161 | 1.111 | 1.028× | 0.987× | — |
| Etc::LogParser | 0.417 | 1.196 | 0.439 | 2.796× | 1.055× | gcc |
| Etc::NeuralNet | 0.786 | 0.730 | 0.710 | 0.929× | 0.905× | — |
| Etc::Sieve | 2.460 | 3.156 | 2.438 | 1.283× | 1.002× | — |
| Etc::TextRaytracer | 0.649 | 0.635 | 0.830 | 0.978× | 1.281× | — |
| Etc::Words | 0.930 | 0.907 | 0.912 | 0.973× | 0.988× | — |
| Graph::AStar | 1.032 | 1.196 | 0.890 | 1.171× | 0.868× | clang |
| Graph::BFS | 0.838 | 0.930 | 0.663 | 0.957× | 0.844× | gcc, clang |
| Graph::DFS | 1.049 | 0.999 | 0.923 | 0.932× | 0.882× | clang |
| Hash::CRC32 | 0.245 | 0.718 | 1.008 | 2.935× | 4.108× | — |
| Hash::SHA256 | 0.355 | 0.919 | 0.782 | 2.593× | 2.209× | — |
| Json::Generate | 0.861 | 0.863 | 0.857 | 1.002× | 0.998× | — |
| Json::ParseDom | 1.018 | 0.990 | 0.979 | 0.974× | 0.960× | — |
| Json::ParseMapping | 0.968 | 0.941 | 0.934 | 0.972× | 0.965× | — |
| Matmul::Single | 0.764 | 0.762 | 0.768 | 0.996× | 1.002× | — |
| Matmul::T16 | 1.651 | 1.671 | 1.651 | 1.007× | 0.995× | clang |
| Matmul::T4 | 0.785 | 0.790 | 0.786 | 1.007× | 0.999× | — |
| Matmul::T8 | 0.853 | 0.851 | 0.852 | 1.001× | 0.995× | — |
| Maze::AStar | 0.950 | 1.091 | 0.867 | 0.915× | 0.926× | gcc, clang |
| Maze::BFS | 0.742 | 0.728 | 0.766 | 1.001× | 1.038× | gcc, clang |
| Maze::Generator | 1.196 | 1.744 | 1.305 | 1.328× | 1.120× | gcc, clang |
| Sort::Merge | 0.732 | 1.063 | 0.848 | 1.457× | 1.159× | — |
| Sort::Quick | 1.116 | 1.152 | 1.124 | 1.033× | 1.004× | — |
| Sort::Self | 1.175 | 1.093 | 1.102 | 0.930× | 0.936× | — |
| Template::Parse | 1.148 | 1.118 | 1.131 | 0.971× | 0.993× | gcc, clang |
| Template::Regex | 0.964 | 0.971 | 1.113 | 1.009× | 1.155× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.993×.
Compile clang A/A CPU ratio: 1.012×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536374)
