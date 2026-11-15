# Godot headless benchmarks

Compiler: `d9ff17ff1c4afc36d90ba4a6551b659323cc65ec` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1244.61 | 319.61 |
| gcc | 5004.02 | 1262.64 |
| clang | 4005.78 | 1023.33 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.089× | 0.991× | 1.104× | 1.009× |
| arrays | 0.992× | 1.024× | 0.998× | 1.013× |
| strings | 1.000× | 1.000× | 0.996× | 1.006× |
| geometry | 0.975× | 0.869× | 0.957× | 0.843× |
| scene | 1.000× | 1.000× | 1.009× | 1.008× |

A/A variation above 2%: dispatch gcc cpu after: 1.042×; dispatch gcc measured_wall after: 1.038×; dispatch clang cpu before: 1.027×; geometry gcc cpu before: 0.976×; geometry gcc measured_wall before: 0.966×; scene gcc cpu before: 0.975×; scene gcc measured_wall before: 0.978×; scene clang cpu before: 0.975×; scene clang measured_wall before: 0.974×; scene clang measured_wall after: 1.024×. Every observation is retained.

## Toolchains

- cppgm: cppgm++ (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794069)
