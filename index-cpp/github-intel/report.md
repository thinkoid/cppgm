# index-cpp benchmarks

Compiler checkout: `bb09801053e48486beebe014071a71353ce9be0b` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.107× | 1.094× |
| Compile CPU | 6.109× | 4.895× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 710,360 | 338,226 | 229,486 |
| gcc | 540,112 | 280,921 | 486,064 |
| clang | 513,720 | 264,561 | 319,232 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.853 | 0.748 | 0.864 | 0.879× | 1.004× | clang |
| Base64::Encode | 0.832 | 1.010 | 0.804 | 1.203× | 0.961× | clang |
| Binarytrees::Arena | 2.063 | 2.245 | 2.253 | 1.113× | 1.083× | gcc |
| Binarytrees::Obj | 1.028 | 0.943 | 1.252 | 0.936× | 1.221× | gcc |
| Brainfuck::Array | 1.646 | 1.663 | 1.710 | 1.011× | 1.038× | — |
| Brainfuck::Recursion | 1.152 | 1.208 | 1.431 | 1.051× | 1.242× | — |
| CLBG::Fannkuchredux | 0.879 | 0.966 | 0.838 | 1.101× | 0.952× | — |
| CLBG::Mandelbrot | 0.952 | 0.982 | 0.979 | 1.037× | 1.027× | — |
| CLBG::Nbody | 0.663 | 0.625 | 0.639 | 0.949× | 0.961× | — |
| CLBG::Spectralnorm | 0.988 | 0.941 | 1.327 | 0.954× | 1.342× | — |
| CSV::Parse | 0.852 | 0.797 | 0.936 | 0.936× | 1.102× | — |
| Calculator::Ast | 0.908 | 0.853 | 0.863 | 0.941× | 0.945× | — |
| Calculator::Interpreter | 1.484 | 1.364 | 1.548 | 0.958× | 1.040× | — |
| Compress::ArithDecode | 0.888 | 1.014 | 1.501 | 1.147× | 1.688× | — |
| Compress::ArithEncode | 1.011 | 1.000 | 1.078 | 0.991× | 1.068× | — |
| Compress::BWTDecode | 1.317 | 1.314 | 1.323 | 1.002× | 1.003× | — |
| Compress::BWTEncode | 0.761 | 0.786 | 0.931 | 1.032× | 1.222× | — |
| Compress::HuffDecode | 0.469 | 0.734 | 0.399 | 1.570× | 0.851× | — |
| Compress::HuffEncode | 0.817 | 0.933 | 0.835 | 1.146× | 1.023× | — |
| Compress::LZWDecode | 0.575 | 0.577 | 0.556 | 1.003× | 0.970× | gcc |
| Compress::LZWEncode | 0.963 | 0.950 | 0.960 | 0.989× | 0.998× | — |
| Distance::Jaro | 1.164 | 1.192 | 1.211 | 1.025× | 1.038× | — |
| Distance::NGram | 1.180 | 1.189 | 1.132 | 1.010× | 0.957× | gcc |
| Etc::CacheSimulation | 0.827 | 0.791 | 0.814 | 0.955× | 0.983× | — |
| Etc::GameOfLife | 1.127 | 1.123 | 1.099 | 0.996× | 0.988× | — |
| Etc::LogParser | 0.401 | 1.212 | 0.444 | 3.024× | 1.106× | gcc |
| Etc::NeuralNet | 0.784 | 0.733 | 0.715 | 0.931× | 0.911× | — |
| Etc::Sieve | 2.455 | 3.125 | 2.402 | 1.271× | 0.989× | — |
| Etc::TextRaytracer | 0.647 | 0.637 | 0.833 | 0.982× | 1.283× | — |
| Etc::Words | 0.933 | 0.907 | 0.913 | 0.966× | 0.982× | — |
| Graph::AStar | 1.054 | 1.254 | 1.093 | 1.187× | 1.036× | — |
| Graph::BFS | 0.982 | 0.979 | 0.966 | 1.022× | 0.980× | gcc |
| Graph::DFS | 1.077 | 1.035 | 1.040 | 0.959× | 0.962× | gcc |
| Hash::CRC32 | 0.245 | 0.716 | 1.013 | 2.921× | 4.122× | — |
| Hash::SHA256 | 0.355 | 0.915 | 0.784 | 2.582× | 2.212× | — |
| Json::Generate | 0.855 | 0.861 | 0.857 | 1.004× | 1.002× | — |
| Json::ParseDom | 1.025 | 0.992 | 0.980 | 0.968× | 0.954× | gcc |
| Json::ParseMapping | 0.973 | 0.943 | 0.933 | 0.968× | 0.962× | gcc |
| Matmul::Single | 0.766 | 0.764 | 0.770 | 1.003× | 1.012× | — |
| Matmul::T16 | 1.644 | 1.632 | 1.636 | 0.998× | 0.997× | — |
| Matmul::T4 | 0.788 | 0.786 | 0.786 | 1.000× | 1.001× | — |
| Matmul::T8 | 0.855 | 0.847 | 0.847 | 0.999× | 0.988× | — |
| Maze::AStar | 1.481 | 1.577 | 1.629 | 1.103× | 1.083× | gcc |
| Maze::BFS | 0.792 | 1.151 | 0.928 | 1.276× | 1.228× | clang |
| Maze::Generator | 1.435 | 1.972 | 1.858 | 1.392× | 1.272× | gcc |
| Sort::Merge | 0.734 | 1.058 | 0.853 | 1.446× | 1.164× | — |
| Sort::Quick | 1.121 | 1.151 | 1.129 | 1.029× | 1.008× | — |
| Sort::Self | 1.183 | 1.087 | 1.111 | 0.924× | 0.939× | — |
| Template::Parse | 1.152 | 1.169 | 1.171 | 0.999× | 0.983× | gcc, clang |
| Template::Regex | 0.954 | 0.992 | 1.143 | 1.021× | 1.203× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.994×.
Compile clang A/A CPU ratio: 0.995×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438285)
