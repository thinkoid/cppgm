# simdjson benchmarks

Compiler: `7697b5524a9b033f6a1350581507ee478d068097` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.967× | 2.072× | 3.878× | 2.023× |
| scalar | twitter.json | 1.072× | 0.997× | 1.072× | 0.997× |
| scalar | citm_catalog.json | 1.030× | 1.072× | 1.030× | 1.072× |
| sse | Compile | 4.134× | 2.319× | 4.090× | 2.282× |
| sse | twitter.json | 1.019× | 1.011× | 1.020× | 1.011× |
| sse | citm_catalog.json | 1.010× | 0.996× | 1.010× | 0.996× |

Calibration variation above 2%: scalar twitter.json clang cpu A/A before: 1.021×; scalar twitter.json clang wall A/A before: 1.021×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980)
