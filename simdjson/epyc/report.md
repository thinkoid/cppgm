# simdjson benchmarks

Compiler: `c9b05c4c0f7bb1294c717551c61145940b21125e` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.923× | 1.791× | 3.812× | 1.765× |
| scalar | twitter.json | 1.097× | 1.071× | 1.097× | 1.071× |
| scalar | citm_catalog.json | 1.054× | 1.057× | 1.054× | 1.057× |
| sse | Compile | 3.939× | 1.786× | 3.784× | 1.768× |
| sse | twitter.json | 1.006× | 0.999× | 1.006× | 0.999× |
| sse | citm_catalog.json | 0.986× | 1.044× | 0.985× | 1.044× |

Calibration variation above 2%: scalar Compile gcc cpu A/A before: 0.954×; scalar Compile gcc cpu A/A after: 0.978×; scalar Compile gcc wall A/A before: 0.950×; scalar Compile gcc wall A/A after: 0.974×; scalar Compile clang cpu A/A before: 0.971×; scalar Compile clang wall A/A before: 0.971×; scalar twitter.json gcc cpu A/A before: 0.963×; scalar twitter.json gcc wall A/A before: 0.963×; scalar twitter.json clang cpu A/A after: 1.045×; scalar twitter.json clang wall A/A after: 1.045×; scalar citm_catalog.json clang cpu A/A after: 0.937×; scalar citm_catalog.json clang wall A/A after: 0.937×; sse citm_catalog.json gcc cpu A/A before: 0.980×; sse citm_catalog.json gcc wall A/A before: 0.980×; sse citm_catalog.json clang cpu A/A before: 0.950×; sse citm_catalog.json clang cpu A/A after: 0.961×; sse citm_catalog.json clang wall A/A before: 0.950×; sse citm_catalog.json clang wall A/A after: 0.961×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858954)
