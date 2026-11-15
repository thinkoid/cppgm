# simdjson benchmarks

Compiler: `116052803d2981c33ce1fab0c2a17d640d831a91` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.667× | 1.690× | 3.592× | 1.673× |
| scalar | twitter.json | 1.105× | 0.990× | 1.105× | 0.990× |
| scalar | citm_catalog.json | 1.092× | 1.072× | 1.092× | 1.072× |
| sse | Compile | 3.833× | 1.826× | 3.716× | 1.785× |
| sse | twitter.json | 0.996× | 0.973× | 0.996× | 0.973× |
| sse | citm_catalog.json | 0.977× | 1.013× | 0.977× | 1.013× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517577)
