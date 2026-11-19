# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.414035 | 1.793056 | 1.480910 | 0.002284 | 0.002153 | 0.002197 |
| test_increment.test | RUN | 0.395334 | 1.352915 | 1.286582 | 0.002276 | 0.002348 | 0.002156 |
| test_add.test | RUN | 0.522119 | 2.196996 | 1.918764 | 0.002170 | 0.002419 | 0.002127 |
| test_add_assign.test | RUN | 0.521659 | 2.343934 | 1.994964 | 0.002365 | 0.002373 | 0.002050 |
| test_callable.test | RUN | 0.874349 | 4.081244 | 4.398576 | 0.003130 | 0.003284 | 0.002981 |
| test_reference.test | RUN | 0.424707 | 1.632191 | 1.373672 | 0.002070 | 0.002274 | 0.002007 |
| test_construct.test | RUN | 2.031722 | 19.279721 | 13.278701 | 0.004148 | 0.003688 | 0.003945 |
| test_relaxed.test | RUN | 0.397471 | 1.156212 | 1.201984 | 0.002003 | 0.002269 | 0.002200 |
| test_assign.test | RUN | 5.298145 | 62.708896 | 46.478171 | 0.006444 | 0.003846 | 0.004307 |
| test_construct_ref.test | RUN | 0.498599 | 2.868290 | 1.983891 | 0.002792 | 0.002825 | 0.002559 |
| test_construct_cref.test | RUN | 0.589252 | 2.657061 | 2.501773 | 0.002805 | 0.003136 | 0.002783 |
| test_any_cast.test | RUN | 0.498046 | 2.811964 | 1.913872 | 0.002579 | 0.002817 | 0.002477 |
| test_binding_of.test | RUN | 0.372084 | 1.070121 | 1.120534 | 0.002172 | 0.002308 | 0.002030 |
| test_typeid_of.test | RUN | 0.408670 | 1.557236 | 1.295754 | 0.002370 | 0.002618 | 0.002127 |
| test_nested.test | RUN | 0.442721 | 1.515518 | 1.480754 | 0.002279 | 0.002285 | 0.002061 |
| test_less.test | RUN | 0.610643 | 2.972497 | 2.467154 | 0.003159 | 0.002845 | 0.002681 |
| test_equal.test | RUN | 0.540665 | 2.842673 | 2.067015 | 0.002726 | 0.002619 | 0.002496 |
| test_negate.test | RUN | 0.394749 | 1.133400 | 1.177343 | 0.002066 | 0.002115 | 0.002054 |
| test_dereference.test | RUN | 0.451460 | 1.494972 | 1.388391 | 0.002474 | 0.002404 | 0.002246 |
| test_subscript.test | RUN | 0.440471 | 1.677941 | 1.485790 | 0.003156 | 0.002242 | 0.002162 |
| test_forward_iterator.test | RUN | 0.530227 | 1.886247 | 1.803673 | 0.002446 | 0.002258 | 0.002237 |
| test_tuple.test | RUN | 0.475893 | 1.896059 | 1.561357 | 0.002489 | 0.002312 | 0.002353 |
| test_stream.test | RUN | 0.620486 | 3.191431 | 2.336265 | 0.002836 | 0.002779 | 0.002470 |
| test_deduced.test | RUN | 0.390598 | 1.121789 | 1.163864 | 0.002030 | 0.002386 | 0.001927 |
| test_same_type.test | RUN | 0.460652 | 1.540316 | 1.422002 | 0.002276 | 0.002052 | 0.002112 |
| test_member.test | RUN | 0.573899 | 3.018811 | 2.343789 | 0.002747 | 0.002956 | 0.002632 |
| test_null.test | RUN | 0.394472 | 1.441492 | 1.159609 | 0.002021 | 0.002259 | 0.002034 |
| test_free.test | RUN | 0.507942 | 2.487807 | 1.740243 | 0.002260 | 0.002623 | 0.002332 |
| test_is_empty.test | RUN | 0.373827 | 1.214699 | 1.091433 | 0.002086 | 0.002071 | 0.002086 |
| test_dynamic_any_cast.test | RUN | 0.739848 | 3.567815 | 3.378562 | 0.003028 | 0.002964 | 0.002809 |
| test_limits.test | RUN | 0.658615 | 2.506709 | 2.300105 | 0.002017 | 0.002475 | 0.002364 |
| test_param.test | COMPILE | 0.255485 | 0.663690 | 0.708221 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.243637 | 0.519044 | 0.624315 | — | — | — |
| test_sfinae.test | COMPILE | 0.253984 | 0.512861 | 0.629456 | — | — | — |
| test_interface_order.test | COMPILE | 0.249753 | 0.518241 | 0.634869 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028281 | 0.049086 | 0.052373 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.233239 | 0.501866 | 0.608113 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.235504 | 0.496077 | 0.577991 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.232774 | 0.501832 | 0.598307 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.231288 | 0.499471 | 0.597051 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.231050 | 0.491810 | 0.565157 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.223645 | 0.492929 | 0.579378 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.232816 | 0.500397 | 0.599497 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.245315 | 0.491172 | 0.597345 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.231522 | 0.491177 | 0.576618 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.232631 | 0.491348 | 0.597209 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.233277 | 0.496655 | 0.586725 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.230590 | 0.504877 | 0.608071 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.234330 | 0.523324 | 0.625736 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.235676 | 0.517612 | 0.588111 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.237721 | 0.528210 | 0.616792 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.231339 | 0.501373 | 0.570090 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.235218 | 0.511769 | 0.616229 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.234681 | 0.505805 | 0.615814 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.236775 | 0.508326 | 0.620841 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.234558 | 0.504013 | 0.614060 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.235024 | 0.513460 | 0.625848 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.229326 | 0.509299 | 0.627141 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.191430 | 0.513215 | 0.605806 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.189117 | 0.338527 | 0.389235 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.965×, 0.969× | 1.001× |
| clang | 0.964× | 0.964×, 0.964× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001377s | 0.001327s | 0.001329s | byte equality observed |
| test_add_assign.test | 10 | 0.001352s | 0.001347s | 0.001314s | byte equality observed |
| test_any_cast.test | 10 | 0.001467s | 0.001424s | 0.001420s | byte equality observed |
| test_assign.test | 5 | 0.003865s | 0.003241s | 0.003719s | byte equality observed |
| test_binding.test | 10 | 0.001290s | 0.001245s | 0.001231s | byte equality observed |
| test_binding_of.test | 10 | 0.001252s | 0.001204s | 0.001209s | byte equality observed |
| test_callable.test | 10 | 0.001714s | 0.001665s | 0.001656s | byte equality observed |
| test_construct.test | 8 | 0.002223s | 0.002146s | 0.002091s | byte equality observed |
| test_construct_cref.test | 10 | 0.001608s | 0.001579s | 0.001555s | byte equality observed |
| test_construct_ref.test | 10 | 0.001467s | 0.001468s | 0.001439s | byte equality observed |
| test_deduced.test | 10 | 0.001281s | 0.001211s | 0.001223s | byte equality observed |
| test_dereference.test | 10 | 0.001286s | 0.001264s | 0.001234s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001602s | 0.001545s | 0.001556s | byte equality observed |
| test_equal.test | 10 | 0.001453s | 0.001434s | 0.001422s | byte equality observed |
| test_forward_iterator.test | 8 | 0.001284s | 0.001302s | 0.001265s | byte equality observed |
| test_free.test | 10 | 0.001439s | 0.001396s | 0.001362s | byte equality observed |
| test_increment.test | 10 | 0.001283s | 0.001255s | 0.001205s | byte equality observed |
| test_is_empty.test | 10 | 0.001280s | 0.001262s | 0.001242s | byte equality observed |
| test_less.test | 10 | 0.001487s | 0.001470s | 0.001425s | byte equality observed |
| test_limits.test | 10 | 0.001371s | 0.001336s | 0.001301s | byte equality observed |
| test_member.test | 10 | 0.001597s | 0.001574s | 0.001537s | byte equality observed |
| test_negate.test | 10 | 0.001253s | 0.001224s | 0.001222s | byte equality observed |
| test_nested.test | 10 | 0.001259s | 0.001235s | 0.001197s | byte equality observed |
| test_null.test | 10 | 0.001273s | 0.001238s | 0.001247s | byte equality observed |
| test_reference.test | 9 | 0.001307s | 0.001270s | 0.001272s | byte equality observed |
| test_relaxed.test | 10 | 0.001247s | 0.001216s | 0.001267s | byte equality observed |
| test_same_type.test | 10 | 0.001284s | 0.001265s | 0.001236s | byte equality observed |
| test_stream.test | 10 | 0.001548s | 0.001509s | 0.001486s | byte equality observed |
| test_subscript.test | 10 | 0.001330s | 0.001315s | 0.001280s | byte equality observed |
| test_tuple.test | 10 | 0.001302s | 0.001289s | 0.001257s | byte equality observed |
| test_typeid_of.test | 10 | 0.001310s | 0.001284s | 0.001264s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
