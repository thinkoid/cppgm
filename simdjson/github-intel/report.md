# simdjson benchmarks

Compiler: `e09af8489d07ffc3f9d61676d298292ae7b4df5d` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.045× | 1.944× | 4.021× | 1.932× |
| scalar | twitter.json | 1.114× | 1.069× | 1.114× | 1.069× |
| scalar | citm_catalog.json | 1.030× | 1.065× | 1.030× | 1.064× |
| sse | Compile | 4.119× | 2.126× | 4.116× | 2.087× |
| sse | twitter.json | 1.026× | 0.985× | 1.026× | 0.985× |
| sse | citm_catalog.json | 1.001× | 0.991× | 1.001× | 0.991× |

Calibration variation above 2%: scalar Compile gcc cpu A/A after: 0.975×; scalar Compile gcc wall A/A after: 0.974×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536519)
