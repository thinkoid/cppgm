# Internal C++ source compilation

Fixed qualified cohort: **5,614 fixture groups / 5,724 translation units**, at `-O3`.

This measures object compilation of the common positive source subset, including driver startup. It does not replace the original assignment IR, ABI, diagnostic or runtime oracles. The fixed source selection is independent of timing; any failed compilation fails the run.

Measured compiler: `2a915cfbfed25b5f95be7b7e5c345dfe87f11666`. Input snapshot: `783dbfcf01360d923ff590d2048a0c1764761cc3`.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz. Workers per compiler: 16.

| Compiler | Accepted objects | Compile CPU seconds | Speed vs cppgm ↑ |
|---|---:|---:|---:|
| cppgm | 5724 / 5724 | 27.855 | 1.00× |
| gcc | 5724 / 5724 | 114.580 | 4.11× |
| clang | 5724 / 5724 | 140.873 | 5.06× |

One complete observation per compiler; sums include compiler subprocesses. Linking, execution and harness time are excluded. This is a compile-throughput observation, with no application-runtime score or claim about small changes.

[Host and compiler identities](metadata.json) · [Measured results](results.json)

[CI run](https://github.com/vishvananda/cppgm/actions/runs/43808507041) · [Shared comparison records](records.json)

[Raw per-unit observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43808507041)
