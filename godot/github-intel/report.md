# Godot headless benchmarks

Compiler: `b8749c61550bdf9b4d65e7e01182a1f856100a46` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1371.42 | 351.32 |
| gcc | 5668.75 | 1430.43 |
| clang | 4729.46 | 1210.26 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.173× | 1.038× | 1.200× | 1.045× |
| arrays | 1.035× | 1.079× | 1.049× | 1.110× |
| strings | 0.938× | 0.924× | 0.927× | 0.913× |
| geometry | 0.976× | 0.943× | 0.973× | 0.941× |
| scene | 1.034× | 1.017× | 1.038× | 1.021× |

A/A variation above 2%: dispatch gcc cpu after: 0.975×; scene gcc cpu before: 1.025×; scene gcc cpu after: 1.075×; scene gcc measured_wall after: 1.082×; scene clang cpu after: 0.976×. Every observation is retained.

## Toolchains

- cppgm: cppgm (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369262)
