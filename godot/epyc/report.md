# Godot headless benchmarks

Compiler: `116052803d2981c33ce1fab0c2a17d640d831a91` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1435.32 | 368.52 |
| gcc | 5616.17 | 1420.72 |
| clang | 5630.14 | 1431.87 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.143× | 1.133× | 1.178× | 1.173× |
| arrays | 0.902× | 1.000× | 0.881× | 1.018× |
| strings | 0.955× | 0.941× | 0.947× | 0.951× |
| geometry | 0.968× | 0.897× | 0.970× | 0.904× |
| scene | 1.038× | 1.038× | 1.063× | 1.073× |

A/A variation above 2%: dispatch gcc cpu before: 0.957×; dispatch gcc cpu after: 1.058×; dispatch gcc measured_wall before: 0.959×; dispatch gcc measured_wall after: 1.062×; dispatch clang cpu after: 1.252×; dispatch clang measured_wall after: 1.278×; geometry clang measured_wall before: 1.031×; scene clang cpu after: 1.027×; scene clang measured_wall after: 1.041×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517542)
