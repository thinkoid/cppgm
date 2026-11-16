# simdjson benchmarks

Compiler: `50b6ccfce58613983aa027e54e11d6a071971a9a` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.555× | 1.654× | 3.525× | 1.639× |
| scalar | twitter.json | 1.014× | 0.913× | 1.014× | 0.913× |
| scalar | citm_catalog.json | 1.067× | 1.046× | 1.067× | 1.046× |
| sse | Compile | 3.713× | 1.787× | 3.645× | 1.772× |
| sse | twitter.json | 1.016× | 0.995× | 1.016× | 0.995× |
| sse | citm_catalog.json | 0.994× | 1.023× | 0.994× | 1.023× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.5 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43933786445)
