# Godot headless benchmarks

Compiler: `a61cb1662752417319c7569bedebe809b6cb0ad5` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1064.15 | 274.90 |
| gcc | 4193.30 | 1060.48 |
| clang | 3719.31 | 948.57 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.045× | 0.991× | 1.066× | 1.018× |
| arrays | 0.932× | 1.000× | 0.922× | 1.008× |
| strings | 0.918× | 0.912× | 0.899× | 0.907× |
| geometry | 1.017× | 1.008× | 1.017× | 1.016× |
| scene | 1.026× | 1.000× | 1.034× | 1.007× |

A/A variation above 2%: dispatch clang cpu before: 0.973×; dispatch clang measured_wall before: 0.972×; arrays gcc cpu after: 0.975×; arrays gcc measured_wall after: 0.974×; strings gcc cpu before: 0.968×; strings gcc measured_wall before: 0.969×; geometry gcc cpu after: 1.033×; geometry gcc measured_wall after: 1.041×; geometry clang cpu before: 1.026×; geometry clang cpu after: 1.093×; geometry clang measured_wall before: 1.022×; geometry clang measured_wall after: 1.111×; scene gcc cpu before: 1.025×; scene gcc measured_wall before: 1.036×; scene clang cpu after: 0.974×; scene clang measured_wall after: 0.976×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774475)
