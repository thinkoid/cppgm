# simdjson benchmarks

Compiler: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.989× | 1.848× | 3.950× | 1.818× |
| scalar | twitter.json | 1.033× | 1.022× | 1.033× | 1.022× |
| scalar | citm_catalog.json | 1.002× | 1.114× | 1.002× | 1.114× |
| sse | Compile | 4.128× | 2.050× | 4.037× | 2.007× |
| sse | twitter.json | 1.013× | 1.006× | 1.013× | 1.006× |
| sse | citm_catalog.json | 1.008× | 1.005× | 1.008× | 1.005× |

Calibration variation above 2%: scalar Compile gcc cpu A/A before: 0.967×; scalar Compile gcc wall A/A before: 0.972×; scalar Compile clang wall A/A before: 1.021×; sse citm_catalog.json gcc cpu A/A after: 1.027×; sse citm_catalog.json gcc wall A/A after: 1.027×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388714)
