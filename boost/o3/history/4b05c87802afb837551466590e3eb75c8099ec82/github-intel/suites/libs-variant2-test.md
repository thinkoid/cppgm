# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.092478 | 0.212647 | 0.282603 | 0.001164 | 0.000547 | 0.001270 |
| variant_size.test | RUN | 0.169942 | 0.533416 | 0.545973 | 0.001421 | 0.001385 | 0.001289 |
| variant_alternative.test | RUN | 0.221398 | 1.769998 | 0.951665 | 0.001502 | 0.001292 | 0.001175 |
| variant_holds_alternative.test | RUN | 0.152845 | 0.399411 | 0.531741 | 0.001258 | 0.001315 | 0.001163 |
| variant_holds_alternative_cx.test | COMPILE | 0.099943 | 0.226694 | 0.299203 | — | — | — |
| variant_get_by_index.test | RUN | 0.255113 | 1.933567 | 1.166685 | 0.001581 | 0.001454 | 0.001278 |
| variant_get_by_index_cx.test | COMPILE | 0.101679 | 0.243841 | 0.311004 | — | — | — |
| variant_get_by_type.test | RUN | 0.272560 | 2.093369 | 1.255174 | 0.001256 | 0.001412 | 0.001319 |
| variant_get_by_type_cx.test | COMPILE | 0.090661 | 0.205764 | 0.264283 | — | — | — |
| variant_default_construct.test | RUN | 0.247715 | 1.504781 | 0.987284 | 0.001221 | 0.001322 | 0.001147 |
| variant_default_construct_cx.test | COMPILE | 0.104438 | 0.229933 | 0.302983 | — | — | — |
| variant_copy_construct.test | RUN | 0.390136 | 2.565569 | 1.837926 | 0.001362 | 0.001187 | 0.001142 |
| variant_copy_construct_cx.test | COMPILE | 0.116692 | 0.254726 | 0.356009 | — | — | — |
| variant_move_construct.test | RUN | 0.359837 | 2.193298 | 1.668184 | 0.001153 | 0.001263 | 0.001199 |
| variant_move_construct_cx.test | COMPILE | 0.090764 | 0.205489 | 0.271100 | — | — | — |
| variant_value_construct.test | RUN | 0.189205 | 0.533257 | 0.696346 | 0.001237 | 0.001216 | 0.001337 |
| variant_value_construct_cx.test | COMPILE | 0.104543 | 0.238583 | 0.325390 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.200853 | 0.543333 | 0.697958 | 0.001229 | 0.001314 | 0.001177 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.104303 | 0.242636 | 0.312524 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.192840 | 0.534943 | 0.693140 | 0.001308 | 0.001288 | 0.001281 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.108249 | 0.241009 | 0.314123 | — | — | — |
| variant_copy_assign.test | RUN | 0.263910 | 1.761515 | 1.100192 | 0.001252 | 0.001192 | 0.001082 |
| variant_copy_assign_cx.test | COMPILE | 0.093008 | 0.203749 | 0.249112 | — | — | — |
| variant_move_assign.test | RUN | 0.263186 | 1.752879 | 1.091498 | 0.001375 | 0.001328 | 0.001121 |
| variant_move_assign_cx.test | COMPILE | 0.094893 | 0.206086 | 0.260565 | — | — | — |
| variant_value_assign.test | RUN | 0.196939 | 0.603890 | 0.738754 | 0.001296 | 0.001318 | 0.001138 |
| variant_value_assign_cx.test | COMPILE | 0.091697 | 0.208175 | 0.260627 | — | — | — |
| variant_emplace_index.test | RUN | 0.226393 | 0.707304 | 0.828637 | 0.001271 | 0.001298 | 0.001300 |
| variant_emplace_index_cx.test | COMPILE | 0.094741 | 0.194293 | 0.258209 | — | — | — |
| variant_emplace_type.test | RUN | 0.200199 | 0.592007 | 0.735946 | 0.001309 | 0.001294 | 0.001252 |
| variant_emplace_type_cx.test | COMPILE | 0.095458 | 0.198496 | 0.260224 | — | — | — |
| variant_swap.test | RUN | 0.212984 | 0.752778 | 0.799148 | 0.001385 | 0.001273 | 0.001211 |
| variant_eq_ne.test | RUN | 0.171286 | 0.444014 | 0.571674 | 0.001134 | 0.001221 | 0.001196 |
| variant_eq_ne_cx.test | COMPILE | 0.091125 | 0.205860 | 0.270032 | — | — | — |
| variant_lt_gt.test | RUN | 0.174214 | 0.510924 | 0.592981 | 0.001268 | 0.001286 | 0.001288 |
| variant_lt_gt_cx.test | COMPILE | 0.095275 | 0.203146 | 0.256726 | — | — | — |
| variant_destroy.test | RUN | 0.182486 | 0.505729 | 0.616176 | 0.001327 | 0.001251 | 0.001218 |
| variant_visit.test | RUN | 1.121472 | 3.942316 | 10.725003 | 0.001165 | 0.001342 | 0.001206 |
| variant_convert_construct.test | RUN | 0.225188 | 0.666998 | 0.874615 | 0.001285 | 0.001205 | 0.001185 |
| variant_subset.test | RUN | 0.231482 | 0.745681 | 0.909343 | 0.001297 | 0.001481 | 0.001176 |
| variant_valueless.test | RUN | 0.165594 | 0.456437 | 0.602975 | 0.001266 | 0.001320 | 0.001258 |
| variant_copy_construct_throw.test | RUN | 0.132289 | 0.339388 | 0.421800 | 0.001383 | 0.001424 | 0.001295 |
| variant_move_construct_throw.test | RUN | 0.136757 | 0.345229 | 0.416670 | 0.001296 | 0.001316 | 0.001309 |
| variant_convert_construct_throw.test | RUN | 0.132756 | 0.365279 | 0.453153 | 0.001312 | 0.001297 | 0.001268 |
| variant_copy_assign_throw.test | RUN | 0.131599 | 0.321542 | 0.416255 | 0.001326 | 0.001302 | 0.001242 |
| variant_move_assign_throw.test | RUN | 0.131250 | 0.324983 | 0.422133 | 0.001394 | 0.001192 | 0.001295 |
| variant_get_by_index_nx.test | RUN | 0.318802 | 1.609185 | 1.122238 | 0.001299 | 0.001310 | 0.001155 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.103973 | 0.228767 | 0.300771 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.322506 | 1.830959 | 1.223594 | 0.001212 | 0.001433 | 0.001399 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.090887 | 0.209188 | 0.260701 | — | — | — |
| variant_subset_nx.test | RUN | 0.241639 | 0.698527 | 0.927009 | 0.001470 | 0.001239 | 0.001239 |
| variant_hash.test | RUN | 0.238653 | 0.802374 | 0.828983 | 0.001371 | 0.001243 | 0.001325 |
| variant_trivial.test | RUN | 1.373440 | 4.566009 | 6.134190 | 0.001234 | 0.001362 | 0.001270 |
| variant_special.test | RUN | 1.324775 | 4.918153 | 6.513986 | 0.001453 | 0.001397 | 0.001274 |
| variant_visit_derived.test | RUN | 0.162706 | 0.412779 | 0.636763 | 0.001410 | 0.001256 | 0.001291 |
| variant_many_types.test | RUN | 1.437824 | 6.250488 | 9.132656 | 0.001449 | 0.001342 | 0.001429 |
| variant_visit_r.test | RUN | 0.587439 | 1.985187 | 3.550981 | 0.001315 | 0.001242 | 0.001375 |
| variant_derived_construct.test | COMPILE | 0.092736 | 0.191337 | 0.279289 | — | — | — |
| variant_visit_by_index.test | RUN | 0.213123 | 0.523018 | 0.765601 | 0.001266 | 0.001426 | 0.001190 |
| variant_ostream_insert.test | RUN | 0.156586 | 0.450625 | 0.537374 | 0.001340 | 0.001335 | 0.001103 |
| is_output_streamable.test | RUN | 0.194843 | 0.924034 | 0.771286 | 0.001224 | 0.001372 | 0.001397 |
| variant_json_value_from.test | RUN | 0.293315 | 0.748365 | 0.953869 | 0.001424 | 0.001309 | 0.001248 |
| variant_json_value_to.test | RUN | 0.369682 | 1.024053 | 1.329906 | 0.001371 | 0.001292 | 0.001204 |
| variant_uses_double_storage.test | COMPILE | 0.098492 | 0.217355 | 0.310578 | — | — | — |
| variant_derived_construct2.test | RUN | 0.137329 | 0.358994 | 0.450972 | 0.001265 | 0.001219 | 0.001128 |
| variant_visit_cx.test | COMPILE | 0.093244 | 0.206784 | 0.259015 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089979 | 0.206997 | 0.262069 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.090361 | 0.202291 | 0.257048 | — | — | — |
| variant_index_type_126.test | RUN | 0.856392 | 1.965747 | 3.821241 | 0.001258 | 0.001237 | 0.001404 |
| variant_index_type_127.test | RUN | 0.851735 | 1.973521 | 3.900562 | 0.001197 | 0.001278 | 0.001284 |
| variant_index_type_128.test | RUN | 0.873092 | 2.030023 | 3.931697 | 0.001184 | 0.001158 | 0.001141 |
| variant_index_type_129.test | RUN | 0.863897 | 2.007785 | 3.934111 | 0.001295 | 0.001483 | 0.001144 |
| variant_index_type_254.test | RUN | 3.172394 | 7.996736 | 12.685753 | 0.001376 | 0.001126 | 0.001485 |
| variant_index_type_255.test | RUN | 3.189120 | 7.996240 | 12.734292 | 0.001166 | 0.001428 | 0.001252 |
| variant_index_type_256.test | RUN | 3.217889 | 8.232716 | 13.039046 | 0.001228 | 0.001287 | 0.001414 |
| variant_index_type_257.test | RUN | 3.212850 | 8.325725 | 13.013964 | 0.001224 | 0.001181 | 0.001125 |
| variant_default_construct_cx_2.test | COMPILE | 0.089070 | 0.202375 | 0.245469 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.095290 | 0.204261 | 0.267504 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.089769 | 0.204955 | 0.263761 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.093357 | 0.204321 | 0.256324 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.089971 | 0.204137 | 0.255241 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.087405 | 0.202235 | 0.218329 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.070274 | 0.180957 | 0.233883 | — | — | — |
| variant_issue_55.test | RUN | 0.126340 | 0.364862 | 0.416467 | 0.000887 | 0.000981 | 0.000941 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.985×, 0.992× | 0.999× |
| clang | 0.999× | 0.992×, 1.006× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000806s | 0.000820s | 0.000808s | byte equality observed |
| quick.test | 10 | 0.000782s | 0.000369s | 0.000798s | byte equality observed |
| variant_alternative.test | 10 | 0.000813s | 0.000810s | 0.000807s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000801s | 0.000832s | 0.000797s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000849s | 0.000829s | 0.000835s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000826s | 0.000814s | 0.000823s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000835s | 0.000832s | 0.000841s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000833s | 0.000812s | 0.000839s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000867s | 0.000840s | 0.000854s | byte equality observed |
| variant_default_construct.test | 10 | 0.000827s | 0.000846s | 0.000822s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000819s | 0.000824s | 0.000814s | byte equality observed |
| variant_destroy.test | 10 | 0.000832s | 0.000809s | 0.000819s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000839s | 0.000825s | 0.000838s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000841s | 0.000813s | 0.000827s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000811s | 0.000782s | 0.000828s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000842s | 0.000873s | 0.000879s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000824s | 0.000811s | 0.000818s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000846s | 0.000887s | 0.000857s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000828s | 0.000845s | 0.000818s | byte equality observed |
| variant_hash.test | 10 | 0.000821s | 0.000826s | 0.000806s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000836s | 0.000810s | 0.000819s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000828s | 0.000835s | 0.000852s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000817s | 0.000808s | 0.000838s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000805s | 0.000813s | 0.000824s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000826s | 0.000832s | 0.000821s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000831s | 0.000786s | 0.000793s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000824s | 0.000799s | 0.000793s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000817s | 0.000833s | 0.000822s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000812s | 0.000818s | 0.000819s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000816s | 0.000851s | 0.000817s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000810s | 0.000834s | 0.000809s | byte equality observed |
| variant_issue_55.test | 10 | 0.000816s | 0.000825s | 0.000817s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000861s | 0.000875s | 0.000838s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000865s | 0.000864s | 0.000842s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000810s | 0.000809s | 0.000849s | byte equality observed |
| variant_many_types.test | 10 | 0.000852s | 0.000840s | 0.000843s | byte equality observed |
| variant_move_assign.test | 10 | 0.000830s | 0.000832s | 0.000844s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000847s | 0.000860s | 0.000849s | byte equality observed |
| variant_move_construct.test | 10 | 0.000823s | 0.000852s | 0.000802s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000840s | 0.000856s | 0.000815s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000825s | 0.000864s | 0.000861s | byte equality observed |
| variant_size.test | 10 | 0.000803s | 0.000836s | 0.000829s | byte equality observed |
| variant_special.test | 10 | 0.000886s | 0.000869s | 0.000842s | byte equality observed |
| variant_subset.test | 10 | 0.000826s | 0.000826s | 0.000821s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000817s | 0.000823s | 0.000831s | byte equality observed |
| variant_swap.test | 10 | 0.000826s | 0.000838s | 0.000820s | byte equality observed |
| variant_trivial.test | 10 | 0.000851s | 0.000858s | 0.000825s | byte equality observed |
| variant_value_assign.test | 10 | 0.000834s | 0.000822s | 0.000816s | byte equality observed |
| variant_value_construct.test | 10 | 0.000816s | 0.000846s | 0.000800s | byte equality observed |
| variant_valueless.test | 10 | 0.000857s | 0.000872s | 0.000828s | byte equality observed |
| variant_visit.test | 10 | 0.000826s | 0.000831s | 0.000843s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000828s | 0.000817s | 0.000806s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000809s | 0.000816s | 0.000839s | byte equality observed |
| variant_visit_r.test | 10 | 0.000804s | 0.000816s | 0.000829s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
