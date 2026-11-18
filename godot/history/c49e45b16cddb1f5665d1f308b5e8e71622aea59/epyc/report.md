# Godot headless benchmarks

Compiler: `c49e45b16cddb1f5665d1f308b5e8e71622aea59` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1421.92 | 365.19 |
| gcc | 5731.18 | 1450.28 |
| clang | 5694.67 | 1451.58 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.081× | 0.991× | 1.111× | 0.994× |
| arrays | 0.889× | 1.023× | 0.880× | 1.039× |
| strings | 0.978× | 0.962× | 0.975× | 0.966× |
| geometry | 0.961× | 0.938× | 0.958× | 0.934× |
| scene | 1.097× | 0.947× | 1.113× | 0.960× |

A/A variation above 2%: dispatch gcc cpu before: 1.042×; dispatch gcc cpu after: 1.024×; dispatch gcc measured_wall before: 1.046×; dispatch gcc measured_wall after: 1.024×; strings clang cpu before: 0.977×; scene gcc cpu after: 0.976×; scene clang cpu before: 0.973×; scene clang measured_wall before: 0.958×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912354)
