# Godot headless benchmarks

Compiler: `50b6ccfce58613983aa027e54e11d6a071971a9a` · CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 772.32 | 72.97 |
| gcc | 3122.80 | 294.18 |
| clang | 2348.69 | 239.40 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.082× | 1.000× | 1.099× | 0.992× |
| arrays | 1.008× | 1.025× | 1.002× | 1.040× |
| strings | 0.992× | 1.008× | 0.978× | 0.999× |
| geometry | 0.992× | 0.908× | 0.995× | 0.898× |
| scene | 0.992× | 0.992× | 1.007× | 0.994× |

A/A variation above 2%: geometry clang cpu before: 1.102×; geometry clang measured_wall before: 1.114×; scene gcc cpu after: 1.033×; scene gcc measured_wall after: 1.022×; scene clang cpu before: 0.960×; scene clang measured_wall before: 0.950×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.5 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/43944840108)
