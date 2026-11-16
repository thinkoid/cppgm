# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091347 | 0.222906 | 0.277052 | 0.001162 | 0.000541 | 0.001158 |
| variant_size.test | RUN | 0.162005 | 0.530469 | 0.539824 | 0.001096 | 0.001383 | 0.001251 |
| variant_alternative.test | RUN | 0.217866 | 1.743985 | 0.934282 | 0.001208 | 0.001354 | 0.001113 |
| variant_holds_alternative.test | RUN | 0.149901 | 0.394573 | 0.529050 | 0.001187 | 0.001428 | 0.001227 |
| variant_holds_alternative_cx.test | COMPILE | 0.094997 | 0.229063 | 0.297992 | — | — | — |
| variant_get_by_index.test | RUN | 0.252917 | 1.919373 | 1.154974 | 0.001402 | 0.001371 | 0.001274 |
| variant_get_by_index_cx.test | COMPILE | 0.100306 | 0.234968 | 0.315777 | — | — | — |
| variant_get_by_type.test | RUN | 0.262164 | 2.083204 | 1.245024 | 0.001301 | 0.001401 | 0.001217 |
| variant_get_by_type_cx.test | COMPILE | 0.092710 | 0.209889 | 0.254866 | — | — | — |
| variant_default_construct.test | RUN | 0.241758 | 1.509010 | 1.015093 | 0.001218 | 0.001475 | 0.001111 |
| variant_default_construct_cx.test | COMPILE | 0.100705 | 0.218314 | 0.282770 | — | — | — |
| variant_copy_construct.test | RUN | 0.385659 | 2.540018 | 1.787656 | 0.001205 | 0.001383 | 0.001257 |
| variant_copy_construct_cx.test | COMPILE | 0.115407 | 0.261145 | 0.354529 | — | — | — |
| variant_move_construct.test | RUN | 0.346664 | 2.187972 | 1.659858 | 0.001230 | 0.001256 | 0.001207 |
| variant_move_construct_cx.test | COMPILE | 0.087380 | 0.213536 | 0.254429 | — | — | — |
| variant_value_construct.test | RUN | 0.185584 | 0.546643 | 0.676441 | 0.001265 | 0.001286 | 0.001297 |
| variant_value_construct_cx.test | COMPILE | 0.104130 | 0.245014 | 0.301372 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.193711 | 0.546884 | 0.696881 | 0.001190 | 0.001334 | 0.001200 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.099654 | 0.234400 | 0.316820 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.190971 | 0.545126 | 0.670312 | 0.001119 | 0.001300 | 0.001238 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.102248 | 0.238160 | 0.317698 | — | — | — |
| variant_copy_assign.test | RUN | 0.260130 | 1.734418 | 1.094092 | 0.001241 | 0.001349 | 0.001160 |
| variant_copy_assign_cx.test | COMPILE | 0.085516 | 0.206771 | 0.257038 | — | — | — |
| variant_move_assign.test | RUN | 0.254313 | 1.744177 | 1.073427 | 0.001205 | 0.001368 | 0.001147 |
| variant_move_assign_cx.test | COMPILE | 0.093182 | 0.205105 | 0.257472 | — | — | — |
| variant_value_assign.test | RUN | 0.193119 | 0.604592 | 0.745232 | 0.001137 | 0.001439 | 0.001142 |
| variant_value_assign_cx.test | COMPILE | 0.090138 | 0.202192 | 0.259926 | — | — | — |
| variant_emplace_index.test | RUN | 0.221684 | 0.693977 | 0.816059 | 0.001209 | 0.001280 | 0.001198 |
| variant_emplace_index_cx.test | COMPILE | 0.086662 | 0.209441 | 0.243437 | — | — | — |
| variant_emplace_type.test | RUN | 0.197248 | 0.590258 | 0.731069 | 0.001074 | 0.001480 | 0.001177 |
| variant_emplace_type_cx.test | COMPILE | 0.089764 | 0.203333 | 0.257554 | — | — | — |
| variant_swap.test | RUN | 0.205247 | 0.757649 | 0.785613 | 0.001295 | 0.001222 | 0.001319 |
| variant_eq_ne.test | RUN | 0.162781 | 0.448702 | 0.554587 | 0.001147 | 0.001397 | 0.001096 |
| variant_eq_ne_cx.test | COMPILE | 0.091234 | 0.206867 | 0.260427 | — | — | — |
| variant_lt_gt.test | RUN | 0.170338 | 0.516050 | 0.597131 | 0.001167 | 0.001277 | 0.001306 |
| variant_lt_gt_cx.test | COMPILE | 0.088274 | 0.206922 | 0.260756 | — | — | — |
| variant_destroy.test | RUN | 0.170228 | 0.508278 | 0.617152 | 0.001310 | 0.001298 | 0.001188 |
| variant_visit.test | RUN | 1.083303 | 3.928707 | 10.476902 | 0.001209 | 0.001275 | 0.001204 |
| variant_convert_construct.test | RUN | 0.220695 | 0.671823 | 0.864080 | 0.001327 | 0.001310 | 0.001352 |
| variant_subset.test | RUN | 0.225279 | 0.709430 | 0.923462 | 0.001421 | 0.001334 | 0.001254 |
| variant_valueless.test | RUN | 0.162815 | 0.461091 | 0.595027 | 0.001365 | 0.001402 | 0.001279 |
| variant_copy_construct_throw.test | RUN | 0.133039 | 0.342092 | 0.433013 | 0.001119 | 0.001441 | 0.001311 |
| variant_move_construct_throw.test | RUN | 0.129899 | 0.331211 | 0.417853 | 0.001242 | 0.001422 | 0.001337 |
| variant_convert_construct_throw.test | RUN | 0.130613 | 0.372123 | 0.450163 | 0.001322 | 0.001329 | 0.001328 |
| variant_copy_assign_throw.test | RUN | 0.129013 | 0.323423 | 0.411898 | 0.000990 | 0.001260 | 0.001200 |
| variant_move_assign_throw.test | RUN | 0.127123 | 0.328711 | 0.422407 | 0.001339 | 0.001381 | 0.001334 |
| variant_get_by_index_nx.test | RUN | 0.315371 | 1.622413 | 1.116822 | 0.001127 | 0.001550 | 0.001254 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.099751 | 0.239063 | 0.299001 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.318730 | 1.821987 | 1.198166 | 0.001271 | 0.001249 | 0.001244 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.091746 | 0.204749 | 0.255791 | — | — | — |
| variant_subset_nx.test | RUN | 0.231235 | 0.705397 | 0.925778 | 0.001334 | 0.001345 | 0.001191 |
| variant_hash.test | RUN | 0.227465 | 0.812862 | 0.828220 | 0.001147 | 0.001542 | 0.001265 |
| variant_trivial.test | RUN | 1.319067 | 4.713459 | 6.149644 | 0.001230 | 0.001419 | 0.001250 |
| variant_special.test | RUN | 1.287979 | 4.992696 | 6.539043 | 0.001395 | 0.001507 | 0.001395 |
| variant_visit_derived.test | RUN | 0.158653 | 0.422438 | 0.618277 | 0.001388 | 0.001377 | 0.001278 |
| variant_many_types.test | RUN | 1.398153 | 6.184633 | 8.616532 | 0.001250 | 0.001397 | 0.001249 |
| variant_visit_r.test | RUN | 0.572566 | 1.931008 | 3.430389 | 0.001184 | 0.001314 | 0.001203 |
| variant_derived_construct.test | COMPILE | 0.091955 | 0.209195 | 0.261388 | — | — | — |
| variant_visit_by_index.test | RUN | 0.206148 | 0.549547 | 0.802010 | 0.001098 | 0.001182 | 0.001323 |
| variant_ostream_insert.test | RUN | 0.147171 | 0.440334 | 0.537565 | 0.001349 | 0.001239 | 0.001288 |
| is_output_streamable.test | RUN | 0.189767 | 0.912663 | 0.733979 | 0.001115 | 0.001331 | 0.001342 |
| variant_json_value_from.test | RUN | 0.288788 | 0.745022 | 0.920829 | 0.001216 | 0.001441 | 0.001349 |
| variant_json_value_to.test | RUN | 0.357903 | 1.029591 | 1.277008 | 0.001309 | 0.001374 | 0.001122 |
| variant_uses_double_storage.test | COMPILE | 0.096064 | 0.219474 | 0.304851 | — | — | — |
| variant_derived_construct2.test | RUN | 0.128617 | 0.359025 | 0.457526 | 0.001035 | 0.001450 | 0.001192 |
| variant_visit_cx.test | COMPILE | 0.087467 | 0.204625 | 0.245131 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.088020 | 0.205831 | 0.255793 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087378 | 0.201947 | 0.242083 | — | — | — |
| variant_index_type_126.test | RUN | 0.805900 | 1.987739 | 3.777261 | 0.001306 | 0.001326 | 0.001241 |
| variant_index_type_127.test | RUN | 0.811729 | 2.002347 | 3.873063 | 0.001204 | 0.001290 | 0.001213 |
| variant_index_type_128.test | RUN | 0.823255 | 2.069985 | 3.927715 | 0.001214 | 0.001317 | 0.001328 |
| variant_index_type_129.test | RUN | 0.834959 | 2.055990 | 3.884693 | 0.001244 | 0.001240 | 0.001139 |
| variant_index_type_254.test | RUN | 3.026077 | 7.768958 | 12.392217 | 0.001220 | 0.001376 | 0.001145 |
| variant_index_type_255.test | RUN | 3.043517 | 7.985414 | 12.534433 | 0.001165 | 0.001379 | 0.001359 |
| variant_index_type_256.test | RUN | 3.082945 | 8.114145 | 12.601681 | 0.001174 | 0.001147 | 0.001237 |
| variant_index_type_257.test | RUN | 3.120641 | 7.992270 | 12.761253 | 0.001066 | 0.001229 | 0.001089 |
| variant_default_construct_cx_2.test | COMPILE | 0.084727 | 0.211263 | 0.254605 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.083227 | 0.210956 | 0.247094 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.090350 | 0.195764 | 0.252992 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.088649 | 0.200849 | 0.252097 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.089278 | 0.198553 | 0.253694 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.083098 | 0.198468 | 0.234855 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.062413 | 0.190916 | 0.244716 | — | — | — |
| variant_issue_55.test | RUN | 0.127934 | 0.381624 | 0.401311 | 0.000927 | 0.000907 | 0.000861 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.984×, 0.989× | 0.995× |
| clang | 0.995× | 0.993×, 0.997× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000800s | 0.000800s | 0.000831s | byte equality observed |
| quick.test | 10 | 0.000783s | 0.000367s | 0.000774s | byte equality observed |
| variant_alternative.test | 10 | 0.000793s | 0.000807s | 0.000822s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000830s | 0.000801s | 0.000802s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000829s | 0.000828s | 0.000824s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000819s | 0.000807s | 0.000825s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000823s | 0.000822s | 0.000829s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000829s | 0.000829s | 0.000817s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000847s | 0.000826s | 0.000804s | byte equality observed |
| variant_default_construct.test | 10 | 0.000795s | 0.000816s | 0.000793s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000820s | 0.000809s | 0.000798s | byte equality observed |
| variant_destroy.test | 10 | 0.000817s | 0.000794s | 0.000805s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000791s | 0.000818s | 0.000833s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000794s | 0.000810s | 0.000830s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000783s | 0.000805s | 0.000789s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000838s | 0.000850s | 0.000833s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000806s | 0.000796s | 0.000766s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000836s | 0.000850s | 0.000823s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000812s | 0.000806s | 0.000829s | byte equality observed |
| variant_hash.test | 10 | 0.000801s | 0.000788s | 0.000772s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000805s | 0.000788s | 0.000789s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000816s | 0.000802s | 0.000804s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000832s | 0.000834s | 0.000817s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000809s | 0.000828s | 0.000827s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000795s | 0.000809s | 0.000793s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000791s | 0.000794s | 0.000774s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000813s | 0.000789s | 0.000778s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000801s | 0.000792s | 0.000801s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000808s | 0.000796s | 0.000818s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000813s | 0.000804s | 0.000805s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000819s | 0.000799s | 0.000811s | byte equality observed |
| variant_issue_55.test | 10 | 0.000822s | 0.000804s | 0.000802s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000843s | 0.000843s | 0.000841s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000830s | 0.000858s | 0.000829s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000807s | 0.000796s | 0.000804s | byte equality observed |
| variant_many_types.test | 10 | 0.000830s | 0.000791s | 0.000819s | byte equality observed |
| variant_move_assign.test | 10 | 0.000818s | 0.000792s | 0.000785s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000818s | 0.000810s | 0.000811s | byte equality observed |
| variant_move_construct.test | 10 | 0.000805s | 0.000814s | 0.000798s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000805s | 0.000842s | 0.000842s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000828s | 0.000841s | 0.000823s | byte equality observed |
| variant_size.test | 10 | 0.000812s | 0.000803s | 0.000769s | byte equality observed |
| variant_special.test | 10 | 0.000828s | 0.000859s | 0.000816s | byte equality observed |
| variant_subset.test | 10 | 0.000818s | 0.000844s | 0.000811s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000786s | 0.000817s | 0.000812s | byte equality observed |
| variant_swap.test | 10 | 0.000800s | 0.000825s | 0.000808s | byte equality observed |
| variant_trivial.test | 10 | 0.000810s | 0.000856s | 0.000831s | byte equality observed |
| variant_value_assign.test | 10 | 0.000823s | 0.000797s | 0.000803s | byte equality observed |
| variant_value_construct.test | 10 | 0.000832s | 0.000813s | 0.000792s | byte equality observed |
| variant_valueless.test | 10 | 0.000810s | 0.000833s | 0.000835s | byte equality observed |
| variant_visit.test | 10 | 0.000824s | 0.000803s | 0.000797s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000814s | 0.000826s | 0.000778s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000794s | 0.000773s | 0.000815s | byte equality observed |
| variant_visit_r.test | 10 | 0.000768s | 0.000764s | 0.000797s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
