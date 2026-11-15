# Godot headless benchmarks

Compiler: `0b676f0538e48bc09cabec50cc9ce76155ba448f` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1424.12 | 366.01 |
| gcc | 5614.60 | 1420.39 |
| clang | 5547.49 | 1408.37 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.113× | 0.981× | 1.147× | 0.989× |
| arrays | 0.896× | 1.015× | 0.883× | 1.022× |
| strings | 0.984× | 0.950× | 0.985× | 0.944× |
| geometry | 1.000× | 0.790× | 0.992× | 0.759× |
| scene | 1.068× | 0.924× | 1.074× | 0.922× |

A/A variation above 2%: dispatch clang cpu after: 0.954×; dispatch clang measured_wall after: 0.938×; strings clang cpu before: 1.027×; strings clang measured_wall before: 1.028×; geometry clang cpu before: 0.971×; geometry clang measured_wall before: 0.950×; scene clang cpu after: 1.036×; scene clang measured_wall after: 1.048×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060677)
