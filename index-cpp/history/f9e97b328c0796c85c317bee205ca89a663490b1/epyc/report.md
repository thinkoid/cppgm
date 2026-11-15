# index-cpp benchmarks

Compiler checkout: `f9e97b328c0796c85c317bee205ca89a663490b1` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.062× | 1.060× |
| Compile CPU | 6.163× | 5.685× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 339,762 | 228,818 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 319,150 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.408 | 1.194 | 1.208 | 0.848× | 0.859× | — |
| Base64::Encode | 1.710 | 1.437 | 1.290 | 0.840× | 0.754× | — |
| Binarytrees::Arena | 2.413 | 2.471 | 2.550 | 1.023× | 1.058× | — |
| Binarytrees::Obj | 1.398 | 1.345 | 1.575 | 0.956× | 1.123× | gcc, clang |
| Brainfuck::Array | 2.675 | 2.811 | 2.676 | 1.094× | 1.001× | — |
| Brainfuck::Recursion | 1.779 | 1.739 | 1.706 | 0.977× | 0.965× | clang |
| CLBG::Fannkuchredux | 0.989 | 1.149 | 0.974 | 1.166× | 0.984× | — |
| CLBG::Mandelbrot | 1.365 | 1.351 | 1.336 | 0.989× | 0.979× | — |
| CLBG::Nbody | 1.038 | 1.058 | 1.059 | 1.021× | 1.019× | — |
| CLBG::Spectralnorm | 1.185 | 1.140 | 1.736 | 0.962× | 1.464× | — |
| CSV::Parse | 1.148 | 1.084 | 1.149 | 0.942× | 1.005× | — |
| Calculator::Ast | 1.028 | 0.958 | 0.988 | 0.932× | 0.955× | — |
| Calculator::Interpreter | 1.378 | 1.298 | 1.414 | 0.938× | 1.023× | — |
| Compress::ArithDecode | 0.940 | 0.948 | 1.603 | 1.008× | 1.706× | — |
| Compress::ArithEncode | 1.093 | 0.981 | 1.111 | 0.899× | 1.015× | — |
| Compress::BWTDecode | 0.642 | 0.649 | 0.660 | 1.010× | 1.028× | — |
| Compress::BWTEncode | 1.139 | 1.135 | 1.369 | 0.998× | 1.197× | — |
| Compress::HuffDecode | 0.623 | 0.780 | 0.516 | 1.246× | 0.829× | — |
| Compress::HuffEncode | 0.938 | 1.228 | 1.034 | 1.307× | 1.102× | — |
| Compress::LZWDecode | 0.740 | 0.760 | 0.705 | 1.026× | 0.951× | — |
| Compress::LZWEncode | 1.328 | 1.288 | 1.302 | 0.967× | 0.983× | — |
| Distance::Jaro | 1.200 | 1.171 | 1.151 | 0.975× | 0.960× | — |
| Distance::NGram | 1.362 | 1.323 | 1.289 | 0.972× | 0.943× | — |
| Etc::CacheSimulation | 1.163 | 1.108 | 1.137 | 0.946× | 0.987× | — |
| Etc::GameOfLife | 1.195 | 1.136 | 1.199 | 0.944× | 1.015× | — |
| Etc::LogParser | 0.533 | 2.009 | 0.667 | 3.693× | 1.253× | clang |
| Etc::NeuralNet | 1.248 | 1.105 | 1.082 | 0.883× | 0.914× | — |
| Etc::Sieve | 1.565 | 1.984 | 1.541 | 1.273× | 0.985× | — |
| Etc::TextRaytracer | 1.039 | 1.024 | 1.339 | 0.982× | 1.287× | — |
| Etc::Words | 1.328 | 1.289 | 1.339 | 0.970× | 1.010× | — |
| Graph::AStar | 1.181 | 1.310 | 1.072 | 1.105× | 0.910× | — |
| Graph::BFS | 1.722 | 1.219 | 1.164 | 0.687× | 0.675× | — |
| Graph::DFS | 1.364 | 1.188 | 1.235 | 0.853× | 0.908× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.916 | 2.751× | 3.125× | — |
| Hash::SHA256 | 0.453 | 1.474 | 1.382 | 3.256× | 3.053× | — |
| Json::Generate | 1.153 | 1.130 | 1.151 | 0.977× | 0.999× | — |
| Json::ParseDom | 1.269 | 1.194 | 1.188 | 0.943× | 0.935× | — |
| Json::ParseMapping | 1.207 | 1.135 | 1.135 | 0.943× | 0.944× | — |
| Matmul::Single | 1.389 | 1.388 | 1.385 | 0.999× | 0.997× | — |
| Matmul::T16 | 2.631 | 2.629 | 2.633 | 0.999× | 1.006× | — |
| Matmul::T4 | 1.357 | 1.357 | 1.357 | 1.000× | 0.999× | — |
| Matmul::T8 | 1.377 | 1.373 | 1.379 | 0.997× | 1.002× | — |
| Maze::AStar | 1.320 | 1.172 | 1.340 | 0.883× | 1.032× | — |
| Maze::BFS | 1.348 | 1.523 | 1.568 | 1.105× | 1.184× | clang |
| Maze::Generator | 1.218 | 1.273 | 1.248 | 1.009× | 1.025× | clang |
| Sort::Merge | 0.871 | 1.131 | 1.027 | 1.293× | 1.181× | — |
| Sort::Quick | 1.348 | 1.236 | 1.251 | 0.917× | 0.929× | — |
| Sort::Self | 1.258 | 1.210 | 1.230 | 0.959× | 0.977× | — |
| Template::Parse | 1.341 | 1.337 | 1.345 | 1.003× | 1.014× | — |
| Template::Regex | 1.343 | 1.373 | 1.558 | 1.044× | 1.151× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.994×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890548)
