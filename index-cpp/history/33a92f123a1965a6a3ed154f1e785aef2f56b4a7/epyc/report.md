# index-cpp benchmarks

Compiler checkout: `33a92f123a1965a6a3ed154f1e785aef2f56b4a7` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.065× | 1.070× |
| Compile CPU | 6.404× | 4.969× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 229,548 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 319,368 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.863 | 0.711 | 0.748 | 0.818× | 0.862× | clang |
| Base64::Encode | 0.887 | 0.910 | 0.716 | 1.049× | 0.809× | clang |
| Binarytrees::Arena | 1.647 | 1.708 | 1.723 | 1.004× | 1.044× | gcc, clang |
| Binarytrees::Obj | 0.707 | 0.683 | 0.792 | 0.957× | 1.124× | gcc, clang |
| Brainfuck::Array | 1.282 | 1.452 | 1.293 | 1.107× | 1.004× | clang |
| Brainfuck::Recursion | 0.896 | 0.764 | 0.888 | 0.844× | 0.983× | gcc, clang |
| CLBG::Fannkuchredux | 0.816 | 0.804 | 0.832 | 0.987× | 1.044× | — |
| CLBG::Mandelbrot | 0.893 | 0.879 | 0.901 | 0.968× | 1.011× | — |
| CLBG::Nbody | 0.639 | 0.665 | 0.650 | 0.980× | 1.011× | — |
| CLBG::Spectralnorm | 0.759 | 0.744 | 1.075 | 0.964× | 1.423× | gcc, clang |
| CSV::Parse | 0.655 | 0.624 | 0.689 | 0.951× | 1.030× | clang |
| Calculator::Ast | 0.625 | 0.631 | 0.614 | 1.030× | 0.974× | gcc |
| Calculator::Interpreter | 0.885 | 0.812 | 0.982 | 0.943× | 0.973× | gcc, clang |
| Compress::ArithDecode | 0.718 | 0.697 | 1.280 | 0.984× | 1.793× | clang |
| Compress::ArithEncode | 0.852 | 0.798 | 0.819 | 0.928× | 0.960× | gcc, clang |
| Compress::BWTDecode | 0.435 | 0.435 | 0.441 | 0.994× | 0.998× | clang |
| Compress::BWTEncode | 0.607 | 0.641 | 0.754 | 1.038× | 1.260× | gcc, clang |
| Compress::HuffDecode | 0.304 | 0.399 | 0.274 | 1.312× | 0.901× | clang |
| Compress::HuffEncode | 0.547 | 0.536 | 0.718 | 0.972× | 1.326× | clang |
| Compress::LZWDecode | 0.423 | 0.438 | 0.417 | 1.013× | 0.987× | clang |
| Compress::LZWEncode | 0.765 | 0.754 | 0.768 | 0.971× | 1.008× | gcc, clang |
| Distance::Jaro | 0.976 | 0.942 | 0.934 | 0.971× | 0.965× | gcc, clang |
| Distance::NGram | 0.946 | 0.913 | 0.899 | 0.989× | 0.949× | clang |
| Etc::CacheSimulation | 0.665 | 0.641 | 0.661 | 0.964× | 0.996× | — |
| Etc::GameOfLife | 1.306 | 0.884 | 1.137 | 0.696× | 0.885× | clang |
| Etc::LogParser | 0.260 | 0.885 | 0.299 | 3.392× | 1.300× | gcc, clang |
| Etc::NeuralNet | 0.720 | 0.654 | 0.625 | 0.873× | 0.883× | gcc, clang |
| Etc::Sieve | 0.944 | 1.334 | 0.885 | 1.412× | 0.944× | — |
| Etc::TextRaytracer | 0.619 | 0.616 | 0.755 | 0.982× | 1.223× | gcc |
| Etc::Words | 0.758 | 0.728 | 0.774 | 0.944× | 1.025× | — |
| Graph::AStar | 1.010 | 1.123 | 0.984 | 1.116× | 0.966× | — |
| Graph::BFS | 1.244 | 1.407 | 1.258 | 1.151× | 0.984× | clang |
| Graph::DFS | 1.194 | 1.150 | 1.206 | 0.969× | 0.986× | clang |
| Hash::CRC32 | 0.214 | 0.605 | 0.679 | 2.788× | 3.159× | — |
| Hash::SHA256 | 0.478 | 0.940 | 0.951 | 1.985× | 2.003× | — |
| Json::Generate | 0.678 | 0.680 | 0.692 | 1.001× | 1.020× | clang |
| Json::ParseDom | 0.800 | 0.786 | 0.789 | 0.994× | 0.999× | clang |
| Json::ParseMapping | 0.757 | 0.751 | 0.744 | 0.984× | 0.981× | gcc, clang |
| Matmul::Single | 0.659 | 0.659 | 0.653 | 0.999× | 1.005× | — |
| Matmul::T16 | 1.341 | 1.344 | 1.378 | 1.001× | 1.023× | clang |
| Matmul::T4 | 0.663 | 0.665 | 0.661 | 0.982× | 1.010× | clang |
| Matmul::T8 | 0.697 | 0.702 | 0.720 | 1.006× | 1.032× | clang |
| Maze::AStar | 1.340 | 1.319 | 1.441 | 1.046× | 1.040× | gcc, clang |
| Maze::BFS | 1.160 | 1.206 | 1.210 | 1.052× | 1.007× | gcc |
| Maze::Generator | 1.371 | 1.293 | 1.345 | 0.986× | 0.912× | clang |
| Sort::Merge | 0.659 | 0.976 | 0.713 | 1.486× | 1.076× | gcc, clang |
| Sort::Quick | 1.102 | 1.063 | 1.117 | 0.962× | 1.013× | clang |
| Sort::Self | 1.090 | 1.023 | 1.042 | 0.919× | 0.962× | gcc |
| Template::Parse | 1.135 | 1.196 | 1.442 | 1.191× | 1.212× | gcc, clang |
| Template::Regex | 1.066 | 1.023 | 1.260 | 1.067× | 1.140× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.018×.
Compile clang A/A CPU ratio: 1.020×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643812)
