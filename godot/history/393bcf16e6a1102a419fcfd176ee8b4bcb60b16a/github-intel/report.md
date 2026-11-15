# Godot headless benchmarks

Compiler: `393bcf16e6a1102a419fcfd176ee8b4bcb60b16a` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1299.65 | 332.67 |
| gcc | 5324.48 | 1342.55 |
| clang | 4444.13 | 1131.86 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.132× | 1.028× | 1.156× | 1.042× |
| arrays | 1.044× | 1.078× | 1.054× | 1.096× |
| strings | 0.937× | 0.896× | 0.927× | 0.887× |
| geometry | 0.983× | 0.943× | 0.979× | 0.946× |
| scene | 1.034× | 1.008× | 1.039× | 1.024× |

A/A variation above 2%: strings clang measured_wall after: 0.978×; scene gcc cpu before: 0.976×; scene gcc measured_wall before: 0.976×; scene clang measured_wall before: 1.028×; scene clang measured_wall after: 1.027×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674677937)
