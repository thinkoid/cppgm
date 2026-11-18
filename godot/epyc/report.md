# Godot headless benchmarks

Compiler: `90ebfa8f4eed49b0d61b4b4993914107c23a761e` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1402.68 | 360.47 |
| gcc | 5583.37 | 1412.36 |
| clang | 5543.92 | 1406.76 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.123× | 1.346× | 1.150× | 1.464× |
| arrays | 0.882× | 1.015× | 0.880× | 1.029× |
| strings | 0.977× | 0.933× | 0.989× | 0.940× |
| geometry | 1.081× | 0.795× | 1.106× | 0.766× |
| scene | 0.976× | 0.992× | 0.976× | 1.014× |

A/A variation above 2%: arrays gcc cpu after: 0.976×; arrays gcc measured_wall after: 0.970×; strings clang cpu after: 0.976×; strings clang measured_wall after: 0.974×; geometry gcc cpu before: 1.025×; scene clang measured_wall after: 1.022×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407449)
