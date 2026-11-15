# simdjson benchmarks

Compiler: `54b8d0eeb4b4d132a869dcf623e314c78269b705` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.004× | 1.900× | 3.946× | 1.868× |
| scalar | twitter.json | 1.076× | 1.063× | 1.076× | 1.063× |
| scalar | citm_catalog.json | 0.994× | 1.106× | 0.994× | 1.106× |
| sse | Compile | 4.159× | 2.079× | 4.130× | 2.061× |
| sse | twitter.json | 0.992× | 0.983× | 0.992× | 0.983× |
| sse | citm_catalog.json | 0.994× | 0.989× | 0.994× | 0.989× |

Calibration variation above 2%: sse Compile clang cpu A/A before: 0.980×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43682126958)
