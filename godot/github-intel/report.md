# Godot headless benchmarks

Compiler: `de44b5cf8e143b4625737955531361b622b74bef` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 919.77 | 235.84 |
| gcc | 3740.90 | 943.50 |
| clang | 3015.53 | 770.66 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.075× | 1.009× | 1.076× | 1.013× |
| arrays | 0.983× | 1.008× | 0.983× | 1.022× |
| strings | 0.976× | 0.968× | 0.963× | 0.982× |
| geometry | 1.018× | 0.921× | 1.011× | 0.912× |
| scene | 1.009× | 1.009× | 1.014× | 1.008× |

A/A variation above 2%: scene gcc cpu before: 0.930×; scene gcc measured_wall before: 0.932×; scene gcc measured_wall after: 1.037×; scene clang cpu before: 1.035×; scene clang measured_wall before: 1.051×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654015)
