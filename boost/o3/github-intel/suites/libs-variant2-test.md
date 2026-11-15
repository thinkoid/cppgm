# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.125408 | 0.280416 | 0.350379 | 0.001454 | 0.000648 | 0.001437 |
| variant_size.test | RUN | 0.211719 | 0.685167 | 0.688000 | 0.001406 | 0.001562 | 0.001440 |
| variant_alternative.test | RUN | 0.285749 | 2.245651 | 1.199688 | 0.001289 | 0.001600 | 0.001367 |
| variant_holds_alternative.test | RUN | 0.191118 | 0.505507 | 0.692071 | 0.001322 | 0.001539 | 0.001147 |
| variant_holds_alternative_cx.test | COMPILE | 0.125079 | 0.292221 | 0.379324 | — | — | — |
| variant_get_by_index.test | RUN | 0.324624 | 2.472631 | 1.489250 | 0.001519 | 0.001638 | 0.001639 |
| variant_get_by_index_cx.test | COMPILE | 0.133213 | 0.308193 | 0.400848 | — | — | — |
| variant_get_by_type.test | RUN | 0.341504 | 2.602010 | 1.593430 | 0.001421 | 0.001530 | 0.001491 |
| variant_get_by_type_cx.test | COMPILE | 0.116888 | 0.266768 | 0.320085 | — | — | — |
| variant_default_construct.test | RUN | 0.314646 | 1.946986 | 1.313953 | 0.001386 | 0.001584 | 0.001364 |
| variant_default_construct_cx.test | COMPILE | 0.124705 | 0.297959 | 0.361604 | — | — | — |
| variant_copy_construct.test | RUN | 0.503567 | 3.250983 | 2.303374 | 0.001368 | 0.001469 | 0.001297 |
| variant_copy_construct_cx.test | COMPILE | 0.146517 | 0.351567 | 0.456632 | — | — | — |
| variant_move_construct.test | RUN | 0.465282 | 2.775583 | 2.119596 | 0.001225 | 0.001444 | 0.001311 |
| variant_move_construct_cx.test | COMPILE | 0.112617 | 0.273969 | 0.327916 | — | — | — |
| variant_value_construct.test | RUN | 0.241770 | 0.693123 | 0.870418 | 0.001275 | 0.001468 | 0.001365 |
| variant_value_construct_cx.test | COMPILE | 0.131239 | 0.311700 | 0.381671 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.246211 | 0.696238 | 0.888571 | 0.001300 | 0.001578 | 0.001430 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.127449 | 0.312431 | 0.398952 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.244064 | 0.685073 | 0.845945 | 0.001342 | 0.001404 | 0.001264 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.126583 | 0.314445 | 0.396724 | — | — | — |
| variant_copy_assign.test | RUN | 0.329445 | 2.272191 | 1.403112 | 0.001286 | 0.001506 | 0.001250 |
| variant_copy_assign_cx.test | COMPILE | 0.110675 | 0.267372 | 0.330911 | — | — | — |
| variant_move_assign.test | RUN | 0.331863 | 2.269901 | 1.378565 | 0.001382 | 0.001560 | 0.001199 |
| variant_move_assign_cx.test | COMPILE | 0.119103 | 0.271945 | 0.326507 | — | — | — |
| variant_value_assign.test | RUN | 0.245586 | 0.791297 | 0.956075 | 0.001182 | 0.001585 | 0.001333 |
| variant_value_assign_cx.test | COMPILE | 0.115200 | 0.274381 | 0.336811 | — | — | — |
| variant_emplace_index.test | RUN | 0.276069 | 0.916281 | 1.041571 | 0.001334 | 0.001560 | 0.001411 |
| variant_emplace_index_cx.test | COMPILE | 0.112525 | 0.266233 | 0.322042 | — | — | — |
| variant_emplace_type.test | RUN | 0.250378 | 0.768421 | 0.936651 | 0.001290 | 0.001554 | 0.001342 |
| variant_emplace_type_cx.test | COMPILE | 0.109983 | 0.275501 | 0.334027 | — | — | — |
| variant_swap.test | RUN | 0.261174 | 0.956403 | 1.006050 | 0.001357 | 0.001396 | 0.001308 |
| variant_eq_ne.test | RUN | 0.207406 | 0.568548 | 0.703948 | 0.001300 | 0.001500 | 0.001210 |
| variant_eq_ne_cx.test | COMPILE | 0.113103 | 0.272744 | 0.335209 | — | — | — |
| variant_lt_gt.test | RUN | 0.216878 | 0.662083 | 0.764689 | 0.001493 | 0.001488 | 0.001397 |
| variant_lt_gt_cx.test | COMPILE | 0.114052 | 0.265456 | 0.334325 | — | — | — |
| variant_destroy.test | RUN | 0.220348 | 0.649234 | 0.773084 | 0.001402 | 0.001510 | 0.001376 |
| variant_visit.test | RUN | 1.275119 | 4.951871 | 13.137637 | 0.001378 | 0.001561 | 0.001415 |
| variant_convert_construct.test | RUN | 0.280866 | 0.861109 | 1.087192 | 0.001456 | 0.001555 | 0.001368 |
| variant_subset.test | RUN | 0.297545 | 0.908748 | 1.162706 | 0.001360 | 0.001581 | 0.001439 |
| variant_valueless.test | RUN | 0.206499 | 0.591714 | 0.760912 | 0.001315 | 0.001499 | 0.001430 |
| variant_copy_construct_throw.test | RUN | 0.166209 | 0.466799 | 0.539382 | 0.001362 | 0.001604 | 0.001367 |
| variant_move_construct_throw.test | RUN | 0.165744 | 0.449292 | 0.527807 | 0.001441 | 0.001526 | 0.001467 |
| variant_convert_construct_throw.test | RUN | 0.171104 | 0.492252 | 0.579627 | 0.001349 | 0.001407 | 0.001379 |
| variant_copy_assign_throw.test | RUN | 0.162299 | 0.424066 | 0.528053 | 0.001417 | 0.001504 | 0.001284 |
| variant_move_assign_throw.test | RUN | 0.165226 | 0.428191 | 0.532643 | 0.001408 | 0.001606 | 0.001499 |
| variant_get_by_index_nx.test | RUN | 0.411438 | 2.129002 | 1.398029 | 0.001428 | 0.001514 | 0.001369 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.127919 | 0.323997 | 0.398231 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.421187 | 2.390337 | 1.544842 | 0.001584 | 0.001426 | 0.001388 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.117828 | 0.273564 | 0.338522 | — | — | — |
| variant_subset_nx.test | RUN | 0.312257 | 0.903109 | 1.130549 | 0.001546 | 0.001523 | 0.001315 |
| variant_hash.test | RUN | 0.299586 | 1.047984 | 1.039781 | 0.001522 | 0.001544 | 0.001403 |
| variant_trivial.test | RUN | 1.701300 | 5.658979 | 7.538166 | 0.001417 | 0.001532 | 0.001364 |
| variant_special.test | RUN | 1.641257 | 6.223696 | 8.299185 | 0.001657 | 0.001590 | 0.001366 |
| variant_visit_derived.test | RUN | 0.203606 | 0.555438 | 0.790150 | 0.001453 | 0.001519 | 0.001375 |
| variant_many_types.test | RUN | 1.722075 | 7.713281 | 11.273028 | 0.001356 | 0.001518 | 0.001334 |
| variant_visit_r.test | RUN | 0.734845 | 2.517321 | 4.388945 | 0.001508 | 0.001576 | 0.001502 |
| variant_derived_construct.test | COMPILE | 0.117067 | 0.272476 | 0.345571 | — | — | — |
| variant_visit_by_index.test | RUN | 0.263460 | 0.705835 | 1.039270 | 0.001391 | 0.001468 | 0.001509 |
| variant_ostream_insert.test | RUN | 0.202320 | 0.582737 | 0.658435 | 0.001387 | 0.001588 | 0.001533 |
| is_output_streamable.test | RUN | 0.245901 | 1.218827 | 0.949292 | 0.001279 | 0.001499 | 0.001361 |
| variant_json_value_from.test | RUN | 0.371499 | 0.927738 | 1.249755 | 0.001508 | 0.001510 | 0.001451 |
| variant_json_value_to.test | RUN | 0.456839 | 1.317053 | 1.690277 | 0.001484 | 0.001461 | 0.001227 |
| variant_uses_double_storage.test | COMPILE | 0.124683 | 0.284091 | 0.393673 | — | — | — |
| variant_derived_construct2.test | RUN | 0.170422 | 0.467404 | 0.598696 | 0.001323 | 0.001485 | 0.001442 |
| variant_visit_cx.test | COMPILE | 0.116580 | 0.267597 | 0.343842 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.115411 | 0.273318 | 0.313984 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.113268 | 0.265316 | 0.318670 | — | — | — |
| variant_index_type_126.test | RUN | 1.006938 | 2.486001 | 4.857915 | 0.001458 | 0.001464 | 0.001491 |
| variant_index_type_127.test | RUN | 1.029015 | 2.516968 | 4.970486 | 0.001450 | 0.001605 | 0.001355 |
| variant_index_type_128.test | RUN | 1.027419 | 2.539217 | 4.928221 | 0.001305 | 0.001099 | 0.001317 |
| variant_index_type_129.test | RUN | 1.036342 | 2.569492 | 4.934966 | 0.001349 | 0.001433 | 0.001395 |
| variant_index_type_254.test | RUN | 3.725001 | 9.606802 | 15.369022 | 0.001383 | 0.001623 | 0.001579 |
| variant_index_type_255.test | RUN | 3.805077 | 9.684987 | 15.513891 | 0.001389 | 0.001445 | 0.001284 |
| variant_index_type_256.test | RUN | 3.794631 | 9.801559 | 15.793685 | 0.001522 | 0.001480 | 0.001294 |
| variant_index_type_257.test | RUN | 3.872532 | 9.823406 | 15.865668 | 0.001378 | 0.001357 | 0.001386 |
| variant_default_construct_cx_2.test | COMPILE | 0.121348 | 0.273940 | 0.357537 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.117026 | 0.266195 | 0.314149 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.119424 | 0.270005 | 0.314212 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.118214 | 0.265046 | 0.293078 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.115355 | 0.266611 | 0.310313 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.105728 | 0.267279 | 0.307758 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.113728 | 0.256660 | 0.260499 | — | — | — |
| variant_issue_55.test | RUN | 0.195335 | 0.411778 | 0.558780 | 0.001146 | 0.001010 | 0.000990 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.993×, 0.992× | 0.981× |
| clang | 0.988× | 0.980×, 0.996× | 0.986× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001121s | 0.001150s | 0.001136s | byte equality observed |
| quick.test | 10 | 0.001107s | 0.000485s | 0.001127s | byte equality observed |
| variant_alternative.test | 10 | 0.001116s | 0.001125s | 0.001106s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001156s | 0.001136s | 0.001121s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001169s | 0.001169s | 0.001102s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001150s | 0.001126s | 0.001145s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001155s | 0.001159s | 0.001151s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001149s | 0.001140s | 0.001128s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001175s | 0.001137s | 0.001145s | byte equality observed |
| variant_default_construct.test | 10 | 0.001116s | 0.001142s | 0.001133s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001122s | 0.001126s | 0.001119s | byte equality observed |
| variant_destroy.test | 10 | 0.001113s | 0.001130s | 0.001126s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001143s | 0.001146s | 0.001145s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001110s | 0.001145s | 0.001117s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001123s | 0.001128s | 0.001134s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001218s | 0.001223s | 0.001162s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001155s | 0.001152s | 0.001147s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001175s | 0.001226s | 0.001190s | byte equality observed |
| variant_get_by_type_nx.test | 6 | 0.001154s | 0.001132s | 0.001139s | byte equality observed |
| variant_hash.test | 10 | 0.001120s | 0.001125s | 0.001142s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001148s | 0.001149s | 0.001129s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001122s | 0.001162s | 0.001124s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001126s | 0.001152s | 0.001143s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001147s | 0.001155s | 0.001115s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001126s | 0.001127s | 0.001123s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001124s | 0.001132s | 0.001126s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001134s | 0.001133s | 0.001127s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001115s | 0.001143s | 0.001124s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001140s | 0.001146s | 0.001162s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001144s | 0.001155s | 0.001140s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001111s | 0.001124s | 0.001149s | byte equality observed |
| variant_issue_55.test | 10 | 0.001155s | 0.001150s | 0.001145s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001184s | 0.001164s | 0.001167s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001198s | 0.001181s | 0.001148s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001141s | 0.001128s | 0.001129s | byte equality observed |
| variant_many_types.test | 10 | 0.001184s | 0.001147s | 0.001161s | byte equality observed |
| variant_move_assign.test | 10 | 0.001161s | 0.001144s | 0.001132s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001174s | 0.001162s | 0.001167s | byte equality observed |
| variant_move_construct.test | 10 | 0.001147s | 0.001162s | 0.001161s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001186s | 0.001180s | 0.001193s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001156s | 0.001163s | 0.001164s | byte equality observed |
| variant_size.test | 10 | 0.001121s | 0.001153s | 0.001112s | byte equality observed |
| variant_special.test | 10 | 0.001218s | 0.001204s | 0.001214s | byte equality observed |
| variant_subset.test | 10 | 0.001159s | 0.001157s | 0.001154s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001121s | 0.001122s | 0.001115s | byte equality observed |
| variant_swap.test | 10 | 0.001142s | 0.001136s | 0.001113s | byte equality observed |
| variant_trivial.test | 10 | 0.001182s | 0.001179s | 0.001138s | byte equality observed |
| variant_value_assign.test | 10 | 0.001149s | 0.001134s | 0.001119s | byte equality observed |
| variant_value_construct.test | 10 | 0.001144s | 0.001136s | 0.001122s | byte equality observed |
| variant_valueless.test | 10 | 0.001185s | 0.001165s | 0.001149s | byte equality observed |
| variant_visit.test | 10 | 0.001151s | 0.001134s | 0.001130s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001142s | 0.001111s | 0.001106s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001132s | 0.001117s | 0.001093s | byte equality observed |
| variant_visit_r.test | 10 | 0.001159s | 0.001126s | 0.001115s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
