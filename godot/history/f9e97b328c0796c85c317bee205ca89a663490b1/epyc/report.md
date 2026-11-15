# Godot headless benchmarks

Compiler: `f9e97b328c0796c85c317bee205ca89a663490b1` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1422.69 | 365.89 |
| gcc | 5628.99 | 1424.12 |
| clang | 5627.08 | 1433.84 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.144× | 0.962× | 1.180× | 0.978× |
| arrays | 0.839× | 1.007× | 0.819× | 1.018× |
| strings | 0.948× | 0.906× | 0.934× | 0.907× |
| geometry | 0.923× | 0.798× | 0.911× | 0.775× |
| scene | 1.085× | 0.981× | 1.106× | 0.986× |

A/A variation above 2%: arrays gcc cpu before: 1.025×; arrays gcc measured_wall before: 1.037×; strings gcc cpu after: 0.969×; strings gcc measured_wall after: 0.963×; strings clang cpu after: 0.969×; strings clang measured_wall after: 0.968×; geometry clang cpu before: 1.050×; geometry clang cpu after: 0.951×; geometry clang measured_wall before: 1.051×; geometry clang measured_wall after: 0.960×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890508)
