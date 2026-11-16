# Godot headless benchmarks

Compiler: `41e06a23e91609dbf050866ef3a7de4848cf17ed` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 907.44 | 232.85 |
| gcc | 3714.47 | 936.04 |
| clang | 2966.21 | 755.82 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.074× | 1.000× | 1.084× | 1.019× |
| arrays | 0.991× | 1.017× | 0.991× | 1.029× |
| strings | 0.967× | 0.992× | 0.966× | 0.997× |
| geometry | 0.991× | 0.906× | 0.992× | 0.899× |
| scene | 1.009× | 0.991× | 1.006× | 0.999× |

A/A variation above 2%: dispatch clang cpu before: 0.973×; dispatch clang measured_wall before: 0.969×; strings gcc cpu after: 1.025×; strings gcc measured_wall after: 1.026×; scene gcc measured_wall before: 0.978×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224337)
