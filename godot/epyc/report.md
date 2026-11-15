# Godot headless benchmarks

Compiler: `bb09801053e48486beebe014071a71353ce9be0b` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1088.33 | 281.32 |
| gcc | 4255.67 | 1077.02 |
| clang | 3800.13 | 973.20 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.043× | 1.009× | 1.057× | 1.006× |
| arrays | 0.873× | 0.993× | 0.861× | 0.995× |
| strings | 0.975× | 0.943× | 0.971× | 0.964× |
| geometry | 1.000× | 0.983× | 1.000× | 0.988× |
| scene | 1.017× | 0.983× | 1.036× | 0.990× |

A/A variation above 2%: arrays gcc cpu before: 1.025×; arrays gcc cpu after: 0.969×; arrays gcc measured_wall after: 0.947×; strings gcc cpu after: 0.943×; strings gcc measured_wall after: 0.940×; geometry clang measured_wall before: 0.964×; scene clang measured_wall after: 1.035×. Every observation is retained.

## Toolchains

- cppgm: cppgm (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438116)
