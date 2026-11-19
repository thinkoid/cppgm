# simdjson benchmarks

Compiler: `c6ed610030ba933d83205fb17744340b2206efa7` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.026× | 2.088× | 3.958× | 2.071× |
| scalar | twitter.json | 1.079× | 0.987× | 1.079× | 0.987× |
| scalar | citm_catalog.json | 1.014× | 1.076× | 1.013× | 1.078× |
| sse | Compile | 4.125× | 2.317× | 4.059× | 2.296× |
| sse | twitter.json | 1.017× | 1.011× | 1.017× | 1.011× |
| sse | citm_catalog.json | 1.012× | 0.998× | 1.011× | 0.998× |

Calibration variation above 2%: sse Compile gcc cpu A/A before: 0.971×; sse Compile gcc wall A/A before: 0.974×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.7 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416)
