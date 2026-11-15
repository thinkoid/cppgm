# simdjson benchmarks

Compiler: `f9e97b328c0796c85c317bee205ca89a663490b1` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.160× | 1.916× | 4.110× | 1.890× |
| scalar | twitter.json | 0.991× | 0.997× | 0.991× | 0.997× |
| scalar | citm_catalog.json | 0.967× | 1.076× | 0.967× | 1.076× |
| sse | Compile | 4.242× | 2.099× | 4.113× | 2.061× |
| sse | twitter.json | 0.998× | 0.988× | 0.998× | 0.988× |
| sse | citm_catalog.json | 1.000× | 0.993× | 1.000× | 0.993× |

Calibration variation above 2%: scalar twitter.json gcc cpu A/A before: 1.028×; scalar twitter.json gcc wall A/A before: 1.028×. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890617)
