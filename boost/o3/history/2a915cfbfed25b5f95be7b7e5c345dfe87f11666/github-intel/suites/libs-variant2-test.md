# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.094746 | 0.211186 | 0.273565 | 0.001347 | 0.000533 | 0.001084 |
| variant_size.test | RUN | 0.167958 | 0.528622 | 0.548715 | 0.001317 | 0.001323 | 0.001202 |
| variant_alternative.test | RUN | 0.224063 | 1.722668 | 0.934315 | 0.001373 | 0.001334 | 0.001107 |
| variant_holds_alternative.test | RUN | 0.153139 | 0.392443 | 0.516780 | 0.001256 | 0.001192 | 0.001163 |
| variant_holds_alternative_cx.test | COMPILE | 0.101109 | 0.225456 | 0.288803 | — | — | — |
| variant_get_by_index.test | RUN | 0.255367 | 1.918836 | 1.155947 | 0.001485 | 0.001316 | 0.001345 |
| variant_get_by_index_cx.test | COMPILE | 0.104199 | 0.234512 | 0.311153 | — | — | — |
| variant_get_by_type.test | RUN | 0.265335 | 2.064259 | 1.232677 | 0.001385 | 0.001327 | 0.001253 |
| variant_get_by_type_cx.test | COMPILE | 0.092631 | 0.202778 | 0.267167 | — | — | — |
| variant_default_construct.test | RUN | 0.245076 | 1.481794 | 0.997741 | 0.001059 | 0.001147 | 0.001164 |
| variant_default_construct_cx.test | COMPILE | 0.100491 | 0.226280 | 0.304297 | — | — | — |
| variant_copy_construct.test | RUN | 0.386879 | 2.555355 | 1.826345 | 0.001260 | 0.001308 | 0.001218 |
| variant_copy_construct_cx.test | COMPILE | 0.115086 | 0.252726 | 0.352930 | — | — | — |
| variant_move_construct.test | RUN | 0.359255 | 2.166782 | 1.657276 | 0.001173 | 0.001359 | 0.001280 |
| variant_move_construct_cx.test | COMPILE | 0.091217 | 0.201713 | 0.258687 | — | — | — |
| variant_value_construct.test | RUN | 0.188833 | 0.524599 | 0.682144 | 0.001217 | 0.001239 | 0.001195 |
| variant_value_construct_cx.test | COMPILE | 0.104329 | 0.237056 | 0.330118 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.196500 | 0.533472 | 0.683498 | 0.001195 | 0.001208 | 0.001147 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.107118 | 0.232778 | 0.305882 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.193745 | 0.541373 | 0.684567 | 0.001451 | 0.001354 | 0.001093 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.104819 | 0.236666 | 0.324333 | — | — | — |
| variant_copy_assign.test | RUN | 0.266544 | 1.739899 | 1.085690 | 0.001159 | 0.001199 | 0.001303 |
| variant_copy_assign_cx.test | COMPILE | 0.091153 | 0.201878 | 0.249625 | — | — | — |
| variant_move_assign.test | RUN | 0.262855 | 1.745189 | 1.074646 | 0.001238 | 0.001138 | 0.001119 |
| variant_move_assign_cx.test | COMPILE | 0.091622 | 0.204041 | 0.258567 | — | — | — |
| variant_value_assign.test | RUN | 0.202224 | 0.590570 | 0.744626 | 0.001300 | 0.001369 | 0.001127 |
| variant_value_assign_cx.test | COMPILE | 0.097574 | 0.201506 | 0.262497 | — | — | — |
| variant_emplace_index.test | RUN | 0.232541 | 0.691469 | 0.814423 | 0.001186 | 0.001306 | 0.001291 |
| variant_emplace_index_cx.test | COMPILE | 0.090848 | 0.207016 | 0.259157 | — | — | — |
| variant_emplace_type.test | RUN | 0.205152 | 0.593976 | 0.725869 | 0.001480 | 0.001265 | 0.001202 |
| variant_emplace_type_cx.test | COMPILE | 0.094141 | 0.195455 | 0.258020 | — | — | — |
| variant_swap.test | RUN | 0.210108 | 0.737723 | 0.793374 | 0.001415 | 0.001350 | 0.001170 |
| variant_eq_ne.test | RUN | 0.168879 | 0.440079 | 0.556433 | 0.001248 | 0.001234 | 0.001113 |
| variant_eq_ne_cx.test | COMPILE | 0.092777 | 0.198302 | 0.242726 | — | — | — |
| variant_lt_gt.test | RUN | 0.177726 | 0.503456 | 0.585921 | 0.001299 | 0.001207 | 0.001143 |
| variant_lt_gt_cx.test | COMPILE | 0.094112 | 0.207485 | 0.253143 | — | — | — |
| variant_destroy.test | RUN | 0.175624 | 0.497910 | 0.608720 | 0.001222 | 0.001412 | 0.001125 |
| variant_visit.test | RUN | 1.125604 | 3.852968 | 10.366486 | 0.001194 | 0.001351 | 0.001059 |
| variant_convert_construct.test | RUN | 0.225652 | 0.675973 | 0.863063 | 0.001326 | 0.001258 | 0.001297 |
| variant_subset.test | RUN | 0.225900 | 0.719759 | 0.928797 | 0.001431 | 0.001253 | 0.001108 |
| variant_valueless.test | RUN | 0.166594 | 0.460996 | 0.589839 | 0.001411 | 0.001452 | 0.001269 |
| variant_copy_construct_throw.test | RUN | 0.132817 | 0.341701 | 0.425251 | 0.001190 | 0.001287 | 0.001185 |
| variant_move_construct_throw.test | RUN | 0.131031 | 0.341941 | 0.415225 | 0.001284 | 0.001302 | 0.001137 |
| variant_convert_construct_throw.test | RUN | 0.137571 | 0.355204 | 0.447593 | 0.001501 | 0.001339 | 0.001098 |
| variant_copy_assign_throw.test | RUN | 0.130296 | 0.326639 | 0.422682 | 0.001241 | 0.001386 | 0.001096 |
| variant_move_assign_throw.test | RUN | 0.128719 | 0.324800 | 0.410806 | 0.001534 | 0.001106 | 0.001164 |
| variant_get_by_index_nx.test | RUN | 0.323268 | 1.603744 | 1.079709 | 0.001405 | 0.001189 | 0.001123 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.101439 | 0.230649 | 0.295313 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.318245 | 1.822869 | 1.197167 | 0.001289 | 0.001335 | 0.001219 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.091442 | 0.210580 | 0.256569 | — | — | — |
| variant_subset_nx.test | RUN | 0.242572 | 0.699404 | 0.912251 | 0.001354 | 0.001331 | 0.001106 |
| variant_hash.test | RUN | 0.235457 | 0.810204 | 0.797038 | 0.001414 | 0.001475 | 0.001078 |
| variant_trivial.test | RUN | 1.382265 | 4.521801 | 5.969897 | 0.001314 | 0.001310 | 0.001279 |
| variant_special.test | RUN | 1.344988 | 5.067917 | 6.423197 | 0.001579 | 0.001374 | 0.001214 |
| variant_visit_derived.test | RUN | 0.161410 | 0.421375 | 0.609288 | 0.001545 | 0.001204 | 0.001133 |
| variant_many_types.test | RUN | 1.445969 | 6.111060 | 8.652441 | 0.001522 | 0.001382 | 0.001122 |
| variant_visit_r.test | RUN | 0.580737 | 1.990443 | 3.456340 | 0.001435 | 0.001430 | 0.001096 |
| variant_derived_construct.test | COMPILE | 0.092402 | 0.212698 | 0.259238 | — | — | — |
| variant_visit_by_index.test | RUN | 0.214262 | 0.540981 | 0.744417 | 0.001250 | 0.001350 | 0.001165 |
| variant_ostream_insert.test | RUN | 0.158860 | 0.448409 | 0.537365 | 0.001435 | 0.001235 | 0.001150 |
| is_output_streamable.test | RUN | 0.200488 | 0.929755 | 0.732984 | 0.001255 | 0.001240 | 0.001133 |
| variant_json_value_from.test | RUN | 0.300027 | 0.717790 | 0.994333 | 0.001352 | 0.001409 | 0.001171 |
| variant_json_value_to.test | RUN | 0.378521 | 1.018403 | 1.259056 | 0.001593 | 0.001393 | 0.001269 |
| variant_uses_double_storage.test | COMPILE | 0.099023 | 0.214344 | 0.299614 | — | — | — |
| variant_derived_construct2.test | RUN | 0.133857 | 0.366307 | 0.442657 | 0.001306 | 0.001218 | 0.001046 |
| variant_visit_cx.test | COMPILE | 0.092910 | 0.201679 | 0.254537 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.092394 | 0.198874 | 0.251626 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.093527 | 0.204030 | 0.240758 | — | — | — |
| variant_index_type_126.test | RUN | 0.849292 | 1.974309 | 3.716593 | 0.001221 | 0.001381 | 0.001249 |
| variant_index_type_127.test | RUN | 0.866727 | 2.004696 | 3.717168 | 0.001297 | 0.001296 | 0.001296 |
| variant_index_type_128.test | RUN | 0.873008 | 2.038220 | 3.844680 | 0.001226 | 0.001103 | 0.001093 |
| variant_index_type_129.test | RUN | 0.874607 | 1.995909 | 3.801830 | 0.001407 | 0.001358 | 0.001090 |
| variant_index_type_254.test | RUN | 3.178978 | 7.655564 | 12.166742 | 0.001320 | 0.001388 | 0.001259 |
| variant_index_type_255.test | RUN | 3.173720 | 7.924139 | 12.169380 | 0.001296 | 0.001320 | 0.001219 |
| variant_index_type_256.test | RUN | 3.231480 | 7.923264 | 12.297377 | 0.001314 | 0.001151 | 0.001209 |
| variant_index_type_257.test | RUN | 3.242651 | 8.228896 | 12.454079 | 0.001237 | 0.000955 | 0.001054 |
| variant_default_construct_cx_2.test | COMPILE | 0.089999 | 0.215849 | 0.279197 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.091446 | 0.197754 | 0.235036 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.094452 | 0.212092 | 0.241307 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.091421 | 0.199438 | 0.252733 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.093668 | 0.200722 | 0.249377 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.074963 | 0.198815 | 0.247251 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.079017 | 0.197387 | 0.222685 | — | — | — |
| variant_issue_55.test | RUN | 0.144270 | 0.375749 | 0.370777 | 0.001003 | 0.000879 | 0.000822 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.007×, 0.991× | 1.003× |
| clang | 0.990× | 0.986×, 0.995× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000792s | 0.000811s | 0.000821s | byte equality observed |
| quick.test | 10 | 0.000768s | 0.000361s | 0.000804s | byte equality observed |
| variant_alternative.test | 10 | 0.000790s | 0.000801s | 0.000799s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000815s | 0.000796s | 0.000823s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000847s | 0.000821s | 0.000848s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000830s | 0.000806s | 0.000800s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000837s | 0.000808s | 0.000809s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000808s | 0.000817s | 0.000816s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000832s | 0.000816s | 0.000843s | byte equality observed |
| variant_default_construct.test | 10 | 0.000812s | 0.000825s | 0.000840s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000796s | 0.000832s | 0.000792s | byte equality observed |
| variant_destroy.test | 10 | 0.000809s | 0.000825s | 0.000809s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000811s | 0.000830s | 0.000816s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000815s | 0.000838s | 0.000796s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000787s | 0.000791s | 0.000805s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000828s | 0.000850s | 0.000839s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000810s | 0.000806s | 0.000780s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000828s | 0.000838s | 0.000819s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000799s | 0.000825s | 0.000803s | byte equality observed |
| variant_hash.test | 10 | 0.000805s | 0.000813s | 0.000804s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000816s | 0.000838s | 0.000814s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000832s | 0.000800s | 0.000806s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000826s | 0.000798s | 0.000818s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000813s | 0.000795s | 0.000823s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000828s | 0.000766s | 0.000803s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000833s | 0.000806s | 0.000814s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000819s | 0.000797s | 0.000781s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000793s | 0.000803s | 0.000806s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000795s | 0.000830s | 0.000793s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000789s | 0.000811s | 0.000777s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000805s | 0.000835s | 0.000796s | byte equality observed |
| variant_issue_55.test | 10 | 0.000815s | 0.000842s | 0.000848s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000842s | 0.000833s | 0.000820s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000847s | 0.000839s | 0.000837s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000793s | 0.000833s | 0.000818s | byte equality observed |
| variant_many_types.test | 10 | 0.000820s | 0.000864s | 0.000839s | byte equality observed |
| variant_move_assign.test | 10 | 0.000802s | 0.000855s | 0.000794s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000824s | 0.000823s | 0.000798s | byte equality observed |
| variant_move_construct.test | 10 | 0.000817s | 0.000852s | 0.000799s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000837s | 0.000881s | 0.000836s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000838s | 0.000845s | 0.000843s | byte equality observed |
| variant_size.test | 10 | 0.000811s | 0.000798s | 0.000805s | byte equality observed |
| variant_special.test | 10 | 0.000852s | 0.000857s | 0.000860s | byte equality observed |
| variant_subset.test | 10 | 0.000835s | 0.000811s | 0.000839s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000805s | 0.000825s | 0.000810s | byte equality observed |
| variant_swap.test | 10 | 0.000839s | 0.000820s | 0.000812s | byte equality observed |
| variant_trivial.test | 10 | 0.000862s | 0.000869s | 0.000803s | byte equality observed |
| variant_value_assign.test | 10 | 0.000824s | 0.000795s | 0.000793s | byte equality observed |
| variant_value_construct.test | 10 | 0.000806s | 0.000838s | 0.000784s | byte equality observed |
| variant_valueless.test | 10 | 0.000831s | 0.000869s | 0.000800s | byte equality observed |
| variant_visit.test | 10 | 0.000813s | 0.000833s | 0.000833s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000799s | 0.000773s | 0.000818s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000800s | 0.000795s | 0.000802s | byte equality observed |
| variant_visit_r.test | 10 | 0.000781s | 0.000782s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
