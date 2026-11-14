# Godot headless benchmarks

Compiler: `b19fe49250af0b6050c1791ff584c423942b8b79` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 893.34 | 229.10 |
| gcc | 3680.29 | 927.13 |
| clang | 2935.09 | 748.21 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.062× | 0.988× | 1.078× | 1.010× |
| arrays | 0.991× | 1.034× | 0.990× | 1.031× |
| strings | 0.931× | 0.946× | 0.925× | 0.943× |
| geometry | 1.000× | 0.914× | 1.006× | 0.907× |
| scene | 1.008× | 1.017× | 1.018× | 1.021× |

A/A variation above 2%: strings gcc cpu after: 1.025×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677169)
