# Godot headless benchmarks

Compiler: `fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1398.16 | 359.14 |
| gcc | 5569.20 | 1408.29 |
| clang | 5546.81 | 1415.88 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.162× | 1.250× | 1.189× | 1.312× |
| arrays | 0.896× | 1.015× | 0.877× | 1.017× |
| strings | 0.969× | 0.954× | 0.964× | 0.955× |
| geometry | 0.850× | 0.708× | 0.825× | 0.663× |
| scene | 1.000× | 1.059× | 1.022× | 1.081× |

A/A variation above 2%: dispatch gcc cpu before: 1.034×; dispatch gcc cpu after: 0.969×; dispatch gcc measured_wall before: 1.033×; dispatch gcc measured_wall after: 0.953×; dispatch clang cpu after: 0.963×; dispatch clang measured_wall after: 0.968×; geometry gcc cpu before: 1.030×; geometry gcc measured_wall after: 1.026×; geometry clang cpu after: 1.036×; geometry clang measured_wall after: 1.036×; scene gcc cpu after: 0.945×; scene gcc measured_wall after: 0.973×. Every observation is retained.

## Toolchains

- cppgm: cppgm (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486603)
