# Godot headless benchmarks

Compiler: `8401c869bd9c750084470a8686c057b7f9a0da61` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1023.32 | 262.22 |
| gcc | 4182.13 | 1053.52 |
| clang | 3341.02 | 848.89 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.075× | 1.009× | 1.095× | 1.016× |
| arrays | 0.991× | 1.009× | 0.987× | 1.010× |
| strings | 0.925× | 0.932× | 0.915× | 0.925× |
| geometry | 0.967× | 0.850× | 0.968× | 0.838× |
| scene | 0.982× | 0.973× | 0.980× | 0.981× |

A/A variation above 2%: dispatch gcc cpu before: 0.975×; scene gcc cpu before: 0.965×; scene gcc cpu after: 1.027×; scene gcc measured_wall before: 0.975×; scene gcc measured_wall after: 1.024×; scene clang cpu after: 1.028×; scene clang measured_wall after: 1.023×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391602)
