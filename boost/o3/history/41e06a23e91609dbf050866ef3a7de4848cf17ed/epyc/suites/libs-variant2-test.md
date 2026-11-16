# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.166540 | 0.375834 | 0.591168 | 0.002049 | 0.000851 | 0.002004 |
| variant_size.test | RUN | 0.260423 | 0.848220 | 1.068438 | 0.002058 | 0.002149 | 0.001924 |
| variant_alternative.test | RUN | 0.364937 | 2.650152 | 1.808327 | 0.001976 | 0.002187 | 0.002094 |
| variant_holds_alternative.test | RUN | 0.253394 | 0.644467 | 1.053662 | 0.001747 | 0.002162 | 0.002030 |
| variant_holds_alternative_cx.test | COMPILE | 0.163904 | 0.399174 | 0.627981 | — | — | — |
| variant_get_by_index.test | RUN | 0.415897 | 2.833485 | 2.127378 | 0.002072 | 0.002150 | 0.002117 |
| variant_get_by_index_cx.test | COMPILE | 0.162574 | 0.403101 | 0.654456 | — | — | — |
| variant_get_by_type.test | RUN | 0.436293 | 3.044482 | 2.246174 | 0.001902 | 0.002162 | 0.001882 |
| variant_get_by_type_cx.test | COMPILE | 0.157241 | 0.355519 | 0.541368 | — | — | — |
| variant_default_construct.test | RUN | 0.409049 | 2.258870 | 1.845937 | 0.001629 | 0.001972 | 0.002126 |
| variant_default_construct_cx.test | COMPILE | 0.161917 | 0.338580 | 0.636909 | — | — | — |
| variant_copy_construct.test | RUN | 0.606165 | 3.775826 | 3.268881 | 0.001880 | 0.002082 | 0.002039 |
| variant_copy_construct_cx.test | COMPILE | 0.188311 | 0.416481 | 0.739745 | — | — | — |
| variant_move_construct.test | RUN | 0.561843 | 3.278642 | 3.025060 | 0.001972 | 0.001722 | 0.001954 |
| variant_move_construct_cx.test | COMPILE | 0.150414 | 0.353145 | 0.538949 | — | — | — |
| variant_value_construct.test | RUN | 0.307262 | 0.882661 | 1.311100 | 0.001800 | 0.002040 | 0.002041 |
| variant_value_construct_cx.test | COMPILE | 0.180390 | 0.385944 | 0.632160 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.319893 | 0.841623 | 1.318170 | 0.001959 | 0.001589 | 0.002071 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.170599 | 0.404222 | 0.615869 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.312173 | 0.844341 | 1.367592 | 0.001828 | 0.001971 | 0.001658 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.174813 | 0.389335 | 0.664867 | — | — | — |
| variant_copy_assign.test | RUN | 0.418863 | 2.593290 | 2.034938 | 0.001838 | 0.002076 | 0.001838 |
| variant_copy_assign_cx.test | COMPILE | 0.155231 | 0.342326 | 0.531022 | — | — | — |
| variant_move_assign.test | RUN | 0.413357 | 2.606478 | 2.026972 | 0.002141 | 0.002002 | 0.001704 |
| variant_move_assign_cx.test | COMPILE | 0.150444 | 0.340571 | 0.531138 | — | — | — |
| variant_value_assign.test | RUN | 0.326389 | 0.952696 | 1.463778 | 0.001733 | 0.002144 | 0.001847 |
| variant_value_assign_cx.test | COMPILE | 0.152337 | 0.328280 | 0.518834 | — | — | — |
| variant_emplace_index.test | RUN | 0.366111 | 1.106170 | 1.606512 | 0.002130 | 0.001855 | 0.002004 |
| variant_emplace_index_cx.test | COMPILE | 0.157392 | 0.356100 | 0.520430 | — | — | — |
| variant_emplace_type.test | RUN | 0.325896 | 0.909498 | 1.460982 | 0.001853 | 0.002176 | 0.001750 |
| variant_emplace_type_cx.test | COMPILE | 0.147120 | 0.338087 | 0.558018 | — | — | — |
| variant_swap.test | RUN | 0.335428 | 1.143920 | 1.548378 | 0.001764 | 0.002214 | 0.001743 |
| variant_eq_ne.test | RUN | 0.279932 | 0.723308 | 1.103034 | 0.001749 | 0.002034 | 0.002029 |
| variant_eq_ne_cx.test | COMPILE | 0.146502 | 0.330182 | 0.553842 | — | — | — |
| variant_lt_gt.test | RUN | 0.283757 | 0.794492 | 1.218218 | 0.002096 | 0.002142 | 0.001951 |
| variant_lt_gt_cx.test | COMPILE | 0.149021 | 0.322519 | 0.552516 | — | — | — |
| variant_destroy.test | RUN | 0.285631 | 0.798999 | 1.216666 | 0.001992 | 0.002152 | 0.002094 |
| variant_visit.test | RUN | 1.836552 | 6.128010 | 18.177307 | 0.001900 | 0.002262 | 0.001745 |
| variant_convert_construct.test | RUN | 0.363446 | 1.047800 | 1.685570 | 0.002094 | 0.002148 | 0.002084 |
| variant_subset.test | RUN | 0.378876 | 1.144838 | 1.772792 | 0.001894 | 0.002406 | 0.002049 |
| variant_valueless.test | RUN | 0.284019 | 0.735206 | 1.187563 | 0.001802 | 0.002092 | 0.002212 |
| variant_copy_construct_throw.test | RUN | 0.228900 | 0.545906 | 0.806860 | 0.002008 | 0.002224 | 0.002154 |
| variant_move_construct_throw.test | RUN | 0.213070 | 0.504071 | 0.866124 | 0.001928 | 0.001983 | 0.002089 |
| variant_convert_construct_throw.test | RUN | 0.221546 | 0.589817 | 0.892005 | 0.001890 | 0.002186 | 0.001940 |
| variant_copy_assign_throw.test | RUN | 0.210455 | 0.521070 | 0.801726 | 0.002024 | 0.002222 | 0.002142 |
| variant_move_assign_throw.test | RUN | 0.209668 | 0.551702 | 0.862020 | 0.002036 | 0.002124 | 0.002125 |
| variant_get_by_index_nx.test | RUN | 0.480983 | 2.470068 | 2.090374 | 0.001968 | 0.002079 | 0.002057 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.166843 | 0.416046 | 0.588046 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.498823 | 2.737339 | 2.226598 | 0.001944 | 0.001967 | 0.002032 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.150823 | 0.352534 | 0.561117 | — | — | — |
| variant_subset_nx.test | RUN | 0.385606 | 1.100387 | 1.803690 | 0.002042 | 0.002176 | 0.002074 |
| variant_hash.test | RUN | 0.372385 | 1.272760 | 1.584536 | 0.002162 | 0.002190 | 0.002054 |
| variant_trivial.test | RUN | 2.132549 | 6.888491 | 12.129929 | 0.002082 | 0.002280 | 0.002098 |
| variant_special.test | RUN | 2.132063 | 7.203008 | 12.339837 | 0.002252 | 0.002164 | 0.002094 |
| variant_visit_derived.test | RUN | 0.263480 | 0.692387 | 1.150071 | 0.002154 | 0.002183 | 0.001871 |
| variant_many_types.test | RUN | 2.265084 | 9.649643 | 16.170408 | 0.001784 | 0.002278 | 0.001944 |
| variant_visit_r.test | RUN | 1.007843 | 2.985995 | 6.124067 | 0.002108 | 0.002142 | 0.002094 |
| variant_derived_construct.test | COMPILE | 0.162290 | 0.335281 | 0.581579 | — | — | — |
| variant_visit_by_index.test | RUN | 0.345802 | 0.915382 | 1.436060 | 0.001709 | 0.002069 | 0.001821 |
| variant_ostream_insert.test | RUN | 0.245682 | 0.722519 | 1.071897 | 0.001794 | 0.002016 | 0.002107 |
| is_output_streamable.test | RUN | 0.312688 | 1.420648 | 1.466861 | 0.001701 | 0.001980 | 0.002046 |
| variant_json_value_from.test | RUN | 0.478052 | 1.259571 | 1.901478 | 0.002162 | 0.002222 | 0.002161 |
| variant_json_value_to.test | RUN | 0.576593 | 1.611944 | 2.389017 | 0.001998 | 0.002117 | 0.002150 |
| variant_uses_double_storage.test | COMPILE | 0.165422 | 0.357234 | 0.634491 | — | — | — |
| variant_derived_construct2.test | RUN | 0.216204 | 0.583159 | 0.939752 | 0.001678 | 0.002146 | 0.001945 |
| variant_visit_cx.test | COMPILE | 0.149764 | 0.354717 | 0.484863 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.149530 | 0.334861 | 0.474443 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.148813 | 0.334979 | 0.542535 | — | — | — |
| variant_index_type_126.test | RUN | 1.343519 | 3.250724 | 7.572548 | 0.002036 | 0.002283 | 0.001910 |
| variant_index_type_127.test | RUN | 1.358367 | 3.321822 | 7.789896 | 0.001856 | 0.002062 | 0.002086 |
| variant_index_type_128.test | RUN | 1.369804 | 3.399842 | 7.828708 | 0.002044 | 0.002370 | 0.001690 |
| variant_index_type_129.test | RUN | 1.371561 | 3.384227 | 7.620267 | 0.002104 | 0.002273 | 0.002014 |
| variant_index_type_254.test | RUN | 4.699878 | 11.993380 | 22.311386 | 0.002022 | 0.002127 | 0.002030 |
| variant_index_type_255.test | RUN | 4.938274 | 11.876238 | 22.185464 | 0.001707 | 0.002150 | 0.002134 |
| variant_index_type_256.test | RUN | 4.913458 | 12.243905 | 22.860081 | 0.001894 | 0.001851 | 0.001510 |
| variant_index_type_257.test | RUN | 4.834234 | 12.239493 | 22.657369 | 0.001825 | 0.002170 | 0.002110 |
| variant_default_construct_cx_2.test | COMPILE | 0.156315 | 0.363957 | 0.471017 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.142767 | 0.323552 | 0.541329 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.149837 | 0.343046 | 0.505075 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.148727 | 0.330405 | 0.497271 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.149588 | 0.346833 | 0.530905 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.145141 | 0.322816 | 0.508398 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.091553 | 0.281046 | 0.447971 | — | — | — |
| variant_issue_55.test | RUN | 0.179171 | 0.571306 | 0.763985 | 0.001574 | 0.001457 | 0.001289 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.994×, 0.992× | 0.988× |
| clang | 0.994× | 0.988×, 0.999× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001467s | 0.001518s | 0.001464s | byte equality observed |
| quick.test | 10 | 0.001446s | 0.000646s | 0.001424s | byte equality observed |
| variant_alternative.test | 10 | 0.001472s | 0.001490s | 0.001477s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001486s | 0.001494s | 0.001490s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001519s | 0.001558s | 0.001522s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001481s | 0.001512s | 0.001492s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001531s | 0.001522s | 0.001531s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001488s | 0.001466s | 0.001501s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001503s | 0.001528s | 0.001515s | byte equality observed |
| variant_default_construct.test | 10 | 0.001476s | 0.001483s | 0.001462s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001466s | 0.001501s | 0.001464s | byte equality observed |
| variant_destroy.test | 10 | 0.001512s | 0.001487s | 0.001478s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001479s | 0.001505s | 0.001483s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001493s | 0.001526s | 0.001461s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001455s | 0.001471s | 0.001475s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001575s | 0.001592s | 0.001578s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001505s | 0.001498s | 0.001460s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001577s | 0.001619s | 0.001548s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001493s | 0.001475s | 0.001464s | byte equality observed |
| variant_hash.test | 10 | 0.001483s | 0.001531s | 0.001447s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001482s | 0.001499s | 0.001474s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001515s | 0.001497s | 0.001502s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001492s | 0.001472s | 0.001526s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001486s | 0.001472s | 0.001480s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001491s | 0.001464s | 0.001460s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001482s | 0.001477s | 0.001468s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001472s | 0.001493s | 0.001476s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001485s | 0.001463s | 0.001506s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001497s | 0.001491s | 0.001524s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001500s | 0.001486s | 0.001484s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001472s | 0.001469s | 0.001477s | byte equality observed |
| variant_issue_55.test | 10 | 0.001508s | 0.001477s | 0.001507s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001574s | 0.001534s | 0.001543s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001564s | 0.001553s | 0.001563s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001458s | 0.001473s | 0.001458s | byte equality observed |
| variant_many_types.test | 10 | 0.001524s | 0.001556s | 0.001497s | byte equality observed |
| variant_move_assign.test | 10 | 0.001508s | 0.001506s | 0.001470s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001516s | 0.001528s | 0.001527s | byte equality observed |
| variant_move_construct.test | 10 | 0.001474s | 0.001504s | 0.001462s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001521s | 0.001508s | 0.001545s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001504s | 0.001545s | 0.001539s | byte equality observed |
| variant_size.test | 10 | 0.001474s | 0.001493s | 0.001465s | byte equality observed |
| variant_special.test | 10 | 0.001585s | 0.001575s | 0.001536s | byte equality observed |
| variant_subset.test | 10 | 0.001548s | 0.001512s | 0.001504s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001474s | 0.001482s | 0.001464s | byte equality observed |
| variant_swap.test | 10 | 0.001487s | 0.001469s | 0.001514s | byte equality observed |
| variant_trivial.test | 10 | 0.001544s | 0.001546s | 0.001497s | byte equality observed |
| variant_value_assign.test | 10 | 0.001496s | 0.001491s | 0.001453s | byte equality observed |
| variant_value_construct.test | 10 | 0.001496s | 0.001549s | 0.001524s | byte equality observed |
| variant_valueless.test | 10 | 0.001580s | 0.001562s | 0.001539s | byte equality observed |
| variant_visit.test | 10 | 0.001487s | 0.001494s | 0.001441s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001489s | 0.001469s | 0.001450s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001434s | 0.001433s | 0.001430s | byte equality observed |
| variant_visit_r.test | 10 | 0.001515s | 0.001427s | 0.001472s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
