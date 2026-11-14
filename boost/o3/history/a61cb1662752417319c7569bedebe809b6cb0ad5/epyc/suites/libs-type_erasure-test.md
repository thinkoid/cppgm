# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.517579 | 2.085166 | 1.873584 | 0.003445 | 0.003593 | 0.003291 |
| test_increment.test | RUN | 0.519373 | 1.552522 | 1.627498 | 0.003138 | 0.003460 | 0.003200 |
| test_add.test | RUN | 0.658757 | 2.467024 | 2.371626 | 0.003672 | 0.003363 | 0.003707 |
| test_add_assign.test | RUN | 0.680628 | 2.633524 | 2.432547 | 0.003726 | 0.003566 | 0.003508 |
| test_callable.test | RUN | 1.040611 | 4.561853 | 5.347499 | 0.005267 | 0.006168 | 0.005834 |
| test_reference.test | RUN | 0.526354 | 1.861610 | 1.700479 | 0.003589 | 0.003223 | 0.003492 |
| test_construct.test | RUN | 2.394312 | 23.710609 | 15.203149 | 0.007465 | 0.006846 | 0.007510 |
| test_relaxed.test | RUN | 0.476448 | 1.333676 | 1.505408 | 0.003237 | 0.003240 | 0.003089 |
| test_assign.test | RUN | 5.293080 | 74.354319 | 52.932515 | 0.011140 | 0.007047 | 0.007236 |
| test_construct_ref.test | RUN | 0.625274 | 3.209755 | 2.428839 | 0.004413 | 0.004562 | 0.004390 |
| test_construct_cref.test | RUN | 0.684665 | 2.989938 | 3.108724 | 0.005214 | 0.005529 | 0.005376 |
| test_any_cast.test | RUN | 0.586235 | 3.107596 | 2.307539 | 0.004235 | 0.004244 | 0.004227 |
| test_binding_of.test | RUN | 0.468301 | 1.247233 | 1.445992 | 0.003163 | 0.003011 | 0.002794 |
| test_typeid_of.test | RUN | 0.517209 | 1.605914 | 1.624826 | 0.003567 | 0.003333 | 0.003410 |
| test_nested.test | RUN | 0.567491 | 1.728029 | 1.840587 | 0.003364 | 0.003231 | 0.003041 |
| test_less.test | RUN | 0.716196 | 3.345626 | 3.033783 | 0.004648 | 0.004595 | 0.004539 |
| test_equal.test | RUN | 0.670517 | 3.158509 | 2.527079 | 0.004258 | 0.003956 | 0.004324 |
| test_negate.test | RUN | 0.482262 | 1.287480 | 1.472372 | 0.003050 | 0.003058 | 0.002796 |
| test_dereference.test | RUN | 0.531466 | 1.513325 | 1.771491 | 0.003452 | 0.003051 | 0.003238 |
| test_subscript.test | RUN | 0.559894 | 1.775862 | 1.887439 | 0.003466 | 0.003260 | 0.003542 |
| test_forward_iterator.test | RUN | 0.676196 | 2.022327 | 1.956499 | 0.003734 | 0.003451 | 0.002989 |
| test_tuple.test | RUN | 0.578999 | 2.095023 | 1.951216 | 0.003589 | 0.003498 | 0.003065 |
| test_stream.test | RUN | 0.752170 | 3.307153 | 2.903917 | 0.004578 | 0.004422 | 0.004483 |
| test_deduced.test | RUN | 0.498898 | 1.184389 | 1.490959 | 0.002864 | 0.003054 | 0.002834 |
| test_same_type.test | RUN | 0.535041 | 1.614306 | 1.766829 | 0.003147 | 0.003314 | 0.003322 |
| test_member.test | RUN | 0.710793 | 3.249953 | 2.878840 | 0.005362 | 0.004978 | 0.005206 |
| test_null.test | RUN | 0.486507 | 1.512241 | 1.341212 | 0.003369 | 0.003082 | 0.003040 |
| test_free.test | RUN | 0.609133 | 2.720505 | 2.203647 | 0.004275 | 0.004189 | 0.004119 |
| test_is_empty.test | RUN | 0.480781 | 1.372306 | 1.339507 | 0.003878 | 0.003207 | 0.002863 |
| test_dynamic_any_cast.test | RUN | 0.927547 | 3.910804 | 4.142039 | 0.005072 | 0.004814 | 0.005306 |
| test_limits.test | RUN | 0.857103 | 2.753642 | 2.982132 | 0.003360 | 0.003445 | 0.003653 |
| test_param.test | COMPILE | 0.335847 | 0.781772 | 0.867327 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.323052 | 0.605799 | 0.761151 | — | — | — |
| test_sfinae.test | COMPILE | 0.332837 | 0.610211 | 0.770576 | — | — | — |
| test_interface_order.test | COMPILE | 0.315075 | 0.608165 | 0.727817 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.038666 | 0.057677 | 0.069606 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.355779 | 0.565300 | 0.735176 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.350033 | 0.556655 | 0.707007 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.344217 | 0.579490 | 0.782410 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.353243 | 0.584447 | 0.683005 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.306466 | 0.580282 | 0.786759 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.292247 | 0.588717 | 0.758627 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.316313 | 0.593753 | 0.739894 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.319390 | 0.594097 | 0.830631 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.299609 | 0.552214 | 0.763648 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.295235 | 0.554708 | 0.674357 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.321724 | 0.577877 | 0.790630 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.307872 | 0.605269 | 0.732292 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.312185 | 0.603728 | 0.818648 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.307432 | 0.630305 | 0.838915 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.311109 | 0.554126 | 0.723440 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.295953 | 0.591078 | 0.773567 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.297971 | 0.610966 | 0.829798 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.297460 | 0.552864 | 0.763963 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.305371 | 0.607826 | 0.830686 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.305457 | 0.551688 | 0.834750 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.300272 | 0.612420 | 0.686042 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.297481 | 0.589465 | 0.819773 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.274321 | 0.584468 | 0.692526 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.263390 | 0.563094 | 0.689808 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.055×† | 1.059×, 1.051× | 1.054× |
| clang | 0.958×† | 0.890×, 1.027× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001956s | 0.002051s | 0.002142s | byte equality observed |
| test_add_assign.test | 9 | 0.001994s | 0.002000s | 0.002196s | byte equality observed |
| test_any_cast.test | 8 | 0.002250s | 0.002325s | 0.002447s | byte equality observed |
| test_assign.test | 4 | 0.006021s | 0.005617s | 0.005874s | byte equality observed |
| test_binding.test | 10 | 0.001806s | 0.001929s | 0.002090s | byte equality observed |
| test_binding_of.test | 10 | 0.001750s | 0.001782s | 0.001887s | byte equality observed |
| test_callable.test | 7 | 0.002914s | 0.003058s | 0.003285s | byte equality observed |
| test_construct.test | 6 | 0.003809s | 0.003954s | 0.004003s | byte equality observed |
| test_construct_cref.test | 7 | 0.002634s | 0.002758s | 0.003005s | byte equality observed |
| test_construct_ref.test | 8 | 0.002365s | 0.002464s | 0.002689s | byte equality observed |
| test_deduced.test | 10 | 0.001718s | 0.001797s | 0.001928s | byte equality observed |
| test_dereference.test | 10 | 0.001805s | 0.001924s | 0.002073s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002608s | 0.002733s | 0.002953s | byte equality observed |
| test_equal.test | 9 | 0.002150s | 0.002251s | 0.002388s | byte equality observed |
| test_forward_iterator.test | 9 | 0.001869s | 0.001930s | 0.002047s | byte equality observed |
| test_free.test | 8 | 0.002185s | 0.002311s | 0.002370s | byte equality observed |
| test_increment.test | 10 | 0.001797s | 0.001853s | 0.001912s | byte equality observed |
| test_is_empty.test | 10 | 0.001814s | 0.001838s | 0.002002s | byte equality observed |
| test_less.test | 7 | 0.002377s | 0.002447s | 0.002677s | byte equality observed |
| test_limits.test | 9 | 0.001940s | 0.002020s | 0.002140s | byte equality observed |
| test_member.test | 6 | 0.002715s | 0.002903s | 0.003085s | byte equality observed |
| test_negate.test | 10 | 0.001701s | 0.001824s | 0.001940s | byte equality observed |
| test_nested.test | 9 | 0.001831s | 0.001839s | 0.001973s | byte equality observed |
| test_null.test | 9 | 0.001860s | 0.001961s | 0.002018s | byte equality observed |
| test_reference.test | 10 | 0.001913s | 0.001978s | 0.002141s | byte equality observed |
| test_relaxed.test | 10 | 0.001793s | 0.001869s | 0.001997s | byte equality observed |
| test_same_type.test | 10 | 0.001813s | 0.001908s | 0.002054s | byte equality observed |
| test_stream.test | 8 | 0.002510s | 0.002539s | 0.002834s | byte equality observed |
| test_subscript.test | 10 | 0.001920s | 0.001967s | 0.002168s | byte equality observed |
| test_tuple.test | 10 | 0.002027s | 0.002004s | 0.002156s | byte equality observed |
| test_typeid_of.test | 10 | 0.002110s | 0.002012s | 0.002114s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
