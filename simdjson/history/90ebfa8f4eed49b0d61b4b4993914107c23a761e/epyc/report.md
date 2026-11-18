# simdjson benchmarks

Compiler: `90ebfa8f4eed49b0d61b4b4993914107c23a761e` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.108× | 1.880× | 4.066× | 1.831× |
| scalar | twitter.json | 1.034× | 1.025× | 1.034× | 1.025× |
| scalar | citm_catalog.json | 1.002× | 1.112× | 1.002× | 1.112× |
| sse | Compile | 4.116× | 2.064× | 4.024× | 2.043× |
| sse | twitter.json | 1.018× | 1.002× | 1.018× | 1.002× |
| sse | citm_catalog.json | 1.008× | 1.003× | 1.008× | 1.003× |

Calibration variation above 2%: scalar Compile gcc cpu A/A after: 0.963×; scalar Compile gcc wall A/A after: 0.966×; scalar twitter.json gcc cpu A/A before: 0.979×; scalar twitter.json gcc wall A/A before: 0.979×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407479)
