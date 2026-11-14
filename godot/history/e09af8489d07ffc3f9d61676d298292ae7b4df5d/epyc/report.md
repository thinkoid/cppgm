# Godot headless benchmarks

Compiler: `e09af8489d07ffc3f9d61676d298292ae7b4df5d` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 923.73 | 239.01 |
| gcc | 3751.88 | 950.20 |
| clang | 2978.33 | 773.70 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.093× | 0.945× | 1.113× | 0.940× |
| arrays | 1.097× | 1.039× | 1.119× | 1.054× |
| strings | 0.930× | 0.960× | 0.921× | 0.972× |
| geometry | 1.026× | 0.927× | 1.012× | 0.926× |
| scene | 1.052× | 0.965× | 1.063× | 0.961× |

A/A variation above 2%: arrays clang cpu before: 0.930×; arrays clang measured_wall before: 0.980×; strings clang cpu after: 1.026×; strings clang measured_wall before: 0.977×; strings clang measured_wall after: 1.031×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536531)
