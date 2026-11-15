# index-cpp benchmarks

Compiler checkout: `d9ff17ff1c4afc36d90ba4a6551b659323cc65ec` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.068× | 1.065× |
| Compile CPU | 6.172× | 5.124× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 714,456 | 338,610 | 228,868 |
| gcc | 540,112 | 280,921 | 486,010 |
| clang | 513,720 | 264,561 | 319,042 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.169 | 0.950 | 0.992 | 0.811× | 0.851× | — |
| Base64::Encode | 1.298 | 1.196 | 1.002 | 0.918× | 0.772× | gcc |
| Binarytrees::Arena | 2.149 | 2.253 | 2.232 | 1.045× | 1.039× | — |
| Binarytrees::Obj | 2.010 | 1.922 | 2.004 | 0.978× | 0.996× | — |
| Brainfuck::Array | 1.283 | 2.136 | 1.548 | 1.730× | 1.227× | gcc, clang |
| Brainfuck::Recursion | 1.172 | 1.180 | 1.144 | 1.006× | 0.975× | — |
| CLBG::Fannkuchredux | 0.901 | 0.979 | 0.907 | 1.080× | 1.008× | clang |
| CLBG::Mandelbrot | 1.228 | 1.171 | 1.115 | 0.954× | 0.907× | — |
| CLBG::Nbody | 0.890 | 0.891 | 0.895 | 1.002× | 0.998× | — |
| CLBG::Spectralnorm | 0.953 | 0.927 | 1.577 | 0.973× | 1.653× | — |
| CSV::Parse | 0.903 | 0.823 | 0.910 | 0.913× | 1.014× | — |
| Calculator::Ast | 0.814 | 0.744 | 0.790 | 0.917× | 0.965× | — |
| Calculator::Interpreter | 1.204 | 1.065 | 1.190 | 0.908× | 1.039× | gcc |
| Compress::ArithDecode | 0.797 | 0.815 | 1.395 | 1.022× | 1.760× | — |
| Compress::ArithEncode | 0.917 | 0.854 | 0.952 | 0.931× | 1.038× | — |
| Compress::BWTDecode | 0.554 | 0.540 | 0.558 | 0.973× | 1.008× | — |
| Compress::BWTEncode | 0.836 | 0.855 | 0.990 | 1.026× | 1.186× | clang |
| Compress::HuffDecode | 0.478 | 0.595 | 0.412 | 1.247× | 0.859× | — |
| Compress::HuffEncode | 0.804 | 0.775 | 0.919 | 0.960× | 1.136× | — |
| Compress::LZWDecode | 0.599 | 0.615 | 0.561 | 1.028× | 0.944× | gcc |
| Compress::LZWEncode | 1.000 | 0.978 | 0.996 | 0.977× | 0.995× | — |
| Distance::Jaro | 1.037 | 1.051 | 0.976 | 1.014× | 0.942× | — |
| Distance::NGram | 1.115 | 1.073 | 1.052 | 0.967× | 0.953× | — |
| Etc::CacheSimulation | 0.905 | 0.879 | 0.891 | 0.972× | 0.985× | — |
| Etc::GameOfLife | 1.098 | 1.041 | 1.069 | 0.896× | 1.030× | clang |
| Etc::LogParser | 0.414 | 1.760 | 0.521 | 4.239× | 1.228× | gcc, clang |
| Etc::NeuralNet | 0.994 | 0.834 | 0.821 | 0.860× | 0.804× | — |
| Etc::Sieve | 1.183 | 1.573 | 1.195 | 1.333× | 1.011× | — |
| Etc::TextRaytracer | 0.897 | 0.881 | 1.060 | 0.981× | 1.181× | — |
| Etc::Words | 1.020 | 0.967 | 1.010 | 0.947× | 0.994× | — |
| Graph::AStar | 1.093 | 1.238 | 1.010 | 1.101× | 0.926× | — |
| Graph::BFS | 1.563 | 1.284 | 1.159 | 0.824× | 0.759× | gcc |
| Graph::DFS | 1.413 | 1.220 | 1.251 | 0.852× | 0.889× | clang |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.169 | 1.179 | 3.052× | 3.080× | — |
| Json::Generate | 0.768 | 0.773 | 0.779 | 1.005× | 1.024× | — |
| Json::ParseDom | 0.962 | 0.915 | 0.903 | 0.950× | 0.950× | — |
| Json::ParseMapping | 0.917 | 0.872 | 0.861 | 0.953× | 0.952× | — |
| Matmul::Single | 1.188 | 1.183 | 1.186 | 0.990× | 1.002× | — |
| Matmul::T16 | 2.363 | 2.308 | 2.305 | 0.977× | 0.973× | — |
| Matmul::T4 | 1.169 | 1.169 | 1.163 | 1.002× | 0.994× | — |
| Matmul::T8 | 1.227 | 1.202 | 1.204 | 0.970× | 0.983× | — |
| Maze::AStar | 1.212 | 1.147 | 1.372 | 0.905× | 1.151× | gcc, clang |
| Maze::BFS | 1.074 | 1.019 | 1.123 | 0.979× | 1.058× | gcc, clang |
| Maze::Generator | 1.275 | 1.293 | 1.281 | 1.013× | 1.009× | — |
| Sort::Merge | 0.750 | 0.987 | 0.879 | 1.313× | 1.171× | — |
| Sort::Quick | 1.138 | 1.085 | 1.099 | 0.954× | 0.965× | — |
| Sort::Self | 1.079 | 1.042 | 1.056 | 0.968× | 0.980× | — |
| Template::Parse | 1.020 | 1.025 | 1.063 | 0.964× | 1.029× | gcc, clang |
| Template::Regex | 1.006 | 1.105 | 1.139 | 1.039× | 1.179× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.001×.
Compile clang A/A CPU ratio: 1.015×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm++ (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794194)
