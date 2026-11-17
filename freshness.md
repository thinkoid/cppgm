# Benchmark measurement age

Compared with main [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf).

An asterisk marks a result at least 10 commits behind main, or outside its history. The badge of a result at least 100 commits behind main is empty; this table keeps its row. Commit distance includes documentation and workflow changes; it does not establish a performance change. Missing measurements remain `n/m`. The metric value and its performance color are retained.

| Workload | Host | CPU | Measured commit | Commit date (UTC) | Age | Results |
|---|---|---|---|---|---|---|
| Public programs | EPYC | AMD EPYC 7763 64-Core Processor | [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) | 2026-11-15T23:37:14Z | 25 commits | [Results](epyc/report.md) |
| cppgm | EPYC | AMD EPYC 7763 64-Core Processor | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](epyc/self-build.md) |
| index-cpp | EPYC | AMD EPYC 7763 64-Core Processor | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](index-cpp/epyc/report.md) |
| simdjson | EPYC | AMD EPYC 9V74 80-Core Processor | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](simdjson/epyc/report.md) |
| godot | EPYC | AMD EPYC 9V45 96-Core Processor | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](godot/epyc/report.md) |
| boost/o3 | EPYC | AMD EPYC 7763 64-Core Processor | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](boost/o3/epyc/report.md) |
| internal | EPYC | AMD EPYC 9V74 80-Core Processor | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](internal/epyc/report.md) |
| wasm | EPYC | AMD EPYC 9V45 96-Core Processor | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](wasm/epyc/report.md) |
| wasm-selfbuild | EPYC | AMD EPYC 9V45 96-Core Processor | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](wasm-selfbuild/epyc/report.md) |
| Public programs | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](intel/report.md) |
| cppgm | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](intel/self-build.md) |
| index-cpp | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](index-cpp/intel/report.md) |
| simdjson | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](simdjson/intel/report.md) |
| godot | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](godot/intel/report.md) |
| boost/o3 | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](boost/o3/intel/report.md) |
| internal | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](internal/intel/report.md) |
| wasm | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](wasm/intel/report.md) |
| wasm-selfbuild | Intel | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) | 2026-11-16T17:17:01Z | 11 commits | [Results](wasm-selfbuild/intel/report.md) |
| Public programs | CI Intel | INTEL(R) XEON(R) PLATINUM 8573C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](github-intel/report.md) |
| cppgm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](github-intel/self-build.md) |
| index-cpp | CI Intel | Intel(R) Xeon(R) 6975P-C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](index-cpp/github-intel/report.md) |
| simdjson | CI Intel | Intel(R) Xeon(R) 6975P-C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](simdjson/github-intel/report.md) |
| godot | CI Intel | Intel(R) Xeon(R) 6975P-C | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](godot/github-intel/report.md) |
| boost/o3 | CI Intel | Intel(R) Xeon(R) 6975P-C | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](boost/o3/github-intel/report.md) |
| internal | CI Intel | Intel(R) Xeon(R) 6975P-C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](internal/github-intel/report.md) |
| wasm | CI Intel | Intel(R) Xeon(R) 6975P-C | [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) | 2026-11-16T22:13:34Z | 1 commits | [Results](wasm/github-intel/report.md) |
| wasm-selfbuild | CI Intel | Intel(R) Xeon(R) 6975P-C | [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) | 2026-11-17T02:07:00Z | 0 commits | [Results](wasm-selfbuild/github-intel/report.md) |
