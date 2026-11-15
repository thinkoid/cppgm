# simdjson benchmarks

Compiler: `de44b5cf8e143b4625737955531361b622b74bef` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.655× | 1.679× | 3.595× | 1.659× |
| scalar | twitter.json | 1.057× | 0.950× | 1.058× | 0.950× |
| scalar | citm_catalog.json | 1.063× | 1.045× | 1.063× | 1.045× |
| sse | Compile | 3.851× | 1.836× | 3.759× | 1.843× |
| sse | twitter.json | 0.996× | 0.967× | 0.995× | 0.967× |
| sse | citm_catalog.json | 0.979× | 1.007× | 0.979× | 1.007× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654061)
