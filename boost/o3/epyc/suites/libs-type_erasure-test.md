# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.518451 | 2.077080 | 1.861267 | 0.003501 | 0.003597 | 0.003151 |
| test_increment.test | RUN | 0.493357 | 1.544728 | 1.615737 | 0.003227 | 0.003334 | 0.003106 |
| test_add.test | RUN | 0.674484 | 2.468981 | 2.383937 | 0.003722 | 0.003375 | 0.003335 |
| test_add_assign.test | RUN | 0.642264 | 2.644975 | 2.465433 | 0.003486 | 0.003785 | 0.003699 |
| test_callable.test | RUN | 1.114861 | 4.569931 | 5.248158 | 0.005553 | 0.006150 | 0.006035 |
| test_reference.test | RUN | 0.540670 | 1.867483 | 1.660596 | 0.003156 | 0.003747 | 0.003471 |
| test_construct.test | RUN | 2.281433 | 23.754493 | 15.502819 | 0.006997 | 0.007200 | 0.007025 |
| test_relaxed.test | RUN | 0.486396 | 1.359703 | 1.533767 | 0.003050 | 0.003307 | 0.003006 |
| test_assign.test | RUN | 5.218048 | 71.434391 | 53.823620 | 0.010683 | 0.006917 | 0.007298 |
| test_construct_ref.test | RUN | 0.603721 | 3.193706 | 2.395995 | 0.004733 | 0.004596 | 0.004551 |
| test_construct_cref.test | RUN | 0.681691 | 2.997710 | 2.938427 | 0.004958 | 0.005563 | 0.005099 |
| test_any_cast.test | RUN | 0.573710 | 3.179189 | 2.358123 | 0.003888 | 0.004165 | 0.004263 |
| test_binding_of.test | RUN | 0.484069 | 1.132463 | 1.391797 | 0.002871 | 0.003218 | 0.002992 |
| test_typeid_of.test | RUN | 0.508891 | 1.765535 | 1.650771 | 0.003160 | 0.003471 | 0.003984 |
| test_nested.test | RUN | 0.551947 | 1.592846 | 1.831711 | 0.003103 | 0.003319 | 0.003098 |
| test_less.test | RUN | 0.695749 | 3.337065 | 2.870487 | 0.003925 | 0.004473 | 0.004117 |
| test_equal.test | RUN | 0.657225 | 3.162613 | 2.525442 | 0.004096 | 0.004081 | 0.004028 |
| test_negate.test | RUN | 0.479202 | 1.235222 | 1.457261 | 0.003070 | 0.002986 | 0.002753 |
| test_dereference.test | RUN | 0.527690 | 1.510243 | 1.730338 | 0.003342 | 0.003312 | 0.003151 |
| test_subscript.test | RUN | 0.545723 | 1.797444 | 1.806891 | 0.002992 | 0.003204 | 0.003014 |
| test_forward_iterator.test | RUN | 0.648182 | 2.043066 | 1.991433 | 0.003532 | 0.003478 | 0.003314 |
| test_tuple.test | RUN | 0.565673 | 1.945203 | 1.941085 | 0.003393 | 0.003330 | 0.003650 |
| test_stream.test | RUN | 0.722347 | 3.289403 | 2.743439 | 0.004726 | 0.004591 | 0.004871 |
| test_deduced.test | RUN | 0.483882 | 1.187142 | 1.471838 | 0.002869 | 0.003051 | 0.003016 |
| test_same_type.test | RUN | 0.537631 | 1.622368 | 1.823983 | 0.003345 | 0.003182 | 0.003402 |
| test_member.test | RUN | 0.705242 | 3.151423 | 3.006039 | 0.005326 | 0.004898 | 0.005118 |
| test_null.test | RUN | 0.489913 | 1.490773 | 1.327265 | 0.003485 | 0.003353 | 0.003087 |
| test_free.test | RUN | 0.603274 | 2.804180 | 2.219101 | 0.003711 | 0.004417 | 0.004162 |
| test_is_empty.test | RUN | 0.479240 | 1.420761 | 1.249821 | 0.003122 | 0.003304 | 0.002895 |
| test_dynamic_any_cast.test | RUN | 0.901452 | 3.972014 | 3.999965 | 0.004857 | 0.004942 | 0.005441 |
| test_limits.test | RUN | 0.813572 | 2.913470 | 2.924861 | 0.003009 | 0.003693 | 0.003667 |
| test_param.test | COMPILE | 0.320754 | 0.794098 | 0.957464 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.320850 | 0.632194 | 0.748749 | — | — | — |
| test_sfinae.test | COMPILE | 0.316542 | 0.609156 | 0.786630 | — | — | — |
| test_interface_order.test | COMPILE | 0.312244 | 0.599624 | 0.810973 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040454 | 0.063966 | 0.065610 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.295776 | 0.593217 | 0.768275 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.292959 | 0.613792 | 0.678305 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.290083 | 0.542058 | 0.793940 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.298489 | 0.590293 | 0.792382 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.293224 | 0.548616 | 0.671453 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.282966 | 0.579581 | 0.753104 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.296010 | 0.585258 | 0.796621 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.314473 | 0.601389 | 0.714193 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.295001 | 0.590509 | 0.767361 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.291819 | 0.577673 | 0.799966 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.291347 | 0.559236 | 0.661253 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.298041 | 0.600427 | 0.803161 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.295041 | 0.588652 | 0.824612 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.296809 | 0.623605 | 0.758241 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.297341 | 0.633686 | 0.815219 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.298883 | 0.551641 | 0.662381 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.296857 | 0.602607 | 0.829606 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.296480 | 0.613215 | 0.813354 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.299947 | 0.525283 | 0.747646 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.303421 | 0.601357 | 0.833431 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.301397 | 0.610587 | 0.720697 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.300452 | 0.560231 | 0.830555 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.294914 | 0.601183 | 0.703880 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.266268 | 0.572941 | 0.637521 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.976×† | 0.977×, 0.975× | 0.917× |
| clang | 0.964×† | 0.957×, 0.972× | 0.914× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001969s | 0.001914s | 0.001875s | byte equality observed |
| test_add_assign.test | 10 | 0.001913s | 0.001845s | 0.001842s | byte equality observed |
| test_any_cast.test | 8 | 0.002195s | 0.002167s | 0.002185s | byte equality observed |
| test_assign.test | 3 | 0.005831s | 0.004956s | 0.005344s | byte equality observed |
| test_binding.test | 9 | 0.001765s | 0.001783s | 0.001765s | byte equality observed |
| test_binding_of.test | 10 | 0.001665s | 0.001641s | 0.001632s | byte equality observed |
| test_callable.test | 6 | 0.002857s | 0.002811s | 0.002830s | byte equality observed |
| test_construct.test | 5 | 0.003709s | 0.003603s | 0.003590s | byte equality observed |
| test_construct_cref.test | 7 | 0.002539s | 0.002561s | 0.002495s | byte equality observed |
| test_construct_ref.test | 8 | 0.002309s | 0.002295s | 0.002310s | byte equality observed |
| test_deduced.test | 10 | 0.001659s | 0.001622s | 0.001651s | byte equality observed |
| test_dereference.test | 10 | 0.001801s | 0.001761s | 0.001737s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002535s | 0.002520s | 0.002518s | byte equality observed |
| test_equal.test | 8 | 0.002147s | 0.002071s | 0.002070s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001799s | 0.001772s | 0.001742s | byte equality observed |
| test_free.test | 9 | 0.002145s | 0.002099s | 0.002102s | byte equality observed |
| test_increment.test | 10 | 0.001749s | 0.001700s | 0.001750s | byte equality observed |
| test_is_empty.test | 10 | 0.001731s | 0.001716s | 0.001713s | byte equality observed |
| test_less.test | 8 | 0.002327s | 0.002295s | 0.002285s | byte equality observed |
| test_limits.test | 10 | 0.001869s | 0.001846s | 0.001853s | byte equality observed |
| test_member.test | 7 | 0.002676s | 0.002578s | 0.002583s | byte equality observed |
| test_negate.test | 10 | 0.001673s | 0.001620s | 0.001645s | byte equality observed |
| test_nested.test | 10 | 0.001771s | 0.001729s | 0.001699s | byte equality observed |
| test_null.test | 9 | 0.001819s | 0.001737s | 0.001770s | byte equality observed |
| test_reference.test | 10 | 0.001854s | 0.001824s | 0.001811s | byte equality observed |
| test_relaxed.test | 10 | 0.001723s | 0.001667s | 0.001695s | byte equality observed |
| test_same_type.test | 10 | 0.001781s | 0.001733s | 0.001734s | byte equality observed |
| test_stream.test | 8 | 0.002449s | 0.002394s | 0.002389s | byte equality observed |
| test_subscript.test | 10 | 0.001847s | 0.001806s | 0.001803s | byte equality observed |
| test_tuple.test | 10 | 0.001829s | 0.001798s | 0.001819s | byte equality observed |
| test_typeid_of.test | 10 | 0.001850s | 0.001820s | 0.001826s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
