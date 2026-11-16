# Benchmark measurement age

Compared with main [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7).

An asterisk marks a result at least 10 commits behind main, or outside its history. The badge of a result at least 100 commits behind main is empty; this table keeps its row. Commit distance includes documentation and workflow changes; it does not establish a performance change. Missing measurements remain `n/m`. The metric value and its performance color are retained.

| Workload | Host | CPU | Measured commit | Commit date (UTC) | Age | Results |
|---|---|---|---|---|---|---|
| Public programs | EPYC | AMD EPYC 7763 64-Core Processor | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](epyc/report.md) |
| cppgm | EPYC | AMD EPYC 9V74 80-Core Processor | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](epyc/self-build.md) |
| index-cpp | EPYC | AMD EPYC 9V45 96-Core Processor | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](index-cpp/epyc/report.md) |
| simdjson | EPYC | AMD EPYC 9V74 80-Core Processor | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](simdjson/epyc/report.md) |
| godot | EPYC | AMD EPYC 7763 64-Core Processor | [`fd8d08c23`](https://github.com/vishvananda/cppgm/commit/fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff) | 2026-11-15T16:47:32Z | 11 commits | [Results](godot/epyc/report.md) |
| boost/o3 | EPYC | AMD EPYC 7763 64-Core Processor | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](boost/o3/epyc/report.md) |
| internal | EPYC | AMD EPYC 9V45 96-Core Processor | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](internal/epyc/report.md) |
| wasm | EPYC | AMD EPYC 7763 64-Core Processor | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](wasm/epyc/report.md) |
| wasm-selfbuild | EPYC | AMD EPYC 9V45 96-Core Processor | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](wasm-selfbuild/epyc/report.md) |
| Public programs | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](intel/report.md) |
| cppgm | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](intel/self-build.md) |
| index-cpp | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](index-cpp/intel/report.md) |
| simdjson | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](simdjson/intel/report.md) |
| godot | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](godot/intel/report.md) |
| boost/o3 | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](boost/o3/intel/report.md) |
| internal | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`783dbfcf0`](https://github.com/vishvananda/cppgm/commit/783dbfcf01360d923ff590d2048a0c1764761cc3) | 2026-11-08T11:35:18Z | 635 commits (badge not shown) | [Results](internal/intel/report.md) |
| Public programs | CI Intel | Intel(R) Xeon(R) 6975P-C | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](github-intel/report.md) |
| cppgm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](github-intel/self-build.md) |
| index-cpp | CI Intel | Intel(R) Xeon(R) 6975P-C | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](index-cpp/github-intel/report.md) |
| simdjson | CI Intel | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](simdjson/github-intel/report.md) |
| godot | CI Intel | Intel(R) Xeon(R) 6975P-C | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](godot/github-intel/report.md) |
| boost/o3 | CI Intel | Intel(R) Xeon(R) 6975P-C | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 4 commits | [Results](boost/o3/github-intel/report.md) |
| internal | CI Intel | Intel(R) Xeon(R) 6975P-C | [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) | 2026-11-16T01:12:37Z | 1 commits | [Results](internal/github-intel/report.md) |
| wasm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) | 2026-11-16T03:59:51Z | 0 commits | [Results](wasm/github-intel/report.md) |
| wasm-selfbuild | CI Intel | Intel(R) Xeon(R) 6975P-C | [`c9b05c4c0`](https://github.com/vishvananda/cppgm/commit/c9b05c4c0f7bb1294c717551c61145940b21125e) | 2026-11-15T18:34:21Z | 9 commits | [Results](wasm-selfbuild/github-intel/report.md) |
