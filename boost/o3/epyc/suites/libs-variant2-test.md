# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.154185 | 0.340865 | 0.477927 | 0.001961 | 0.000907 | 0.001871 |
| variant_size.test | RUN | 0.244186 | 0.784457 | 0.912510 | 0.002171 | 0.002210 | 0.002131 |
| variant_alternative.test | RUN | 0.339966 | 2.475863 | 1.478872 | 0.002120 | 0.002219 | 0.001942 |
| variant_holds_alternative.test | RUN | 0.240352 | 0.586879 | 0.903498 | 0.001905 | 0.002259 | 0.001875 |
| variant_holds_alternative_cx.test | COMPILE | 0.157827 | 0.360637 | 0.512812 | — | — | — |
| variant_get_by_index.test | RUN | 0.372574 | 2.661272 | 1.824191 | 0.002135 | 0.002214 | 0.002159 |
| variant_get_by_index_cx.test | COMPILE | 0.163943 | 0.366321 | 0.544580 | — | — | — |
| variant_get_by_type.test | RUN | 0.398861 | 2.882259 | 1.949773 | 0.002255 | 0.002161 | 0.001941 |
| variant_get_by_type_cx.test | COMPILE | 0.147036 | 0.317464 | 0.423018 | — | — | — |
| variant_default_construct.test | RUN | 0.365396 | 2.114937 | 1.626110 | 0.002072 | 0.001902 | 0.002133 |
| variant_default_construct_cx.test | COMPILE | 0.162747 | 0.309722 | 0.491242 | — | — | — |
| variant_copy_construct.test | RUN | 0.562036 | 3.530970 | 2.851168 | 0.001852 | 0.002028 | 0.002065 |
| variant_copy_construct_cx.test | COMPILE | 0.177696 | 0.384958 | 0.630365 | — | — | — |
| variant_move_construct.test | RUN | 0.542004 | 2.999826 | 2.606227 | 0.001738 | 0.002154 | 0.002088 |
| variant_move_construct_cx.test | COMPILE | 0.140810 | 0.324003 | 0.450715 | — | — | — |
| variant_value_construct.test | RUN | 0.300301 | 0.805517 | 1.092370 | 0.001910 | 0.002084 | 0.001850 |
| variant_value_construct_cx.test | COMPILE | 0.166410 | 0.371077 | 0.507857 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.297897 | 0.801440 | 1.114437 | 0.001799 | 0.002176 | 0.002132 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.158198 | 0.350556 | 0.495415 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.300419 | 0.790923 | 1.125127 | 0.002108 | 0.002102 | 0.002041 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.170752 | 0.351348 | 0.534516 | — | — | — |
| variant_copy_assign.test | RUN | 0.384820 | 2.407257 | 1.723001 | 0.002034 | 0.002116 | 0.002052 |
| variant_copy_assign_cx.test | COMPILE | 0.141746 | 0.321605 | 0.439989 | — | — | — |
| variant_move_assign.test | RUN | 0.398450 | 2.425048 | 1.751172 | 0.002045 | 0.002160 | 0.001885 |
| variant_move_assign_cx.test | COMPILE | 0.143730 | 0.319773 | 0.452591 | — | — | — |
| variant_value_assign.test | RUN | 0.311603 | 0.876758 | 1.194820 | 0.002220 | 0.002140 | 0.001894 |
| variant_value_assign_cx.test | COMPILE | 0.142123 | 0.308829 | 0.453772 | — | — | — |
| variant_emplace_index.test | RUN | 0.334885 | 1.018975 | 1.323795 | 0.001853 | 0.001838 | 0.001986 |
| variant_emplace_index_cx.test | COMPILE | 0.139961 | 0.323305 | 0.398237 | — | — | — |
| variant_emplace_type.test | RUN | 0.299858 | 0.851752 | 1.225856 | 0.002082 | 0.002237 | 0.001812 |
| variant_emplace_type_cx.test | COMPILE | 0.147021 | 0.303606 | 0.456751 | — | — | — |
| variant_swap.test | RUN | 0.313267 | 1.069740 | 1.300321 | 0.002062 | 0.002240 | 0.002012 |
| variant_eq_ne.test | RUN | 0.262097 | 0.641095 | 0.918332 | 0.001832 | 0.002222 | 0.001694 |
| variant_eq_ne_cx.test | COMPILE | 0.144392 | 0.321215 | 0.448814 | — | — | — |
| variant_lt_gt.test | RUN | 0.266349 | 0.749251 | 1.004323 | 0.001934 | 0.002039 | 0.001900 |
| variant_lt_gt_cx.test | COMPILE | 0.142837 | 0.310499 | 0.431980 | — | — | — |
| variant_destroy.test | RUN | 0.270528 | 0.715736 | 1.015782 | 0.002052 | 0.002120 | 0.001912 |
| variant_visit.test | RUN | 1.621489 | 5.614843 | 15.640392 | 0.001972 | 0.001960 | 0.002072 |
| variant_convert_construct.test | RUN | 0.340036 | 0.999798 | 1.405526 | 0.002161 | 0.002115 | 0.002160 |
| variant_subset.test | RUN | 0.349215 | 1.027454 | 1.447479 | 0.002257 | 0.002250 | 0.002056 |
| variant_valueless.test | RUN | 0.259246 | 0.684180 | 1.019724 | 0.002211 | 0.002414 | 0.002009 |
| variant_copy_construct_throw.test | RUN | 0.211208 | 0.491472 | 0.714519 | 0.002252 | 0.002251 | 0.002281 |
| variant_move_construct_throw.test | RUN | 0.204064 | 0.480399 | 0.663165 | 0.002114 | 0.002052 | 0.002140 |
| variant_convert_construct_throw.test | RUN | 0.216124 | 0.535504 | 0.756640 | 0.001838 | 0.002284 | 0.002112 |
| variant_copy_assign_throw.test | RUN | 0.199668 | 0.474790 | 0.687421 | 0.002667 | 0.002166 | 0.002106 |
| variant_move_assign_throw.test | RUN | 0.202352 | 0.496454 | 0.726089 | 0.002091 | 0.002233 | 0.001804 |
| variant_get_by_index_nx.test | RUN | 0.466543 | 2.289405 | 1.751879 | 0.002130 | 0.001890 | 0.002056 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.163605 | 0.371680 | 0.535847 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.468881 | 2.553529 | 1.918824 | 0.002053 | 0.001974 | 0.002074 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.143789 | 0.310135 | 0.447258 | — | — | — |
| variant_subset_nx.test | RUN | 0.363286 | 1.020569 | 1.466299 | 0.001852 | 0.001640 | 0.002124 |
| variant_hash.test | RUN | 0.351536 | 1.177687 | 1.381618 | 0.002181 | 0.002038 | 0.002037 |
| variant_trivial.test | RUN | 2.082001 | 6.421418 | 9.679702 | 0.002216 | 0.002031 | 0.002141 |
| variant_special.test | RUN | 2.011966 | 6.874807 | 10.618617 | 0.002403 | 0.002346 | 0.001662 |
| variant_visit_derived.test | RUN | 0.237845 | 0.629677 | 1.018057 | 0.002173 | 0.002174 | 0.002094 |
| variant_many_types.test | RUN | 2.101280 | 8.839433 | 14.068572 | 0.002018 | 0.002312 | 0.002113 |
| variant_visit_r.test | RUN | 0.927550 | 2.782013 | 5.321972 | 0.001955 | 0.002018 | 0.002003 |
| variant_derived_construct.test | COMPILE | 0.141928 | 0.308420 | 0.484751 | — | — | — |
| variant_visit_by_index.test | RUN | 0.329400 | 0.851626 | 1.369634 | 0.001639 | 0.002060 | 0.002119 |
| variant_ostream_insert.test | RUN | 0.228675 | 0.668091 | 0.858574 | 0.002129 | 0.002040 | 0.002024 |
| is_output_streamable.test | RUN | 0.287610 | 1.320547 | 1.210384 | 0.002028 | 0.002078 | 0.002050 |
| variant_json_value_from.test | RUN | 0.452658 | 1.094750 | 1.534942 | 0.001969 | 0.002248 | 0.002004 |
| variant_json_value_to.test | RUN | 0.545151 | 1.459656 | 2.007359 | 0.002208 | 0.002268 | 0.002030 |
| variant_uses_double_storage.test | COMPILE | 0.155612 | 0.331786 | 0.549011 | — | — | — |
| variant_derived_construct2.test | RUN | 0.203867 | 0.545468 | 0.779011 | 0.001792 | 0.002074 | 0.002109 |
| variant_visit_cx.test | COMPILE | 0.136220 | 0.322799 | 0.458729 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.145257 | 0.325752 | 0.457039 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.140185 | 0.301370 | 0.418875 | — | — | — |
| variant_index_type_126.test | RUN | 1.246930 | 2.983494 | 6.461354 | 0.002182 | 0.002180 | 0.001866 |
| variant_index_type_127.test | RUN | 1.249331 | 3.047041 | 6.490036 | 0.001998 | 0.002304 | 0.001981 |
| variant_index_type_128.test | RUN | 1.268846 | 3.094529 | 6.591580 | 0.001956 | 0.002233 | 0.002035 |
| variant_index_type_129.test | RUN | 1.273815 | 3.081585 | 6.700377 | 0.002046 | 0.002072 | 0.002072 |
| variant_index_type_254.test | RUN | 4.581819 | 11.177919 | 19.325916 | 0.001969 | 0.002226 | 0.002162 |
| variant_index_type_255.test | RUN | 4.645550 | 11.201003 | 19.709045 | 0.001916 | 0.002292 | 0.002117 |
| variant_index_type_256.test | RUN | 4.628014 | 11.399435 | 19.821714 | 0.001582 | 0.002244 | 0.002189 |
| variant_index_type_257.test | RUN | 4.672946 | 11.368232 | 20.040759 | 0.001876 | 0.002002 | 0.002132 |
| variant_default_construct_cx_2.test | COMPILE | 0.139072 | 0.312488 | 0.380615 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.143188 | 0.335388 | 0.441877 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.140940 | 0.302907 | 0.437926 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.134177 | 0.297553 | 0.472672 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.140802 | 0.303454 | 0.440095 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.141716 | 0.302026 | 0.438610 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.126135 | 0.206453 | 0.338304 | — | — | — |
| variant_issue_55.test | RUN | 0.207098 | 0.573585 | 0.602970 | 0.001576 | 0.001521 | 0.001518 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.981×, 0.986× | 0.991× |
| clang | 0.994× | 0.996×, 0.993× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001487s | 0.001517s | 0.001485s | byte equality observed |
| quick.test | 10 | 0.001488s | 0.000647s | 0.001439s | byte equality observed |
| variant_alternative.test | 10 | 0.001476s | 0.001498s | 0.001507s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001519s | 0.001493s | 0.001496s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001534s | 0.001562s | 0.001502s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001510s | 0.001515s | 0.001512s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001544s | 0.001524s | 0.001526s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001520s | 0.001539s | 0.001484s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001525s | 0.001509s | 0.001520s | byte equality observed |
| variant_default_construct.test | 10 | 0.001507s | 0.001508s | 0.001506s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001506s | 0.001476s | 0.001487s | byte equality observed |
| variant_destroy.test | 10 | 0.001510s | 0.001485s | 0.001497s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001530s | 0.001478s | 0.001488s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001505s | 0.001519s | 0.001501s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001491s | 0.001469s | 0.001489s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001581s | 0.001608s | 0.001592s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001516s | 0.001537s | 0.001467s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001590s | 0.001608s | 0.001582s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001512s | 0.001507s | 0.001480s | byte equality observed |
| variant_hash.test | 10 | 0.001480s | 0.001512s | 0.001506s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001519s | 0.001505s | 0.001474s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001500s | 0.001504s | 0.001499s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001514s | 0.001498s | 0.001500s | byte equality observed |
| variant_index_type_126.test | 8 | 0.001515s | 0.001458s | 0.001467s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001502s | 0.001499s | 0.001492s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001493s | 0.001470s | 0.001469s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001504s | 0.001451s | 0.001493s | byte equality observed |
| variant_index_type_254.test | 9 | 0.001496s | 0.001490s | 0.001499s | byte equality observed |
| variant_index_type_255.test | 9 | 0.001504s | 0.001459s | 0.001475s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001504s | 0.001497s | 0.001480s | byte equality observed |
| variant_index_type_257.test | 9 | 0.001496s | 0.001460s | 0.001504s | byte equality observed |
| variant_issue_55.test | 10 | 0.001520s | 0.001535s | 0.001496s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001561s | 0.001511s | 0.001533s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001546s | 0.001556s | 0.001572s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001493s | 0.001517s | 0.001467s | byte equality observed |
| variant_many_types.test | 10 | 0.001549s | 0.001511s | 0.001521s | byte equality observed |
| variant_move_assign.test | 10 | 0.001496s | 0.001506s | 0.001488s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001553s | 0.001541s | 0.001537s | byte equality observed |
| variant_move_construct.test | 10 | 0.001503s | 0.001537s | 0.001481s | byte equality observed |
| variant_move_construct_throw.test | 8 | 0.001553s | 0.001531s | 0.001541s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001544s | 0.001508s | 0.001518s | byte equality observed |
| variant_size.test | 9 | 0.001508s | 0.001495s | 0.001512s | byte equality observed |
| variant_special.test | 10 | 0.001604s | 0.001607s | 0.001573s | byte equality observed |
| variant_subset.test | 10 | 0.001545s | 0.001516s | 0.001547s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001516s | 0.001500s | 0.001511s | byte equality observed |
| variant_swap.test | 10 | 0.001509s | 0.001546s | 0.001520s | byte equality observed |
| variant_trivial.test | 10 | 0.001559s | 0.001567s | 0.001516s | byte equality observed |
| variant_value_assign.test | 9 | 0.001510s | 0.001519s | 0.001516s | byte equality observed |
| variant_value_construct.test | 10 | 0.001506s | 0.001524s | 0.001526s | byte equality observed |
| variant_valueless.test | 10 | 0.001584s | 0.001556s | 0.001561s | byte equality observed |
| variant_visit.test | 10 | 0.001529s | 0.001496s | 0.001529s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001502s | 0.001504s | 0.001495s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001495s | 0.001466s | 0.001501s | byte equality observed |
| variant_visit_r.test | 10 | 0.001514s | 0.001471s | 0.001514s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
