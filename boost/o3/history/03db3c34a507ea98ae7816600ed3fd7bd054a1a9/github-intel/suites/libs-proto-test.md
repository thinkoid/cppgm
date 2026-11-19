# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.437570 | 1.174527 | 1.305059 | 0.002244 | 0.001976 | 0.002049 |
| constrained_ops.test | RUN | 0.503931 | 1.254769 | 1.471361 | 0.001857 | 0.002236 | 0.002004 |
| cpp-next_bug.test | RUN | 0.511081 | 1.358312 | 1.506174 | 0.001993 | 0.002060 | 0.001920 |
| deep_copy.test | RUN | 0.429413 | 1.196742 | 1.348187 | 0.001922 | 0.001926 | 0.002017 |
| display_expr.test | RUN | 0.516450 | 1.477799 | 1.616034 | 0.001968 | 0.002202 | 0.002076 |
| deduce_domain.test | RUN | 0.411844 | 1.049569 | 1.214437 | 0.002115 | 0.001960 | 0.001921 |
| env_var.test | RUN | 0.557913 | 2.598472 | 1.929624 | 0.002228 | 0.002488 | 0.002310 |
| examples.test | RUN | 0.539196 | 1.659510 | 1.811836 | 0.001887 | 0.002001 | 0.001866 |
| external_transforms.test | RUN | 0.523333 | 1.418603 | 1.599468 | 0.002111 | 0.002311 | 0.001988 |
| lambda.test | RUN | 0.509974 | 1.446044 | 1.616816 | 0.001960 | 0.002311 | 0.002082 |
| make_expr.test | RUN | 0.510720 | 2.419379 | 1.736894 | 0.002197 | 0.002639 | 0.002344 |
| matches.test | RUN | 0.458328 | 1.172832 | 1.396739 | 0.001844 | 0.002296 | 0.001937 |
| flatten.test | RUN | 0.866230 | 3.515482 | 3.444687 | 0.002144 | 0.002259 | 0.001986 |
| switch.test | RUN | 0.442507 | 1.182386 | 1.315262 | 0.002177 | 0.002070 | 0.001988 |
| toy_spirit.test | RUN | 0.506361 | 1.518718 | 1.706998 | 0.002174 | 0.002079 | 0.002096 |
| toy_spirit2.test | RUN | 0.539920 | 1.594669 | 1.839144 | 0.001762 | 0.002084 | 0.002171 |
| make.test | RUN | 0.434451 | 1.516796 | 1.314821 | 0.002221 | 0.002191 | 0.002090 |
| mem_ptr.test | RUN | 0.565193 | 2.510445 | 1.934443 | 0.002112 | 0.002475 | 0.001923 |
| mpl.test | RUN | 0.490505 | 1.229888 | 1.484012 | 0.001977 | 0.002109 | 0.002009 |
| noinvoke.test | RUN | 0.418463 | 1.052809 | 1.181954 | 0.001976 | 0.002060 | 0.002032 |
| pack_expansion.test | RUN | 0.465755 | 1.543661 | 1.436654 | 0.001535 | 0.002133 | 0.001438 |
| protect.test | RUN | 0.397879 | 0.954014 | 0.998540 | 0.001469 | 0.001540 | 0.001455 |
| bug2407.test | COMPILE | 0.376069 | 0.728098 | 0.828063 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.987×, 0.997× | 1.002× |
| clang | 0.974× | 0.971×, 0.976× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001287s | 0.001259s | 0.001226s | byte equality observed |
| constrained_ops.test | 10 | 0.001231s | 0.001238s | 0.001205s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001219s | 0.001229s | 0.001217s | byte equality observed |
| deduce_domain.test | 10 | 0.001226s | 0.001216s | 0.001211s | byte equality observed |
| deep_copy.test | 10 | 0.001236s | 0.001270s | 0.001197s | byte equality observed |
| display_expr.test | 10 | 0.001238s | 0.001232s | 0.001208s | byte equality observed |
| env_var.test | 10 | 0.001335s | 0.001360s | 0.001282s | byte equality observed |
| examples.test | 10 | 0.001287s | 0.001291s | 0.001219s | byte equality observed |
| external_transforms.test | 10 | 0.001257s | 0.001215s | 0.001208s | byte equality observed |
| flatten.test | 10 | 0.001256s | 0.001240s | 0.001247s | byte equality observed |
| lambda.test | 10 | 0.001252s | 0.001214s | 0.001199s | byte equality observed |
| make.test | 10 | 0.001295s | 0.001273s | 0.001261s | byte equality observed |
| make_expr.test | 10 | 0.001364s | 0.001364s | 0.001327s | byte equality observed |
| matches.test | 10 | 0.001249s | 0.001215s | 0.001247s | byte equality observed |
| mem_ptr.test | 10 | 0.001320s | 0.001325s | 0.001293s | byte equality observed |
| mpl.test | 10 | 0.001217s | 0.001226s | 0.001261s | byte equality observed |
| noinvoke.test | 10 | 0.001211s | 0.001194s | 0.001185s | byte equality observed |
| pack_expansion.test | 10 | 0.001258s | 0.001239s | 0.001237s | byte equality observed |
| protect.test | 10 | 0.001243s | 0.001220s | 0.001224s | byte equality observed |
| switch.test | 10 | 0.001225s | 0.001216s | 0.001225s | byte equality observed |
| toy_spirit.test | 10 | 0.001226s | 0.001209s | 0.001193s | byte equality observed |
| toy_spirit2.test | 10 | 0.001223s | 0.001201s | 0.001198s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
