# Godot headless benchmarks

Compiler: `323a88769fae13042a86c1b993819b966b906ca5` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 851.96 | 220.34 |
| gcc | 3234.00 | 817.70 |
| clang | 2519.81 | 646.77 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.057× | 0.942× | 1.086× | 0.950× |
| arrays | 1.086× | 1.039× | 1.082× | 1.055× |
| strings | 0.937× | 0.938× | 0.938× | 0.933× |
| geometry | 1.000× | 0.962× | 1.007× | 0.958× |
| scene | 1.053× | 0.983× | 1.060× | 0.984× |

A/A variation above 2%: dispatch clang cpu before: 0.980×; dispatch clang measured_wall before: 0.975×; arrays clang cpu before: 1.057×; arrays clang measured_wall before: 1.065×; strings gcc cpu before: 1.025×; strings gcc measured_wall before: 1.030×; strings clang cpu before: 1.025×; geometry clang cpu before: 1.020×; geometry clang measured_wall before: 1.020×; scene clang cpu after: 0.956×; scene clang measured_wall before: 0.977×; scene clang measured_wall after: 0.966×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819568)
