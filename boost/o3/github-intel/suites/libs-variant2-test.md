# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.094972 | 0.205215 | 0.278371 | 0.001192 | 0.000523 | 0.001130 |
| variant_size.test | RUN | 0.155110 | 0.520535 | 0.532941 | 0.001196 | 0.001336 | 0.001319 |
| variant_alternative.test | RUN | 0.217615 | 1.718812 | 0.939101 | 0.001204 | 0.001213 | 0.001165 |
| variant_holds_alternative.test | RUN | 0.145201 | 0.388863 | 0.531738 | 0.001206 | 0.001345 | 0.001159 |
| variant_holds_alternative_cx.test | COMPILE | 0.095645 | 0.222859 | 0.299883 | — | — | — |
| variant_get_by_index.test | RUN | 0.250347 | 1.913061 | 1.158498 | 0.001289 | 0.001433 | 0.001387 |
| variant_get_by_index_cx.test | COMPILE | 0.098461 | 0.235354 | 0.315226 | — | — | — |
| variant_get_by_type.test | RUN | 0.255625 | 2.026221 | 1.243233 | 0.001252 | 0.001185 | 0.001174 |
| variant_get_by_type_cx.test | COMPILE | 0.089168 | 0.201256 | 0.255039 | — | — | — |
| variant_default_construct.test | RUN | 0.242185 | 1.489063 | 1.011123 | 0.000893 | 0.001231 | 0.001171 |
| variant_default_construct_cx.test | COMPILE | 0.097880 | 0.224692 | 0.298528 | — | — | — |
| variant_copy_construct.test | RUN | 0.375873 | 2.519716 | 1.829990 | 0.001148 | 0.001271 | 0.001199 |
| variant_copy_construct_cx.test | COMPILE | 0.108322 | 0.256669 | 0.348260 | — | — | — |
| variant_move_construct.test | RUN | 0.344797 | 2.145069 | 1.630030 | 0.001168 | 0.001227 | 0.001356 |
| variant_move_construct_cx.test | COMPILE | 0.086793 | 0.206425 | 0.253866 | — | — | — |
| variant_value_construct.test | RUN | 0.181277 | 0.527977 | 0.667284 | 0.001113 | 0.001270 | 0.001170 |
| variant_value_construct_cx.test | COMPILE | 0.100397 | 0.236309 | 0.325237 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.190398 | 0.536473 | 0.694288 | 0.001170 | 0.001173 | 0.001118 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.097773 | 0.234995 | 0.309605 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.185296 | 0.538747 | 0.682868 | 0.001160 | 0.001256 | 0.001200 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.099772 | 0.236892 | 0.312662 | — | — | — |
| variant_copy_assign.test | RUN | 0.253977 | 1.733631 | 1.093167 | 0.001195 | 0.001229 | 0.001283 |
| variant_copy_assign_cx.test | COMPILE | 0.085040 | 0.209213 | 0.249490 | — | — | — |
| variant_move_assign.test | RUN | 0.251899 | 1.715552 | 1.082758 | 0.001150 | 0.001269 | 0.001125 |
| variant_move_assign_cx.test | COMPILE | 0.086282 | 0.203584 | 0.256868 | — | — | — |
| variant_value_assign.test | RUN | 0.192940 | 0.598423 | 0.737600 | 0.001120 | 0.001444 | 0.001038 |
| variant_value_assign_cx.test | COMPILE | 0.086292 | 0.199108 | 0.256531 | — | — | — |
| variant_emplace_index.test | RUN | 0.212151 | 0.697199 | 0.824288 | 0.001282 | 0.001280 | 0.001181 |
| variant_emplace_index_cx.test | COMPILE | 0.085735 | 0.202191 | 0.259084 | — | — | — |
| variant_emplace_type.test | RUN | 0.192326 | 0.592076 | 0.736899 | 0.001291 | 0.001349 | 0.001255 |
| variant_emplace_type_cx.test | COMPILE | 0.087933 | 0.206398 | 0.261142 | — | — | — |
| variant_swap.test | RUN | 0.201305 | 0.742198 | 0.800376 | 0.001179 | 0.001244 | 0.001163 |
| variant_eq_ne.test | RUN | 0.160482 | 0.437428 | 0.560717 | 0.001020 | 0.001209 | 0.001279 |
| variant_eq_ne_cx.test | COMPILE | 0.086529 | 0.202705 | 0.266475 | — | — | — |
| variant_lt_gt.test | RUN | 0.165649 | 0.508953 | 0.594287 | 0.001258 | 0.001278 | 0.001301 |
| variant_lt_gt_cx.test | COMPILE | 0.087591 | 0.200977 | 0.248330 | — | — | — |
| variant_destroy.test | RUN | 0.166817 | 0.508632 | 0.607661 | 0.001161 | 0.001389 | 0.001293 |
| variant_visit.test | RUN | 1.065196 | 3.835017 | 10.495558 | 0.001099 | 0.001250 | 0.001225 |
| variant_convert_construct.test | RUN | 0.217569 | 0.661654 | 0.843149 | 0.001153 | 0.001381 | 0.001359 |
| variant_subset.test | RUN | 0.216502 | 0.708190 | 0.912574 | 0.001330 | 0.001376 | 0.001157 |
| variant_valueless.test | RUN | 0.161189 | 0.466194 | 0.614561 | 0.001229 | 0.001422 | 0.001305 |
| variant_copy_construct_throw.test | RUN | 0.128681 | 0.336677 | 0.419814 | 0.001107 | 0.001393 | 0.001394 |
| variant_move_construct_throw.test | RUN | 0.126752 | 0.324973 | 0.426356 | 0.001456 | 0.001372 | 0.001156 |
| variant_convert_construct_throw.test | RUN | 0.134657 | 0.368008 | 0.446598 | 0.001128 | 0.001198 | 0.001119 |
| variant_copy_assign_throw.test | RUN | 0.119735 | 0.321130 | 0.422005 | 0.001256 | 0.001270 | 0.001378 |
| variant_move_assign_throw.test | RUN | 0.122781 | 0.322500 | 0.426714 | 0.001305 | 0.001419 | 0.001258 |
| variant_get_by_index_nx.test | RUN | 0.316540 | 1.604963 | 1.115714 | 0.001090 | 0.001201 | 0.001242 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.101018 | 0.238608 | 0.304393 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.309674 | 1.783520 | 1.203954 | 0.001327 | 0.001188 | 0.001259 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.086709 | 0.201516 | 0.250445 | — | — | — |
| variant_subset_nx.test | RUN | 0.231570 | 0.693640 | 0.925929 | 0.001181 | 0.001222 | 0.001185 |
| variant_hash.test | RUN | 0.223321 | 0.805112 | 0.839483 | 0.001275 | 0.001384 | 0.001245 |
| variant_trivial.test | RUN | 1.266635 | 4.567991 | 6.235064 | 0.001201 | 0.001396 | 0.001210 |
| variant_special.test | RUN | 1.223202 | 5.005440 | 6.660564 | 0.001218 | 0.001229 | 0.001338 |
| variant_visit_derived.test | RUN | 0.156967 | 0.415749 | 0.623022 | 0.001337 | 0.001380 | 0.001233 |
| variant_many_types.test | RUN | 1.389637 | 6.090040 | 8.812190 | 0.001141 | 0.001395 | 0.001395 |
| variant_visit_r.test | RUN | 0.584865 | 1.948481 | 3.548499 | 0.001300 | 0.001295 | 0.001327 |
| variant_derived_construct.test | COMPILE | 0.094533 | 0.214481 | 0.271379 | — | — | — |
| variant_visit_by_index.test | RUN | 0.207103 | 0.533191 | 0.828363 | 0.001106 | 0.001208 | 0.001469 |
| variant_ostream_insert.test | RUN | 0.146730 | 0.446172 | 0.490457 | 0.001157 | 0.001232 | 0.001193 |
| is_output_streamable.test | RUN | 0.186507 | 0.939990 | 0.739839 | 0.001139 | 0.001301 | 0.001481 |
| variant_json_value_from.test | RUN | 0.285346 | 0.705323 | 1.014011 | 0.001341 | 0.001263 | 0.001380 |
| variant_json_value_to.test | RUN | 0.354602 | 1.007366 | 1.308400 | 0.001117 | 0.001366 | 0.001325 |
| variant_uses_double_storage.test | COMPILE | 0.092170 | 0.213579 | 0.291442 | — | — | — |
| variant_derived_construct2.test | RUN | 0.125598 | 0.349854 | 0.444618 | 0.001220 | 0.001217 | 0.001132 |
| variant_visit_cx.test | COMPILE | 0.090030 | 0.202979 | 0.252836 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.087045 | 0.199322 | 0.265732 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.085244 | 0.198423 | 0.261399 | — | — | — |
| variant_index_type_126.test | RUN | 0.786058 | 1.953845 | 3.823491 | 0.001251 | 0.001206 | 0.001136 |
| variant_index_type_127.test | RUN | 0.789616 | 1.970494 | 3.988720 | 0.001188 | 0.001250 | 0.001215 |
| variant_index_type_128.test | RUN | 0.805128 | 1.962979 | 4.063356 | 0.001156 | 0.001236 | 0.001260 |
| variant_index_type_129.test | RUN | 0.805270 | 2.002935 | 3.936255 | 0.001247 | 0.001199 | 0.001365 |
| variant_index_type_254.test | RUN | 2.832062 | 7.703738 | 12.449070 | 0.001190 | 0.001379 | 0.001286 |
| variant_index_type_255.test | RUN | 2.831879 | 7.871457 | 12.554662 | 0.001288 | 0.001298 | 0.001316 |
| variant_index_type_256.test | RUN | 2.862900 | 7.861726 | 12.819498 | 0.001168 | 0.001419 | 0.001249 |
| variant_index_type_257.test | RUN | 2.899023 | 8.073860 | 12.935119 | 0.001214 | 0.001349 | 0.001161 |
| variant_default_construct_cx_2.test | COMPILE | 0.089990 | 0.215582 | 0.271288 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.087375 | 0.200231 | 0.242197 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.086347 | 0.211264 | 0.270848 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.087188 | 0.197680 | 0.254579 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.085762 | 0.197821 | 0.237295 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.086655 | 0.199088 | 0.251219 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.077720 | 0.134741 | 0.170252 | — | — | — |
| variant_issue_55.test | RUN | 0.140847 | 0.366264 | 0.389967 | 0.000903 | 0.000920 | 0.000905 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.994×, 0.994× | 1.002× |
| clang | 0.992× | 0.980×, 1.004× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000794s | 0.000806s | 0.000819s | byte equality observed |
| quick.test | 10 | 0.000791s | 0.000351s | 0.000788s | byte equality observed |
| variant_alternative.test | 10 | 0.000800s | 0.000803s | 0.000787s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000832s | 0.000789s | 0.000814s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000853s | 0.000831s | 0.000799s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000811s | 0.000833s | 0.000810s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000829s | 0.000843s | 0.000836s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000805s | 0.000833s | 0.000822s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000806s | 0.000802s | 0.000807s | byte equality observed |
| variant_default_construct.test | 10 | 0.000835s | 0.000832s | 0.000809s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000829s | 0.000830s | 0.000832s | byte equality observed |
| variant_destroy.test | 10 | 0.000803s | 0.000813s | 0.000806s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000793s | 0.000789s | 0.000811s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000806s | 0.000804s | 0.000787s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000795s | 0.000797s | 0.000793s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000840s | 0.000844s | 0.000829s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000799s | 0.000804s | 0.000816s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000832s | 0.000824s | 0.000822s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000826s | 0.000821s | 0.000813s | byte equality observed |
| variant_hash.test | 10 | 0.000795s | 0.000793s | 0.000799s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000789s | 0.000820s | 0.000788s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000812s | 0.000811s | 0.000812s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000817s | 0.000844s | 0.000791s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000793s | 0.000809s | 0.000815s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000790s | 0.000793s | 0.000802s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000793s | 0.000821s | 0.000788s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000803s | 0.000813s | 0.000813s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000791s | 0.000800s | 0.000818s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000783s | 0.000803s | 0.000822s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000796s | 0.000763s | 0.000783s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000796s | 0.000801s | 0.000805s | byte equality observed |
| variant_issue_55.test | 10 | 0.000812s | 0.000814s | 0.000800s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000856s | 0.000821s | 0.000818s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000857s | 0.000830s | 0.000825s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000804s | 0.000811s | 0.000791s | byte equality observed |
| variant_many_types.test | 10 | 0.000826s | 0.000824s | 0.000824s | byte equality observed |
| variant_move_assign.test | 10 | 0.000809s | 0.000791s | 0.000828s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000829s | 0.000821s | 0.000811s | byte equality observed |
| variant_move_construct.test | 10 | 0.000811s | 0.000808s | 0.000789s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000812s | 0.000815s | 0.000811s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000819s | 0.000824s | 0.000831s | byte equality observed |
| variant_size.test | 10 | 0.000797s | 0.000794s | 0.000807s | byte equality observed |
| variant_special.test | 10 | 0.000842s | 0.000852s | 0.000829s | byte equality observed |
| variant_subset.test | 10 | 0.000830s | 0.000836s | 0.000825s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000805s | 0.000793s | 0.000800s | byte equality observed |
| variant_swap.test | 10 | 0.000806s | 0.000818s | 0.000829s | byte equality observed |
| variant_trivial.test | 10 | 0.000834s | 0.000838s | 0.000789s | byte equality observed |
| variant_value_assign.test | 10 | 0.000808s | 0.000806s | 0.000790s | byte equality observed |
| variant_value_construct.test | 10 | 0.000786s | 0.000787s | 0.000794s | byte equality observed |
| variant_valueless.test | 10 | 0.000813s | 0.000830s | 0.000820s | byte equality observed |
| variant_visit.test | 10 | 0.000801s | 0.000793s | 0.000819s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000796s | 0.000798s | 0.000811s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000823s | 0.000782s | 0.000804s | byte equality observed |
| variant_visit_r.test | 10 | 0.000781s | 0.000783s | 0.000753s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
