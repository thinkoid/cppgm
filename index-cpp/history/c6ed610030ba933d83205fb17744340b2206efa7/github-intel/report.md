# index-cpp benchmarks

Compiler checkout: `c6ed610030ba933d83205fb17744340b2206efa7` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.097× | 1.087× |
| Compile CPU | 6.252× | 5.110× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,656 |
| gcc | 540,112 | 280,921 | 486,132 |
| clang | 513,720 | 264,561 | 319,032 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.839 | 0.734 | 0.843 | 0.875× | 1.004× | — |
| Base64::Encode | 0.826 | 1.008 | 0.803 | 1.220× | 0.970× | — |
| Binarytrees::Arena | 1.934 | 2.053 | 2.004 | 1.061× | 1.030× | gcc |
| Binarytrees::Obj | 0.958 | 0.861 | 1.143 | 0.876× | 1.175× | gcc |
| Brainfuck::Array | 1.627 | 1.647 | 1.703 | 1.007× | 1.042× | — |
| Brainfuck::Recursion | 1.123 | 1.196 | 1.419 | 1.073× | 1.259× | — |
| CLBG::Fannkuchredux | 0.895 | 0.960 | 0.833 | 1.073× | 0.919× | gcc |
| CLBG::Mandelbrot | 0.942 | 0.978 | 0.970 | 1.037× | 1.029× | — |
| CLBG::Nbody | 0.659 | 0.623 | 0.635 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.976 | 0.937 | 1.315 | 0.961× | 1.348× | — |
| CSV::Parse | 0.849 | 0.792 | 0.930 | 0.932× | 1.094× | — |
| Calculator::Ast | 0.837 | 0.792 | 0.805 | 0.943× | 0.949× | clang |
| Calculator::Interpreter | 1.163 | 1.171 | 1.221 | 0.983× | 1.029× | gcc, clang |
| Compress::ArithDecode | 0.877 | 1.011 | 1.498 | 1.154× | 1.710× | — |
| Compress::ArithEncode | 1.010 | 0.996 | 1.077 | 0.986× | 1.067× | — |
| Compress::BWTDecode | 1.310 | 1.309 | 1.312 | 1.000× | 1.002× | — |
| Compress::BWTEncode | 0.754 | 0.779 | 0.926 | 1.032× | 1.223× | — |
| Compress::HuffDecode | 0.448 | 0.726 | 0.393 | 1.618× | 0.878× | — |
| Compress::HuffEncode | 0.823 | 0.930 | 0.835 | 1.129× | 1.013× | — |
| Compress::LZWDecode | 0.580 | 0.575 | 0.554 | 0.995× | 0.958× | — |
| Compress::LZWEncode | 0.954 | 0.946 | 0.956 | 0.992× | 1.004× | — |
| Distance::Jaro | 1.158 | 1.188 | 1.204 | 1.026× | 1.039× | — |
| Distance::NGram | 1.175 | 1.185 | 1.125 | 1.010× | 0.957× | — |
| Etc::CacheSimulation | 0.813 | 0.785 | 0.806 | 0.967× | 0.993× | — |
| Etc::GameOfLife | 1.131 | 1.155 | 1.116 | 1.025× | 0.987× | — |
| Etc::LogParser | 0.396 | 1.196 | 0.441 | 3.019× | 1.109× | — |
| Etc::NeuralNet | 0.781 | 0.724 | 0.712 | 0.929× | 0.915× | — |
| Etc::Sieve | 2.468 | 3.154 | 2.446 | 1.285× | 0.994× | — |
| Etc::TextRaytracer | 0.645 | 0.633 | 0.831 | 0.981× | 1.287× | — |
| Etc::Words | 0.921 | 0.899 | 0.917 | 0.973× | 0.999× | — |
| Graph::AStar | 1.027 | 1.219 | 1.054 | 1.204× | 1.043× | clang |
| Graph::BFS | 0.885 | 0.933 | 0.737 | 0.944× | 0.983× | gcc, clang |
| Graph::DFS | 1.060 | 1.016 | 1.004 | 0.953× | 0.980× | clang |
| Hash::CRC32 | 0.244 | 0.715 | 1.003 | 2.930× | 4.113× | — |
| Hash::SHA256 | 0.353 | 0.913 | 0.780 | 2.584× | 2.210× | — |
| Json::Generate | 0.852 | 0.859 | 0.859 | 1.009× | 1.004× | — |
| Json::ParseDom | 1.024 | 0.984 | 0.981 | 0.964× | 0.952× | — |
| Json::ParseMapping | 0.973 | 0.936 | 0.932 | 0.964× | 0.956× | — |
| Matmul::Single | 0.761 | 0.755 | 0.764 | 1.001× | 1.000× | — |
| Matmul::T16 | 1.646 | 1.655 | 1.650 | 0.999× | 1.002× | — |
| Matmul::T4 | 0.784 | 0.786 | 0.785 | 1.003× | 0.997× | — |
| Matmul::T8 | 0.848 | 0.851 | 0.851 | 1.002× | 1.002× | — |
| Maze::AStar | 0.911 | 0.965 | 0.869 | 1.125× | 0.921× | gcc |
| Maze::BFS | 0.732 | 0.725 | 0.766 | 0.997× | 1.038× | — |
| Maze::Generator | 1.089 | 1.455 | 1.441 | 1.237× | 1.225× | gcc, clang |
| Sort::Merge | 0.727 | 1.054 | 0.849 | 1.450× | 1.167× | — |
| Sort::Quick | 1.113 | 1.144 | 1.123 | 1.029× | 1.010× | — |
| Sort::Self | 1.174 | 1.083 | 1.101 | 0.922× | 0.937× | — |
| Template::Parse | 1.081 | 1.073 | 1.125 | 0.981× | 1.029× | clang |
| Template::Regex | 0.927 | 0.959 | 1.109 | 1.034× | 1.203× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.011×.
Compile clang A/A CPU ratio: 1.014×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.7 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416)
