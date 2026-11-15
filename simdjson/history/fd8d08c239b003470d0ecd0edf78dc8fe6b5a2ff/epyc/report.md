# simdjson benchmarks

Compiler: `fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.835× | 1.827× | 3.789× | 1.831× |
| scalar | twitter.json | 1.032× | 1.024× | 1.032× | 1.024× |
| scalar | citm_catalog.json | 1.001× | 1.114× | 1.001× | 1.114× |
| sse | Compile | 3.955× | 2.000× | 3.873× | 1.974× |
| sse | twitter.json | 1.010× | 0.999× | 1.010× | 0.999× |
| sse | citm_catalog.json | 1.009× | 1.005× | 1.009× | 1.005× |

Calibration variation above 2%: scalar Compile clang cpu A/A before: 1.022×; sse Compile gcc cpu A/A before: 1.022×. No observations are dropped.

## Toolchains

- cppgm: cppgm (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486299)
