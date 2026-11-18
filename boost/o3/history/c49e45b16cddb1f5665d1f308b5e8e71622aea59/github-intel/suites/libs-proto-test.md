# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.442369 | 1.171147 | 1.294978 | 0.002589 | 0.002158 | 0.002029 |
| constrained_ops.test | RUN | 0.503046 | 1.269199 | 1.452591 | 0.002198 | 0.002118 | 0.001854 |
| cpp-next_bug.test | RUN | 0.516309 | 1.368338 | 1.504333 | 0.002012 | 0.002054 | 0.001925 |
| deep_copy.test | RUN | 0.446052 | 1.218594 | 1.344609 | 0.001933 | 0.002464 | 0.001671 |
| display_expr.test | RUN | 0.543791 | 1.484015 | 1.592127 | 0.002346 | 0.001888 | 0.002065 |
| deduce_domain.test | RUN | 0.419647 | 1.055940 | 1.191941 | 0.002115 | 0.002054 | 0.001942 |
| env_var.test | RUN | 0.581598 | 2.650504 | 1.963817 | 0.002157 | 0.002584 | 0.002158 |
| examples.test | RUN | 0.554246 | 1.667592 | 1.813249 | 0.002072 | 0.002081 | 0.001928 |
| external_transforms.test | RUN | 0.538798 | 1.424547 | 1.601167 | 0.002301 | 0.002136 | 0.001562 |
| lambda.test | RUN | 0.521600 | 1.463733 | 1.609523 | 0.002086 | 0.002145 | 0.001923 |
| make_expr.test | RUN | 0.526870 | 2.438281 | 1.749426 | 0.002380 | 0.002603 | 0.002408 |
| matches.test | RUN | 0.472339 | 1.188447 | 1.403215 | 0.002056 | 0.002140 | 0.001823 |
| flatten.test | RUN | 0.896160 | 3.530882 | 3.530090 | 0.002170 | 0.002330 | 0.002194 |
| switch.test | RUN | 0.458230 | 1.202051 | 1.322696 | 0.002094 | 0.002139 | 0.001977 |
| toy_spirit.test | RUN | 0.525705 | 1.501727 | 1.724111 | 0.002216 | 0.002298 | 0.001952 |
| toy_spirit2.test | RUN | 0.561932 | 1.616754 | 1.813829 | 0.002059 | 0.002115 | 0.002058 |
| make.test | RUN | 0.443278 | 1.560269 | 1.321567 | 0.002520 | 0.002162 | 0.002108 |
| mem_ptr.test | RUN | 0.592719 | 2.559139 | 2.015808 | 0.002088 | 0.002364 | 0.002423 |
| mpl.test | RUN | 0.512728 | 1.252668 | 1.463502 | 0.002025 | 0.002356 | 0.002104 |
| noinvoke.test | RUN | 0.426400 | 1.071018 | 1.208513 | 0.002187 | 0.002173 | 0.001830 |
| pack_expansion.test | RUN | 0.536193 | 1.517115 | 1.624576 | 0.001562 | 0.001608 | 0.001976 |
| protect.test | RUN | 0.391026 | 1.021572 | 1.028872 | 0.001640 | 0.001540 | 0.001449 |
| bug2407.test | COMPILE | 0.301546 | 0.743586 | 0.724562 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.996×, 0.986× | 0.992× |
| clang | 0.975× | 0.972×, 0.977× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001277s | 0.001257s | 0.001237s | byte equality observed |
| constrained_ops.test | 10 | 0.001264s | 0.001275s | 0.001243s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001255s | 0.001242s | 0.001213s | byte equality observed |
| deduce_domain.test | 10 | 0.001250s | 0.001219s | 0.001184s | byte equality observed |
| deep_copy.test | 10 | 0.001258s | 0.001228s | 0.001195s | byte equality observed |
| display_expr.test | 10 | 0.001279s | 0.001243s | 0.001201s | byte equality observed |
| env_var.test | 10 | 0.001353s | 0.001336s | 0.001297s | byte equality observed |
| examples.test | 10 | 0.001262s | 0.001263s | 0.001203s | byte equality observed |
| external_transforms.test | 10 | 0.001259s | 0.001270s | 0.001251s | byte equality observed |
| flatten.test | 10 | 0.001263s | 0.001279s | 0.001237s | byte equality observed |
| lambda.test | 10 | 0.001261s | 0.001229s | 0.001217s | byte equality observed |
| make.test | 10 | 0.001306s | 0.001290s | 0.001265s | byte equality observed |
| make_expr.test | 10 | 0.001372s | 0.001372s | 0.001352s | byte equality observed |
| matches.test | 10 | 0.001283s | 0.001293s | 0.001234s | byte equality observed |
| mem_ptr.test | 10 | 0.001338s | 0.001341s | 0.001300s | byte equality observed |
| mpl.test | 10 | 0.001245s | 0.001258s | 0.001252s | byte equality observed |
| noinvoke.test | 10 | 0.001227s | 0.001239s | 0.001204s | byte equality observed |
| pack_expansion.test | 10 | 0.001268s | 0.001252s | 0.001231s | byte equality observed |
| protect.test | 10 | 0.001259s | 0.001281s | 0.001229s | byte equality observed |
| switch.test | 10 | 0.001240s | 0.001248s | 0.001202s | byte equality observed |
| toy_spirit.test | 10 | 0.001237s | 0.001242s | 0.001235s | byte equality observed |
| toy_spirit2.test | 10 | 0.001251s | 0.001255s | 0.001193s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
