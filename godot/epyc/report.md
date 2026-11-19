# Godot headless benchmarks

Compiler: `6ddc5326a8c4d8752e1d92ecedf5228df07a50e8` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1038.09 | 267.98 |
| gcc | 4096.44 | 1036.68 |
| clang | 3692.76 | 942.89 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.035× | 0.965× | 1.052× | 0.977× |
| arrays | 0.898× | 1.000× | 0.885× | 1.009× |
| strings | 0.984× | 0.943× | 0.987× | 0.940× |
| geometry | 1.000× | 0.983× | 0.999× | 0.984× |
| scene | 1.009× | 0.974× | 1.009× | 0.987× |

A/A variation above 2%: dispatch gcc cpu after: 1.043×; dispatch gcc measured_wall after: 1.035×; arrays gcc measured_wall before: 0.979×; arrays clang cpu after: 1.104×; arrays clang measured_wall after: 1.125×; strings gcc measured_wall before: 0.978×; scene gcc cpu before: 1.025×; scene gcc cpu after: 0.960×; scene gcc measured_wall before: 1.041×; scene gcc measured_wall after: 0.948×; scene clang measured_wall after: 0.977×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043)
