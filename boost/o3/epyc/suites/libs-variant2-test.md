# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.090966 | 0.179396 | 0.236833 | 0.001448 | 0.000692 | 0.001591 |
| variant_size.test | RUN | 0.166705 | 0.445579 | 0.456495 | 0.001652 | 0.001592 | 0.001538 |
| variant_alternative.test | RUN | 0.210409 | 1.433899 | 0.800528 | 0.001656 | 0.001656 | 0.001311 |
| variant_holds_alternative.test | RUN | 0.156922 | 0.338220 | 0.475060 | 0.001512 | 0.001586 | 0.001582 |
| variant_holds_alternative_cx.test | COMPILE | 0.096833 | 0.194560 | 0.266768 | — | — | — |
| variant_get_by_index.test | RUN | 0.233296 | 1.599960 | 0.963206 | 0.001769 | 0.001512 | 0.001658 |
| variant_get_by_index_cx.test | COMPILE | 0.100252 | 0.207543 | 0.266232 | — | — | — |
| variant_get_by_type.test | RUN | 0.253231 | 1.700483 | 1.028603 | 0.001633 | 0.001706 | 0.001442 |
| variant_get_by_type_cx.test | COMPILE | 0.087545 | 0.179889 | 0.231281 | — | — | — |
| variant_default_construct.test | RUN | 0.223686 | 1.255224 | 0.810124 | 0.001656 | 0.001323 | 0.001438 |
| variant_default_construct_cx.test | COMPILE | 0.106270 | 0.185769 | 0.254474 | — | — | — |
| variant_copy_construct.test | RUN | 0.339607 | 2.070300 | 1.581199 | 0.001417 | 0.001471 | 0.001646 |
| variant_copy_construct_cx.test | COMPILE | 0.105779 | 0.222117 | 0.304293 | — | — | — |
| variant_move_construct.test | RUN | 0.317880 | 1.817205 | 1.379473 | 0.001254 | 0.001579 | 0.001657 |
| variant_move_construct_cx.test | COMPILE | 0.084270 | 0.188854 | 0.213375 | — | — | — |
| variant_value_construct.test | RUN | 0.169571 | 0.454232 | 0.580502 | 0.001228 | 0.001494 | 0.001291 |
| variant_value_construct_cx.test | COMPILE | 0.095248 | 0.205232 | 0.279947 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.182352 | 0.447101 | 0.587428 | 0.001288 | 0.001586 | 0.001283 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.095754 | 0.199752 | 0.260148 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.184033 | 0.449702 | 0.576857 | 0.001505 | 0.001576 | 0.001526 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.095272 | 0.208159 | 0.269404 | — | — | — |
| variant_copy_assign.test | RUN | 0.236007 | 1.423971 | 0.916335 | 0.001579 | 0.001509 | 0.001566 |
| variant_copy_assign_cx.test | COMPILE | 0.088646 | 0.179573 | 0.220601 | — | — | — |
| variant_move_assign.test | RUN | 0.242141 | 1.405170 | 0.925579 | 0.001469 | 0.001649 | 0.001314 |
| variant_move_assign_cx.test | COMPILE | 0.085516 | 0.182263 | 0.219466 | — | — | — |
| variant_value_assign.test | RUN | 0.189088 | 0.500088 | 0.642821 | 0.001380 | 0.001542 | 0.001199 |
| variant_value_assign_cx.test | COMPILE | 0.089778 | 0.173120 | 0.227036 | — | — | — |
| variant_emplace_index.test | RUN | 0.209640 | 0.607281 | 0.679592 | 0.001580 | 0.001474 | 0.001598 |
| variant_emplace_index_cx.test | COMPILE | 0.090347 | 0.176005 | 0.222458 | — | — | — |
| variant_emplace_type.test | RUN | 0.186920 | 0.526576 | 0.611132 | 0.001700 | 0.001653 | 0.001642 |
| variant_emplace_type_cx.test | COMPILE | 0.086031 | 0.214792 | 0.208159 | — | — | — |
| variant_swap.test | RUN | 0.194097 | 0.622939 | 0.663793 | 0.001688 | 0.001616 | 0.001558 |
| variant_eq_ne.test | RUN | 0.157585 | 0.371069 | 0.473415 | 0.001702 | 0.001552 | 0.001568 |
| variant_eq_ne_cx.test | COMPILE | 0.087062 | 0.179353 | 0.235766 | — | — | — |
| variant_lt_gt.test | RUN | 0.160646 | 0.430011 | 0.491321 | 0.001500 | 0.001608 | 0.001549 |
| variant_lt_gt_cx.test | COMPILE | 0.088430 | 0.177002 | 0.211862 | — | — | — |
| variant_destroy.test | RUN | 0.160678 | 0.425068 | 0.514365 | 0.001582 | 0.001628 | 0.001566 |
| variant_visit.test | RUN | 0.968533 | 3.262112 | 8.773688 | 0.001467 | 0.001808 | 0.001496 |
| variant_convert_construct.test | RUN | 0.198938 | 0.550891 | 0.714743 | 0.001684 | 0.001638 | 0.001528 |
| variant_subset.test | RUN | 0.201689 | 0.588011 | 0.765157 | 0.001770 | 0.001434 | 0.001585 |
| variant_valueless.test | RUN | 0.150732 | 0.390498 | 0.494753 | 0.001481 | 0.001640 | 0.001597 |
| variant_copy_construct_throw.test | RUN | 0.133357 | 0.284050 | 0.343081 | 0.002010 | 0.001695 | 0.001552 |
| variant_move_construct_throw.test | RUN | 0.124264 | 0.291542 | 0.352943 | 0.001628 | 0.001638 | 0.001301 |
| variant_convert_construct_throw.test | RUN | 0.130558 | 0.299794 | 0.371514 | 0.001453 | 0.001661 | 0.001418 |
| variant_copy_assign_throw.test | RUN | 0.119730 | 0.279610 | 0.356158 | 0.002000 | 0.001785 | 0.001549 |
| variant_move_assign_throw.test | RUN | 0.121908 | 0.278100 | 0.354817 | 0.001301 | 0.001768 | 0.001385 |
| variant_get_by_index_nx.test | RUN | 0.280330 | 1.353350 | 0.905082 | 0.001562 | 0.001570 | 0.001537 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.093344 | 0.216015 | 0.261493 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.273286 | 1.512634 | 0.995527 | 0.001615 | 0.001613 | 0.001643 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.085200 | 0.179737 | 0.215000 | — | — | — |
| variant_subset_nx.test | RUN | 0.219913 | 0.578090 | 0.793691 | 0.001592 | 0.001558 | 0.001694 |
| variant_hash.test | RUN | 0.210014 | 0.695081 | 0.710493 | 0.001381 | 0.001629 | 0.001602 |
| variant_trivial.test | RUN | 1.225296 | 4.053599 | 5.312388 | 0.001669 | 0.001606 | 0.001352 |
| variant_special.test | RUN | 1.162550 | 4.183055 | 5.551458 | 0.001936 | 0.001770 | 0.001662 |
| variant_visit_derived.test | RUN | 0.140374 | 0.364597 | 0.521649 | 0.001714 | 0.001654 | 0.001492 |
| variant_many_types.test | RUN | 1.226420 | 5.310578 | 7.568195 | 0.002072 | 0.001523 | 0.001486 |
| variant_visit_r.test | RUN | 0.496950 | 1.564422 | 2.865635 | 0.001659 | 0.001710 | 0.001407 |
| variant_derived_construct.test | COMPILE | 0.090850 | 0.183537 | 0.246197 | — | — | — |
| variant_visit_by_index.test | RUN | 0.205632 | 0.493975 | 0.713166 | 0.001431 | 0.001736 | 0.001472 |
| variant_ostream_insert.test | RUN | 0.147519 | 0.414326 | 0.462259 | 0.001421 | 0.001371 | 0.001305 |
| is_output_streamable.test | RUN | 0.186646 | 0.760411 | 0.621215 | 0.001622 | 0.001444 | 0.001582 |
| variant_json_value_from.test | RUN | 0.282147 | 0.635900 | 0.780138 | 0.001773 | 0.001646 | 0.001686 |
| variant_json_value_to.test | RUN | 0.381219 | 0.853049 | 1.095040 | 0.001750 | 0.001616 | 0.001506 |
| variant_uses_double_storage.test | COMPILE | 0.097173 | 0.183493 | 0.262749 | — | — | — |
| variant_derived_construct2.test | RUN | 0.170429 | 0.317252 | 0.393460 | 0.001298 | 0.001550 | 0.001520 |
| variant_visit_cx.test | COMPILE | 0.100948 | 0.177110 | 0.219661 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089094 | 0.186315 | 0.205166 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087036 | 0.179107 | 0.216887 | — | — | — |
| variant_index_type_126.test | RUN | 0.849305 | 1.797231 | 3.260109 | 0.001683 | 0.001704 | 0.001252 |
| variant_index_type_127.test | RUN | 0.820887 | 1.782190 | 3.263181 | 0.001570 | 0.001602 | 0.001341 |
| variant_index_type_128.test | RUN | 0.863032 | 1.839410 | 3.289343 | 0.001376 | 0.001560 | 0.001468 |
| variant_index_type_129.test | RUN | 0.838551 | 1.826580 | 3.272355 | 0.003372 | 0.001375 | 0.001589 |
| variant_index_type_254.test | RUN | 2.961433 | 6.486940 | 10.667090 | 0.001560 | 0.001479 | 0.001483 |
| variant_index_type_255.test | RUN | 3.101007 | 6.503398 | 10.758612 | 0.001450 | 0.001604 | 0.001490 |
| variant_index_type_256.test | RUN | 3.031109 | 6.799613 | 10.825394 | 0.001340 | 0.001581 | 0.001365 |
| variant_index_type_257.test | RUN | 3.087344 | 6.854721 | 10.837901 | 0.001467 | 0.001549 | 0.001605 |
| variant_default_construct_cx_2.test | COMPILE | 0.084832 | 0.180037 | 0.213600 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.083190 | 0.175728 | 0.214776 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.082835 | 0.180100 | 0.211142 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.086765 | 0.180271 | 0.217007 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.087548 | 0.181116 | 0.215211 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.085565 | 0.157852 | 0.216118 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.086213 | 0.151555 | 0.170917 | — | — | — |
| variant_issue_55.test | RUN | 0.137525 | 0.305173 | 0.315156 | 0.001293 | 0.001158 | 0.001151 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.005×, 0.999× | 1.024× |
| clang | 1.078× | 1.078×, 1.077× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000867s | 0.000887s | 0.000972s | byte equality observed |
| quick.test | 10 | 0.000863s | 0.000394s | 0.000968s | byte equality observed |
| variant_alternative.test | 10 | 0.000864s | 0.000904s | 0.000995s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000861s | 0.000864s | 0.000970s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000893s | 0.000879s | 0.001007s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000883s | 0.000873s | 0.001003s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000865s | 0.000871s | 0.001028s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000878s | 0.000872s | 0.000988s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000883s | 0.000873s | 0.001027s | byte equality observed |
| variant_default_construct.test | 10 | 0.000880s | 0.000858s | 0.000989s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000852s | 0.000844s | 0.000994s | byte equality observed |
| variant_destroy.test | 10 | 0.000858s | 0.000878s | 0.001033s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000870s | 0.000866s | 0.000991s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000883s | 0.000866s | 0.001002s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000868s | 0.000874s | 0.001005s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000920s | 0.000923s | 0.001060s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000893s | 0.000899s | 0.000999s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000927s | 0.000907s | 0.001034s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000887s | 0.000891s | 0.001011s | byte equality observed |
| variant_hash.test | 10 | 0.000880s | 0.000886s | 0.001004s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000862s | 0.000868s | 0.000989s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000895s | 0.000856s | 0.001005s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000884s | 0.000904s | 0.001007s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000879s | 0.000870s | 0.001007s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000883s | 0.000864s | 0.000994s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000876s | 0.000891s | 0.001000s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000878s | 0.000893s | 0.001002s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000881s | 0.000863s | 0.001011s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000884s | 0.000878s | 0.000996s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000868s | 0.000882s | 0.001027s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000880s | 0.000878s | 0.001009s | byte equality observed |
| variant_issue_55.test | 10 | 0.000892s | 0.000879s | 0.001013s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000912s | 0.000904s | 0.001027s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000903s | 0.000892s | 0.001040s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000886s | 0.000873s | 0.001015s | byte equality observed |
| variant_many_types.test | 10 | 0.000894s | 0.000902s | 0.001038s | byte equality observed |
| variant_move_assign.test | 10 | 0.000904s | 0.000874s | 0.000979s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000916s | 0.000879s | 0.001031s | byte equality observed |
| variant_move_construct.test | 10 | 0.000884s | 0.000904s | 0.000991s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000892s | 0.000877s | 0.001017s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000879s | 0.000880s | 0.001025s | byte equality observed |
| variant_size.test | 10 | 0.000903s | 0.000869s | 0.001008s | byte equality observed |
| variant_special.test | 10 | 0.000949s | 0.000937s | 0.001088s | byte equality observed |
| variant_subset.test | 10 | 0.000909s | 0.000897s | 0.001034s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000871s | 0.000856s | 0.001008s | byte equality observed |
| variant_swap.test | 10 | 0.000890s | 0.000871s | 0.001018s | byte equality observed |
| variant_trivial.test | 10 | 0.000931s | 0.000922s | 0.001028s | byte equality observed |
| variant_value_assign.test | 10 | 0.000871s | 0.000896s | 0.001004s | byte equality observed |
| variant_value_construct.test | 10 | 0.000870s | 0.000886s | 0.001015s | byte equality observed |
| variant_valueless.test | 10 | 0.000903s | 0.000895s | 0.001048s | byte equality observed |
| variant_visit.test | 10 | 0.000875s | 0.000891s | 0.001011s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000883s | 0.000860s | 0.001007s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000857s | 0.000881s | 0.000988s | byte equality observed |
| variant_visit_r.test | 10 | 0.000861s | 0.000843s | 0.001000s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
