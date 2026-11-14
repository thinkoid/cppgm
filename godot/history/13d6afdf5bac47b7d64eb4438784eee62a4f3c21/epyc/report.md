# Godot headless benchmarks

Compiler: `13d6afdf5bac47b7d64eb4438784eee62a4f3c21` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1075.80 | 277.90 |
| gcc | 4244.29 | 1073.90 |
| clang | 3782.91 | 968.96 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.044× | 0.982× | 1.053× | 0.986× |
| arrays | 0.914× | 0.962× | 0.912× | 0.967× |
| strings | 0.925× | 0.924× | 0.923× | 0.928× |
| geometry | 0.896× | 0.895× | 0.886× | 0.884× |
| scene | 1.043× | 0.991× | 1.049× | 1.007× |

A/A variation above 2%: dispatch gcc cpu before: 1.133×; dispatch gcc cpu after: 1.026×; dispatch gcc measured_wall before: 1.152×; strings clang cpu after: 0.976×; scene gcc cpu after: 1.085×; scene gcc measured_wall after: 1.092×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658296)
