# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.424895 | 1.858437 | 1.490680 | 0.002350 | 0.002318 | 0.002014 |
| test_increment.test | RUN | 0.424530 | 1.395973 | 1.292784 | 0.002366 | 0.002352 | 0.002250 |
| test_add.test | RUN | 0.514598 | 2.236966 | 1.904755 | 0.002236 | 0.002594 | 0.002084 |
| test_add_assign.test | RUN | 0.531384 | 2.426739 | 2.037845 | 0.002452 | 0.002585 | 0.002123 |
| test_callable.test | RUN | 0.921492 | 4.194786 | 4.388760 | 0.003431 | 0.003537 | 0.003358 |
| test_reference.test | RUN | 0.403520 | 1.681699 | 1.385713 | 0.002210 | 0.002645 | 0.002046 |
| test_construct.test | RUN | 2.055417 | 21.246637 | 13.486872 | 0.004150 | 0.004087 | 0.003919 |
| test_relaxed.test | RUN | 0.404853 | 1.178885 | 1.214602 | 0.001987 | 0.002457 | 0.001968 |
| test_assign.test | RUN | 5.440937 | 69.570795 | 48.137847 | 0.006726 | 0.004104 | 0.004343 |
| test_construct_ref.test | RUN | 0.503815 | 2.968196 | 2.015226 | 0.002698 | 0.003004 | 0.002694 |
| test_construct_cref.test | RUN | 0.580700 | 2.746124 | 2.464034 | 0.002684 | 0.003266 | 0.002855 |
| test_any_cast.test | RUN | 0.494997 | 2.864974 | 1.969835 | 0.002915 | 0.002907 | 0.002095 |
| test_binding_of.test | RUN | 0.394390 | 1.085560 | 1.143594 | 0.002148 | 0.002217 | 0.002096 |
| test_typeid_of.test | RUN | 0.419479 | 1.516668 | 1.280677 | 0.002350 | 0.002496 | 0.002086 |
| test_nested.test | RUN | 0.468573 | 1.549198 | 1.491465 | 0.002374 | 0.002563 | 0.002218 |
| test_less.test | RUN | 0.584231 | 3.040900 | 2.456622 | 0.002613 | 0.002844 | 0.002631 |
| test_equal.test | RUN | 0.552854 | 2.935490 | 2.032388 | 0.002595 | 0.002761 | 0.002411 |
| test_negate.test | RUN | 0.416287 | 1.145095 | 1.229005 | 0.002019 | 0.002302 | 0.002239 |
| test_dereference.test | RUN | 0.425130 | 1.495004 | 1.404197 | 0.002400 | 0.002531 | 0.002233 |
| test_subscript.test | RUN | 0.453413 | 1.685161 | 1.368053 | 0.002375 | 0.002470 | 0.002011 |
| test_forward_iterator.test | RUN | 0.553619 | 1.961808 | 1.818190 | 0.002631 | 0.002684 | 0.002200 |
| test_tuple.test | RUN | 0.457943 | 1.922074 | 1.491505 | 0.002167 | 0.002680 | 0.002222 |
| test_stream.test | RUN | 0.619852 | 3.325895 | 2.461861 | 0.003036 | 0.002849 | 0.002853 |
| test_deduced.test | RUN | 0.399169 | 1.164118 | 1.183785 | 0.002215 | 0.002439 | 0.002211 |
| test_same_type.test | RUN | 0.475859 | 1.587979 | 1.402880 | 0.002402 | 0.002362 | 0.002198 |
| test_member.test | RUN | 0.584105 | 3.166297 | 2.405898 | 0.002947 | 0.003343 | 0.002911 |
| test_null.test | RUN | 0.403946 | 1.514876 | 1.245289 | 0.002254 | 0.002455 | 0.002505 |
| test_free.test | RUN | 0.530943 | 2.591480 | 1.754721 | 0.003103 | 0.002858 | 0.002513 |
| test_is_empty.test | RUN | 0.380325 | 1.253726 | 1.147732 | 0.002494 | 0.002238 | 0.002301 |
| test_dynamic_any_cast.test | RUN | 0.755499 | 3.783292 | 3.531776 | 0.002693 | 0.003072 | 0.002985 |
| test_limits.test | RUN | 0.690785 | 2.586618 | 2.330347 | 0.002322 | 0.002697 | 0.002541 |
| test_param.test | COMPILE | 0.265082 | 0.678888 | 0.747940 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.253759 | 0.520236 | 0.642930 | — | — | — |
| test_sfinae.test | COMPILE | 0.248868 | 0.530381 | 0.708402 | — | — | — |
| test_interface_order.test | COMPILE | 0.246351 | 0.516655 | 0.659743 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.030670 | 0.050474 | 0.054866 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.243488 | 0.516894 | 0.609719 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.240117 | 0.510585 | 0.587481 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.237790 | 0.502523 | 0.605674 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.239921 | 0.499405 | 0.608947 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.238331 | 0.511270 | 0.578337 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.228271 | 0.496933 | 0.586312 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.236044 | 0.494344 | 0.613763 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.249819 | 0.519875 | 0.616713 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.233320 | 0.500077 | 0.591399 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.234667 | 0.490694 | 0.610665 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.232642 | 0.495076 | 0.582887 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.236038 | 0.517860 | 0.612022 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.238557 | 0.516809 | 0.628786 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.238502 | 0.531950 | 0.615503 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.236923 | 0.543152 | 0.629199 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.238124 | 0.512687 | 0.597550 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.237791 | 0.515934 | 0.601401 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.237069 | 0.524267 | 0.627409 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.237932 | 0.519411 | 0.634250 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.242081 | 0.519621 | 0.619759 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.242416 | 0.538164 | 0.632026 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.241372 | 0.531970 | 0.638791 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.222161 | 0.516790 | 0.600508 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.198657 | 0.464271 | 0.408711 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964× | 0.964×, 0.964× | 1.009× |
| clang | 0.958× | 0.959×, 0.957× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001386s | 0.001333s | 0.001333s | byte equality observed |
| test_add_assign.test | 10 | 0.001378s | 0.001353s | 0.001327s | byte equality observed |
| test_any_cast.test | 10 | 0.001487s | 0.001429s | 0.001438s | byte equality observed |
| test_assign.test | 5 | 0.003917s | 0.003296s | 0.003682s | byte equality observed |
| test_binding.test | 10 | 0.001304s | 0.001260s | 0.001245s | byte equality observed |
| test_binding_of.test | 10 | 0.001275s | 0.001217s | 0.001226s | byte equality observed |
| test_callable.test | 10 | 0.001751s | 0.001711s | 0.001648s | byte equality observed |
| test_construct.test | 8 | 0.002279s | 0.002210s | 0.002133s | byte equality observed |
| test_construct_cref.test | 8 | 0.001606s | 0.001570s | 0.001582s | byte equality observed |
| test_construct_ref.test | 10 | 0.001521s | 0.001481s | 0.001453s | byte equality observed |
| test_deduced.test | 10 | 0.001292s | 0.001253s | 0.001230s | byte equality observed |
| test_dereference.test | 10 | 0.001315s | 0.001285s | 0.001264s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001632s | 0.001611s | 0.001586s | byte equality observed |
| test_equal.test | 10 | 0.001456s | 0.001388s | 0.001404s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001306s | 0.001294s | 0.001259s | byte equality observed |
| test_free.test | 10 | 0.001435s | 0.001387s | 0.001378s | byte equality observed |
| test_increment.test | 10 | 0.001312s | 0.001321s | 0.001257s | byte equality observed |
| test_is_empty.test | 10 | 0.001277s | 0.001243s | 0.001251s | byte equality observed |
| test_less.test | 10 | 0.001534s | 0.001472s | 0.001476s | byte equality observed |
| test_limits.test | 10 | 0.001398s | 0.001366s | 0.001348s | byte equality observed |
| test_member.test | 9 | 0.001645s | 0.001606s | 0.001591s | byte equality observed |
| test_negate.test | 10 | 0.001266s | 0.001241s | 0.001208s | byte equality observed |
| test_nested.test | 10 | 0.001302s | 0.001239s | 0.001261s | byte equality observed |
| test_null.test | 10 | 0.001325s | 0.001275s | 0.001262s | byte equality observed |
| test_reference.test | 10 | 0.001326s | 0.001292s | 0.001296s | byte equality observed |
| test_relaxed.test | 10 | 0.001268s | 0.001269s | 0.001218s | byte equality observed |
| test_same_type.test | 10 | 0.001307s | 0.001294s | 0.001266s | byte equality observed |
| test_stream.test | 10 | 0.001549s | 0.001543s | 0.001532s | byte equality observed |
| test_subscript.test | 10 | 0.001348s | 0.001356s | 0.001316s | byte equality observed |
| test_tuple.test | 10 | 0.001349s | 0.001280s | 0.001267s | byte equality observed |
| test_typeid_of.test | 10 | 0.001349s | 0.001311s | 0.001290s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
