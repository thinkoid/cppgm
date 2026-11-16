# Godot headless benchmarks

Compiler: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 777.20 | 72.09 |
| gcc | 3080.61 | 290.88 |
| clang | 2332.21 | 232.04 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.073× | 0.991× | 1.091× | 1.006× |
| arrays | 0.984× | 1.008× | 0.985× | 1.018× |
| strings | 0.984× | 1.008× | 0.994× | 1.006× |
| geometry | 0.944× | 0.846× | 0.945× | 0.828× |
| scene | 0.975× | 0.966× | 0.989× | 0.972× |

A/A variation above 2%: dispatch gcc cpu before: 0.908×; dispatch gcc measured_wall before: 0.891×; scene gcc cpu before: 0.958×; scene gcc measured_wall before: 0.962×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43794881374)
