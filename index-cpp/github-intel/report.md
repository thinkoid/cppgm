# index-cpp benchmarks

Compiler checkout: `4b05c87802afb837551466590e3eb75c8099ec82` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.095× | 1.098× |
| Compile CPU | 6.249× | 5.044× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 229,534 |
| gcc | 540,112 | 280,921 | 485,940 |
| clang | 513,720 | 264,561 | 319,118 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.841 | 0.734 | 0.852 | 0.875× | 1.001× | — |
| Base64::Encode | 0.828 | 1.008 | 0.801 | 1.222× | 0.960× | — |
| Binarytrees::Arena | 1.950 | 1.931 | 2.200 | 1.087× | 1.101× | — |
| Binarytrees::Obj | 0.978 | 0.832 | 1.252 | 0.911× | 1.223× | clang |
| Brainfuck::Array | 1.643 | 1.659 | 1.724 | 1.012× | 1.050× | — |
| Brainfuck::Recursion | 1.128 | 1.203 | 1.430 | 1.072× | 1.261× | — |
| CLBG::Fannkuchredux | 0.899 | 0.962 | 0.837 | 1.073× | 0.929× | gcc |
| CLBG::Mandelbrot | 0.948 | 0.979 | 0.974 | 1.034× | 1.027× | — |
| CLBG::Nbody | 0.662 | 0.623 | 0.639 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.980 | 0.938 | 1.321 | 0.959× | 1.344× | — |
| CSV::Parse | 0.852 | 0.792 | 0.933 | 0.933× | 1.093× | — |
| Calculator::Ast | 0.897 | 0.768 | 0.863 | 0.929× | 0.928× | gcc, clang |
| Calculator::Interpreter | 1.226 | 1.086 | 1.536 | 0.970× | 1.101× | gcc |
| Compress::ArithDecode | 0.881 | 1.013 | 1.502 | 1.155× | 1.699× | — |
| Compress::ArithEncode | 1.014 | 0.997 | 1.080 | 0.987× | 1.062× | — |
| Compress::BWTDecode | 1.311 | 1.309 | 1.317 | 1.000× | 1.003× | — |
| Compress::BWTEncode | 0.758 | 0.778 | 0.931 | 1.028× | 1.227× | — |
| Compress::HuffDecode | 0.448 | 0.729 | 0.393 | 1.627× | 0.879× | — |
| Compress::HuffEncode | 0.826 | 0.929 | 0.834 | 1.127× | 1.007× | — |
| Compress::LZWDecode | 0.575 | 0.570 | 0.550 | 0.997× | 0.958× | gcc |
| Compress::LZWEncode | 0.958 | 0.948 | 0.960 | 0.993× | 1.003× | — |
| Distance::Jaro | 1.159 | 1.188 | 1.214 | 1.028× | 1.043× | — |
| Distance::NGram | 1.180 | 1.188 | 1.134 | 1.009× | 0.956× | — |
| Etc::CacheSimulation | 0.817 | 0.786 | 0.807 | 0.964× | 0.985× | — |
| Etc::GameOfLife | 1.103 | 1.113 | 1.099 | 1.012× | 0.993× | — |
| Etc::LogParser | 0.398 | 1.184 | 0.443 | 2.982× | 1.103× | gcc |
| Etc::NeuralNet | 0.784 | 0.724 | 0.714 | 0.927× | 0.912× | — |
| Etc::Sieve | 2.421 | 3.112 | 2.397 | 1.287× | 0.993× | — |
| Etc::TextRaytracer | 0.647 | 0.634 | 0.833 | 0.981× | 1.285× | — |
| Etc::Words | 0.925 | 0.895 | 0.915 | 0.973× | 0.988× | — |
| Graph::AStar | 1.037 | 1.140 | 1.071 | 1.225× | 1.022× | gcc, clang |
| Graph::BFS | 0.893 | 0.649 | 0.952 | 0.918× | 0.968× | gcc, clang |
| Graph::DFS | 1.066 | 0.960 | 1.040 | 0.991× | 0.967× | clang |
| Hash::CRC32 | 0.245 | 0.716 | 1.013 | 2.929× | 4.118× | — |
| Hash::SHA256 | 0.356 | 0.915 | 0.784 | 2.575× | 2.194× | — |
| Json::Generate | 0.852 | 0.857 | 0.856 | 1.007× | 1.002× | — |
| Json::ParseDom | 1.033 | 0.984 | 0.978 | 0.955× | 0.948× | — |
| Json::ParseMapping | 0.978 | 0.935 | 0.933 | 0.961× | 0.952× | — |
| Matmul::Single | 0.764 | 0.762 | 0.772 | 0.995× | 1.006× | — |
| Matmul::T16 | 1.628 | 1.625 | 1.623 | 1.004× | 1.001× | — |
| Matmul::T4 | 0.780 | 0.780 | 0.784 | 1.001× | 1.001× | — |
| Matmul::T8 | 0.829 | 0.833 | 0.834 | 1.011× | 1.002× | — |
| Maze::AStar | 1.127 | 0.845 | 1.538 | 0.967× | 1.093× | gcc, clang |
| Maze::BFS | 0.730 | 0.706 | 0.833 | 0.990× | 1.167× | clang |
| Maze::Generator | 1.317 | 1.321 | 1.843 | 1.275× | 1.295× | gcc, clang |
| Sort::Merge | 0.728 | 1.055 | 0.854 | 1.451× | 1.168× | — |
| Sort::Quick | 1.117 | 1.146 | 1.132 | 1.029× | 1.011× | — |
| Sort::Self | 1.179 | 1.084 | 1.110 | 0.922× | 0.940× | — |
| Template::Parse | 1.071 | 1.035 | 1.200 | 0.988× | 1.078× | clang |
| Template::Regex | 0.919 | 0.948 | 1.161 | 1.036× | 1.227× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.016×.
Compile clang A/A CPU ratio: 1.002×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.4 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097781)
