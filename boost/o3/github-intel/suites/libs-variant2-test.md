# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.093000 | 0.221587 | 0.286783 | 0.001169 | 0.000546 | 0.001474 |
| variant_size.test | RUN | 0.170480 | 0.537328 | 0.556689 | 0.001467 | 0.001434 | 0.001323 |
| variant_alternative.test | RUN | 0.224801 | 1.766776 | 0.955029 | 0.001589 | 0.001494 | 0.001423 |
| variant_holds_alternative.test | RUN | 0.155284 | 0.398313 | 0.531903 | 0.001233 | 0.001409 | 0.001474 |
| variant_holds_alternative_cx.test | COMPILE | 0.101404 | 0.231164 | 0.301648 | — | — | — |
| variant_get_by_index.test | RUN | 0.257120 | 1.934940 | 1.166663 | 0.001446 | 0.001608 | 0.001418 |
| variant_get_by_index_cx.test | COMPILE | 0.103551 | 0.237701 | 0.316552 | — | — | — |
| variant_get_by_type.test | RUN | 0.273203 | 2.099453 | 1.260113 | 0.001384 | 0.001282 | 0.001334 |
| variant_get_by_type_cx.test | COMPILE | 0.090548 | 0.209627 | 0.253213 | — | — | — |
| variant_default_construct.test | RUN | 0.251222 | 1.524121 | 1.026917 | 0.001265 | 0.001611 | 0.001387 |
| variant_default_construct_cx.test | COMPILE | 0.103390 | 0.222598 | 0.294718 | — | — | — |
| variant_copy_construct.test | RUN | 0.403896 | 2.532548 | 1.830622 | 0.001068 | 0.001382 | 0.001270 |
| variant_copy_construct_cx.test | COMPILE | 0.115432 | 0.257091 | 0.362038 | — | — | — |
| variant_move_construct.test | RUN | 0.372000 | 2.191511 | 1.689503 | 0.001407 | 0.001191 | 0.001275 |
| variant_move_construct_cx.test | COMPILE | 0.090753 | 0.209205 | 0.263867 | — | — | — |
| variant_value_construct.test | RUN | 0.195096 | 0.544723 | 0.698108 | 0.001249 | 0.001561 | 0.001386 |
| variant_value_construct_cx.test | COMPILE | 0.108401 | 0.243193 | 0.312075 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.203743 | 0.547912 | 0.706135 | 0.001371 | 0.001422 | 0.001206 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.104033 | 0.244914 | 0.322090 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.201278 | 0.531285 | 0.679964 | 0.001353 | 0.001388 | 0.001303 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.107014 | 0.242532 | 0.317470 | — | — | — |
| variant_copy_assign.test | RUN | 0.267898 | 1.765225 | 1.121787 | 0.001238 | 0.001234 | 0.001213 |
| variant_copy_assign_cx.test | COMPILE | 0.092478 | 0.204382 | 0.269355 | — | — | — |
| variant_move_assign.test | RUN | 0.267314 | 1.740196 | 1.098912 | 0.001360 | 0.001399 | 0.001298 |
| variant_move_assign_cx.test | COMPILE | 0.095259 | 0.206272 | 0.262410 | — | — | — |
| variant_value_assign.test | RUN | 0.208192 | 0.605323 | 0.770408 | 0.001284 | 0.001460 | 0.001349 |
| variant_value_assign_cx.test | COMPILE | 0.094448 | 0.205209 | 0.272732 | — | — | — |
| variant_emplace_index.test | RUN | 0.230473 | 0.707044 | 0.838971 | 0.001310 | 0.001346 | 0.001228 |
| variant_emplace_index_cx.test | COMPILE | 0.093468 | 0.197840 | 0.256307 | — | — | — |
| variant_emplace_type.test | RUN | 0.205423 | 0.596883 | 0.745969 | 0.001672 | 0.001294 | 0.001444 |
| variant_emplace_type_cx.test | COMPILE | 0.094946 | 0.208100 | 0.258304 | — | — | — |
| variant_swap.test | RUN | 0.218431 | 0.741468 | 0.800717 | 0.001418 | 0.001284 | 0.001319 |
| variant_eq_ne.test | RUN | 0.171482 | 0.436800 | 0.581976 | 0.001078 | 0.001179 | 0.001209 |
| variant_eq_ne_cx.test | COMPILE | 0.092335 | 0.204998 | 0.252509 | — | — | — |
| variant_lt_gt.test | RUN | 0.176470 | 0.510285 | 0.598478 | 0.001390 | 0.001508 | 0.001299 |
| variant_lt_gt_cx.test | COMPILE | 0.093491 | 0.205600 | 0.253476 | — | — | — |
| variant_destroy.test | RUN | 0.185948 | 0.510849 | 0.611418 | 0.001351 | 0.001300 | 0.001375 |
| variant_visit.test | RUN | 1.142212 | 3.949310 | 10.771749 | 0.001291 | 0.001483 | 0.001276 |
| variant_convert_construct.test | RUN | 0.226552 | 0.669772 | 0.855431 | 0.001439 | 0.001359 | 0.001397 |
| variant_subset.test | RUN | 0.233422 | 0.747870 | 0.913734 | 0.001543 | 0.001280 | 0.001268 |
| variant_valueless.test | RUN | 0.169345 | 0.452127 | 0.623750 | 0.001519 | 0.001298 | 0.001673 |
| variant_copy_construct_throw.test | RUN | 0.133902 | 0.341852 | 0.428053 | 0.001252 | 0.001232 | 0.001349 |
| variant_move_construct_throw.test | RUN | 0.133607 | 0.332711 | 0.423108 | 0.001546 | 0.001309 | 0.001226 |
| variant_convert_construct_throw.test | RUN | 0.137727 | 0.375111 | 0.458491 | 0.001511 | 0.001264 | 0.001358 |
| variant_copy_assign_throw.test | RUN | 0.128294 | 0.322038 | 0.423783 | 0.001336 | 0.001359 | 0.001361 |
| variant_move_assign_throw.test | RUN | 0.132071 | 0.321078 | 0.418282 | 0.001392 | 0.001283 | 0.001331 |
| variant_get_by_index_nx.test | RUN | 0.327711 | 1.624581 | 1.121479 | 0.001364 | 0.001220 | 0.001368 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.106568 | 0.229359 | 0.306680 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.327117 | 1.821279 | 1.214486 | 0.001465 | 0.001283 | 0.001413 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.091572 | 0.205915 | 0.262041 | — | — | — |
| variant_subset_nx.test | RUN | 0.243296 | 0.698684 | 0.934187 | 0.001206 | 0.001270 | 0.001386 |
| variant_hash.test | RUN | 0.234930 | 0.795994 | 0.839967 | 0.001339 | 0.001475 | 0.001437 |
| variant_trivial.test | RUN | 1.375611 | 4.563182 | 6.216378 | 0.001448 | 0.001456 | 0.001530 |
| variant_special.test | RUN | 1.321785 | 4.951635 | 6.569807 | 0.001702 | 0.001429 | 0.001608 |
| variant_visit_derived.test | RUN | 0.160001 | 0.410644 | 0.641914 | 0.001372 | 0.001234 | 0.001438 |
| variant_many_types.test | RUN | 1.492021 | 6.189050 | 9.271675 | 0.001292 | 0.001352 | 0.001286 |
| variant_visit_r.test | RUN | 0.596901 | 1.952748 | 3.580847 | 0.001589 | 0.001197 | 0.001150 |
| variant_derived_construct.test | COMPILE | 0.093801 | 0.206063 | 0.278156 | — | — | — |
| variant_visit_by_index.test | RUN | 0.215387 | 0.553807 | 0.822861 | 0.001354 | 0.001354 | 0.001356 |
| variant_ostream_insert.test | RUN | 0.150682 | 0.451074 | 0.516531 | 0.001474 | 0.001320 | 0.001145 |
| is_output_streamable.test | RUN | 0.200055 | 0.943617 | 0.738130 | 0.001186 | 0.001278 | 0.001276 |
| variant_json_value_from.test | RUN | 0.294944 | 0.728922 | 0.972514 | 0.001444 | 0.001428 | 0.001272 |
| variant_json_value_to.test | RUN | 0.376153 | 1.032970 | 1.322665 | 0.001524 | 0.001392 | 0.001167 |
| variant_uses_double_storage.test | COMPILE | 0.100486 | 0.215675 | 0.329368 | — | — | — |
| variant_derived_construct2.test | RUN | 0.137869 | 0.357625 | 0.460206 | 0.001330 | 0.001202 | 0.001340 |
| variant_visit_cx.test | COMPILE | 0.092953 | 0.205557 | 0.271974 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.090935 | 0.205608 | 0.249645 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.093760 | 0.204746 | 0.249162 | — | — | — |
| variant_index_type_126.test | RUN | 0.870938 | 2.014160 | 3.941266 | 0.001248 | 0.001394 | 0.001129 |
| variant_index_type_127.test | RUN | 0.867873 | 2.020596 | 3.993373 | 0.001294 | 0.001296 | 0.001193 |
| variant_index_type_128.test | RUN | 0.881014 | 1.992432 | 4.018011 | 0.001244 | 0.001316 | 0.001234 |
| variant_index_type_129.test | RUN | 0.871221 | 2.038052 | 3.949536 | 0.001435 | 0.001505 | 0.001188 |
| variant_index_type_254.test | RUN | 3.194826 | 7.863023 | 12.649082 | 0.001316 | 0.001332 | 0.001346 |
| variant_index_type_255.test | RUN | 3.209418 | 8.013772 | 12.816853 | 0.001177 | 0.001518 | 0.001548 |
| variant_index_type_256.test | RUN | 3.220242 | 8.085076 | 13.020983 | 0.001416 | 0.001303 | 0.001214 |
| variant_index_type_257.test | RUN | 3.247123 | 8.254102 | 13.074905 | 0.001256 | 0.001439 | 0.001341 |
| variant_default_construct_cx_2.test | COMPILE | 0.094258 | 0.216366 | 0.240824 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.089666 | 0.199279 | 0.251251 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.093786 | 0.205125 | 0.263839 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.094396 | 0.205215 | 0.259838 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.092491 | 0.207777 | 0.256554 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.072990 | 0.204093 | 0.260870 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.079069 | 0.148728 | 0.211437 | — | — | — |
| variant_issue_55.test | RUN | 0.128829 | 0.372591 | 0.468301 | 0.001045 | 0.001032 | 0.000936 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.980×, 0.983× | 0.997× |
| clang | 0.986× | 0.988×, 0.984× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000810s | 0.000810s | 0.000797s | byte equality observed |
| quick.test | 10 | 0.000796s | 0.000364s | 0.000781s | byte equality observed |
| variant_alternative.test | 10 | 0.000796s | 0.000803s | 0.000787s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000833s | 0.000807s | 0.000785s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000853s | 0.000845s | 0.000813s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000830s | 0.000812s | 0.000796s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000823s | 0.000819s | 0.000815s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000820s | 0.000834s | 0.000804s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000830s | 0.000819s | 0.000833s | byte equality observed |
| variant_default_construct.test | 10 | 0.000836s | 0.000809s | 0.000815s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000814s | 0.000796s | 0.000821s | byte equality observed |
| variant_destroy.test | 10 | 0.000804s | 0.000806s | 0.000791s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000845s | 0.000804s | 0.000798s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000834s | 0.000814s | 0.000773s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000806s | 0.000831s | 0.000800s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000834s | 0.000863s | 0.000834s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000811s | 0.000812s | 0.000815s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000833s | 0.000845s | 0.000829s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000853s | 0.000806s | 0.000808s | byte equality observed |
| variant_hash.test | 10 | 0.000806s | 0.000816s | 0.000782s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000811s | 0.000836s | 0.000814s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000791s | 0.000821s | 0.000807s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000834s | 0.000805s | 0.000785s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000824s | 0.000806s | 0.000794s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000817s | 0.000792s | 0.000781s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000811s | 0.000785s | 0.000776s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000811s | 0.000795s | 0.000800s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000829s | 0.000821s | 0.000793s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000820s | 0.000801s | 0.000809s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000812s | 0.000808s | 0.000817s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000824s | 0.000840s | 0.000803s | byte equality observed |
| variant_issue_55.test | 10 | 0.000832s | 0.000849s | 0.000820s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000837s | 0.000859s | 0.000817s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000839s | 0.000849s | 0.000829s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000774s | 0.000807s | 0.000775s | byte equality observed |
| variant_many_types.test | 10 | 0.000825s | 0.000799s | 0.000793s | byte equality observed |
| variant_move_assign.test | 10 | 0.000824s | 0.000806s | 0.000788s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000837s | 0.000818s | 0.000835s | byte equality observed |
| variant_move_construct.test | 10 | 0.000825s | 0.000801s | 0.000793s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000822s | 0.000837s | 0.000824s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000842s | 0.000823s | 0.000827s | byte equality observed |
| variant_size.test | 10 | 0.000802s | 0.000812s | 0.000770s | byte equality observed |
| variant_special.test | 10 | 0.000858s | 0.000842s | 0.000821s | byte equality observed |
| variant_subset.test | 10 | 0.000828s | 0.000813s | 0.000810s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000814s | 0.000788s | 0.000829s | byte equality observed |
| variant_swap.test | 10 | 0.000801s | 0.000795s | 0.000814s | byte equality observed |
| variant_trivial.test | 10 | 0.000847s | 0.000815s | 0.000817s | byte equality observed |
| variant_value_assign.test | 10 | 0.000812s | 0.000787s | 0.000801s | byte equality observed |
| variant_value_construct.test | 10 | 0.000805s | 0.000790s | 0.000794s | byte equality observed |
| variant_valueless.test | 10 | 0.000818s | 0.000821s | 0.000824s | byte equality observed |
| variant_visit.test | 10 | 0.000823s | 0.000804s | 0.000835s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000798s | 0.000804s | 0.000828s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000793s | 0.000800s | 0.000826s | byte equality observed |
| variant_visit_r.test | 10 | 0.000783s | 0.000769s | 0.000811s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
