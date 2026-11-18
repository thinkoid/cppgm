# simdjson benchmarks

Compiler: `03db3c34a507ea98ae7816600ed3fd7bd054a1a9` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.093× | 2.052× | 3.990× | 2.023× |
| scalar | twitter.json | 1.088× | 0.989× | 1.089× | 0.989× |
| scalar | citm_catalog.json | 1.037× | 1.085× | 1.037× | 1.085× |
| sse | Compile | 4.320× | 2.412× | 4.272× | 2.401× |
| sse | twitter.json | 1.022× | 1.009× | 1.022× | 1.009× |
| sse | citm_catalog.json | 1.010× | 0.996× | 1.010× | 0.996× |

Calibration variation above 2%: scalar Compile gcc cpu A/A before: 1.021×; scalar Compile gcc cpu A/A after: 1.024×; scalar Compile gcc wall A/A before: 1.026×; scalar Compile gcc wall A/A after: 1.024×; scalar citm_catalog.json gcc cpu A/A before: 0.969×; scalar citm_catalog.json gcc wall A/A before: 0.970×; sse Compile gcc cpu A/A before: 0.959×; sse Compile gcc wall A/A before: 0.956×; sse Compile clang cpu A/A after: 1.032×; sse Compile clang wall A/A after: 1.033×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.7 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984)
