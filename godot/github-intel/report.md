# Godot headless benchmarks

Compiler: `0785eb82196d630572f71a1967b3aa589dce33d3` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 899.14 | 230.70 |
| gcc | 3738.23 | 942.70 |
| clang | 2988.62 | 763.11 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.066× | 1.000× | 1.085× | 1.004× |
| arrays | 0.991× | 1.017× | 0.990× | 1.029× |
| strings | 0.984× | 1.000× | 0.970× | 1.005× |
| geometry | 0.991× | 0.898× | 0.993× | 0.899× |
| scene | 1.034× | 0.991× | 1.040× | 1.001× |

A/A variation above 2%: scene clang cpu before: 1.034×; scene clang measured_wall before: 1.042×; scene clang measured_wall after: 0.971×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972452)
