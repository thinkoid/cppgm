# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.675293 | 2.596376 | 2.438400 | 0.004294 | 0.004312 | 0.004113 |
| test_increment.test | RUN | 0.635939 | 1.940746 | 2.088275 | 0.003938 | 0.003904 | 0.004121 |
| test_add.test | RUN | 0.813001 | 3.077341 | 3.090482 | 0.004373 | 0.004324 | 0.004265 |
| test_add_assign.test | RUN | 0.878282 | 3.291898 | 3.179977 | 0.004358 | 0.004546 | 0.004545 |
| test_callable.test | RUN | 1.398427 | 5.671414 | 6.877281 | 0.007007 | 0.007307 | 0.007526 |
| test_reference.test | RUN | 0.650283 | 2.320513 | 2.174868 | 0.004114 | 0.004179 | 0.004511 |
| test_construct.test | RUN | 2.875392 | 27.451600 | 19.834380 | 0.009466 | 0.008963 | 0.009742 |
| test_relaxed.test | RUN | 0.658355 | 1.639463 | 1.967477 | 0.004067 | 0.003743 | 0.003787 |
| test_assign.test | RUN | 7.072941 | 85.480703 | 65.268129 | 0.013701 | 0.008850 | 0.009072 |
| test_construct_ref.test | RUN | 0.780822 | 4.114834 | 3.235610 | 0.005908 | 0.005103 | 0.005860 |
| test_construct_cref.test | RUN | 0.890745 | 3.678067 | 3.963950 | 0.006537 | 0.006153 | 0.006820 |
| test_any_cast.test | RUN | 0.763059 | 3.860777 | 2.972772 | 0.005129 | 0.005375 | 0.004901 |
| test_binding_of.test | RUN | 0.629961 | 1.498209 | 1.865461 | 0.003935 | 0.003699 | 0.003623 |
| test_typeid_of.test | RUN | 0.670778 | 2.208691 | 2.080643 | 0.004296 | 0.004209 | 0.004250 |
| test_nested.test | RUN | 0.704950 | 2.092709 | 2.336085 | 0.004295 | 0.003836 | 0.004078 |
| test_less.test | RUN | 0.914409 | 4.124280 | 3.893060 | 0.005801 | 0.005820 | 0.005758 |
| test_equal.test | RUN | 0.858420 | 3.871413 | 3.099240 | 0.004912 | 0.004718 | 0.006023 |
| test_negate.test | RUN | 0.618092 | 1.550619 | 2.021333 | 0.004034 | 0.003810 | 0.003457 |
| test_dereference.test | RUN | 0.695253 | 1.998682 | 2.180351 | 0.004383 | 0.003778 | 0.003864 |
| test_subscript.test | RUN | 0.710362 | 2.300048 | 2.004898 | 0.004172 | 0.004163 | 0.004106 |
| test_forward_iterator.test | RUN | 0.819771 | 2.556216 | 2.772665 | 0.004170 | 0.003847 | 0.004090 |
| test_tuple.test | RUN | 0.731109 | 2.506104 | 2.519784 | 0.004363 | 0.004014 | 0.004138 |
| test_stream.test | RUN | 0.937220 | 4.104569 | 3.654581 | 0.005977 | 0.005883 | 0.005354 |
| test_deduced.test | RUN | 0.633495 | 1.510460 | 1.910259 | 0.003987 | 0.003512 | 0.003387 |
| test_same_type.test | RUN | 0.700359 | 2.031726 | 2.239453 | 0.004237 | 0.004062 | 0.004238 |
| test_member.test | RUN | 0.891536 | 4.138702 | 3.704545 | 0.006015 | 0.006237 | 0.006004 |
| test_null.test | RUN | 0.636336 | 2.067551 | 1.728426 | 0.004449 | 0.004362 | 0.003647 |
| test_free.test | RUN | 0.776539 | 3.516517 | 2.820877 | 0.005170 | 0.005055 | 0.005054 |
| test_is_empty.test | RUN | 0.606874 | 1.756944 | 1.700326 | 0.003920 | 0.003850 | 0.003307 |
| test_dynamic_any_cast.test | RUN | 1.153586 | 4.951596 | 5.342681 | 0.005927 | 0.005989 | 0.006420 |
| test_limits.test | RUN | 1.033278 | 3.392477 | 3.366721 | 0.004411 | 0.004252 | 0.003897 |
| test_param.test | COMPILE | 0.426097 | 1.023811 | 1.250443 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.401363 | 0.774701 | 1.096791 | — | — | — |
| test_sfinae.test | COMPILE | 0.407283 | 0.785974 | 1.152084 | — | — | — |
| test_interface_order.test | COMPILE | 0.393662 | 0.749035 | 0.940872 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.050258 | 0.080138 | 0.091567 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.390456 | 0.735022 | 0.995891 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.384253 | 0.765848 | 0.888822 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.378445 | 0.743976 | 0.940204 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.382367 | 0.745711 | 1.036617 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.386637 | 0.679202 | 0.906495 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.374786 | 0.734460 | 0.985238 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.384646 | 0.760118 | 0.980154 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.407219 | 0.702511 | 0.977151 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.382556 | 0.732292 | 0.989086 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.391034 | 0.688908 | 0.993281 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.381600 | 0.744070 | 0.884172 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.378800 | 0.746882 | 1.020698 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.386405 | 0.764774 | 0.994103 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.387548 | 0.801315 | 1.036540 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.386985 | 0.780356 | 1.060220 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.382272 | 0.720457 | 0.853484 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.390136 | 0.771437 | 1.045580 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.391036 | 0.768509 | 1.040492 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.389553 | 0.716928 | 0.913512 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.385926 | 0.785626 | 1.062678 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.391137 | 0.732270 | 0.917197 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.392087 | 0.789687 | 1.066838 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.380284 | 0.741108 | 0.910054 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.288302 | 0.567155 | 0.766957 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.973×, 0.961× | 1.008× |
| clang | 0.966× | 0.971×, 0.961× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 7 | 0.002989s | 0.002884s | 0.002927s | byte equality observed |
| test_add_assign.test | 8 | 0.002962s | 0.002901s | 0.002887s | byte equality observed |
| test_any_cast.test | 7 | 0.003445s | 0.003350s | 0.003306s | byte equality observed |
| test_assign.test | 3 | 0.009767s | 0.008243s | 0.009143s | byte equality observed |
| test_binding.test | 8 | 0.002800s | 0.002671s | 0.002669s | byte equality observed |
| test_binding_of.test | 8 | 0.002602s | 0.002469s | 0.002524s | byte equality observed |
| test_callable.test | 5 | 0.004520s | 0.004419s | 0.004375s | byte equality observed |
| test_construct.test | 4 | 0.005843s | 0.005762s | 0.005551s | byte equality observed |
| test_construct_cref.test | 6 | 0.004034s | 0.003967s | 0.003916s | byte equality observed |
| test_construct_ref.test | 7 | 0.003571s | 0.003512s | 0.003519s | byte equality observed |
| test_deduced.test | 8 | 0.002595s | 0.002523s | 0.002535s | byte equality observed |
| test_dereference.test | 8 | 0.002811s | 0.002698s | 0.002725s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003990s | 0.003956s | 0.003943s | byte equality observed |
| test_equal.test | 6 | 0.003340s | 0.003262s | 0.003206s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002804s | 0.002730s | 0.002700s | byte equality observed |
| test_free.test | 6 | 0.003361s | 0.003309s | 0.003268s | byte equality observed |
| test_increment.test | 8 | 0.002653s | 0.002659s | 0.002576s | byte equality observed |
| test_is_empty.test | 8 | 0.002735s | 0.002649s | 0.002619s | byte equality observed |
| test_less.test | 6 | 0.003600s | 0.003565s | 0.003523s | byte equality observed |
| test_limits.test | 8 | 0.002967s | 0.002882s | 0.002893s | byte equality observed |
| test_member.test | 5 | 0.004146s | 0.004104s | 0.003973s | byte equality observed |
| test_negate.test | 8 | 0.002622s | 0.002561s | 0.002557s | byte equality observed |
| test_nested.test | 8 | 0.002694s | 0.002660s | 0.002635s | byte equality observed |
| test_null.test | 6 | 0.002810s | 0.002789s | 0.002673s | byte equality observed |
| test_reference.test | 7 | 0.002907s | 0.002824s | 0.002819s | byte equality observed |
| test_relaxed.test | 8 | 0.002691s | 0.002628s | 0.002592s | byte equality observed |
| test_same_type.test | 7 | 0.002804s | 0.002751s | 0.002733s | byte equality observed |
| test_stream.test | 6 | 0.003833s | 0.003813s | 0.003754s | byte equality observed |
| test_subscript.test | 8 | 0.002876s | 0.002811s | 0.002845s | byte equality observed |
| test_tuple.test | 8 | 0.002870s | 0.002840s | 0.002817s | byte equality observed |
| test_typeid_of.test | 7 | 0.002852s | 0.002772s | 0.002808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
