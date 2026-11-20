# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.166813 | 0.370027 | 0.579258 | 0.001949 | 0.000903 | 0.002040 |
| variant_size.test | RUN | 0.259522 | 0.836765 | 1.088631 | 0.002042 | 0.002150 | 0.002057 |
| variant_alternative.test | RUN | 0.353091 | 2.642820 | 1.749359 | 0.001962 | 0.002107 | 0.001868 |
| variant_holds_alternative.test | RUN | 0.260781 | 0.637862 | 1.079023 | 0.001943 | 0.002190 | 0.001862 |
| variant_holds_alternative_cx.test | COMPILE | 0.171129 | 0.398911 | 0.619971 | — | — | — |
| variant_get_by_index.test | RUN | 0.410760 | 2.857380 | 2.074676 | 0.002088 | 0.002256 | 0.002172 |
| variant_get_by_index_cx.test | COMPILE | 0.166328 | 0.400370 | 0.660722 | — | — | — |
| variant_get_by_type.test | RUN | 0.418378 | 3.023339 | 2.225125 | 0.002158 | 0.002051 | 0.002101 |
| variant_get_by_type_cx.test | COMPILE | 0.154946 | 0.350139 | 0.540803 | — | — | — |
| variant_default_construct.test | RUN | 0.405310 | 2.229936 | 1.848417 | 0.001805 | 0.002164 | 0.002038 |
| variant_default_construct_cx.test | COMPILE | 0.162385 | 0.367095 | 0.636160 | — | — | — |
| variant_copy_construct.test | RUN | 0.612131 | 3.757342 | 3.196385 | 0.001873 | 0.001737 | 0.001635 |
| variant_copy_construct_cx.test | COMPILE | 0.188179 | 0.430018 | 0.710104 | — | — | — |
| variant_move_construct.test | RUN | 0.569288 | 3.267666 | 2.953612 | 0.002039 | 0.002130 | 0.001806 |
| variant_move_construct_cx.test | COMPILE | 0.148265 | 0.362537 | 0.544594 | — | — | — |
| variant_value_construct.test | RUN | 0.303614 | 0.832695 | 1.339145 | 0.001779 | 0.002072 | 0.002045 |
| variant_value_construct_cx.test | COMPILE | 0.174446 | 0.386343 | 0.606821 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.316537 | 0.838806 | 1.250076 | 0.001861 | 0.001978 | 0.002066 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.166822 | 0.393826 | 0.643528 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.313247 | 0.860245 | 1.344555 | 0.001821 | 0.002057 | 0.001768 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.173362 | 0.390407 | 0.627845 | — | — | — |
| variant_copy_assign.test | RUN | 0.410567 | 2.644368 | 2.101705 | 0.002086 | 0.002216 | 0.001904 |
| variant_copy_assign_cx.test | COMPILE | 0.148049 | 0.341235 | 0.525047 | — | — | — |
| variant_move_assign.test | RUN | 0.408560 | 2.602550 | 2.071220 | 0.001892 | 0.001974 | 0.001851 |
| variant_move_assign_cx.test | COMPILE | 0.152217 | 0.355182 | 0.529039 | — | — | — |
| variant_value_assign.test | RUN | 0.322318 | 0.928597 | 1.423615 | 0.002002 | 0.001927 | 0.002086 |
| variant_value_assign_cx.test | COMPILE | 0.159233 | 0.336645 | 0.523740 | — | — | — |
| variant_emplace_index.test | RUN | 0.353484 | 1.103037 | 1.587339 | 0.002051 | 0.002146 | 0.002053 |
| variant_emplace_index_cx.test | COMPILE | 0.156195 | 0.339764 | 0.469065 | — | — | — |
| variant_emplace_type.test | RUN | 0.323380 | 0.941980 | 1.441112 | 0.002102 | 0.002107 | 0.002085 |
| variant_emplace_type_cx.test | COMPILE | 0.154100 | 0.348710 | 0.534977 | — | — | — |
| variant_swap.test | RUN | 0.331503 | 1.167879 | 1.516608 | 0.001998 | 0.001896 | 0.001655 |
| variant_eq_ne.test | RUN | 0.277069 | 0.697211 | 1.109455 | 0.001935 | 0.001951 | 0.001692 |
| variant_eq_ne_cx.test | COMPILE | 0.151412 | 0.352888 | 0.534145 | — | — | — |
| variant_lt_gt.test | RUN | 0.278708 | 0.820333 | 1.212351 | 0.002074 | 0.002171 | 0.002088 |
| variant_lt_gt_cx.test | COMPILE | 0.149056 | 0.339885 | 0.487024 | — | — | — |
| variant_destroy.test | RUN | 0.288897 | 0.805687 | 1.226201 | 0.002132 | 0.002140 | 0.001946 |
| variant_visit.test | RUN | 1.796610 | 6.038601 | 17.947188 | 0.002005 | 0.002187 | 0.002083 |
| variant_convert_construct.test | RUN | 0.374893 | 1.072007 | 1.633320 | 0.002141 | 0.002040 | 0.002040 |
| variant_subset.test | RUN | 0.374915 | 1.118367 | 1.769654 | 0.001960 | 0.002114 | 0.002094 |
| variant_valueless.test | RUN | 0.276724 | 0.752987 | 1.164493 | 0.002003 | 0.002182 | 0.002080 |
| variant_copy_construct_throw.test | RUN | 0.228520 | 0.535228 | 0.822668 | 0.002098 | 0.002201 | 0.002114 |
| variant_move_construct_throw.test | RUN | 0.218707 | 0.537337 | 0.817127 | 0.001974 | 0.002242 | 0.002128 |
| variant_convert_construct_throw.test | RUN | 0.229141 | 0.551125 | 0.920915 | 0.001972 | 0.002048 | 0.001864 |
| variant_copy_assign_throw.test | RUN | 0.211362 | 0.519135 | 0.810084 | 0.001856 | 0.002228 | 0.001924 |
| variant_move_assign_throw.test | RUN | 0.204677 | 0.515859 | 0.856004 | 0.002060 | 0.002236 | 0.002071 |
| variant_get_by_index_nx.test | RUN | 0.486707 | 2.507065 | 2.072588 | 0.002124 | 0.001974 | 0.002009 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.162186 | 0.370097 | 0.619208 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.495782 | 2.787577 | 2.241898 | 0.002014 | 0.002174 | 0.002196 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.150906 | 0.360973 | 0.535860 | — | — | — |
| variant_subset_nx.test | RUN | 0.394487 | 1.114255 | 1.725868 | 0.002090 | 0.002016 | 0.002036 |
| variant_hash.test | RUN | 0.384623 | 1.257037 | 1.651865 | 0.002152 | 0.002160 | 0.002118 |
| variant_trivial.test | RUN | 2.079561 | 6.703717 | 11.681657 | 0.001972 | 0.002065 | 0.002143 |
| variant_special.test | RUN | 2.141500 | 7.387376 | 12.170635 | 0.002199 | 0.002134 | 0.002196 |
| variant_visit_derived.test | RUN | 0.272431 | 0.691343 | 1.224469 | 0.002194 | 0.002166 | 0.001962 |
| variant_many_types.test | RUN | 2.234535 | 9.632121 | 15.927306 | 0.002064 | 0.002231 | 0.001743 |
| variant_visit_r.test | RUN | 1.029616 | 2.994873 | 5.943989 | 0.001924 | 0.001870 | 0.001650 |
| variant_derived_construct.test | COMPILE | 0.157258 | 0.316990 | 0.553634 | — | — | — |
| variant_visit_by_index.test | RUN | 0.356374 | 0.839727 | 1.537923 | 0.001937 | 0.001838 | 0.002044 |
| variant_ostream_insert.test | RUN | 0.252344 | 0.742090 | 1.067437 | 0.001763 | 0.002195 | 0.002224 |
| is_output_streamable.test | RUN | 0.309029 | 1.405555 | 1.361891 | 0.001906 | 0.001831 | 0.002010 |
| variant_json_value_from.test | RUN | 0.473276 | 1.266362 | 1.861049 | 0.002122 | 0.002254 | 0.001943 |
| variant_json_value_to.test | RUN | 0.564220 | 1.593793 | 2.454290 | 0.002077 | 0.001963 | 0.002197 |
| variant_uses_double_storage.test | COMPILE | 0.165311 | 0.349471 | 0.641643 | — | — | — |
| variant_derived_construct2.test | RUN | 0.217330 | 0.567811 | 0.912024 | 0.001828 | 0.002099 | 0.002106 |
| variant_visit_cx.test | COMPILE | 0.145288 | 0.347257 | 0.488105 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.144616 | 0.327803 | 0.502174 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.150027 | 0.335134 | 0.562258 | — | — | — |
| variant_index_type_126.test | RUN | 1.359316 | 3.311559 | 7.583243 | 0.002128 | 0.002091 | 0.001802 |
| variant_index_type_127.test | RUN | 1.373469 | 3.359233 | 7.689991 | 0.001960 | 0.001854 | 0.001729 |
| variant_index_type_128.test | RUN | 1.425532 | 3.417643 | 7.747798 | 0.001647 | 0.001870 | 0.001653 |
| variant_index_type_129.test | RUN | 1.369550 | 3.368861 | 7.513242 | 0.001950 | 0.001936 | 0.001816 |
| variant_index_type_254.test | RUN | 4.841316 | 11.515174 | 22.177949 | 0.002106 | 0.002152 | 0.001881 |
| variant_index_type_255.test | RUN | 4.841761 | 11.419740 | 22.416401 | 0.001804 | 0.002234 | 0.001670 |
| variant_index_type_256.test | RUN | 4.905685 | 11.738291 | 22.468212 | 0.001976 | 0.001813 | 0.002096 |
| variant_index_type_257.test | RUN | 4.911686 | 11.839437 | 22.559090 | 0.001796 | 0.001906 | 0.002040 |
| variant_default_construct_cx_2.test | COMPILE | 0.132803 | 0.387030 | 0.507227 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.151474 | 0.361089 | 0.476088 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.143390 | 0.378881 | 0.523963 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.147489 | 0.332231 | 0.485705 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.144811 | 0.336918 | 0.533161 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.148334 | 0.329390 | 0.474754 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.147268 | 0.286911 | 0.446933 | — | — | — |
| variant_issue_55.test | RUN | 0.181444 | 0.532402 | 0.764851 | 0.001524 | 0.001430 | 0.001389 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.994×, 0.984× | 0.988× |
| clang | 0.996× | 0.999×, 0.992× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001511s | 0.001473s | 0.001504s | byte equality observed |
| quick.test | 8 | 0.001479s | 0.000597s | 0.001494s | byte equality observed |
| variant_alternative.test | 10 | 0.001500s | 0.001473s | 0.001518s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001498s | 0.001460s | 0.001560s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001509s | 0.001537s | 0.001567s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001513s | 0.001509s | 0.001480s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001525s | 0.001523s | 0.001559s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001516s | 0.001468s | 0.001544s | byte equality observed |
| variant_copy_construct_throw.test | 7 | 0.001568s | 0.001537s | 0.001565s | byte equality observed |
| variant_default_construct.test | 9 | 0.001509s | 0.001505s | 0.001512s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001500s | 0.001497s | 0.001517s | byte equality observed |
| variant_destroy.test | 10 | 0.001504s | 0.001493s | 0.001502s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001528s | 0.001494s | 0.001531s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001540s | 0.001457s | 0.001496s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001495s | 0.001494s | 0.001519s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001625s | 0.001628s | 0.001641s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001502s | 0.001489s | 0.001499s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001570s | 0.001601s | 0.001602s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001524s | 0.001481s | 0.001524s | byte equality observed |
| variant_hash.test | 10 | 0.001476s | 0.001472s | 0.001475s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001517s | 0.001506s | 0.001472s | byte equality observed |
| variant_in_place_index_construct.test | 8 | 0.001513s | 0.001509s | 0.001470s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001507s | 0.001481s | 0.001530s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001493s | 0.001459s | 0.001508s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001496s | 0.001482s | 0.001516s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001521s | 0.001504s | 0.001513s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001501s | 0.001495s | 0.001504s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001529s | 0.001464s | 0.001531s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001502s | 0.001471s | 0.001513s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001505s | 0.001495s | 0.001531s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001484s | 0.001493s | 0.001493s | byte equality observed |
| variant_issue_55.test | 10 | 0.001488s | 0.001466s | 0.001518s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001570s | 0.001534s | 0.001503s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001583s | 0.001545s | 0.001545s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001482s | 0.001466s | 0.001503s | byte equality observed |
| variant_many_types.test | 10 | 0.001555s | 0.001490s | 0.001548s | byte equality observed |
| variant_move_assign.test | 10 | 0.001485s | 0.001494s | 0.001523s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001535s | 0.001538s | 0.001564s | byte equality observed |
| variant_move_construct.test | 10 | 0.001516s | 0.001511s | 0.001545s | byte equality observed |
| variant_move_construct_throw.test | 9 | 0.001515s | 0.001540s | 0.001580s | byte equality observed |
| variant_ostream_insert.test | 9 | 0.001532s | 0.001483s | 0.001586s | byte equality observed |
| variant_size.test | 10 | 0.001502s | 0.001453s | 0.001497s | byte equality observed |
| variant_special.test | 10 | 0.001569s | 0.001556s | 0.001610s | byte equality observed |
| variant_subset.test | 10 | 0.001530s | 0.001540s | 0.001567s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001478s | 0.001499s | 0.001538s | byte equality observed |
| variant_swap.test | 10 | 0.001507s | 0.001484s | 0.001521s | byte equality observed |
| variant_trivial.test | 10 | 0.001545s | 0.001561s | 0.001516s | byte equality observed |
| variant_value_assign.test | 10 | 0.001515s | 0.001483s | 0.001544s | byte equality observed |
| variant_value_construct.test | 10 | 0.001497s | 0.001457s | 0.001506s | byte equality observed |
| variant_valueless.test | 10 | 0.001564s | 0.001576s | 0.001574s | byte equality observed |
| variant_visit.test | 10 | 0.001503s | 0.001512s | 0.001516s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001488s | 0.001470s | 0.001487s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001505s | 0.001461s | 0.001522s | byte equality observed |
| variant_visit_r.test | 10 | 0.001529s | 0.001483s | 0.001523s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
