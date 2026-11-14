# simdjson benchmarks

Compiler: `13d6afdf5bac47b7d64eb4438784eee62a4f3c21` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.167× | 1.979× | 4.048× | 1.989× |
| scalar | twitter.json | 0.989× | 0.985× | 0.989× | 0.984× |
| scalar | citm_catalog.json | 0.971× | 1.079× | 0.971× | 1.079× |
| sse | Compile | 4.356× | 2.154× | 4.307× | 2.150× |
| sse | twitter.json | 1.004× | 0.986× | 1.003× | 0.986× |
| sse | citm_catalog.json | 0.994× | 0.994× | 0.994× | 0.994× |

Calibration variation above 2%: scalar Compile clang wall A/A after: 1.032×; sse Compile gcc cpu A/A before: 1.029×; sse Compile gcc wall A/A before: 1.030×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658429)
