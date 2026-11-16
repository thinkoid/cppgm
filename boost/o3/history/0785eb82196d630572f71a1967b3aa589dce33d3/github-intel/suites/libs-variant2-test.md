# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091351 | 0.224393 | 0.277876 | 0.001412 | 0.000623 | 0.001140 |
| variant_size.test | RUN | 0.165332 | 0.539370 | 0.541416 | 0.001300 | 0.001380 | 0.001352 |
| variant_alternative.test | RUN | 0.216690 | 1.771842 | 0.942976 | 0.001517 | 0.001528 | 0.001123 |
| variant_holds_alternative.test | RUN | 0.148947 | 0.400248 | 0.524103 | 0.001201 | 0.001466 | 0.001259 |
| variant_holds_alternative_cx.test | COMPILE | 0.097598 | 0.233143 | 0.289566 | — | — | — |
| variant_get_by_index.test | RUN | 0.249151 | 1.935824 | 1.149717 | 0.001530 | 0.001613 | 0.001411 |
| variant_get_by_index_cx.test | COMPILE | 0.099817 | 0.237997 | 0.307781 | — | — | — |
| variant_get_by_type.test | RUN | 0.264183 | 2.108362 | 1.234070 | 0.001300 | 0.001375 | 0.001293 |
| variant_get_by_type_cx.test | COMPILE | 0.089214 | 0.211262 | 0.260847 | — | — | — |
| variant_default_construct.test | RUN | 0.244856 | 1.529383 | 0.979300 | 0.001151 | 0.001455 | 0.001326 |
| variant_default_construct_cx.test | COMPILE | 0.101726 | 0.222968 | 0.299570 | — | — | — |
| variant_copy_construct.test | RUN | 0.380891 | 2.565228 | 1.793115 | 0.001252 | 0.001217 | 0.001257 |
| variant_copy_construct_cx.test | COMPILE | 0.111279 | 0.257686 | 0.367038 | — | — | — |
| variant_move_construct.test | RUN | 0.354333 | 2.219988 | 1.642894 | 0.001464 | 0.001277 | 0.001190 |
| variant_move_construct_cx.test | COMPILE | 0.088615 | 0.210291 | 0.264516 | — | — | — |
| variant_value_construct.test | RUN | 0.187278 | 0.544907 | 0.683254 | 0.001221 | 0.001446 | 0.001250 |
| variant_value_construct_cx.test | COMPILE | 0.104089 | 0.246329 | 0.318940 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.192322 | 0.554851 | 0.690947 | 0.001228 | 0.001454 | 0.001164 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.103065 | 0.246785 | 0.315733 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.186269 | 0.546454 | 0.669827 | 0.001242 | 0.001349 | 0.001159 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.103439 | 0.237752 | 0.308520 | — | — | — |
| variant_copy_assign.test | RUN | 0.260510 | 1.770753 | 1.080603 | 0.001242 | 0.001402 | 0.001202 |
| variant_copy_assign_cx.test | COMPILE | 0.091232 | 0.210042 | 0.246662 | — | — | — |
| variant_move_assign.test | RUN | 0.262602 | 1.786425 | 1.076727 | 0.001234 | 0.001506 | 0.001066 |
| variant_move_assign_cx.test | COMPILE | 0.090377 | 0.214407 | 0.263130 | — | — | — |
| variant_value_assign.test | RUN | 0.199908 | 0.615638 | 0.748509 | 0.001289 | 0.001451 | 0.001099 |
| variant_value_assign_cx.test | COMPILE | 0.090231 | 0.206217 | 0.261071 | — | — | — |
| variant_emplace_index.test | RUN | 0.222387 | 0.708333 | 0.820166 | 0.001323 | 0.001380 | 0.001287 |
| variant_emplace_index_cx.test | COMPILE | 0.089346 | 0.213625 | 0.261180 | — | — | — |
| variant_emplace_type.test | RUN | 0.203125 | 0.611752 | 0.724092 | 0.001335 | 0.001531 | 0.001335 |
| variant_emplace_type_cx.test | COMPILE | 0.091042 | 0.204755 | 0.257393 | — | — | — |
| variant_swap.test | RUN | 0.206463 | 0.753871 | 0.790336 | 0.001179 | 0.001408 | 0.001223 |
| variant_eq_ne.test | RUN | 0.163693 | 0.458276 | 0.559887 | 0.001282 | 0.001352 | 0.001203 |
| variant_eq_ne_cx.test | COMPILE | 0.087930 | 0.210303 | 0.264558 | — | — | — |
| variant_lt_gt.test | RUN | 0.170455 | 0.508336 | 0.587146 | 0.001427 | 0.001435 | 0.001229 |
| variant_lt_gt_cx.test | COMPILE | 0.090883 | 0.208717 | 0.249522 | — | — | — |
| variant_destroy.test | RUN | 0.180748 | 0.510218 | 0.604476 | 0.001280 | 0.001496 | 0.001204 |
| variant_visit.test | RUN | 1.091570 | 4.066712 | 10.364325 | 0.001321 | 0.001154 | 0.001156 |
| variant_convert_construct.test | RUN | 0.220203 | 0.682910 | 0.866430 | 0.001307 | 0.001539 | 0.001152 |
| variant_subset.test | RUN | 0.225324 | 0.752815 | 0.921602 | 0.001417 | 0.001598 | 0.001244 |
| variant_valueless.test | RUN | 0.163549 | 0.463646 | 0.581492 | 0.001331 | 0.001408 | 0.001302 |
| variant_copy_construct_throw.test | RUN | 0.132661 | 0.346379 | 0.421851 | 0.001246 | 0.001782 | 0.001228 |
| variant_move_construct_throw.test | RUN | 0.131178 | 0.348471 | 0.418065 | 0.001308 | 0.001509 | 0.001330 |
| variant_convert_construct_throw.test | RUN | 0.133081 | 0.368847 | 0.444938 | 0.001227 | 0.001510 | 0.001184 |
| variant_copy_assign_throw.test | RUN | 0.129881 | 0.330292 | 0.416328 | 0.001189 | 0.001584 | 0.001329 |
| variant_move_assign_throw.test | RUN | 0.129114 | 0.328358 | 0.423538 | 0.001293 | 0.001495 | 0.001280 |
| variant_get_by_index_nx.test | RUN | 0.313863 | 1.664593 | 1.097523 | 0.001316 | 0.001456 | 0.001273 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.102877 | 0.247971 | 0.309010 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.316764 | 1.835509 | 1.168885 | 0.001300 | 0.001308 | 0.001201 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.088366 | 0.206748 | 0.261285 | — | — | — |
| variant_subset_nx.test | RUN | 0.235000 | 0.714072 | 0.911860 | 0.001385 | 0.001435 | 0.001302 |
| variant_hash.test | RUN | 0.232014 | 0.825727 | 0.834406 | 0.001523 | 0.001328 | 0.001190 |
| variant_trivial.test | RUN | 1.299229 | 4.678724 | 6.111723 | 0.001446 | 0.001524 | 0.001251 |
| variant_special.test | RUN | 1.267189 | 5.107597 | 6.554190 | 0.001433 | 0.001516 | 0.001229 |
| variant_visit_derived.test | RUN | 0.156945 | 0.428203 | 0.619158 | 0.001288 | 0.001475 | 0.001149 |
| variant_many_types.test | RUN | 1.419348 | 6.202242 | 8.743516 | 0.001257 | 0.001427 | 0.001286 |
| variant_visit_r.test | RUN | 0.575275 | 2.027249 | 3.384331 | 0.001284 | 0.001603 | 0.001200 |
| variant_derived_construct.test | COMPILE | 0.091998 | 0.221776 | 0.262717 | — | — | — |
| variant_visit_by_index.test | RUN | 0.202654 | 0.552950 | 0.805783 | 0.001193 | 0.001227 | 0.001198 |
| variant_ostream_insert.test | RUN | 0.148535 | 0.464485 | 0.540335 | 0.001604 | 0.001444 | 0.001273 |
| is_output_streamable.test | RUN | 0.196212 | 0.963328 | 0.726835 | 0.001256 | 0.001330 | 0.001176 |
| variant_json_value_from.test | RUN | 0.284782 | 0.731674 | 0.997905 | 0.001271 | 0.001244 | 0.001282 |
| variant_json_value_to.test | RUN | 0.359426 | 1.035381 | 1.287048 | 0.001459 | 0.001378 | 0.001131 |
| variant_uses_double_storage.test | COMPILE | 0.096781 | 0.219404 | 0.309002 | — | — | — |
| variant_derived_construct2.test | RUN | 0.133674 | 0.366864 | 0.448389 | 0.001230 | 0.001466 | 0.001147 |
| variant_visit_cx.test | COMPILE | 0.094329 | 0.208033 | 0.243491 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089699 | 0.204949 | 0.245242 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.089402 | 0.207331 | 0.246198 | — | — | — |
| variant_index_type_126.test | RUN | 0.820586 | 2.010937 | 3.751996 | 0.001445 | 0.001367 | 0.001226 |
| variant_index_type_127.test | RUN | 0.820305 | 2.018496 | 3.892348 | 0.001247 | 0.001367 | 0.001462 |
| variant_index_type_128.test | RUN | 0.833784 | 2.091864 | 3.897300 | 0.001432 | 0.001284 | 0.001093 |
| variant_index_type_129.test | RUN | 0.832740 | 2.014584 | 3.893335 | 0.001411 | 0.001226 | 0.001122 |
| variant_index_type_254.test | RUN | 2.914022 | 7.884482 | 12.208894 | 0.001218 | 0.001362 | 0.001340 |
| variant_index_type_255.test | RUN | 2.929052 | 8.096890 | 12.566716 | 0.001221 | 0.001507 | 0.001234 |
| variant_index_type_256.test | RUN | 2.940863 | 8.094633 | 12.542696 | 0.001488 | 0.001315 | 0.001164 |
| variant_index_type_257.test | RUN | 2.963482 | 8.336648 | 12.672251 | 0.001233 | 0.001256 | 0.001304 |
| variant_default_construct_cx_2.test | COMPILE | 0.089958 | 0.220796 | 0.288234 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.088337 | 0.198842 | 0.267106 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.092629 | 0.220612 | 0.259689 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.090320 | 0.205558 | 0.256627 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.088665 | 0.208075 | 0.246899 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.089671 | 0.190375 | 0.256827 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.069871 | 0.163580 | 0.227078 | — | — | — |
| variant_issue_55.test | RUN | 0.121044 | 0.361810 | 0.385051 | 0.000907 | 0.001042 | 0.000884 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.990×, 0.984× | 0.991× |
| clang | 0.989× | 0.983×, 0.995× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000796s | 0.000797s | 0.000812s | byte equality observed |
| quick.test | 10 | 0.000801s | 0.000365s | 0.000792s | byte equality observed |
| variant_alternative.test | 10 | 0.000801s | 0.000802s | 0.000782s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000814s | 0.000824s | 0.000818s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000849s | 0.000847s | 0.000825s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000834s | 0.000812s | 0.000781s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000834s | 0.000830s | 0.000808s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000808s | 0.000807s | 0.000832s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000820s | 0.000821s | 0.000819s | byte equality observed |
| variant_default_construct.test | 10 | 0.000786s | 0.000838s | 0.000795s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000790s | 0.000804s | 0.000818s | byte equality observed |
| variant_destroy.test | 10 | 0.000812s | 0.000788s | 0.000800s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000812s | 0.000801s | 0.000819s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000827s | 0.000793s | 0.000802s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000823s | 0.000816s | 0.000794s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000865s | 0.000866s | 0.000841s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000799s | 0.000803s | 0.000791s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000841s | 0.000830s | 0.000835s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000811s | 0.000811s | 0.000796s | byte equality observed |
| variant_hash.test | 10 | 0.000802s | 0.000807s | 0.000805s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000811s | 0.000792s | 0.000780s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000844s | 0.000821s | 0.000797s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000851s | 0.000792s | 0.000827s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000824s | 0.000786s | 0.000825s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000803s | 0.000824s | 0.000821s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000795s | 0.000799s | 0.000790s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000810s | 0.000777s | 0.000807s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000804s | 0.000782s | 0.000824s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000837s | 0.000790s | 0.000817s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000840s | 0.000790s | 0.000816s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000829s | 0.000779s | 0.000824s | byte equality observed |
| variant_issue_55.test | 10 | 0.000815s | 0.000816s | 0.000829s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000829s | 0.000844s | 0.000794s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000855s | 0.000831s | 0.000811s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000814s | 0.000840s | 0.000822s | byte equality observed |
| variant_many_types.test | 10 | 0.000833s | 0.000816s | 0.000824s | byte equality observed |
| variant_move_assign.test | 10 | 0.000822s | 0.000817s | 0.000833s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000832s | 0.000827s | 0.000851s | byte equality observed |
| variant_move_construct.test | 10 | 0.000813s | 0.000848s | 0.000790s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000819s | 0.000842s | 0.000805s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000823s | 0.000822s | 0.000805s | byte equality observed |
| variant_size.test | 10 | 0.000811s | 0.000822s | 0.000779s | byte equality observed |
| variant_special.test | 10 | 0.000839s | 0.000860s | 0.000868s | byte equality observed |
| variant_subset.test | 10 | 0.000844s | 0.000841s | 0.000827s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000817s | 0.000813s | 0.000790s | byte equality observed |
| variant_swap.test | 10 | 0.000831s | 0.000819s | 0.000815s | byte equality observed |
| variant_trivial.test | 10 | 0.000864s | 0.000860s | 0.000820s | byte equality observed |
| variant_value_assign.test | 10 | 0.000833s | 0.000818s | 0.000805s | byte equality observed |
| variant_value_construct.test | 10 | 0.000806s | 0.000796s | 0.000790s | byte equality observed |
| variant_valueless.test | 10 | 0.000844s | 0.000827s | 0.000809s | byte equality observed |
| variant_visit.test | 10 | 0.000823s | 0.000826s | 0.000845s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000799s | 0.000814s | 0.000831s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000815s | 0.000801s | 0.000817s | byte equality observed |
| variant_visit_r.test | 10 | 0.000800s | 0.000818s | 0.000801s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
