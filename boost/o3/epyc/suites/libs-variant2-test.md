# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.160552 | 0.357621 | 0.586810 | 0.002118 | 0.000969 | 0.002058 |
| variant_size.test | RUN | 0.287393 | 0.868184 | 1.100438 | 0.002086 | 0.002232 | 0.002119 |
| variant_alternative.test | RUN | 0.375138 | 2.692685 | 1.771405 | 0.001956 | 0.002084 | 0.001932 |
| variant_holds_alternative.test | RUN | 0.259537 | 0.666283 | 1.076015 | 0.001903 | 0.002056 | 0.002048 |
| variant_holds_alternative_cx.test | COMPILE | 0.174276 | 0.396752 | 0.635144 | — | — | — |
| variant_get_by_index.test | RUN | 0.397879 | 2.996243 | 2.198903 | 0.002048 | 0.002240 | 0.002190 |
| variant_get_by_index_cx.test | COMPILE | 0.180801 | 0.426533 | 0.668045 | — | — | — |
| variant_get_by_type.test | RUN | 0.447026 | 3.157793 | 2.344485 | 0.002064 | 0.002220 | 0.002142 |
| variant_get_by_type_cx.test | COMPILE | 0.153462 | 0.347245 | 0.531838 | — | — | — |
| variant_default_construct.test | RUN | 0.392240 | 2.325128 | 1.927141 | 0.001911 | 0.001954 | 0.002208 |
| variant_default_construct_cx.test | COMPILE | 0.176514 | 0.381157 | 0.651022 | — | — | — |
| variant_copy_construct.test | RUN | 0.615464 | 3.837094 | 3.302324 | 0.002065 | 0.001904 | 0.002178 |
| variant_copy_construct_cx.test | COMPILE | 0.196120 | 0.449044 | 0.773792 | — | — | — |
| variant_move_construct.test | RUN | 0.580499 | 3.363502 | 3.051835 | 0.001718 | 0.002098 | 0.001515 |
| variant_move_construct_cx.test | COMPILE | 0.169459 | 0.363588 | 0.564298 | — | — | — |
| variant_value_construct.test | RUN | 0.320703 | 0.900830 | 1.350278 | 0.001827 | 0.002060 | 0.002124 |
| variant_value_construct_cx.test | COMPILE | 0.176525 | 0.421484 | 0.649176 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.327959 | 0.911581 | 1.401164 | 0.002038 | 0.002196 | 0.002086 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.181645 | 0.405772 | 0.610048 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.314131 | 0.899301 | 1.357053 | 0.002082 | 0.002232 | 0.002148 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.179347 | 0.409254 | 0.681109 | — | — | — |
| variant_copy_assign.test | RUN | 0.428505 | 2.755200 | 2.171716 | 0.001891 | 0.002160 | 0.001854 |
| variant_copy_assign_cx.test | COMPILE | 0.165472 | 0.353468 | 0.516529 | — | — | — |
| variant_move_assign.test | RUN | 0.415045 | 2.703612 | 2.101118 | 0.001944 | 0.002244 | 0.001786 |
| variant_move_assign_cx.test | COMPILE | 0.160410 | 0.356479 | 0.543051 | — | — | — |
| variant_value_assign.test | RUN | 0.322323 | 0.990058 | 1.462304 | 0.002174 | 0.002173 | 0.002009 |
| variant_value_assign_cx.test | COMPILE | 0.159028 | 0.355983 | 0.568445 | — | — | — |
| variant_emplace_index.test | RUN | 0.358425 | 1.166445 | 1.666522 | 0.001824 | 0.002036 | 0.001909 |
| variant_emplace_index_cx.test | COMPILE | 0.152650 | 0.372969 | 0.483500 | — | — | — |
| variant_emplace_type.test | RUN | 0.320899 | 0.970411 | 1.471815 | 0.002222 | 0.002314 | 0.002154 |
| variant_emplace_type_cx.test | COMPILE | 0.158476 | 0.352933 | 0.548081 | — | — | — |
| variant_swap.test | RUN | 0.346428 | 1.230788 | 1.564140 | 0.002107 | 0.001967 | 0.001731 |
| variant_eq_ne.test | RUN | 0.280946 | 0.754151 | 1.148303 | 0.002091 | 0.002306 | 0.002078 |
| variant_eq_ne_cx.test | COMPILE | 0.152720 | 0.376339 | 0.503953 | — | — | — |
| variant_lt_gt.test | RUN | 0.287607 | 0.861723 | 1.241526 | 0.002024 | 0.002262 | 0.002116 |
| variant_lt_gt_cx.test | COMPILE | 0.161966 | 0.356379 | 0.548010 | — | — | — |
| variant_destroy.test | RUN | 0.300609 | 0.836845 | 1.230280 | 0.002086 | 0.002315 | 0.002014 |
| variant_visit.test | RUN | 1.852961 | 6.362670 | 18.325580 | 0.002052 | 0.002009 | 0.002066 |
| variant_convert_construct.test | RUN | 0.378901 | 1.103533 | 1.676178 | 0.001889 | 0.002220 | 0.002147 |
| variant_subset.test | RUN | 0.365465 | 1.193722 | 1.801299 | 0.002120 | 0.002272 | 0.002206 |
| variant_valueless.test | RUN | 0.296719 | 0.760811 | 1.229105 | 0.002152 | 0.002375 | 0.002285 |
| variant_copy_construct_throw.test | RUN | 0.222156 | 0.557950 | 0.846717 | 0.001978 | 0.002294 | 0.002188 |
| variant_move_construct_throw.test | RUN | 0.222184 | 0.554717 | 0.885102 | 0.002212 | 0.002334 | 0.002284 |
| variant_convert_construct_throw.test | RUN | 0.233617 | 0.610167 | 0.914310 | 0.001937 | 0.002294 | 0.002062 |
| variant_copy_assign_throw.test | RUN | 0.217538 | 0.550130 | 0.879211 | 0.002096 | 0.002284 | 0.002044 |
| variant_move_assign_throw.test | RUN | 0.219543 | 0.563870 | 0.843934 | 0.002018 | 0.002048 | 0.002236 |
| variant_get_by_index_nx.test | RUN | 0.504959 | 2.515656 | 2.177456 | 0.002114 | 0.002100 | 0.002104 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.169414 | 0.422829 | 0.630228 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.508801 | 2.869658 | 2.306215 | 0.002012 | 0.001859 | 0.002158 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.148197 | 0.354003 | 0.569270 | — | — | — |
| variant_subset_nx.test | RUN | 0.410400 | 1.175138 | 1.758937 | 0.002130 | 0.001990 | 0.002026 |
| variant_hash.test | RUN | 0.392549 | 1.324406 | 1.660749 | 0.002084 | 0.002156 | 0.001861 |
| variant_trivial.test | RUN | 2.266046 | 7.274475 | 12.611410 | 0.002098 | 0.002200 | 0.002113 |
| variant_special.test | RUN | 2.243728 | 7.748187 | 12.915750 | 0.001804 | 0.002650 | 0.002315 |
| variant_visit_derived.test | RUN | 0.285028 | 0.698154 | 1.167675 | 0.002152 | 0.002210 | 0.002068 |
| variant_many_types.test | RUN | 2.301458 | 10.093574 | 16.444988 | 0.002010 | 0.002317 | 0.001862 |
| variant_visit_r.test | RUN | 1.079994 | 3.121194 | 6.393066 | 0.001876 | 0.002254 | 0.001755 |
| variant_derived_construct.test | COMPILE | 0.173044 | 0.352389 | 0.558041 | — | — | — |
| variant_visit_by_index.test | RUN | 0.345327 | 0.901685 | 1.485115 | 0.001794 | 0.002138 | 0.001881 |
| variant_ostream_insert.test | RUN | 0.253407 | 0.734204 | 1.110871 | 0.001935 | 0.002025 | 0.001535 |
| is_output_streamable.test | RUN | 0.300124 | 1.445675 | 1.502361 | 0.001819 | 0.002110 | 0.002052 |
| variant_json_value_from.test | RUN | 0.480435 | 1.263096 | 1.909851 | 0.001746 | 0.002346 | 0.002232 |
| variant_json_value_to.test | RUN | 0.588079 | 1.671157 | 2.515023 | 0.002098 | 0.002112 | 0.002182 |
| variant_uses_double_storage.test | COMPILE | 0.163184 | 0.365944 | 0.650276 | — | — | — |
| variant_derived_construct2.test | RUN | 0.229229 | 0.594679 | 0.948827 | 0.001997 | 0.002166 | 0.002031 |
| variant_visit_cx.test | COMPILE | 0.159387 | 0.357887 | 0.511912 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.152373 | 0.335553 | 0.534733 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.155468 | 0.343622 | 0.535384 | — | — | — |
| variant_index_type_126.test | RUN | 1.372200 | 3.371442 | 8.054788 | 0.001988 | 0.002215 | 0.002142 |
| variant_index_type_127.test | RUN | 1.378136 | 3.409308 | 7.972705 | 0.001938 | 0.002308 | 0.002134 |
| variant_index_type_128.test | RUN | 1.389773 | 3.498939 | 8.166546 | 0.001812 | 0.002287 | 0.002114 |
| variant_index_type_129.test | RUN | 1.399691 | 3.490576 | 8.133308 | 0.002224 | 0.002320 | 0.002086 |
| variant_index_type_254.test | RUN | 4.611518 | 12.155411 | 22.950656 | 0.001924 | 0.002214 | 0.002052 |
| variant_index_type_255.test | RUN | 4.660643 | 12.319369 | 23.120020 | 0.001845 | 0.002243 | 0.002347 |
| variant_index_type_256.test | RUN | 4.692403 | 12.333565 | 23.038738 | 0.001772 | 0.002221 | 0.002041 |
| variant_index_type_257.test | RUN | 4.750641 | 12.615943 | 23.272196 | 0.001772 | 0.001956 | 0.002188 |
| variant_default_construct_cx_2.test | COMPILE | 0.142000 | 0.358876 | 0.489150 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.153648 | 0.350498 | 0.568785 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.153939 | 0.379641 | 0.530401 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.155723 | 0.348228 | 0.543453 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.153252 | 0.346321 | 0.467754 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.150808 | 0.343925 | 0.534821 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.150551 | 0.289776 | 0.501535 | — | — | — |
| variant_issue_55.test | RUN | 0.211677 | 0.554033 | 0.730823 | 0.001660 | 0.001694 | 0.001604 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.986×, 0.987× | 1.007× |
| clang | 0.988× | 0.990×, 0.986× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001494s | 0.001512s | 0.001465s | byte equality observed |
| quick.test | 10 | 0.001500s | 0.000661s | 0.001448s | byte equality observed |
| variant_alternative.test | 10 | 0.001499s | 0.001521s | 0.001490s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001515s | 0.001516s | 0.001477s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001540s | 0.001554s | 0.001511s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001495s | 0.001517s | 0.001476s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001504s | 0.001548s | 0.001508s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001497s | 0.001522s | 0.001458s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001543s | 0.001544s | 0.001530s | byte equality observed |
| variant_default_construct.test | 10 | 0.001496s | 0.001496s | 0.001469s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001523s | 0.001490s | 0.001507s | byte equality observed |
| variant_destroy.test | 10 | 0.001510s | 0.001477s | 0.001490s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001501s | 0.001504s | 0.001497s | byte equality observed |
| variant_emplace_type.test | 9 | 0.001529s | 0.001503s | 0.001482s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001499s | 0.001446s | 0.001503s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001612s | 0.001631s | 0.001574s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001494s | 0.001490s | 0.001492s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001542s | 0.001598s | 0.001547s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001511s | 0.001527s | 0.001477s | byte equality observed |
| variant_hash.test | 10 | 0.001496s | 0.001521s | 0.001466s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001523s | 0.001510s | 0.001470s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001520s | 0.001500s | 0.001464s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001518s | 0.001528s | 0.001485s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001483s | 0.001464s | 0.001479s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001498s | 0.001504s | 0.001480s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001481s | 0.001516s | 0.001474s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001482s | 0.001509s | 0.001482s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001492s | 0.001519s | 0.001462s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001476s | 0.001503s | 0.001468s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001482s | 0.001501s | 0.001468s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001523s | 0.001500s | 0.001485s | byte equality observed |
| variant_issue_55.test | 10 | 0.001501s | 0.001557s | 0.001497s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001577s | 0.001574s | 0.001495s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001560s | 0.001574s | 0.001486s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001483s | 0.001499s | 0.001454s | byte equality observed |
| variant_many_types.test | 10 | 0.001552s | 0.001534s | 0.001493s | byte equality observed |
| variant_move_assign.test | 10 | 0.001516s | 0.001534s | 0.001437s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001528s | 0.001552s | 0.001502s | byte equality observed |
| variant_move_construct.test | 10 | 0.001504s | 0.001563s | 0.001497s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001513s | 0.001560s | 0.001537s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001545s | 0.001535s | 0.001466s | byte equality observed |
| variant_size.test | 10 | 0.001520s | 0.001511s | 0.001490s | byte equality observed |
| variant_special.test | 10 | 0.001618s | 0.001587s | 0.001535s | byte equality observed |
| variant_subset.test | 10 | 0.001525s | 0.001493s | 0.001506s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001487s | 0.001527s | 0.001473s | byte equality observed |
| variant_swap.test | 10 | 0.001509s | 0.001508s | 0.001465s | byte equality observed |
| variant_trivial.test | 10 | 0.001557s | 0.001580s | 0.001521s | byte equality observed |
| variant_value_assign.test | 10 | 0.001521s | 0.001522s | 0.001501s | byte equality observed |
| variant_value_construct.test | 10 | 0.001501s | 0.001509s | 0.001440s | byte equality observed |
| variant_valueless.test | 10 | 0.001576s | 0.001554s | 0.001572s | byte equality observed |
| variant_visit.test | 10 | 0.001507s | 0.001529s | 0.001474s | byte equality observed |
| variant_visit_by_index.test | 9 | 0.001503s | 0.001497s | 0.001484s | byte equality observed |
| variant_visit_derived.test | 8 | 0.001485s | 0.001498s | 0.001470s | byte equality observed |
| variant_visit_r.test | 10 | 0.001542s | 0.001508s | 0.001502s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
