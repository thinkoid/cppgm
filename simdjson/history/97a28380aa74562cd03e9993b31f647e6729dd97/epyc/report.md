# simdjson benchmarks

Compiler: `97a28380aa74562cd03e9993b31f647e6729dd97` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.106× | 1.897× | 3.983× | 1.856× |
| scalar | twitter.json | 1.077× | 1.070× | 1.077× | 1.070× |
| scalar | citm_catalog.json | 1.074× | 1.040× | 1.074× | 1.040× |
| sse | Compile | 4.086× | 1.903× | 4.032× | 1.876× |
| sse | twitter.json | 0.996× | 0.983× | 0.996× | 0.983× |
| sse | citm_catalog.json | 0.968× | 1.007× | 0.968× | 1.006× |

Calibration variation above 2%: scalar Compile clang cpu A/A before: 1.032×; scalar Compile clang wall A/A before: 1.029×; scalar twitter.json gcc cpu A/A after: 1.106×; scalar twitter.json gcc wall A/A after: 1.106×; scalar twitter.json clang cpu A/A after: 0.964×; scalar twitter.json clang wall A/A after: 0.964×; scalar citm_catalog.json clang cpu A/A after: 0.967×; scalar citm_catalog.json clang wall A/A after: 0.967×; sse Compile clang cpu A/A after: 0.971×; sse Compile clang wall A/A before: 1.024×; sse Compile clang wall A/A after: 0.964×; sse citm_catalog.json clang cpu A/A before: 0.956×; sse citm_catalog.json clang wall A/A before: 0.956×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398814)
