# Godot headless benchmarks

Compiler: `32b57ecb146865fc206be7a79a159bc13e644dc1` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1059.17 | 273.51 |
| gcc | 4137.43 | 1046.26 |
| clang | 3705.70 | 949.82 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.062× | 0.982× | 1.057× | 0.986× |
| arrays | 0.904× | 0.978× | 0.898× | 0.995× |
| strings | 0.885× | 0.885× | 0.868× | 0.870× |
| geometry | 1.017× | 0.991× | 1.018× | 1.003× |
| scene | 1.054× | 0.991× | 1.062× | 1.004× |

A/A variation above 2%: dispatch gcc cpu before: 0.929×; dispatch gcc measured_wall before: 0.921×; arrays gcc cpu before: 0.967×; arrays gcc measured_wall before: 0.972×; strings gcc measured_wall before: 0.979×; strings clang cpu after: 0.935×; strings clang measured_wall after: 0.928×; geometry clang cpu before: 0.935×; geometry clang measured_wall before: 0.939×; scene gcc cpu before: 0.974×; scene gcc measured_wall before: 0.977×; scene clang cpu before: 0.974×; scene clang measured_wall before: 0.954×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138825)
