# Godot headless benchmarks

Compiler: `4b05c87802afb837551466590e3eb75c8099ec82` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1423.81 | 365.68 |
| gcc | 5616.43 | 1420.47 |
| clang | 5614.75 | 1427.62 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.098× | 0.973× | 1.131× | 0.985× |
| arrays | 0.898× | 1.008× | 0.878× | 1.025× |
| strings | 0.977× | 0.962× | 0.981× | 0.955× |
| geometry | 0.968× | 0.984× | 0.968× | 0.994× |
| scene | 0.961× | 0.960× | 0.951× | 0.976× |

A/A variation above 2%: dispatch gcc cpu after: 1.041×; dispatch gcc measured_wall after: 1.046×; scene clang measured_wall before: 1.025×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.4 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097961)
