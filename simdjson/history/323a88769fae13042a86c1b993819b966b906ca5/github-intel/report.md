# simdjson benchmarks

Compiler: `323a88769fae13042a86c1b993819b966b906ca5` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.968× | 1.906× | 3.910× | 1.895× |
| scalar | twitter.json | 1.106× | 1.067× | 1.106× | 1.067× |
| scalar | citm_catalog.json | 1.033× | 1.068× | 1.033× | 1.068× |
| sse | Compile | 4.081× | 2.107× | 4.044× | 2.075× |
| sse | twitter.json | 1.023× | 0.987× | 1.023× | 0.987× |
| sse | citm_catalog.json | 1.004× | 0.991× | 1.004× | 0.991× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819299)
