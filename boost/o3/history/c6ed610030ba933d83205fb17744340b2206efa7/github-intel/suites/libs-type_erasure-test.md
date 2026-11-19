# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.409537 | 1.821398 | 1.451222 | 0.001980 | 0.002333 | 0.001857 |
| test_increment.test | RUN | 0.409121 | 1.367357 | 1.268020 | 0.002138 | 0.002244 | 0.002079 |
| test_add.test | RUN | 0.498601 | 2.247848 | 1.892228 | 0.002446 | 0.002548 | 0.002075 |
| test_add_assign.test | RUN | 0.515169 | 2.409062 | 1.989911 | 0.002176 | 0.002377 | 0.002064 |
| test_callable.test | RUN | 0.839888 | 4.150234 | 4.266561 | 0.002734 | 0.003394 | 0.003095 |
| test_reference.test | RUN | 0.395499 | 1.654995 | 1.348887 | 0.002225 | 0.002451 | 0.002161 |
| test_construct.test | RUN | 2.001108 | 20.851350 | 13.145654 | 0.004081 | 0.004038 | 0.003643 |
| test_relaxed.test | RUN | 0.389397 | 1.178730 | 1.184961 | 0.002032 | 0.002303 | 0.001922 |
| test_assign.test | RUN | 5.221092 | 67.960662 | 45.478472 | 0.006601 | 0.004114 | 0.004347 |
| test_construct_ref.test | RUN | 0.484726 | 2.893781 | 1.963384 | 0.002755 | 0.002793 | 0.002431 |
| test_construct_cref.test | RUN | 0.576698 | 2.770825 | 2.396673 | 0.002871 | 0.003392 | 0.002690 |
| test_any_cast.test | RUN | 0.494215 | 2.810219 | 1.908913 | 0.002611 | 0.002717 | 0.002460 |
| test_binding_of.test | RUN | 0.372971 | 1.067830 | 1.106099 | 0.001884 | 0.002419 | 0.001867 |
| test_typeid_of.test | RUN | 0.398764 | 1.577802 | 1.263066 | 0.002036 | 0.002347 | 0.002005 |
| test_nested.test | RUN | 0.459750 | 1.518945 | 1.451453 | 0.002060 | 0.002390 | 0.001838 |
| test_less.test | RUN | 0.573390 | 3.067656 | 2.388736 | 0.002835 | 0.002828 | 0.002468 |
| test_equal.test | RUN | 0.528558 | 2.891733 | 1.989722 | 0.002367 | 0.002795 | 0.002288 |
| test_negate.test | RUN | 0.373182 | 1.121124 | 1.160405 | 0.001845 | 0.002295 | 0.002122 |
| test_dereference.test | RUN | 0.435898 | 1.529386 | 1.367138 | 0.002080 | 0.002633 | 0.002026 |
| test_subscript.test | RUN | 0.433498 | 1.714829 | 1.319363 | 0.002075 | 0.002523 | 0.002098 |
| test_forward_iterator.test | RUN | 0.518184 | 1.949991 | 1.782001 | 0.002279 | 0.002388 | 0.001974 |
| test_tuple.test | RUN | 0.466796 | 1.944100 | 1.475075 | 0.002013 | 0.002662 | 0.002295 |
| test_stream.test | RUN | 0.604853 | 3.301714 | 2.413975 | 0.002552 | 0.003218 | 0.002817 |
| test_deduced.test | RUN | 0.403587 | 1.150833 | 1.170956 | 0.002114 | 0.002502 | 0.002099 |
| test_same_type.test | RUN | 0.422930 | 1.578375 | 1.392132 | 0.001898 | 0.002337 | 0.002182 |
| test_member.test | RUN | 0.566427 | 3.106659 | 2.317916 | 0.002718 | 0.002902 | 0.002754 |
| test_null.test | RUN | 0.418844 | 1.464809 | 1.225055 | 0.002347 | 0.002452 | 0.002236 |
| test_free.test | RUN | 0.476552 | 2.527981 | 1.651973 | 0.002453 | 0.002877 | 0.002254 |
| test_is_empty.test | RUN | 0.378164 | 1.233040 | 1.135849 | 0.001959 | 0.002347 | 0.002086 |
| test_dynamic_any_cast.test | RUN | 0.743184 | 3.721713 | 3.406289 | 0.003030 | 0.003310 | 0.002775 |
| test_limits.test | RUN | 0.638177 | 2.563013 | 2.233261 | 0.002154 | 0.002515 | 0.002260 |
| test_param.test | COMPILE | 0.256344 | 0.682012 | 0.730757 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.248560 | 0.515791 | 0.622508 | — | — | — |
| test_sfinae.test | COMPILE | 0.251960 | 0.530985 | 0.672199 | — | — | — |
| test_interface_order.test | COMPILE | 0.236580 | 0.520988 | 0.610916 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027403 | 0.046808 | 0.053911 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.232223 | 0.511815 | 0.600695 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.235023 | 0.513922 | 0.580861 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.231680 | 0.500911 | 0.594009 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.229385 | 0.506111 | 0.591642 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.230043 | 0.498281 | 0.559682 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.223838 | 0.501962 | 0.569046 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.232037 | 0.504737 | 0.593508 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.242205 | 0.518851 | 0.625545 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.230359 | 0.498852 | 0.576625 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.230577 | 0.492455 | 0.588360 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.231286 | 0.495242 | 0.561711 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.228415 | 0.516324 | 0.597885 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.231602 | 0.510258 | 0.612745 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.234242 | 0.531154 | 0.606999 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.235149 | 0.539162 | 0.616652 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.229556 | 0.507396 | 0.578744 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.233263 | 0.514764 | 0.595472 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.233731 | 0.518763 | 0.617286 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.235410 | 0.512186 | 0.618090 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.232423 | 0.511910 | 0.636547 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.234290 | 0.521228 | 0.622354 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.224667 | 0.524913 | 0.621372 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.230087 | 0.497840 | 0.591470 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.163076 | 0.360067 | 0.385325 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.966× | 0.962×, 0.969× | 1.019× |
| clang | 0.964× | 0.962×, 0.966× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001373s | 0.001355s | 0.001347s | byte equality observed |
| test_add_assign.test | 10 | 0.001367s | 0.001295s | 0.001373s | byte equality observed |
| test_any_cast.test | 10 | 0.001472s | 0.001430s | 0.001416s | byte equality observed |
| test_assign.test | 5 | 0.003855s | 0.003291s | 0.003730s | byte equality observed |
| test_binding.test | 10 | 0.001288s | 0.001252s | 0.001241s | byte equality observed |
| test_binding_of.test | 10 | 0.001267s | 0.001210s | 0.001211s | byte equality observed |
| test_callable.test | 10 | 0.001743s | 0.001725s | 0.001697s | byte equality observed |
| test_construct.test | 8 | 0.002222s | 0.002153s | 0.002168s | byte equality observed |
| test_construct_cref.test | 10 | 0.001626s | 0.001594s | 0.001557s | byte equality observed |
| test_construct_ref.test | 10 | 0.001502s | 0.001456s | 0.001456s | byte equality observed |
| test_deduced.test | 10 | 0.001266s | 0.001231s | 0.001223s | byte equality observed |
| test_dereference.test | 10 | 0.001327s | 0.001242s | 0.001270s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001631s | 0.001627s | 0.001606s | byte equality observed |
| test_equal.test | 10 | 0.001437s | 0.001402s | 0.001402s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001321s | 0.001306s | 0.001252s | byte equality observed |
| test_free.test | 10 | 0.001404s | 0.001388s | 0.001382s | byte equality observed |
| test_increment.test | 10 | 0.001326s | 0.001281s | 0.001244s | byte equality observed |
| test_is_empty.test | 10 | 0.001277s | 0.001274s | 0.001253s | byte equality observed |
| test_less.test | 10 | 0.001495s | 0.001469s | 0.001453s | byte equality observed |
| test_limits.test | 10 | 0.001390s | 0.001338s | 0.001333s | byte equality observed |
| test_member.test | 10 | 0.001631s | 0.001577s | 0.001553s | byte equality observed |
| test_negate.test | 10 | 0.001264s | 0.001230s | 0.001236s | byte equality observed |
| test_nested.test | 10 | 0.001275s | 0.001236s | 0.001214s | byte equality observed |
| test_null.test | 10 | 0.001300s | 0.001244s | 0.001248s | byte equality observed |
| test_reference.test | 10 | 0.001297s | 0.001302s | 0.001275s | byte equality observed |
| test_relaxed.test | 10 | 0.001257s | 0.001245s | 0.001263s | byte equality observed |
| test_same_type.test | 7 | 0.001294s | 0.001311s | 0.001255s | byte equality observed |
| test_stream.test | 7 | 0.001572s | 0.001522s | 0.001498s | byte equality observed |
| test_subscript.test | 10 | 0.001340s | 0.001293s | 0.001285s | byte equality observed |
| test_tuple.test | 10 | 0.001313s | 0.001299s | 0.001296s | byte equality observed |
| test_typeid_of.test | 10 | 0.001348s | 0.001297s | 0.001275s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
