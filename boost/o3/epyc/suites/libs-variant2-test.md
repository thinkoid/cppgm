# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.149601 | 0.344276 | 0.488208 | 0.002106 | 0.000935 | 0.002193 |
| variant_size.test | RUN | 0.269890 | 0.787000 | 0.910986 | 0.002300 | 0.002250 | 0.002080 |
| variant_alternative.test | RUN | 0.340629 | 2.477786 | 1.564971 | 0.002206 | 0.002242 | 0.002148 |
| variant_holds_alternative.test | RUN | 0.250232 | 0.592144 | 0.877558 | 0.001943 | 0.002298 | 0.002095 |
| variant_holds_alternative_cx.test | COMPILE | 0.158223 | 0.360086 | 0.521283 | — | — | — |
| variant_get_by_index.test | RUN | 0.391901 | 2.699742 | 1.817684 | 0.002194 | 0.002108 | 0.002222 |
| variant_get_by_index_cx.test | COMPILE | 0.158767 | 0.365192 | 0.552740 | — | — | — |
| variant_get_by_type.test | RUN | 0.397231 | 2.844368 | 1.965581 | 0.002304 | 0.002166 | 0.002214 |
| variant_get_by_type_cx.test | COMPILE | 0.151493 | 0.312244 | 0.456861 | — | — | — |
| variant_default_construct.test | RUN | 0.371455 | 2.138817 | 1.591174 | 0.002095 | 0.001994 | 0.002322 |
| variant_default_construct_cx.test | COMPILE | 0.169508 | 0.342255 | 0.539253 | — | — | — |
| variant_copy_construct.test | RUN | 0.572891 | 3.523492 | 2.892676 | 0.001754 | 0.002200 | 0.002178 |
| variant_copy_construct_cx.test | COMPILE | 0.189933 | 0.394589 | 0.631520 | — | — | — |
| variant_move_construct.test | RUN | 0.528912 | 3.052507 | 2.645067 | 0.001870 | 0.001864 | 0.002140 |
| variant_move_construct_cx.test | COMPILE | 0.146318 | 0.317443 | 0.445918 | — | — | — |
| variant_value_construct.test | RUN | 0.283937 | 0.797135 | 1.121048 | 0.002124 | 0.002172 | 0.002182 |
| variant_value_construct_cx.test | COMPILE | 0.168091 | 0.370264 | 0.530412 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.297210 | 0.803865 | 1.090000 | 0.002182 | 0.002102 | 0.002226 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.165629 | 0.352765 | 0.532359 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.292754 | 0.793082 | 1.153236 | 0.002115 | 0.002051 | 0.002094 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.164917 | 0.353606 | 0.497039 | — | — | — |
| variant_copy_assign.test | RUN | 0.401313 | 2.434841 | 1.769774 | 0.002016 | 0.002167 | 0.002266 |
| variant_copy_assign_cx.test | COMPILE | 0.141015 | 0.321769 | 0.436804 | — | — | — |
| variant_move_assign.test | RUN | 0.392888 | 2.403769 | 1.770629 | 0.002024 | 0.002055 | 0.001732 |
| variant_move_assign_cx.test | COMPILE | 0.143730 | 0.320413 | 0.459150 | — | — | — |
| variant_value_assign.test | RUN | 0.306830 | 0.878683 | 1.210953 | 0.002244 | 0.001942 | 0.002004 |
| variant_value_assign_cx.test | COMPILE | 0.143404 | 0.310903 | 0.466017 | — | — | — |
| variant_emplace_index.test | RUN | 0.330294 | 1.019807 | 1.364218 | 0.002046 | 0.002060 | 0.002236 |
| variant_emplace_index_cx.test | COMPILE | 0.146188 | 0.328407 | 0.400228 | — | — | — |
| variant_emplace_type.test | RUN | 0.303949 | 0.869083 | 1.231494 | 0.002106 | 0.002254 | 0.001962 |
| variant_emplace_type_cx.test | COMPILE | 0.144322 | 0.328988 | 0.461542 | — | — | — |
| variant_swap.test | RUN | 0.316653 | 1.069710 | 1.297872 | 0.002029 | 0.002068 | 0.001553 |
| variant_eq_ne.test | RUN | 0.252012 | 0.654801 | 0.930197 | 0.001832 | 0.001866 | 0.002158 |
| variant_eq_ne_cx.test | COMPILE | 0.147613 | 0.320010 | 0.414564 | — | — | — |
| variant_lt_gt.test | RUN | 0.272111 | 0.749566 | 1.003364 | 0.002188 | 0.002232 | 0.002112 |
| variant_lt_gt_cx.test | COMPILE | 0.137301 | 0.304473 | 0.449913 | — | — | — |
| variant_destroy.test | RUN | 0.277940 | 0.721625 | 1.025053 | 0.002054 | 0.002322 | 0.002160 |
| variant_visit.test | RUN | 1.673690 | 5.669969 | 15.907909 | 0.001926 | 0.002330 | 0.002126 |
| variant_convert_construct.test | RUN | 0.334825 | 0.969573 | 1.378739 | 0.002192 | 0.002238 | 0.002214 |
| variant_subset.test | RUN | 0.348406 | 1.066718 | 1.486442 | 0.002221 | 0.002252 | 0.002175 |
| variant_valueless.test | RUN | 0.255778 | 0.668362 | 0.985969 | 0.002084 | 0.002308 | 0.002197 |
| variant_copy_construct_throw.test | RUN | 0.214061 | 0.507917 | 0.681087 | 0.002076 | 0.002383 | 0.002189 |
| variant_move_construct_throw.test | RUN | 0.202506 | 0.506915 | 0.688050 | 0.002109 | 0.002214 | 0.002198 |
| variant_convert_construct_throw.test | RUN | 0.209322 | 0.507260 | 0.774848 | 0.001892 | 0.002335 | 0.002047 |
| variant_copy_assign_throw.test | RUN | 0.202151 | 0.474721 | 0.675291 | 0.001888 | 0.002277 | 0.002132 |
| variant_move_assign_throw.test | RUN | 0.202991 | 0.502589 | 0.687789 | 0.002090 | 0.002240 | 0.002152 |
| variant_get_by_index_nx.test | RUN | 0.473082 | 2.299216 | 1.775477 | 0.002119 | 0.002085 | 0.002145 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.156868 | 0.374569 | 0.496278 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.468068 | 2.552245 | 1.887265 | 0.002067 | 0.002102 | 0.002102 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.136459 | 0.315918 | 0.455900 | — | — | — |
| variant_subset_nx.test | RUN | 0.363903 | 1.024333 | 1.543099 | 0.002028 | 0.002084 | 0.002018 |
| variant_hash.test | RUN | 0.358504 | 1.157613 | 1.329151 | 0.002101 | 0.002316 | 0.002139 |
| variant_trivial.test | RUN | 2.005850 | 6.437967 | 10.257907 | 0.002288 | 0.002389 | 0.002052 |
| variant_special.test | RUN | 1.949721 | 7.144853 | 10.579220 | 0.002548 | 0.002447 | 0.002224 |
| variant_visit_derived.test | RUN | 0.256346 | 0.638413 | 1.030333 | 0.002105 | 0.002249 | 0.002118 |
| variant_many_types.test | RUN | 2.053426 | 9.142143 | 14.027234 | 0.002048 | 0.002208 | 0.002146 |
| variant_visit_r.test | RUN | 0.882000 | 2.728153 | 5.370408 | 0.002090 | 0.002332 | 0.001789 |
| variant_derived_construct.test | COMPILE | 0.153455 | 0.336241 | 0.489424 | — | — | — |
| variant_visit_by_index.test | RUN | 0.321792 | 0.835884 | 1.373349 | 0.002051 | 0.002034 | 0.002059 |
| variant_ostream_insert.test | RUN | 0.228197 | 0.686142 | 0.813945 | 0.002252 | 0.002347 | 0.002093 |
| is_output_streamable.test | RUN | 0.283553 | 1.382482 | 1.211775 | 0.001866 | 0.002138 | 0.002116 |
| variant_json_value_from.test | RUN | 0.459760 | 1.109399 | 1.646378 | 0.001773 | 0.002157 | 0.001908 |
| variant_json_value_to.test | RUN | 0.545174 | 1.494030 | 2.022516 | 0.002192 | 0.002022 | 0.002168 |
| variant_uses_double_storage.test | COMPILE | 0.156268 | 0.332121 | 0.526911 | — | — | — |
| variant_derived_construct2.test | RUN | 0.213234 | 0.553652 | 0.773524 | 0.001856 | 0.002189 | 0.002004 |
| variant_visit_cx.test | COMPILE | 0.146181 | 0.322622 | 0.409018 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.145455 | 0.305131 | 0.450304 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.141740 | 0.304879 | 0.455983 | — | — | — |
| variant_index_type_126.test | RUN | 1.239599 | 3.075373 | 6.461599 | 0.001945 | 0.002326 | 0.002099 |
| variant_index_type_127.test | RUN | 1.256521 | 3.154782 | 6.514110 | 0.002050 | 0.002289 | 0.002138 |
| variant_index_type_128.test | RUN | 1.267699 | 3.203075 | 6.710424 | 0.001720 | 0.002285 | 0.002096 |
| variant_index_type_129.test | RUN | 1.304420 | 3.205370 | 6.604251 | 0.002046 | 0.002188 | 0.002104 |
| variant_index_type_254.test | RUN | 4.414847 | 11.712502 | 19.655837 | 0.001912 | 0.002296 | 0.002145 |
| variant_index_type_255.test | RUN | 4.342441 | 11.794273 | 19.972269 | 0.001800 | 0.002072 | 0.002178 |
| variant_index_type_256.test | RUN | 4.472078 | 11.942113 | 20.311590 | 0.001956 | 0.001992 | 0.002171 |
| variant_index_type_257.test | RUN | 4.502490 | 12.026929 | 20.158877 | 0.001944 | 0.002080 | 0.001689 |
| variant_default_construct_cx_2.test | COMPILE | 0.142905 | 0.315195 | 0.481648 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.143829 | 0.303384 | 0.366937 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.144290 | 0.311529 | 0.373309 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.137443 | 0.302948 | 0.446277 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.143905 | 0.305636 | 0.440350 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.124779 | 0.304672 | 0.446258 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.108737 | 0.256581 | 0.441757 | — | — | — |
| variant_issue_55.test | RUN | 0.201855 | 0.553070 | 0.603980 | 0.001548 | 0.001551 | 0.001544 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.986×, 0.974× | 1.009× |
| clang | 0.990× | 0.995×, 0.985× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 9 | 0.001498s | 0.001494s | 0.001480s | byte equality observed |
| quick.test | 10 | 0.001487s | 0.000657s | 0.001434s | byte equality observed |
| variant_alternative.test | 10 | 0.001488s | 0.001529s | 0.001481s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001523s | 0.001498s | 0.001485s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001564s | 0.001552s | 0.001577s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001499s | 0.001503s | 0.001510s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001559s | 0.001498s | 0.001564s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001515s | 0.001503s | 0.001513s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001534s | 0.001523s | 0.001530s | byte equality observed |
| variant_default_construct.test | 10 | 0.001517s | 0.001479s | 0.001530s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001504s | 0.001497s | 0.001512s | byte equality observed |
| variant_destroy.test | 10 | 0.001499s | 0.001476s | 0.001454s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001504s | 0.001526s | 0.001518s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001516s | 0.001489s | 0.001514s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001480s | 0.001461s | 0.001472s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001579s | 0.001622s | 0.001608s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001534s | 0.001488s | 0.001500s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001599s | 0.001622s | 0.001573s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001537s | 0.001518s | 0.001492s | byte equality observed |
| variant_hash.test | 10 | 0.001511s | 0.001513s | 0.001491s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001518s | 0.001501s | 0.001507s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001502s | 0.001485s | 0.001489s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001535s | 0.001495s | 0.001501s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001507s | 0.001457s | 0.001491s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001504s | 0.001479s | 0.001509s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001507s | 0.001450s | 0.001524s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001528s | 0.001466s | 0.001492s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001514s | 0.001480s | 0.001536s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001516s | 0.001493s | 0.001489s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001516s | 0.001485s | 0.001509s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001529s | 0.001488s | 0.001527s | byte equality observed |
| variant_issue_55.test | 10 | 0.001554s | 0.001511s | 0.001529s | byte equality observed |
| variant_json_value_from.test | 9 | 0.001570s | 0.001552s | 0.001568s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001574s | 0.001564s | 0.001565s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001510s | 0.001507s | 0.001493s | byte equality observed |
| variant_many_types.test | 10 | 0.001551s | 0.001530s | 0.001552s | byte equality observed |
| variant_move_assign.test | 10 | 0.001526s | 0.001501s | 0.001502s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001563s | 0.001546s | 0.001558s | byte equality observed |
| variant_move_construct.test | 10 | 0.001503s | 0.001507s | 0.001483s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001536s | 0.001557s | 0.001548s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001534s | 0.001538s | 0.001546s | byte equality observed |
| variant_size.test | 10 | 0.001511s | 0.001502s | 0.001466s | byte equality observed |
| variant_special.test | 10 | 0.001608s | 0.001561s | 0.001548s | byte equality observed |
| variant_subset.test | 10 | 0.001539s | 0.001535s | 0.001542s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001540s | 0.001490s | 0.001568s | byte equality observed |
| variant_swap.test | 10 | 0.001504s | 0.001481s | 0.001514s | byte equality observed |
| variant_trivial.test | 10 | 0.001573s | 0.001558s | 0.001522s | byte equality observed |
| variant_value_assign.test | 10 | 0.001518s | 0.001522s | 0.001499s | byte equality observed |
| variant_value_construct.test | 10 | 0.001532s | 0.001489s | 0.001504s | byte equality observed |
| variant_valueless.test | 10 | 0.001585s | 0.001582s | 0.001572s | byte equality observed |
| variant_visit.test | 9 | 0.001532s | 0.001513s | 0.001527s | byte equality observed |
| variant_visit_by_index.test | 8 | 0.001528s | 0.001499s | 0.001499s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001510s | 0.001438s | 0.001518s | byte equality observed |
| variant_visit_r.test | 10 | 0.001530s | 0.001462s | 0.001525s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
