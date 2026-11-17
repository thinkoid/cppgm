# Godot headless benchmarks

Compiler: `4bcc7ed573ec2701286a757a83f159779f6c8cbf` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 872.41 | 226.02 |
| gcc | 3530.69 | 894.00 |
| clang | 2750.04 | 711.29 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.130× | 0.970× | 1.144× | 0.975× |
| arrays | 1.045× | 1.047× | 1.066× | 1.062× |
| strings | 0.957× | 0.974× | 0.952× | 0.996× |
| geometry | 0.876× | 0.856× | 0.855× | 0.845× |
| scene | 1.059× | 0.975× | 1.068× | 1.001× |

A/A variation above 2%: dispatch clang cpu before: 1.031×; dispatch clang cpu after: 1.050×; dispatch clang measured_wall before: 1.037×; dispatch clang measured_wall after: 1.059×; arrays gcc cpu after: 0.959×; arrays gcc measured_wall after: 0.973×; arrays clang cpu after: 0.965×; strings gcc cpu before: 0.958×; strings gcc measured_wall before: 0.969×; strings clang cpu before: 1.035×; strings clang measured_wall before: 1.027×; scene gcc cpu before: 1.060×; scene gcc cpu after: 0.976×; scene gcc measured_wall before: 1.056×; scene gcc measured_wall after: 0.972×; scene clang cpu before: 1.073×; scene clang measured_wall before: 1.080×; scene clang measured_wall after: 0.978×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.6 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592631)
