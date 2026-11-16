# Internal C++ source compilation

Fixed qualified cohort: **5,614 fixture groups / 5,724 translation units**, at `-O3`.

This measures object compilation of the common positive source subset, including driver startup. It does not replace the original assignment IR, ABI, diagnostic or runtime oracles. The fixed source selection is independent of timing; any failed compilation fails the run.

Measured compiler: `50b6ccfce58613983aa027e54e11d6a071971a9a`. Input snapshot: `783dbfcf01360d923ff590d2048a0c1764761cc3`.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz. Workers per compiler: 16.

| Compiler | Accepted objects | Compile CPU seconds | Speed vs cppgm ↑ |
|---|---:|---:|---:|
| cppgm | 5724 / 5724 | 28.566 | 1.00× |
| gcc | 5724 / 5724 | 117.998 | 4.13× |
| clang | 5724 / 5724 | 146.696 | 5.14× |

One complete observation per compiler; sums include compiler subprocesses. Linking, execution and harness time are excluded. This is a compile-throughput observation, with no application-runtime score or claim about small changes.

[Host and compiler identities](metadata.json) · [Measured results](results.json)

[CI run](https://github.com/vishvananda/cppgm/actions/runs/43954838370) · [Shared comparison records](records.json)

[Raw per-unit observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43954838370)
