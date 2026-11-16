# simdjson benchmarks

Compiler: `41e06a23e91609dbf050866ef3a7de4848cf17ed` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.880× | 1.866× | 3.755× | 1.837× |
| scalar | twitter.json | 1.028× | 1.021× | 1.028× | 1.021× |
| scalar | citm_catalog.json | 1.001× | 1.119× | 1.001× | 1.119× |
| sse | Compile | 4.104× | 2.056× | 4.037× | 2.057× |
| sse | twitter.json | 1.016× | 1.003× | 1.016× | 1.003× |
| sse | citm_catalog.json | 1.007× | 1.011× | 1.007× | 1.012× |

Calibration variation above 2%: scalar Compile gcc wall A/A before: 0.980×; scalar Compile gcc wall A/A after: 1.021×; scalar Compile clang cpu A/A before: 0.973×; scalar Compile clang wall A/A before: 0.959×; scalar twitter.json gcc cpu A/A before: 1.044×; scalar twitter.json gcc wall A/A before: 1.044×; sse twitter.json gcc cpu A/A before: 1.042×; sse twitter.json gcc wall A/A before: 1.042×; sse citm_catalog.json clang cpu A/A before: 0.963×; sse citm_catalog.json clang wall A/A before: 0.963×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224194)
