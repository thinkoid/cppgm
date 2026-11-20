# simdjson benchmarks

Compiler: `94aaecc52ac26996bd3d654522334e3c28c68457` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.057× | 1.905× | 3.988× | 1.851× |
| scalar | twitter.json | 1.028× | 1.028× | 1.028× | 1.028× |
| scalar | citm_catalog.json | 1.002× | 1.112× | 1.002× | 1.112× |
| sse | Compile | 4.099× | 2.075× | 4.040× | 2.061× |
| sse | twitter.json | 1.015× | 0.998× | 1.015× | 0.998× |
| sse | citm_catalog.json | 1.003× | 1.008× | 1.002× | 1.008× |

Calibration variation above 2%: scalar Compile gcc cpu A/A after: 1.021×; scalar Compile gcc wall A/A after: 1.026×; scalar twitter.json clang cpu A/A after: 1.069×; scalar twitter.json clang wall A/A after: 1.069×; sse twitter.json gcc cpu A/A before: 1.021×; sse twitter.json gcc wall A/A before: 1.021×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949)
