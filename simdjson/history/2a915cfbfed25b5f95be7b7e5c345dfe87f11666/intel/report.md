# simdjson benchmarks

Compiler: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.354× | 1.568× | 3.324× | 1.558× |
| scalar | twitter.json | 1.056× | 0.927× | 1.056× | 0.927× |
| scalar | citm_catalog.json | 1.060× | 1.043× | 1.060× | 1.043× |
| sse | Compile | 3.577× | 1.738× | 3.536× | 1.717× |
| sse | twitter.json | 0.987× | 0.980× | 0.987× | 0.980× |
| sse | citm_catalog.json | 0.988× | 1.016× | 0.988× | 1.016× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43794025927)
