# Godot headless benchmarks

Compiler: `1763cb9b6e07c8c5cf27f44cc0ee379db6efff19` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 872.54 | 223.90 |
| gcc | 3702.04 | 933.67 |
| clang | 2974.64 | 759.10 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.085× | 0.991× | 1.104× | 1.003× |
| arrays | 0.991× | 1.017× | 0.993× | 1.033× |
| strings | 0.967× | 1.008× | 0.972× | 1.008× |
| geometry | 0.991× | 0.922× | 0.998× | 0.908× |
| scene | 1.028× | 1.009× | 1.038× | 1.020× |

A/A variation above 2%: strings clang cpu after: 1.033×; strings clang measured_wall after: 1.026×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.7 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409)
