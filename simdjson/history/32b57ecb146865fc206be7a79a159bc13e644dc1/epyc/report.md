# simdjson benchmarks

Compiler: `32b57ecb146865fc206be7a79a159bc13e644dc1` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.309× | 1.959× | 4.157× | 1.913× |
| scalar | twitter.json | 1.004× | 0.962× | 1.004× | 0.962× |
| scalar | citm_catalog.json | 1.046× | 1.046× | 1.046× | 1.046× |
| sse | Compile | 4.306× | 2.013× | 4.228× | 1.947× |
| sse | twitter.json | 1.005× | 0.997× | 1.005× | 0.997× |
| sse | citm_catalog.json | 0.962× | 1.019× | 0.961× | 1.019× |

Calibration variation above 2%: scalar Compile gcc cpu A/A after: 1.021×; scalar Compile gcc wall A/A after: 1.024×; scalar twitter.json gcc cpu A/A before: 1.041×; scalar twitter.json gcc cpu A/A after: 0.979×; scalar twitter.json gcc wall A/A before: 1.041×; scalar twitter.json gcc wall A/A after: 0.979×; sse Compile gcc wall A/A before: 1.021×; sse citm_catalog.json gcc cpu A/A after: 0.979×; sse citm_catalog.json gcc wall A/A after: 0.979×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138907)
