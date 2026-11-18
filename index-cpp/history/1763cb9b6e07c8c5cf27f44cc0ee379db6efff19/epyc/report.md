# index-cpp benchmarks

Compiler checkout: `1763cb9b6e07c8c5cf27f44cc0ee379db6efff19` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.055× | 1.056× |
| Compile CPU | 6.532× | 5.124× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,752 |
| gcc | 540,112 | 280,921 | 486,092 |
| clang | 513,720 | 264,561 | 319,308 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.833 | 0.676 | 0.708 | 0.813× | 0.848× | — |
| Base64::Encode | 0.851 | 0.863 | 0.675 | 1.014× | 0.788× | — |
| Binarytrees::Arena | 1.591 | 1.623 | 1.634 | 1.031× | 1.027× | gcc |
| Binarytrees::Obj | 0.704 | 0.658 | 0.768 | 0.924× | 1.102× | gcc |
| Brainfuck::Array | 1.231 | 1.399 | 1.312 | 1.114× | 1.088× | — |
| Brainfuck::Recursion | 0.866 | 0.744 | 0.851 | 0.856× | 0.986× | gcc |
| CLBG::Fannkuchredux | 0.776 | 0.769 | 0.799 | 0.998× | 1.025× | — |
| CLBG::Mandelbrot | 0.867 | 0.847 | 0.872 | 0.979× | 1.003× | gcc |
| CLBG::Nbody | 0.630 | 0.633 | 0.634 | 1.006× | 0.998× | — |
| CLBG::Spectralnorm | 0.732 | 0.718 | 1.016 | 0.984× | 1.389× | — |
| CSV::Parse | 0.639 | 0.593 | 0.639 | 0.933× | 0.998× | — |
| Calculator::Ast | 0.600 | 0.602 | 0.585 | 1.003× | 0.971× | — |
| Calculator::Interpreter | 0.756 | 0.724 | 0.803 | 0.963× | 1.072× | gcc, clang |
| Compress::ArithDecode | 0.694 | 0.667 | 1.216 | 0.964× | 1.739× | — |
| Compress::ArithEncode | 0.832 | 0.776 | 0.786 | 0.937× | 0.946× | — |
| Compress::BWTDecode | 0.421 | 0.412 | 0.415 | 0.974× | 0.988× | gcc |
| Compress::BWTEncode | 0.586 | 0.603 | 0.740 | 1.037× | 1.258× | — |
| Compress::HuffDecode | 0.297 | 0.380 | 0.262 | 1.277× | 0.879× | gcc |
| Compress::HuffEncode | 0.532 | 0.504 | 0.692 | 0.946× | 1.302× | — |
| Compress::LZWDecode | 0.407 | 0.419 | 0.398 | 1.034× | 0.968× | — |
| Compress::LZWEncode | 0.744 | 0.730 | 0.738 | 0.983× | 0.989× | — |
| Distance::Jaro | 0.949 | 0.915 | 0.898 | 0.976× | 0.944× | — |
| Distance::NGram | 0.909 | 0.874 | 0.869 | 0.963× | 0.953× | — |
| Etc::CacheSimulation | 0.639 | 0.592 | 0.635 | 0.923× | 1.000× | — |
| Etc::GameOfLife | 0.867 | 0.631 | 0.641 | 0.728× | 0.745× | gcc, clang |
| Etc::LogParser | 0.252 | 0.891 | 0.287 | 3.538× | 1.116× | gcc |
| Etc::NeuralNet | 0.687 | 0.609 | 0.616 | 0.892× | 0.865× | — |
| Etc::Sieve | 0.919 | 1.272 | 0.860 | 1.386× | 0.932× | — |
| Etc::TextRaytracer | 0.599 | 0.585 | 0.726 | 0.975× | 1.214× | — |
| Etc::Words | 0.732 | 0.705 | 0.750 | 0.961× | 1.026× | — |
| Graph::AStar | 0.962 | 1.075 | 0.929 | 1.117× | 0.961× | — |
| Graph::BFS | 1.136 | 1.293 | 1.103 | 1.156× | 0.966× | clang |
| Graph::DFS | 1.126 | 1.076 | 1.129 | 0.953× | 0.995× | clang |
| Hash::CRC32 | 0.211 | 0.579 | 0.661 | 2.753× | 3.133× | — |
| Hash::SHA256 | 0.466 | 0.909 | 0.932 | 1.948× | 1.994× | — |
| Json::Generate | 0.659 | 0.651 | 0.665 | 0.985× | 1.008× | — |
| Json::ParseDom | 0.776 | 0.746 | 0.758 | 0.962× | 0.981× | — |
| Json::ParseMapping | 0.739 | 0.710 | 0.722 | 0.963× | 0.972× | — |
| Matmul::Single | 0.631 | 0.629 | 0.631 | 0.996× | 0.997× | — |
| Matmul::T16 | 1.299 | 1.290 | 1.333 | 1.002× | 1.024× | — |
| Matmul::T4 | 0.633 | 0.633 | 0.633 | 0.996× | 1.001× | — |
| Matmul::T8 | 0.664 | 0.659 | 0.689 | 0.991× | 1.028× | — |
| Maze::AStar | 1.038 | 1.007 | 1.027 | 0.942× | 1.049× | gcc, clang |
| Maze::BFS | 0.838 | 0.818 | 0.864 | 0.974× | 0.995× | gcc, clang |
| Maze::Generator | 1.191 | 1.191 | 1.192 | 1.001× | 0.986× | gcc |
| Sort::Merge | 0.639 | 0.935 | 0.685 | 1.470× | 1.071× | — |
| Sort::Quick | 1.056 | 1.049 | 1.067 | 0.976× | 1.000× | — |
| Sort::Self | 1.050 | 1.025 | 0.992 | 0.949× | 0.937× | gcc, clang |
| Template::Parse | 0.629 | 0.627 | 0.653 | 1.011× | 1.072× | gcc |
| Template::Regex | 0.723 | 0.750 | 0.817 | 1.042× | 1.159× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.989×.
Compile clang A/A CPU ratio: 0.987×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.7 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409)
