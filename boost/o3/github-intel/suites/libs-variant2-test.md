# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091721 | 0.209872 | 0.276581 | 0.001347 | 0.000530 | 0.001141 |
| variant_size.test | RUN | 0.162422 | 0.531075 | 0.551753 | 0.001255 | 0.001353 | 0.001251 |
| variant_alternative.test | RUN | 0.217059 | 1.774901 | 0.948330 | 0.001334 | 0.001358 | 0.001193 |
| variant_holds_alternative.test | RUN | 0.153627 | 0.394819 | 0.531641 | 0.001261 | 0.001459 | 0.001352 |
| variant_holds_alternative_cx.test | COMPILE | 0.096783 | 0.226334 | 0.302297 | — | — | — |
| variant_get_by_index.test | RUN | 0.254627 | 1.942589 | 1.169625 | 0.001382 | 0.001544 | 0.001430 |
| variant_get_by_index_cx.test | COMPILE | 0.100030 | 0.238095 | 0.315673 | — | — | — |
| variant_get_by_type.test | RUN | 0.261879 | 2.049703 | 1.244298 | 0.001308 | 0.001258 | 0.001224 |
| variant_get_by_type_cx.test | COMPILE | 0.090629 | 0.207628 | 0.272429 | — | — | — |
| variant_default_construct.test | RUN | 0.244557 | 1.540631 | 1.008354 | 0.001132 | 0.001351 | 0.001168 |
| variant_default_construct_cx.test | COMPILE | 0.098947 | 0.233447 | 0.307271 | — | — | — |
| variant_copy_construct.test | RUN | 0.376646 | 2.578682 | 1.847582 | 0.001462 | 0.001214 | 0.001269 |
| variant_copy_construct_cx.test | COMPILE | 0.110196 | 0.263032 | 0.372219 | — | — | — |
| variant_move_construct.test | RUN | 0.348605 | 2.179474 | 1.690828 | 0.001222 | 0.001258 | 0.001366 |
| variant_move_construct_cx.test | COMPILE | 0.085832 | 0.212211 | 0.269878 | — | — | — |
| variant_value_construct.test | RUN | 0.185040 | 0.536834 | 0.692885 | 0.001153 | 0.001368 | 0.001259 |
| variant_value_construct_cx.test | COMPILE | 0.099213 | 0.239091 | 0.322554 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.192134 | 0.547827 | 0.706494 | 0.001442 | 0.001137 | 0.001246 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.103747 | 0.240549 | 0.312780 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.192450 | 0.539230 | 0.706188 | 0.001347 | 0.001388 | 0.001226 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.099882 | 0.239681 | 0.314977 | — | — | — |
| variant_copy_assign.test | RUN | 0.258553 | 1.766009 | 1.106065 | 0.001232 | 0.001429 | 0.001196 |
| variant_copy_assign_cx.test | COMPILE | 0.087738 | 0.207510 | 0.258034 | — | — | — |
| variant_move_assign.test | RUN | 0.257296 | 1.743219 | 1.104693 | 0.001284 | 0.001393 | 0.001199 |
| variant_move_assign_cx.test | COMPILE | 0.087677 | 0.209013 | 0.262800 | — | — | — |
| variant_value_assign.test | RUN | 0.191019 | 0.611625 | 0.748220 | 0.001209 | 0.001346 | 0.001108 |
| variant_value_assign_cx.test | COMPILE | 0.093586 | 0.208574 | 0.265514 | — | — | — |
| variant_emplace_index.test | RUN | 0.218551 | 0.707776 | 0.843134 | 0.001112 | 0.001390 | 0.001194 |
| variant_emplace_index_cx.test | COMPILE | 0.089143 | 0.212201 | 0.248123 | — | — | — |
| variant_emplace_type.test | RUN | 0.196267 | 0.585631 | 0.747665 | 0.001310 | 0.001307 | 0.001224 |
| variant_emplace_type_cx.test | COMPILE | 0.090834 | 0.211517 | 0.252376 | — | — | — |
| variant_swap.test | RUN | 0.209026 | 0.752730 | 0.793452 | 0.001407 | 0.001265 | 0.001204 |
| variant_eq_ne.test | RUN | 0.163583 | 0.452547 | 0.573486 | 0.001208 | 0.001311 | 0.001161 |
| variant_eq_ne_cx.test | COMPILE | 0.086407 | 0.201391 | 0.254414 | — | — | — |
| variant_lt_gt.test | RUN | 0.170365 | 0.505875 | 0.601447 | 0.001395 | 0.001522 | 0.001267 |
| variant_lt_gt_cx.test | COMPILE | 0.091182 | 0.209155 | 0.256542 | — | — | — |
| variant_destroy.test | RUN | 0.173081 | 0.512945 | 0.623874 | 0.001232 | 0.001256 | 0.001301 |
| variant_visit.test | RUN | 1.087743 | 3.925654 | 10.735541 | 0.001229 | 0.001296 | 0.001168 |
| variant_convert_construct.test | RUN | 0.220289 | 0.674443 | 0.855679 | 0.001150 | 0.001504 | 0.001372 |
| variant_subset.test | RUN | 0.221451 | 0.744334 | 0.913122 | 0.001361 | 0.001431 | 0.001309 |
| variant_valueless.test | RUN | 0.160722 | 0.462684 | 0.618057 | 0.001352 | 0.001439 | 0.001233 |
| variant_copy_construct_throw.test | RUN | 0.128828 | 0.346389 | 0.422487 | 0.001227 | 0.001364 | 0.001419 |
| variant_move_construct_throw.test | RUN | 0.126013 | 0.332622 | 0.432606 | 0.001452 | 0.001390 | 0.001227 |
| variant_convert_construct_throw.test | RUN | 0.136952 | 0.379844 | 0.453962 | 0.001193 | 0.001155 | 0.001270 |
| variant_copy_assign_throw.test | RUN | 0.122808 | 0.329482 | 0.425513 | 0.001217 | 0.001329 | 0.001357 |
| variant_move_assign_throw.test | RUN | 0.123731 | 0.332456 | 0.431505 | 0.001571 | 0.001384 | 0.001382 |
| variant_get_by_index_nx.test | RUN | 0.309045 | 1.633497 | 1.135413 | 0.001224 | 0.001454 | 0.001342 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.098796 | 0.240212 | 0.303462 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.311587 | 1.847028 | 1.222847 | 0.001256 | 0.001456 | 0.001237 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.087648 | 0.209142 | 0.261568 | — | — | — |
| variant_subset_nx.test | RUN | 0.230882 | 0.691256 | 0.921651 | 0.001325 | 0.001214 | 0.001266 |
| variant_hash.test | RUN | 0.226147 | 0.816486 | 0.820212 | 0.001297 | 0.001467 | 0.001308 |
| variant_trivial.test | RUN | 1.295545 | 4.607022 | 6.078998 | 0.001324 | 0.001392 | 0.001348 |
| variant_special.test | RUN | 1.265249 | 5.123768 | 6.418602 | 0.001533 | 0.001512 | 0.001332 |
| variant_visit_derived.test | RUN | 0.156671 | 0.434611 | 0.634732 | 0.001256 | 0.001474 | 0.001180 |
| variant_many_types.test | RUN | 1.392353 | 6.185346 | 9.049910 | 0.001259 | 0.001290 | 0.001167 |
| variant_visit_r.test | RUN | 0.562952 | 2.013460 | 3.491715 | 0.001221 | 0.001666 | 0.001397 |
| variant_derived_construct.test | COMPILE | 0.091766 | 0.218050 | 0.279945 | — | — | — |
| variant_visit_by_index.test | RUN | 0.206067 | 0.544692 | 0.819438 | 0.001304 | 0.001373 | 0.001184 |
| variant_ostream_insert.test | RUN | 0.149879 | 0.459812 | 0.548077 | 0.001450 | 0.001326 | 0.001414 |
| is_output_streamable.test | RUN | 0.192190 | 0.951259 | 0.741210 | 0.001219 | 0.001249 | 0.001375 |
| variant_json_value_from.test | RUN | 0.284077 | 0.735729 | 0.929586 | 0.001279 | 0.001556 | 0.001205 |
| variant_json_value_to.test | RUN | 0.351594 | 1.031264 | 1.267869 | 0.001449 | 0.001438 | 0.001099 |
| variant_uses_double_storage.test | COMPILE | 0.094021 | 0.216803 | 0.302624 | — | — | — |
| variant_derived_construct2.test | RUN | 0.134966 | 0.357568 | 0.451971 | 0.001287 | 0.001448 | 0.001186 |
| variant_visit_cx.test | COMPILE | 0.088839 | 0.208361 | 0.269957 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.090450 | 0.203701 | 0.248169 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.091881 | 0.203269 | 0.251104 | — | — | — |
| variant_index_type_126.test | RUN | 0.816304 | 1.988673 | 3.862096 | 0.001184 | 0.001422 | 0.001159 |
| variant_index_type_127.test | RUN | 0.820988 | 2.033339 | 3.876431 | 0.001228 | 0.001508 | 0.001229 |
| variant_index_type_128.test | RUN | 0.842749 | 2.062675 | 3.885353 | 0.001383 | 0.001258 | 0.001118 |
| variant_index_type_129.test | RUN | 0.832484 | 2.050190 | 3.984804 | 0.001332 | 0.001135 | 0.001139 |
| variant_index_type_254.test | RUN | 2.915843 | 8.060185 | 12.385989 | 0.001290 | 0.001349 | 0.001311 |
| variant_index_type_255.test | RUN | 2.941031 | 8.106538 | 12.459118 | 0.001170 | 0.001357 | 0.001258 |
| variant_index_type_256.test | RUN | 2.993706 | 8.355472 | 12.502673 | 0.001329 | 0.001420 | 0.001097 |
| variant_index_type_257.test | RUN | 2.976727 | 8.382890 | 12.788717 | 0.001163 | 0.001312 | 0.001263 |
| variant_default_construct_cx_2.test | COMPILE | 0.084391 | 0.202005 | 0.236458 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.089812 | 0.201688 | 0.287725 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.087704 | 0.200397 | 0.252586 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.088056 | 0.201806 | 0.252047 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.089074 | 0.201051 | 0.238587 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.086075 | 0.197846 | 0.253398 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.060076 | 0.138955 | 0.232952 | — | — | — |
| variant_issue_55.test | RUN | 0.117754 | 0.404055 | 0.377908 | 0.000915 | 0.000962 | 0.000872 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.996×, 0.995× | 1.007× |
| clang | 0.988× | 0.987×, 0.990× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000796s | 0.000814s | 0.000798s | byte equality observed |
| quick.test | 10 | 0.000784s | 0.000362s | 0.000780s | byte equality observed |
| variant_alternative.test | 10 | 0.000820s | 0.000813s | 0.000775s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000843s | 0.000834s | 0.000808s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000857s | 0.000822s | 0.000812s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000837s | 0.000839s | 0.000844s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000832s | 0.000868s | 0.000821s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000820s | 0.000853s | 0.000807s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000826s | 0.000833s | 0.000850s | byte equality observed |
| variant_default_construct.test | 10 | 0.000840s | 0.000807s | 0.000799s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000796s | 0.000801s | 0.000819s | byte equality observed |
| variant_destroy.test | 10 | 0.000808s | 0.000824s | 0.000795s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000818s | 0.000835s | 0.000828s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000806s | 0.000849s | 0.000820s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000815s | 0.000801s | 0.000824s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000844s | 0.000864s | 0.000851s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000842s | 0.000806s | 0.000784s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000855s | 0.000854s | 0.000848s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000824s | 0.000846s | 0.000826s | byte equality observed |
| variant_hash.test | 10 | 0.000829s | 0.000838s | 0.000804s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000833s | 0.000829s | 0.000819s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000835s | 0.000850s | 0.000819s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000837s | 0.000831s | 0.000841s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000830s | 0.000826s | 0.000820s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000811s | 0.000824s | 0.000805s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000813s | 0.000827s | 0.000805s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000820s | 0.000812s | 0.000809s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000800s | 0.000837s | 0.000793s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000796s | 0.000828s | 0.000812s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000831s | 0.000819s | 0.000792s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000818s | 0.000799s | 0.000804s | byte equality observed |
| variant_issue_55.test | 10 | 0.000836s | 0.000826s | 0.000816s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000842s | 0.000829s | 0.000830s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000850s | 0.000870s | 0.000828s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000789s | 0.000787s | 0.000795s | byte equality observed |
| variant_many_types.test | 10 | 0.000825s | 0.000814s | 0.000828s | byte equality observed |
| variant_move_assign.test | 10 | 0.000804s | 0.000821s | 0.000815s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000835s | 0.000829s | 0.000816s | byte equality observed |
| variant_move_construct.test | 10 | 0.000788s | 0.000848s | 0.000802s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000824s | 0.000881s | 0.000820s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000838s | 0.000833s | 0.000851s | byte equality observed |
| variant_size.test | 10 | 0.000805s | 0.000827s | 0.000799s | byte equality observed |
| variant_special.test | 10 | 0.000859s | 0.000874s | 0.000856s | byte equality observed |
| variant_subset.test | 10 | 0.000859s | 0.000849s | 0.000834s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000836s | 0.000827s | 0.000825s | byte equality observed |
| variant_swap.test | 10 | 0.000811s | 0.000822s | 0.000803s | byte equality observed |
| variant_trivial.test | 10 | 0.000881s | 0.000878s | 0.000801s | byte equality observed |
| variant_value_assign.test | 10 | 0.000846s | 0.000825s | 0.000827s | byte equality observed |
| variant_value_construct.test | 10 | 0.000805s | 0.000815s | 0.000799s | byte equality observed |
| variant_valueless.test | 10 | 0.000837s | 0.000840s | 0.000833s | byte equality observed |
| variant_visit.test | 10 | 0.000827s | 0.000794s | 0.000791s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000800s | 0.000800s | 0.000806s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000812s | 0.000817s | 0.000830s | byte equality observed |
| variant_visit_r.test | 10 | 0.000786s | 0.000796s | 0.000811s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
