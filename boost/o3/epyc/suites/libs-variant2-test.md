# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.157135 | 0.338269 | 0.585943 | 0.001857 | 0.000900 | 0.002016 |
| variant_size.test | RUN | 0.260610 | 0.858119 | 1.070972 | 0.002018 | 0.001954 | 0.002024 |
| variant_alternative.test | RUN | 0.346820 | 2.620771 | 1.771940 | 0.001918 | 0.002230 | 0.001952 |
| variant_holds_alternative.test | RUN | 0.256082 | 0.653919 | 1.020646 | 0.001874 | 0.002052 | 0.002015 |
| variant_holds_alternative_cx.test | COMPILE | 0.165524 | 0.381438 | 0.622726 | — | — | — |
| variant_get_by_index.test | RUN | 0.399214 | 2.860916 | 2.118809 | 0.002029 | 0.002198 | 0.002232 |
| variant_get_by_index_cx.test | COMPILE | 0.173443 | 0.391138 | 0.635070 | — | — | — |
| variant_get_by_type.test | RUN | 0.422842 | 3.021798 | 2.242640 | 0.002130 | 0.001770 | 0.001989 |
| variant_get_by_type_cx.test | COMPILE | 0.157320 | 0.348196 | 0.535764 | — | — | — |
| variant_default_construct.test | RUN | 0.410221 | 2.260275 | 1.821788 | 0.001811 | 0.002018 | 0.001646 |
| variant_default_construct_cx.test | COMPILE | 0.160477 | 0.371607 | 0.636563 | — | — | — |
| variant_copy_construct.test | RUN | 0.613345 | 3.779509 | 3.204381 | 0.001956 | 0.002185 | 0.002094 |
| variant_copy_construct_cx.test | COMPILE | 0.187172 | 0.416955 | 0.712159 | — | — | — |
| variant_move_construct.test | RUN | 0.589681 | 3.274747 | 3.067947 | 0.001785 | 0.001768 | 0.002100 |
| variant_move_construct_cx.test | COMPILE | 0.150456 | 0.357751 | 0.540131 | — | — | — |
| variant_value_construct.test | RUN | 0.305229 | 0.869155 | 1.323826 | 0.001814 | 0.001991 | 0.002062 |
| variant_value_construct_cx.test | COMPILE | 0.176765 | 0.392137 | 0.674592 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.313848 | 0.840973 | 1.270009 | 0.001916 | 0.001920 | 0.002110 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.167681 | 0.392935 | 0.613131 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.321735 | 0.864874 | 1.364779 | 0.002012 | 0.002137 | 0.002056 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.172967 | 0.397424 | 0.676607 | — | — | — |
| variant_copy_assign.test | RUN | 0.423737 | 2.625285 | 2.062264 | 0.001904 | 0.002140 | 0.001970 |
| variant_copy_assign_cx.test | COMPILE | 0.146249 | 0.342592 | 0.542037 | — | — | — |
| variant_move_assign.test | RUN | 0.412926 | 2.584840 | 2.020792 | 0.001884 | 0.002162 | 0.001792 |
| variant_move_assign_cx.test | COMPILE | 0.151422 | 0.341935 | 0.547816 | — | — | — |
| variant_value_assign.test | RUN | 0.323472 | 0.918915 | 1.461208 | 0.001827 | 0.001954 | 0.002120 |
| variant_value_assign_cx.test | COMPILE | 0.157459 | 0.336624 | 0.544820 | — | — | — |
| variant_emplace_index.test | RUN | 0.356646 | 1.108895 | 1.559283 | 0.001740 | 0.002183 | 0.002029 |
| variant_emplace_index_cx.test | COMPILE | 0.152167 | 0.335177 | 0.483892 | — | — | — |
| variant_emplace_type.test | RUN | 0.324953 | 0.962862 | 1.451045 | 0.002046 | 0.002144 | 0.001862 |
| variant_emplace_type_cx.test | COMPILE | 0.145705 | 0.332662 | 0.553816 | — | — | — |
| variant_swap.test | RUN | 0.334406 | 1.155002 | 1.529297 | 0.002060 | 0.002110 | 0.002058 |
| variant_eq_ne.test | RUN | 0.276288 | 0.691028 | 1.097613 | 0.001707 | 0.002138 | 0.002200 |
| variant_eq_ne_cx.test | COMPILE | 0.157516 | 0.357149 | 0.540256 | — | — | — |
| variant_lt_gt.test | RUN | 0.289219 | 0.809308 | 1.198904 | 0.002015 | 0.002130 | 0.001712 |
| variant_lt_gt_cx.test | COMPILE | 0.149586 | 0.340249 | 0.509209 | — | — | — |
| variant_destroy.test | RUN | 0.289893 | 0.810814 | 1.209099 | 0.001999 | 0.002215 | 0.002107 |
| variant_visit.test | RUN | 1.812733 | 6.075042 | 18.011356 | 0.001754 | 0.002134 | 0.002066 |
| variant_convert_construct.test | RUN | 0.368750 | 1.060962 | 1.676534 | 0.002092 | 0.002164 | 0.002140 |
| variant_subset.test | RUN | 0.379458 | 1.137138 | 1.696591 | 0.002112 | 0.002235 | 0.002134 |
| variant_valueless.test | RUN | 0.272869 | 0.779056 | 1.217887 | 0.002034 | 0.002298 | 0.001901 |
| variant_copy_construct_throw.test | RUN | 0.229580 | 0.537259 | 0.868716 | 0.002092 | 0.002254 | 0.002101 |
| variant_move_construct_throw.test | RUN | 0.217029 | 0.552345 | 0.827268 | 0.001906 | 0.002230 | 0.002160 |
| variant_convert_construct_throw.test | RUN | 0.219221 | 0.545378 | 0.880432 | 0.002104 | 0.002161 | 0.001946 |
| variant_copy_assign_throw.test | RUN | 0.214117 | 0.505455 | 0.878555 | 0.002060 | 0.002238 | 0.002066 |
| variant_move_assign_throw.test | RUN | 0.210404 | 0.532453 | 0.814529 | 0.001860 | 0.002097 | 0.002106 |
| variant_get_by_index_nx.test | RUN | 0.492806 | 2.555673 | 2.112219 | 0.002051 | 0.001855 | 0.001786 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.173326 | 0.380322 | 0.654242 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.497301 | 2.708217 | 2.244993 | 0.002014 | 0.002096 | 0.002152 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.155534 | 0.347231 | 0.511125 | — | — | — |
| variant_subset_nx.test | RUN | 0.405986 | 1.094730 | 1.771918 | 0.002108 | 0.001966 | 0.002054 |
| variant_hash.test | RUN | 0.372328 | 1.241575 | 1.643389 | 0.001964 | 0.001959 | 0.001753 |
| variant_trivial.test | RUN | 2.227302 | 6.638350 | 11.592308 | 0.001854 | 0.002143 | 0.002145 |
| variant_special.test | RUN | 2.120593 | 7.255977 | 12.424701 | 0.002178 | 0.002385 | 0.002105 |
| variant_visit_derived.test | RUN | 0.274590 | 0.647554 | 1.151788 | 0.002106 | 0.002205 | 0.002030 |
| variant_many_types.test | RUN | 2.276973 | 9.864977 | 15.957782 | 0.001779 | 0.002036 | 0.002155 |
| variant_visit_r.test | RUN | 1.024950 | 3.138431 | 6.157415 | 0.002054 | 0.001960 | 0.001877 |
| variant_derived_construct.test | COMPILE | 0.155064 | 0.315278 | 0.594423 | — | — | — |
| variant_visit_by_index.test | RUN | 0.339397 | 0.826257 | 1.636123 | 0.001936 | 0.002506 | 0.001875 |
| variant_ostream_insert.test | RUN | 0.241747 | 0.720226 | 0.949058 | 0.001936 | 0.002263 | 0.001895 |
| is_output_streamable.test | RUN | 0.294106 | 1.412929 | 1.387520 | 0.001685 | 0.001926 | 0.002058 |
| variant_json_value_from.test | RUN | 0.471903 | 1.276629 | 1.846205 | 0.001921 | 0.002218 | 0.002205 |
| variant_json_value_to.test | RUN | 0.577964 | 1.574132 | 2.377411 | 0.001996 | 0.002198 | 0.002159 |
| variant_uses_double_storage.test | COMPILE | 0.166318 | 0.357694 | 0.616528 | — | — | — |
| variant_derived_construct2.test | RUN | 0.218263 | 0.571371 | 0.947401 | 0.001688 | 0.002070 | 0.001742 |
| variant_visit_cx.test | COMPILE | 0.144839 | 0.353093 | 0.478736 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.148384 | 0.355944 | 0.514623 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.148996 | 0.353477 | 0.534278 | — | — | — |
| variant_index_type_126.test | RUN | 1.351383 | 3.293445 | 7.700560 | 0.002004 | 0.002226 | 0.001987 |
| variant_index_type_127.test | RUN | 1.353574 | 3.374346 | 7.673670 | 0.002119 | 0.001939 | 0.001639 |
| variant_index_type_128.test | RUN | 1.374406 | 3.388531 | 7.723901 | 0.002003 | 0.001872 | 0.002038 |
| variant_index_type_129.test | RUN | 1.381349 | 3.431770 | 7.682647 | 0.001980 | 0.002206 | 0.002083 |
| variant_index_type_254.test | RUN | 4.874090 | 11.825924 | 22.391093 | 0.001659 | 0.002004 | 0.002108 |
| variant_index_type_255.test | RUN | 4.703848 | 11.924563 | 22.311294 | 0.001782 | 0.002180 | 0.002084 |
| variant_index_type_256.test | RUN | 4.888072 | 12.324807 | 22.353000 | 0.001758 | 0.001925 | 0.001884 |
| variant_index_type_257.test | RUN | 4.795438 | 12.124382 | 22.662789 | 0.001718 | 0.001482 | 0.002095 |
| variant_default_construct_cx_2.test | COMPILE | 0.145756 | 0.383662 | 0.582962 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.148512 | 0.350942 | 0.451916 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.149739 | 0.379811 | 0.494089 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.151003 | 0.327173 | 0.485443 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.152400 | 0.340811 | 0.532802 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.148160 | 0.332714 | 0.511825 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.093879 | 0.307952 | 0.372454 | — | — | — |
| variant_issue_55.test | RUN | 0.185845 | 0.540475 | 0.837216 | 0.001596 | 0.001493 | 0.001453 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.986×, 0.991× | 1.006× |
| clang | 0.998× | 1.003×, 0.993× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001479s | 0.001497s | 0.001463s | byte equality observed |
| quick.test | 10 | 0.001459s | 0.000646s | 0.001492s | byte equality observed |
| variant_alternative.test | 10 | 0.001471s | 0.001495s | 0.001445s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001495s | 0.001498s | 0.001445s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001536s | 0.001504s | 0.001525s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001486s | 0.001474s | 0.001484s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001530s | 0.001539s | 0.001517s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001514s | 0.001501s | 0.001482s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001535s | 0.001487s | 0.001528s | byte equality observed |
| variant_default_construct.test | 10 | 0.001472s | 0.001509s | 0.001471s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001487s | 0.001481s | 0.001459s | byte equality observed |
| variant_destroy.test | 10 | 0.001482s | 0.001486s | 0.001494s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001510s | 0.001480s | 0.001467s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001465s | 0.001508s | 0.001508s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001479s | 0.001442s | 0.001470s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001584s | 0.001598s | 0.001628s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001477s | 0.001452s | 0.001513s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001546s | 0.001565s | 0.001553s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001495s | 0.001507s | 0.001497s | byte equality observed |
| variant_hash.test | 10 | 0.001473s | 0.001466s | 0.001465s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001483s | 0.001491s | 0.001432s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001505s | 0.001485s | 0.001478s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001496s | 0.001486s | 0.001476s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001502s | 0.001433s | 0.001485s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001483s | 0.001481s | 0.001449s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001450s | 0.001491s | 0.001471s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001487s | 0.001451s | 0.001481s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001480s | 0.001465s | 0.001481s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001492s | 0.001444s | 0.001500s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001489s | 0.001458s | 0.001499s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001499s | 0.001424s | 0.001501s | byte equality observed |
| variant_issue_55.test | 10 | 0.001490s | 0.001479s | 0.001480s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001527s | 0.001497s | 0.001547s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001541s | 0.001547s | 0.001523s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001467s | 0.001501s | 0.001487s | byte equality observed |
| variant_many_types.test | 10 | 0.001520s | 0.001471s | 0.001531s | byte equality observed |
| variant_move_assign.test | 10 | 0.001506s | 0.001489s | 0.001499s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001513s | 0.001495s | 0.001527s | byte equality observed |
| variant_move_construct.test | 10 | 0.001499s | 0.001512s | 0.001472s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001533s | 0.001497s | 0.001545s | byte equality observed |
| variant_ostream_insert.test | 9 | 0.001515s | 0.001503s | 0.001505s | byte equality observed |
| variant_size.test | 10 | 0.001481s | 0.001504s | 0.001513s | byte equality observed |
| variant_special.test | 10 | 0.001551s | 0.001529s | 0.001563s | byte equality observed |
| variant_subset.test | 10 | 0.001523s | 0.001488s | 0.001562s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001472s | 0.001469s | 0.001485s | byte equality observed |
| variant_swap.test | 10 | 0.001503s | 0.001472s | 0.001482s | byte equality observed |
| variant_trivial.test | 10 | 0.001531s | 0.001542s | 0.001507s | byte equality observed |
| variant_value_assign.test | 10 | 0.001483s | 0.001491s | 0.001516s | byte equality observed |
| variant_value_construct.test | 10 | 0.001492s | 0.001508s | 0.001499s | byte equality observed |
| variant_valueless.test | 10 | 0.001530s | 0.001558s | 0.001548s | byte equality observed |
| variant_visit.test | 10 | 0.001501s | 0.001500s | 0.001481s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001457s | 0.001471s | 0.001462s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001468s | 0.001439s | 0.001504s | byte equality observed |
| variant_visit_r.test | 10 | 0.001472s | 0.001460s | 0.001504s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
