# simdjson benchmarks

Compiler: `c49e45b16cddb1f5665d1f308b5e8e71622aea59` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.883× | 1.831× | 3.823× | 1.794× |
| scalar | twitter.json | 1.104× | 1.088× | 1.104× | 1.088× |
| scalar | citm_catalog.json | 1.055× | 1.055× | 1.055× | 1.055× |
| sse | Compile | 4.179× | 1.930× | 4.053× | 1.898× |
| sse | twitter.json | 0.995× | 1.010× | 0.995× | 1.010× |
| sse | citm_catalog.json | 0.988× | 1.029× | 0.988× | 1.029× |

Calibration variation above 2%: scalar Compile clang wall A/A after: 0.970×; scalar twitter.json clang cpu A/A before: 1.039×; scalar twitter.json clang wall A/A before: 1.039×; sse Compile gcc cpu A/A after: 0.971×; sse Compile gcc wall A/A after: 0.974×; sse Compile clang cpu A/A before: 0.968×; sse Compile clang wall A/A before: 0.966×; sse citm_catalog.json gcc cpu A/A before: 0.960×; sse citm_catalog.json gcc cpu A/A after: 0.974×; sse citm_catalog.json gcc wall A/A before: 0.960×; sse citm_catalog.json gcc wall A/A after: 0.974×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912169)
