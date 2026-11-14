# simdjson benchmarks

Compiler: `8401c869bd9c750084470a8686c057b7f9a0da61` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.100× | 2.125× | 4.037× | 2.103× |
| scalar | twitter.json | 1.041× | 0.937× | 1.041× | 0.937× |
| scalar | citm_catalog.json | 1.013× | 1.063× | 1.013× | 1.063× |
| sse | Compile | 4.206× | 2.395× | 4.173× | 2.351× |
| sse | twitter.json | 1.026× | 1.024× | 1.026× | 1.024× |
| sse | citm_catalog.json | 1.007× | 0.988× | 1.007× | 0.988× |

Calibration variation above 2%: scalar twitter.json clang cpu A/A before: 0.979×; scalar twitter.json clang wall A/A before: 0.979×; scalar citm_catalog.json gcc cpu A/A after: 0.975×; scalar citm_catalog.json gcc wall A/A after: 0.975×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391764)
