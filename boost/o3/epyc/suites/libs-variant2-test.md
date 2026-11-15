# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.168568 | 0.348832 | 0.594604 | 0.001944 | 0.000904 | 0.002201 |
| variant_size.test | RUN | 0.268133 | 0.858807 | 1.097332 | 0.002170 | 0.002066 | 0.002110 |
| variant_alternative.test | RUN | 0.367658 | 2.675179 | 1.732685 | 0.002038 | 0.002176 | 0.002066 |
| variant_holds_alternative.test | RUN | 0.267529 | 0.660689 | 1.085615 | 0.001894 | 0.002154 | 0.001605 |
| variant_holds_alternative_cx.test | COMPILE | 0.172184 | 0.383873 | 0.628078 | — | — | — |
| variant_get_by_index.test | RUN | 0.396586 | 2.863828 | 2.153350 | 0.002052 | 0.002286 | 0.002170 |
| variant_get_by_index_cx.test | COMPILE | 0.176084 | 0.385125 | 0.663821 | — | — | — |
| variant_get_by_type.test | RUN | 0.427011 | 3.049898 | 2.271098 | 0.002300 | 0.002337 | 0.002180 |
| variant_get_by_type_cx.test | COMPILE | 0.156864 | 0.355311 | 0.553849 | — | — | — |
| variant_default_construct.test | RUN | 0.393239 | 2.274353 | 1.866346 | 0.001772 | 0.002143 | 0.001937 |
| variant_default_construct_cx.test | COMPILE | 0.178203 | 0.373241 | 0.550472 | — | — | — |
| variant_copy_construct.test | RUN | 0.629912 | 3.833038 | 3.334221 | 0.001656 | 0.001876 | 0.002136 |
| variant_copy_construct_cx.test | COMPILE | 0.189274 | 0.442148 | 0.755057 | — | — | — |
| variant_move_construct.test | RUN | 0.590085 | 3.346516 | 3.030539 | 0.002007 | 0.001825 | 0.002054 |
| variant_move_construct_cx.test | COMPILE | 0.148357 | 0.364913 | 0.557280 | — | — | — |
| variant_value_construct.test | RUN | 0.299803 | 0.869910 | 1.335221 | 0.001829 | 0.002274 | 0.002040 |
| variant_value_construct_cx.test | COMPILE | 0.170510 | 0.392616 | 0.637354 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.322511 | 0.853623 | 1.345270 | 0.001971 | 0.002001 | 0.001960 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.171838 | 0.397186 | 0.610514 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.309470 | 0.853428 | 1.337830 | 0.002030 | 0.001932 | 0.002023 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.175487 | 0.402451 | 0.678790 | — | — | — |
| variant_copy_assign.test | RUN | 0.416760 | 2.646384 | 2.131879 | 0.001890 | 0.002252 | 0.002098 |
| variant_copy_assign_cx.test | COMPILE | 0.146097 | 0.343726 | 0.506391 | — | — | — |
| variant_move_assign.test | RUN | 0.413779 | 2.642768 | 2.106848 | 0.002030 | 0.001958 | 0.002058 |
| variant_move_assign_cx.test | COMPILE | 0.154801 | 0.355247 | 0.543019 | — | — | — |
| variant_value_assign.test | RUN | 0.318883 | 0.967835 | 1.448228 | 0.001846 | 0.002130 | 0.001719 |
| variant_value_assign_cx.test | COMPILE | 0.156103 | 0.344915 | 0.556222 | — | — | — |
| variant_emplace_index.test | RUN | 0.360946 | 1.087321 | 1.615678 | 0.002208 | 0.002148 | 0.002206 |
| variant_emplace_index_cx.test | COMPILE | 0.149448 | 0.337966 | 0.515698 | — | — | — |
| variant_emplace_type.test | RUN | 0.331249 | 0.946999 | 1.473757 | 0.002262 | 0.001998 | 0.002020 |
| variant_emplace_type_cx.test | COMPILE | 0.150110 | 0.359801 | 0.561282 | — | — | — |
| variant_swap.test | RUN | 0.341454 | 1.173474 | 1.530951 | 0.001861 | 0.002320 | 0.002076 |
| variant_eq_ne.test | RUN | 0.283026 | 0.720915 | 1.161856 | 0.001737 | 0.002132 | 0.002166 |
| variant_eq_ne_cx.test | COMPILE | 0.155421 | 0.358812 | 0.557317 | — | — | — |
| variant_lt_gt.test | RUN | 0.294841 | 0.836873 | 1.192473 | 0.001555 | 0.002181 | 0.002069 |
| variant_lt_gt_cx.test | COMPILE | 0.151533 | 0.337628 | 0.528888 | — | — | — |
| variant_destroy.test | RUN | 0.293882 | 0.821823 | 1.253374 | 0.002035 | 0.002214 | 0.002182 |
| variant_visit.test | RUN | 1.684316 | 6.135793 | 18.220448 | 0.001940 | 0.002100 | 0.002056 |
| variant_convert_construct.test | RUN | 0.370215 | 1.067963 | 1.670726 | 0.001957 | 0.002235 | 0.002078 |
| variant_subset.test | RUN | 0.365347 | 1.157621 | 1.766278 | 0.001968 | 0.001978 | 0.002128 |
| variant_valueless.test | RUN | 0.281086 | 0.781694 | 1.230596 | 0.001852 | 0.002178 | 0.002132 |
| variant_copy_construct_throw.test | RUN | 0.231509 | 0.561510 | 0.827415 | 0.002013 | 0.002209 | 0.002206 |
| variant_move_construct_throw.test | RUN | 0.217143 | 0.509281 | 0.879456 | 0.001933 | 0.002148 | 0.002084 |
| variant_convert_construct_throw.test | RUN | 0.225924 | 0.592267 | 0.879292 | 0.001930 | 0.002110 | 0.002226 |
| variant_copy_assign_throw.test | RUN | 0.216331 | 0.533641 | 0.806741 | 0.002113 | 0.002267 | 0.002160 |
| variant_move_assign_throw.test | RUN | 0.213874 | 0.566096 | 0.894625 | 0.002066 | 0.002231 | 0.002213 |
| variant_get_by_index_nx.test | RUN | 0.492867 | 2.494910 | 2.098333 | 0.001951 | 0.002223 | 0.002038 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.170618 | 0.414902 | 0.667157 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.500439 | 2.777950 | 2.282980 | 0.001924 | 0.002233 | 0.002122 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.156010 | 0.348469 | 0.537456 | — | — | — |
| variant_subset_nx.test | RUN | 0.393285 | 1.140179 | 1.809856 | 0.001840 | 0.002002 | 0.002100 |
| variant_hash.test | RUN | 0.383419 | 1.311504 | 1.686906 | 0.002044 | 0.002254 | 0.002196 |
| variant_trivial.test | RUN | 2.160222 | 6.693244 | 11.698406 | 0.001867 | 0.002292 | 0.002148 |
| variant_special.test | RUN | 2.112427 | 7.316901 | 12.774197 | 0.002278 | 0.002254 | 0.002328 |
| variant_visit_derived.test | RUN | 0.276312 | 0.699708 | 1.212078 | 0.002155 | 0.002464 | 0.002136 |
| variant_many_types.test | RUN | 2.219196 | 9.977926 | 16.718230 | 0.001822 | 0.002051 | 0.002113 |
| variant_visit_r.test | RUN | 0.928698 | 3.147307 | 6.025817 | 0.002232 | 0.002036 | 0.002095 |
| variant_derived_construct.test | COMPILE | 0.151133 | 0.323038 | 0.552903 | — | — | — |
| variant_visit_by_index.test | RUN | 0.348711 | 0.861445 | 1.545944 | 0.001669 | 0.001972 | 0.001925 |
| variant_ostream_insert.test | RUN | 0.245492 | 0.730174 | 1.051981 | 0.001968 | 0.002178 | 0.002131 |
| is_output_streamable.test | RUN | 0.312347 | 1.442763 | 1.403523 | 0.001789 | 0.002249 | 0.002079 |
| variant_json_value_from.test | RUN | 0.482699 | 1.275221 | 1.879143 | 0.001944 | 0.002462 | 0.002174 |
| variant_json_value_to.test | RUN | 0.585981 | 1.624431 | 2.459697 | 0.002218 | 0.002287 | 0.002070 |
| variant_uses_double_storage.test | COMPILE | 0.163659 | 0.372669 | 0.666907 | — | — | — |
| variant_derived_construct2.test | RUN | 0.216013 | 0.588488 | 0.926548 | 0.001944 | 0.002084 | 0.001763 |
| variant_visit_cx.test | COMPILE | 0.152448 | 0.359567 | 0.559198 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.150310 | 0.368980 | 0.552995 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.150672 | 0.365288 | 0.509315 | — | — | — |
| variant_index_type_126.test | RUN | 1.398240 | 3.382077 | 7.851950 | 0.002024 | 0.002244 | 0.002058 |
| variant_index_type_127.test | RUN | 1.368394 | 3.500790 | 7.775459 | 0.001934 | 0.001937 | 0.002064 |
| variant_index_type_128.test | RUN | 1.389520 | 3.409929 | 7.877771 | 0.002043 | 0.001986 | 0.002107 |
| variant_index_type_129.test | RUN | 1.424167 | 3.547651 | 7.886221 | 0.002142 | 0.002162 | 0.002108 |
| variant_index_type_254.test | RUN | 4.907404 | 11.946021 | 22.618406 | 0.001652 | 0.002121 | 0.002114 |
| variant_index_type_255.test | RUN | 4.774166 | 11.900303 | 22.942703 | 0.001908 | 0.002181 | 0.001867 |
| variant_index_type_256.test | RUN | 5.118016 | 11.978772 | 22.797565 | 0.001880 | 0.002056 | 0.001652 |
| variant_index_type_257.test | RUN | 4.927374 | 12.047334 | 23.206914 | 0.001744 | 0.001553 | 0.001954 |
| variant_default_construct_cx_2.test | COMPILE | 0.143867 | 0.336367 | 0.544036 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.148475 | 0.379516 | 0.544176 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.148784 | 0.338670 | 0.553471 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.153737 | 0.345746 | 0.551602 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.153795 | 0.337632 | 0.516693 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.148700 | 0.380401 | 0.544895 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.136002 | 0.344180 | 0.545579 | — | — | — |
| variant_issue_55.test | RUN | 0.196590 | 0.528197 | 0.815330 | 0.001571 | 0.001582 | 0.001376 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.996×, 0.981× | 0.999× |
| clang | 0.997× | 0.999×, 0.995× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001494s | 0.001498s | 0.001508s | byte equality observed |
| quick.test | 10 | 0.001485s | 0.000647s | 0.001438s | byte equality observed |
| variant_alternative.test | 10 | 0.001521s | 0.001545s | 0.001511s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001518s | 0.001501s | 0.001540s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001541s | 0.001607s | 0.001559s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001509s | 0.001529s | 0.001512s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001506s | 0.001537s | 0.001504s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001508s | 0.001544s | 0.001486s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001540s | 0.001552s | 0.001553s | byte equality observed |
| variant_default_construct.test | 10 | 0.001511s | 0.001534s | 0.001497s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001492s | 0.001521s | 0.001498s | byte equality observed |
| variant_destroy.test | 10 | 0.001520s | 0.001533s | 0.001524s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001519s | 0.001520s | 0.001494s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001500s | 0.001504s | 0.001479s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001479s | 0.001498s | 0.001455s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001614s | 0.001626s | 0.001622s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001496s | 0.001488s | 0.001539s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001573s | 0.001604s | 0.001585s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001554s | 0.001504s | 0.001501s | byte equality observed |
| variant_hash.test | 10 | 0.001526s | 0.001524s | 0.001527s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001494s | 0.001497s | 0.001489s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001527s | 0.001500s | 0.001488s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001530s | 0.001539s | 0.001522s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001495s | 0.001486s | 0.001492s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001497s | 0.001490s | 0.001501s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001502s | 0.001488s | 0.001513s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001509s | 0.001487s | 0.001458s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001508s | 0.001498s | 0.001521s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001497s | 0.001467s | 0.001515s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001517s | 0.001487s | 0.001498s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001512s | 0.001485s | 0.001515s | byte equality observed |
| variant_issue_55.test | 10 | 0.001501s | 0.001558s | 0.001514s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001567s | 0.001519s | 0.001543s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001555s | 0.001531s | 0.001556s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001498s | 0.001546s | 0.001531s | byte equality observed |
| variant_many_types.test | 10 | 0.001555s | 0.001563s | 0.001545s | byte equality observed |
| variant_move_assign.test | 10 | 0.001521s | 0.001495s | 0.001518s | byte equality observed |
| variant_move_assign_throw.test | 9 | 0.001527s | 0.001556s | 0.001500s | byte equality observed |
| variant_move_construct.test | 10 | 0.001517s | 0.001519s | 0.001541s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001542s | 0.001551s | 0.001541s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001531s | 0.001551s | 0.001512s | byte equality observed |
| variant_size.test | 10 | 0.001507s | 0.001501s | 0.001522s | byte equality observed |
| variant_special.test | 10 | 0.001593s | 0.001540s | 0.001574s | byte equality observed |
| variant_subset.test | 10 | 0.001567s | 0.001545s | 0.001556s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001500s | 0.001517s | 0.001487s | byte equality observed |
| variant_swap.test | 10 | 0.001520s | 0.001465s | 0.001506s | byte equality observed |
| variant_trivial.test | 10 | 0.001565s | 0.001561s | 0.001516s | byte equality observed |
| variant_value_assign.test | 10 | 0.001502s | 0.001520s | 0.001500s | byte equality observed |
| variant_value_construct.test | 10 | 0.001496s | 0.001515s | 0.001492s | byte equality observed |
| variant_valueless.test | 10 | 0.001577s | 0.001582s | 0.001597s | byte equality observed |
| variant_visit.test | 10 | 0.001511s | 0.001543s | 0.001546s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001495s | 0.001484s | 0.001527s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001506s | 0.001496s | 0.001491s | byte equality observed |
| variant_visit_r.test | 10 | 0.001489s | 0.001469s | 0.001539s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
