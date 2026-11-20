# Godot headless benchmarks

Compiler: `94aaecc52ac26996bd3d654522334e3c28c68457` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 884.07 | 227.30 |
| gcc | 3731.90 | 941.90 |
| clang | 2980.68 | 761.34 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.065× | 1.009× | 1.087× | 1.005× |
| arrays | 1.000× | 1.025× | 0.994× | 1.029× |
| strings | 0.968× | 0.984× | 0.964× | 0.987× |
| geometry | 1.009× | 0.922× | 1.002× | 0.909× |
| scene | 1.000× | 1.000× | 1.006× | 1.015× |

A/A variation above 2%: dispatch gcc cpu before: 1.069×; dispatch gcc measured_wall before: 1.092×; dispatch clang cpu before: 1.105×; dispatch clang measured_wall before: 1.116×; scene gcc cpu after: 1.027×; scene gcc measured_wall after: 1.023×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949)
