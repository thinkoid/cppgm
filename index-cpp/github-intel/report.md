# index-cpp benchmarks

Compiler checkout: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.088× | 1.088× |
| Compile CPU | 6.263× | 5.075× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 229,582 |
| gcc | 540,112 | 280,921 | 486,100 |
| clang | 513,720 | 264,561 | 319,940 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.843 | 0.736 | 0.845 | 0.871× | 1.001× | — |
| Base64::Encode | 0.830 | 1.011 | 0.792 | 1.219× | 0.954× | — |
| Binarytrees::Arena | 1.941 | 2.107 | 2.038 | 1.063× | 1.041× | clang |
| Binarytrees::Obj | 0.988 | 0.905 | 1.191 | 0.894× | 1.180× | clang |
| Brainfuck::Array | 1.642 | 1.668 | 1.708 | 1.012× | 1.044× | — |
| Brainfuck::Recursion | 1.127 | 1.210 | 1.423 | 1.071× | 1.261× | — |
| CLBG::Fannkuchredux | 0.901 | 0.978 | 0.833 | 1.083× | 0.939× | — |
| CLBG::Mandelbrot | 0.946 | 0.984 | 0.972 | 1.035× | 1.030× | — |
| CLBG::Nbody | 0.662 | 0.627 | 0.635 | 0.943× | 0.961× | — |
| CLBG::Spectralnorm | 0.980 | 0.943 | 1.318 | 0.959× | 1.347× | — |
| CSV::Parse | 0.855 | 0.796 | 0.935 | 0.928× | 1.096× | — |
| Calculator::Ast | 0.885 | 0.827 | 0.817 | 0.927× | 0.941× | — |
| Calculator::Interpreter | 1.204 | 1.208 | 1.254 | 0.962× | 1.057× | clang |
| Compress::ArithDecode | 0.879 | 1.015 | 1.494 | 1.153× | 1.703× | — |
| Compress::ArithEncode | 1.015 | 1.000 | 1.078 | 0.983× | 1.061× | — |
| Compress::BWTDecode | 1.314 | 1.316 | 1.313 | 0.997× | 1.000× | — |
| Compress::BWTEncode | 0.759 | 0.785 | 0.927 | 1.030× | 1.220× | clang |
| Compress::HuffDecode | 0.447 | 0.734 | 0.388 | 1.644× | 0.879× | clang |
| Compress::HuffEncode | 0.827 | 0.929 | 0.833 | 1.119× | 1.007× | — |
| Compress::LZWDecode | 0.584 | 0.580 | 0.556 | 0.992× | 0.951× | — |
| Compress::LZWEncode | 0.958 | 0.950 | 0.957 | 0.987× | 1.000× | — |
| Distance::Jaro | 1.162 | 1.196 | 1.208 | 1.027× | 1.040× | — |
| Distance::NGram | 1.179 | 1.196 | 1.127 | 1.008× | 0.957× | — |
| Etc::CacheSimulation | 0.820 | 0.787 | 0.802 | 0.961× | 0.980× | — |
| Etc::GameOfLife | 1.131 | 1.143 | 1.110 | 1.028× | 0.987× | — |
| Etc::LogParser | 0.401 | 1.187 | 0.441 | 2.970× | 1.092× | — |
| Etc::NeuralNet | 0.785 | 0.730 | 0.710 | 0.928× | 0.906× | — |
| Etc::Sieve | 2.474 | 3.159 | 2.456 | 1.283× | 0.985× | — |
| Etc::TextRaytracer | 0.647 | 0.637 | 0.829 | 0.979× | 1.281× | — |
| Etc::Words | 0.925 | 0.909 | 0.911 | 0.976× | 0.982× | — |
| Graph::AStar | 1.044 | 1.220 | 1.055 | 1.161× | 1.014× | — |
| Graph::BFS | 0.919 | 0.913 | 0.796 | 0.904× | 1.007× | gcc, clang |
| Graph::DFS | 1.061 | 1.016 | 1.002 | 0.946× | 0.949× | — |
| Hash::CRC32 | 0.245 | 0.719 | 1.006 | 2.930× | 4.108× | — |
| Hash::SHA256 | 0.355 | 0.919 | 0.779 | 2.576× | 2.197× | — |
| Json::Generate | 0.859 | 0.862 | 0.857 | 1.006× | 0.972× | — |
| Json::ParseDom | 1.032 | 0.990 | 0.980 | 0.961× | 0.942× | — |
| Json::ParseMapping | 0.980 | 0.940 | 0.933 | 0.962× | 0.945× | — |
| Matmul::Single | 0.766 | 0.768 | 0.768 | 0.996× | 1.001× | — |
| Matmul::T16 | 1.649 | 1.647 | 1.645 | 1.002× | 1.003× | gcc |
| Matmul::T4 | 0.788 | 0.786 | 0.782 | 0.998× | 0.992× | — |
| Matmul::T8 | 0.847 | 0.848 | 0.846 | 1.000× | 1.005× | — |
| Maze::AStar | 0.996 | 1.139 | 0.956 | 0.861× | 1.022× | gcc, clang |
| Maze::BFS | 0.742 | 0.730 | 0.788 | 0.986× | 1.064× | gcc, clang |
| Maze::Generator | 1.304 | 1.820 | 1.469 | 1.241× | 1.264× | gcc, clang |
| Sort::Merge | 0.730 | 1.060 | 0.849 | 1.453× | 1.165× | — |
| Sort::Quick | 1.117 | 1.148 | 1.125 | 1.028× | 1.008× | — |
| Sort::Self | 1.179 | 1.087 | 1.103 | 0.920× | 0.936× | — |
| Template::Parse | 1.094 | 1.091 | 1.145 | 0.992× | 1.041× | gcc |
| Template::Regex | 0.935 | 0.968 | 1.123 | 1.032× | 1.208× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.004×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388689)
