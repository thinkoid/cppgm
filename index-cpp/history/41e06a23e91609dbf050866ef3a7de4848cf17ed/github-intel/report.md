# index-cpp benchmarks

Compiler checkout: `41e06a23e91609dbf050866ef3a7de4848cf17ed` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.092× | 1.084× |
| Compile CPU | 6.232× | 5.015× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 229,524 |
| gcc | 540,112 | 280,921 | 486,056 |
| clang | 513,720 | 264,561 | 319,272 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.834 | 0.730 | 0.835 | 0.876× | 1.000× | — |
| Base64::Encode | 0.822 | 1.002 | 0.787 | 1.219× | 0.958× | — |
| Binarytrees::Arena | 1.788 | 1.970 | 1.931 | 1.078× | 1.082× | gcc, clang |
| Binarytrees::Obj | 0.897 | 0.806 | 1.026 | 0.890× | 1.171× | gcc |
| Brainfuck::Array | 1.632 | 1.651 | 1.704 | 1.014× | 1.042× | — |
| Brainfuck::Recursion | 1.127 | 1.204 | 1.423 | 1.076× | 1.264× | — |
| CLBG::Fannkuchredux | 0.915 | 0.962 | 0.833 | 1.061× | 0.910× | — |
| CLBG::Mandelbrot | 0.946 | 0.979 | 0.973 | 1.036× | 1.030× | — |
| CLBG::Nbody | 0.661 | 0.624 | 0.636 | 0.945× | 0.962× | — |
| CLBG::Spectralnorm | 0.979 | 0.938 | 1.320 | 0.959× | 1.349× | — |
| CSV::Parse | 0.851 | 0.791 | 0.927 | 0.930× | 1.090× | — |
| Calculator::Ast | 0.821 | 0.762 | 0.771 | 0.910× | 0.945× | gcc |
| Calculator::Interpreter | 1.119 | 1.090 | 1.143 | 0.965× | 1.021× | — |
| Compress::ArithDecode | 0.878 | 1.012 | 1.494 | 1.153× | 1.699× | — |
| Compress::ArithEncode | 1.014 | 0.998 | 1.075 | 0.982× | 1.058× | — |
| Compress::BWTDecode | 1.304 | 1.303 | 1.306 | 1.000× | 1.001× | — |
| Compress::BWTEncode | 0.753 | 0.776 | 0.922 | 1.033× | 1.225× | clang |
| Compress::HuffDecode | 0.442 | 0.728 | 0.390 | 1.648× | 0.880× | — |
| Compress::HuffEncode | 0.825 | 0.928 | 0.833 | 1.114× | 1.009× | — |
| Compress::LZWDecode | 0.575 | 0.575 | 0.549 | 0.997× | 0.956× | — |
| Compress::LZWEncode | 0.956 | 0.949 | 0.956 | 0.991× | 0.997× | — |
| Distance::Jaro | 1.160 | 1.190 | 1.208 | 1.026× | 1.041× | — |
| Distance::NGram | 1.178 | 1.188 | 1.127 | 1.007× | 0.957× | — |
| Etc::CacheSimulation | 0.815 | 0.786 | 0.804 | 0.965× | 0.987× | — |
| Etc::GameOfLife | 1.093 | 1.109 | 1.089 | 1.015× | 0.995× | — |
| Etc::LogParser | 0.396 | 1.193 | 0.441 | 3.062× | 1.115× | gcc |
| Etc::NeuralNet | 0.782 | 0.728 | 0.710 | 0.930× | 0.907× | — |
| Etc::Sieve | 2.421 | 3.104 | 2.391 | 1.283× | 0.987× | — |
| Etc::TextRaytracer | 0.647 | 0.635 | 0.829 | 0.981× | 1.282× | — |
| Etc::Words | 0.923 | 0.901 | 0.916 | 0.971× | 0.992× | — |
| Graph::AStar | 0.909 | 1.177 | 0.832 | 1.239× | 1.000× | gcc, clang |
| Graph::BFS | 0.700 | 0.706 | 0.629 | 1.001× | 0.961× | gcc, clang |
| Graph::DFS | 0.991 | 0.919 | 0.892 | 0.907× | 0.958× | gcc |
| Hash::CRC32 | 0.245 | 0.717 | 1.006 | 2.927× | 4.110× | — |
| Hash::SHA256 | 0.354 | 0.914 | 0.782 | 2.589× | 2.208× | — |
| Json::Generate | 0.849 | 0.857 | 0.852 | 1.011× | 1.003× | — |
| Json::ParseDom | 1.023 | 0.981 | 0.968 | 0.959× | 0.946× | — |
| Json::ParseMapping | 0.970 | 0.933 | 0.922 | 0.962× | 0.949× | — |
| Matmul::Single | 0.759 | 0.760 | 0.756 | 0.997× | 1.005× | — |
| Matmul::T16 | 1.612 | 1.614 | 1.607 | 1.000× | 0.999× | — |
| Matmul::T4 | 0.770 | 0.772 | 0.769 | 1.003× | 0.998× | — |
| Matmul::T8 | 0.828 | 0.827 | 0.825 | 0.998× | 0.999× | — |
| Maze::AStar | 0.889 | 0.837 | 0.836 | 0.935× | 0.945× | gcc, clang |
| Maze::BFS | 0.716 | 0.708 | 0.744 | 0.988× | 1.039× | — |
| Maze::Generator | 0.964 | 1.239 | 1.202 | 1.179× | 1.158× | gcc, clang |
| Sort::Merge | 0.727 | 1.056 | 0.850 | 1.453× | 1.169× | — |
| Sort::Quick | 1.113 | 1.146 | 1.125 | 1.029× | 1.011× | — |
| Sort::Self | 1.175 | 1.084 | 1.103 | 0.923× | 0.939× | — |
| Template::Parse | 1.052 | 1.044 | 1.091 | 0.991× | 1.039× | — |
| Template::Regex | 0.916 | 0.949 | 1.097 | 1.038× | 1.202× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.999×.
Compile clang A/A CPU ratio: 0.995×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224206)
