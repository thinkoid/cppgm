# simdjson benchmarks

Compiler: `0b676f0538e48bc09cabec50cc9ce76155ba448f` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.652× | 1.722× | 3.556× | 1.713× |
| scalar | twitter.json | 1.133× | 1.003× | 1.133× | 1.003× |
| scalar | citm_catalog.json | 1.093× | 1.072× | 1.093× | 1.072× |
| sse | Compile | 3.826× | 1.860× | 3.757× | 1.855× |
| sse | twitter.json | 0.965× | 0.963× | 0.965× | 0.963× |
| sse | citm_catalog.json | 0.978× | 1.006× | 0.978× | 1.006× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060769)
