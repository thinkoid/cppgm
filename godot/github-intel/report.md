# Godot headless benchmarks

Compiler: `c6ed610030ba933d83205fb17744340b2206efa7` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 906.05 | 232.47 |
| gcc | 3784.20 | 953.75 |
| clang | 2964.88 | 755.12 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.075× | 1.000× | 1.076× | 0.992× |
| arrays | 0.991× | 1.036× | 0.991× | 1.038× |
| strings | 0.992× | 1.000× | 0.982× | 1.000× |
| geometry | 1.000× | 0.903× | 1.002× | 0.907× |
| scene | 1.018× | 1.026× | 1.018× | 1.038× |

A/A variation above 2%: scene gcc cpu before: 0.974×; scene gcc measured_wall before: 0.970×; scene clang cpu after: 0.975×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.7 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416)
