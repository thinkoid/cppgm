# index-cpp benchmarks

Compiler checkout: `97a28380aa74562cd03e9993b31f647e6729dd97` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.054× | 1.049× |
| Compile CPU | 6.221× | 4.777× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 710,360 | 338,226 | 228,804 |
| gcc | 540,112 | 280,921 | 486,036 |
| clang | 513,720 | 264,561 | 319,216 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.819 | 0.664 | 0.693 | 0.810× | 0.847× | — |
| Base64::Encode | 0.836 | 0.847 | 0.659 | 1.010× | 0.788× | — |
| Binarytrees::Arena | 1.560 | 1.611 | 1.599 | 1.025× | 1.031× | — |
| Binarytrees::Obj | 0.685 | 0.641 | 0.742 | 0.934× | 1.072× | clang |
| Brainfuck::Array | 1.216 | 1.383 | 1.223 | 1.137× | 0.984× | — |
| Brainfuck::Recursion | 0.855 | 0.734 | 0.838 | 0.857× | 0.980× | gcc |
| CLBG::Fannkuchredux | 0.776 | 0.759 | 0.790 | 0.985× | 1.019× | gcc |
| CLBG::Mandelbrot | 0.857 | 0.839 | 0.863 | 0.977× | 1.005× | — |
| CLBG::Nbody | 0.621 | 0.624 | 0.625 | 1.005× | 1.006× | — |
| CLBG::Spectralnorm | 0.723 | 0.709 | 1.005 | 0.981× | 1.393× | — |
| CSV::Parse | 0.640 | 0.583 | 0.629 | 0.911× | 1.017× | gcc |
| Calculator::Ast | 0.585 | 0.587 | 0.569 | 0.997× | 0.978× | — |
| Calculator::Interpreter | 0.706 | 0.675 | 0.746 | 0.958× | 1.061× | — |
| Compress::ArithDecode | 0.687 | 0.662 | 1.200 | 0.962× | 1.748× | — |
| Compress::ArithEncode | 0.827 | 0.761 | 0.778 | 0.921× | 0.937× | — |
| Compress::BWTDecode | 0.413 | 0.406 | 0.410 | 0.984× | 0.994× | — |
| Compress::BWTEncode | 0.568 | 0.593 | 0.724 | 1.058× | 1.271× | — |
| Compress::HuffDecode | 0.292 | 0.378 | 0.259 | 1.288× | 0.884× | — |
| Compress::HuffEncode | 0.524 | 0.501 | 0.685 | 0.954× | 1.312× | — |
| Compress::LZWDecode | 0.400 | 0.407 | 0.388 | 1.025× | 0.965× | — |
| Compress::LZWEncode | 0.739 | 0.722 | 0.724 | 0.976× | 0.979× | clang |
| Distance::Jaro | 0.927 | 0.893 | 0.885 | 0.965× | 0.953× | — |
| Distance::NGram | 0.894 | 0.857 | 0.855 | 0.957× | 0.956× | — |
| Etc::CacheSimulation | 0.629 | 0.584 | 0.626 | 0.922× | 0.993× | — |
| Etc::GameOfLife | 0.792 | 0.573 | 0.593 | 0.716× | 0.741× | — |
| Etc::LogParser | 0.248 | 0.849 | 0.293 | 3.464× | 1.188× | gcc, clang |
| Etc::NeuralNet | 0.681 | 0.601 | 0.587 | 0.885× | 0.845× | gcc, clang |
| Etc::Sieve | 0.906 | 1.254 | 0.847 | 1.379× | 0.932× | — |
| Etc::TextRaytracer | 0.591 | 0.578 | 0.719 | 0.977× | 1.216× | — |
| Etc::Words | 0.722 | 0.694 | 0.732 | 0.942× | 1.013× | — |
| Graph::AStar | 0.913 | 1.034 | 0.885 | 1.124× | 0.967× | — |
| Graph::BFS | 0.978 | 1.129 | 0.989 | 1.152× | 0.981× | — |
| Graph::DFS | 1.020 | 0.958 | 0.999 | 0.948× | 0.976× | clang |
| Hash::CRC32 | 0.208 | 0.574 | 0.651 | 2.757× | 3.125× | — |
| Hash::SHA256 | 0.461 | 0.895 | 0.918 | 1.939× | 1.990× | — |
| Json::Generate | 0.653 | 0.643 | 0.652 | 0.988× | 1.002× | gcc |
| Json::ParseDom | 0.766 | 0.738 | 0.744 | 0.962× | 0.971× | — |
| Json::ParseMapping | 0.728 | 0.704 | 0.707 | 0.963× | 0.971× | — |
| Matmul::Single | 0.622 | 0.619 | 0.619 | 0.994× | 0.994× | — |
| Matmul::T16 | 1.262 | 1.270 | 1.286 | 1.006× | 1.021× | — |
| Matmul::T4 | 0.623 | 0.620 | 0.620 | 0.995× | 0.994× | clang |
| Matmul::T8 | 0.648 | 0.645 | 0.665 | 0.996× | 1.026× | — |
| Maze::AStar | 0.850 | 0.855 | 0.965 | 0.967× | 0.955× | gcc, clang |
| Maze::BFS | 0.748 | 0.740 | 0.744 | 0.972× | 0.969× | clang |
| Maze::Generator | 1.111 | 1.103 | 1.115 | 0.988× | 1.001× | — |
| Sort::Merge | 0.630 | 0.920 | 0.689 | 1.451× | 1.071× | — |
| Sort::Quick | 1.042 | 1.040 | 1.033 | 0.978× | 0.970× | — |
| Sort::Self | 1.046 | 1.014 | 0.951 | 0.969× | 0.919× | clang |
| Template::Parse | 0.581 | 0.597 | 0.607 | 1.031× | 1.041× | clang |
| Template::Regex | 0.666 | 0.686 | 0.750 | 1.039× | 1.132× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.010×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398811)
