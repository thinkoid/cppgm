# Godot headless benchmarks

Compiler: `33a92f123a1965a6a3ed154f1e785aef2f56b4a7` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1399.23 | 359.16 |
| gcc | 5500.91 | 1391.52 |
| clang | 5508.00 | 1399.44 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.139× | 0.972× | 1.157× | 0.986× |
| arrays | 0.895× | 1.031× | 0.887× | 1.040× |
| strings | 0.951× | 0.942× | 0.953× | 0.950× |
| geometry | 0.961× | 0.794× | 0.961× | 0.773× |
| scene | 0.992× | 0.975× | 0.984× | 0.981× |

A/A variation above 2%: arrays gcc cpu before: 0.788×; arrays gcc measured_wall before: 0.748×; strings gcc measured_wall after: 0.976×; strings clang cpu after: 0.975×; strings clang measured_wall after: 0.966×; scene gcc cpu after: 1.025×; scene gcc measured_wall after: 1.023×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643631)
