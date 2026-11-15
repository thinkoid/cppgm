# Godot headless benchmarks

Compiler: `c9b05c4c0f7bb1294c717551c61145940b21125e` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 900.48 | 230.93 |
| gcc | 3669.16 | 924.31 |
| clang | 2920.89 | 745.08 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.060× | 0.981× | 1.077× | 0.993× |
| arrays | 0.991× | 1.026× | 0.990× | 1.038× |
| strings | 0.967× | 0.984× | 0.961× | 0.985× |
| geometry | 1.000× | 0.897× | 0.992× | 0.898× |
| scene | 1.000× | 1.018× | 1.001× | 1.024× |

A/A variation above 2%: scene gcc measured_wall after: 1.023×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750859037)
