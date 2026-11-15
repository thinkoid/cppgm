# simdjson benchmarks

Compiler: `b8749c61550bdf9b4d65e7e01182a1f856100a46` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.597× | 1.690× | 3.556× | 1.686× |
| scalar | twitter.json | 1.128× | 1.007× | 1.128× | 1.007× |
| scalar | citm_catalog.json | 1.095× | 1.074× | 1.095× | 1.074× |
| sse | Compile | 3.767× | 1.832× | 3.695× | 1.805× |
| sse | twitter.json | 0.965× | 0.969× | 0.965× | 0.969× |
| sse | citm_catalog.json | 0.977× | 1.007× | 0.977× | 1.007× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712368948)
