# Benchmark measurement age

Compared with main [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b).

An asterisk marks a result at least 10 commits behind main, or outside its history. The badge of a result at least 100 commits behind main is empty; this table keeps its row. Commit distance includes documentation and workflow changes; it does not establish a performance change. Missing measurements remain `n/m`. The metric value and its performance color are retained.

| Workload | Host | CPU | Measured commit | Commit date (UTC) | Age | Results |
|---|---|---|---|---|---|---|
| Public programs | EPYC | AMD EPYC 7763 64-Core Processor | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](epyc/report.md) |
| cppgm | EPYC | AMD EPYC 9V74 80-Core Processor | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](epyc/self-build.md) |
| index-cpp | EPYC | AMD EPYC 9V45 96-Core Processor | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](index-cpp/epyc/report.md) |
| simdjson | EPYC | AMD EPYC 9V45 96-Core Processor | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](simdjson/epyc/report.md) |
| godot | EPYC | AMD EPYC 9V74 80-Core Processor | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](godot/epyc/report.md) |
| boost/o3 | EPYC | AMD EPYC 9V45 96-Core Processor | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](boost/o3/epyc/report.md) |
| internal | EPYC | AMD EPYC 9V74 80-Core Processor | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](internal/epyc/report.md) |
| wasm | EPYC | AMD EPYC 7763 64-Core Processor | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](wasm/epyc/report.md) |
| wasm-selfbuild | EPYC | AMD EPYC 9V45 96-Core Processor | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](wasm-selfbuild/epyc/report.md) |
| Public programs | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`6c589867b`](https://github.com/vishvananda/cppgm/commit/6c589867bdd5c99bc35b90267a46778f59e1127e) | 2026-11-09T18:26:07Z | 454 commits (badge not shown) | [Results](intel/report.md) |
| cppgm | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`6c589867b`](https://github.com/vishvananda/cppgm/commit/6c589867bdd5c99bc35b90267a46778f59e1127e) | 2026-11-09T18:26:07Z | 454 commits (badge not shown) | [Results](intel/self-build.md) |
| index-cpp | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`6c589867b`](https://github.com/vishvananda/cppgm/commit/6c589867bdd5c99bc35b90267a46778f59e1127e) | 2026-11-09T18:26:07Z | 454 commits (badge not shown) | [Results](index-cpp/intel/report.md) |
| simdjson | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`9ca649bf5`](https://github.com/vishvananda/cppgm/commit/9ca649bf59cb1e14979655d1669ade353a9ae881) | 2026-11-09T22:07:51Z | 447 commits (badge not shown) | [Results](simdjson/intel/report.md) |
| godot | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`9ca649bf5`](https://github.com/vishvananda/cppgm/commit/9ca649bf59cb1e14979655d1669ade353a9ae881) | 2026-11-09T22:07:51Z | 447 commits (badge not shown) | [Results](godot/intel/report.md) |
| boost/o3 | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`93343ea0e`](https://github.com/vishvananda/cppgm/commit/93343ea0ebdcf068d87b88027a6eca8abf32111f) | 2026-11-09T19:15:37Z | 452 commits (badge not shown) | [Results](boost/o3/intel/report.md) |
| internal | Intel | Intel(R) Xeon(R) CPU E5-2696 v4 @ 2.20GHz | [`783dbfcf0`](https://github.com/vishvananda/cppgm/commit/783dbfcf01360d923ff590d2048a0c1764761cc3) | 2026-11-08T11:35:18Z | 610 commits (badge not shown) | [Results](internal/intel/report.md) |
| Public programs | CI Intel | Intel(R) Xeon(R) 6975P-C | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](github-intel/report.md) |
| cppgm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](github-intel/self-build.md) |
| index-cpp | CI Intel | Intel(R) Xeon(R) 6975P-C | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](index-cpp/github-intel/report.md) |
| simdjson | CI Intel | Intel(R) Xeon(R) 6975P-C | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](simdjson/github-intel/report.md) |
| godot | CI Intel | Intel(R) Xeon(R) 6975P-C | [`97a28380a`](https://github.com/vishvananda/cppgm/commit/97a28380aa74562cd03e9993b31f647e6729dd97) | 2026-11-15T06:13:15Z | 53 commits | [Results](godot/github-intel/report.md) |
| boost/o3 | CI Intel | Intel(R) Xeon(R) 6975P-C | [`d9ff17ff1`](https://github.com/vishvananda/cppgm/commit/d9ff17ff1c4afc36d90ba4a6551b659323cc65ec) | 2026-11-15T02:19:08Z | 65 commits | [Results](boost/o3/github-intel/report.md) |
| internal | CI Intel | Intel(R) Xeon(R) 6975P-C | [`54b8d0eeb`](https://github.com/vishvananda/cppgm/commit/54b8d0eeb4b4d132a869dcf623e314c78269b705) | 2026-11-15T05:16:29Z | 56 commits | [Results](internal/github-intel/report.md) |
| wasm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`116052803`](https://github.com/vishvananda/cppgm/commit/116052803d2981c33ce1fab0c2a17d640d831a91) | 2026-11-15T01:27:45Z | 69 commits | [Results](wasm/github-intel/report.md) |
| wasm-selfbuild | CI Intel | Intel(R) Xeon(R) 6975P-C | [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) | 2026-11-15T09:04:51Z | 0 commits | [Results](wasm-selfbuild/github-intel/report.md) |
