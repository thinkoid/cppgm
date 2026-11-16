# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.076917 | 0.173054 | 0.207203 | 0.000978 | 0.000467 | 0.000944 |
| variant_size.test | RUN | 0.134946 | 0.425788 | 0.408999 | 0.000951 | 0.001064 | 0.000918 |
| variant_alternative.test | RUN | 0.183735 | 1.457120 | 0.725824 | 0.001016 | 0.001066 | 0.001228 |
| variant_holds_alternative.test | RUN | 0.125358 | 0.320054 | 0.387214 | 0.000982 | 0.001056 | 0.000985 |
| variant_holds_alternative_cx.test | COMPILE | 0.083613 | 0.185203 | 0.215223 | — | — | — |
| variant_get_by_index.test | RUN | 0.212252 | 1.595120 | 0.895301 | 0.001012 | 0.001085 | 0.001022 |
| variant_get_by_index_cx.test | COMPILE | 0.082246 | 0.188638 | 0.237110 | — | — | — |
| variant_get_by_type.test | RUN | 0.223714 | 1.728285 | 0.955675 | 0.000969 | 0.001082 | 0.000983 |
| variant_get_by_type_cx.test | COMPILE | 0.075661 | 0.165551 | 0.192889 | — | — | — |
| variant_default_construct.test | RUN | 0.205108 | 1.242876 | 0.776502 | 0.000999 | 0.001061 | 0.000921 |
| variant_default_construct_cx.test | COMPILE | 0.082101 | 0.187045 | 0.230104 | — | — | — |
| variant_copy_construct.test | RUN | 0.326528 | 2.133385 | 1.412410 | 0.000974 | 0.001052 | 0.000966 |
| variant_copy_construct_cx.test | COMPILE | 0.095271 | 0.214033 | 0.266540 | — | — | — |
| variant_move_construct.test | RUN | 0.299178 | 1.767349 | 1.264110 | 0.000918 | 0.001111 | 0.000957 |
| variant_move_construct_cx.test | COMPILE | 0.073792 | 0.165516 | 0.192471 | — | — | — |
| variant_value_construct.test | RUN | 0.153867 | 0.433718 | 0.507177 | 0.000938 | 0.000972 | 0.000938 |
| variant_value_construct_cx.test | COMPILE | 0.084109 | 0.194239 | 0.240196 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.160361 | 0.440780 | 0.529489 | 0.000966 | 0.001073 | 0.001019 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.083232 | 0.200468 | 0.249414 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.158257 | 0.435156 | 0.514174 | 0.000970 | 0.000988 | 0.000959 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.083436 | 0.198074 | 0.237423 | — | — | — |
| variant_copy_assign.test | RUN | 0.221476 | 1.434565 | 0.847827 | 0.000934 | 0.000951 | 0.000883 |
| variant_copy_assign_cx.test | COMPILE | 0.074208 | 0.172011 | 0.193634 | — | — | — |
| variant_move_assign.test | RUN | 0.218104 | 1.419460 | 0.850705 | 0.001011 | 0.000975 | 0.000898 |
| variant_move_assign_cx.test | COMPILE | 0.076334 | 0.165774 | 0.194945 | — | — | — |
| variant_value_assign.test | RUN | 0.162215 | 0.482862 | 0.568266 | 0.000958 | 0.000996 | 0.000960 |
| variant_value_assign_cx.test | COMPILE | 0.074328 | 0.165333 | 0.194835 | — | — | — |
| variant_emplace_index.test | RUN | 0.185310 | 0.568464 | 0.622048 | 0.000982 | 0.001064 | 0.000891 |
| variant_emplace_index_cx.test | COMPILE | 0.074031 | 0.172140 | 0.192976 | — | — | — |
| variant_emplace_type.test | RUN | 0.166653 | 0.489813 | 0.544509 | 0.000965 | 0.000929 | 0.000911 |
| variant_emplace_type_cx.test | COMPILE | 0.075356 | 0.163947 | 0.193388 | — | — | — |
| variant_swap.test | RUN | 0.172188 | 0.597043 | 0.602694 | 0.000929 | 0.001145 | 0.000925 |
| variant_eq_ne.test | RUN | 0.136184 | 0.356281 | 0.430679 | 0.000922 | 0.000971 | 0.000941 |
| variant_eq_ne_cx.test | COMPILE | 0.075476 | 0.165230 | 0.204146 | — | — | — |
| variant_lt_gt.test | RUN | 0.142624 | 0.424902 | 0.444531 | 0.000949 | 0.000992 | 0.000937 |
| variant_lt_gt_cx.test | COMPILE | 0.074108 | 0.166659 | 0.191569 | — | — | — |
| variant_destroy.test | RUN | 0.146201 | 0.406862 | 0.461992 | 0.000965 | 0.001066 | 0.000899 |
| variant_visit.test | RUN | 0.907347 | 3.031692 | 7.756783 | 0.000962 | 0.001078 | 0.000984 |
| variant_convert_construct.test | RUN | 0.184307 | 0.531300 | 0.646419 | 0.000929 | 0.001021 | 0.000948 |
| variant_subset.test | RUN | 0.185245 | 0.571299 | 0.688742 | 0.001087 | 0.001068 | 0.000949 |
| variant_valueless.test | RUN | 0.134213 | 0.370458 | 0.455511 | 0.001030 | 0.001035 | 0.000977 |
| variant_copy_construct_throw.test | RUN | 0.108660 | 0.285615 | 0.317754 | 0.001030 | 0.001001 | 0.001018 |
| variant_move_construct_throw.test | RUN | 0.109373 | 0.279207 | 0.314202 | 0.001033 | 0.000973 | 0.000940 |
| variant_convert_construct_throw.test | RUN | 0.111322 | 0.305192 | 0.335044 | 0.001004 | 0.000982 | 0.000957 |
| variant_copy_assign_throw.test | RUN | 0.106604 | 0.262950 | 0.312808 | 0.000921 | 0.001024 | 0.000965 |
| variant_move_assign_throw.test | RUN | 0.106396 | 0.262408 | 0.319181 | 0.000945 | 0.001054 | 0.001012 |
| variant_get_by_index_nx.test | RUN | 0.270659 | 1.349380 | 0.854820 | 0.001043 | 0.001026 | 0.000992 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.083201 | 0.190202 | 0.230284 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.270122 | 1.517206 | 0.917994 | 0.000991 | 0.001129 | 0.000893 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.074948 | 0.164965 | 0.189655 | — | — | — |
| variant_subset_nx.test | RUN | 0.194492 | 0.568995 | 0.686176 | 0.001008 | 0.000984 | 0.000992 |
| variant_hash.test | RUN | 0.189200 | 0.662015 | 0.632033 | 0.000987 | 0.001102 | 0.001002 |
| variant_trivial.test | RUN | 1.083588 | 3.723115 | 4.504958 | 0.001088 | 0.001115 | 0.000968 |
| variant_special.test | RUN | 1.064817 | 4.007210 | 4.831890 | 0.001171 | 0.001117 | 0.001008 |
| variant_visit_derived.test | RUN | 0.128826 | 0.332921 | 0.491573 | 0.000937 | 0.001107 | 0.000986 |
| variant_many_types.test | RUN | 1.201091 | 4.817947 | 6.266652 | 0.000936 | 0.001066 | 0.001144 |
| variant_visit_r.test | RUN | 0.493288 | 1.574381 | 2.546314 | 0.000988 | 0.001182 | 0.001055 |
| variant_derived_construct.test | COMPILE | 0.077306 | 0.171697 | 0.205695 | — | — | — |
| variant_visit_by_index.test | RUN | 0.169862 | 0.482962 | 0.622777 | 0.000869 | 0.000938 | 0.000882 |
| variant_ostream_insert.test | RUN | 0.126237 | 0.389687 | 0.416803 | 0.001004 | 0.001083 | 0.001002 |
| is_output_streamable.test | RUN | 0.161145 | 0.774573 | 0.576369 | 0.000944 | 0.000923 | 0.000869 |
| variant_json_value_from.test | RUN | 0.242907 | 0.617714 | 0.693107 | 0.001057 | 0.000945 | 0.001049 |
| variant_json_value_to.test | RUN | 0.305143 | 0.849126 | 0.971330 | 0.001145 | 0.001223 | 0.001047 |
| variant_uses_double_storage.test | COMPILE | 0.081847 | 0.183136 | 0.225980 | — | — | — |
| variant_derived_construct2.test | RUN | 0.111266 | 0.289548 | 0.348926 | 0.000887 | 0.000956 | 0.000956 |
| variant_visit_cx.test | COMPILE | 0.076780 | 0.169760 | 0.196018 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.075025 | 0.166889 | 0.192449 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.074836 | 0.165899 | 0.195596 | — | — | — |
| variant_index_type_126.test | RUN | 0.702576 | 1.538491 | 2.758470 | 0.001008 | 0.000989 | 0.000982 |
| variant_index_type_127.test | RUN | 0.702754 | 1.568748 | 2.833350 | 0.000892 | 0.001036 | 0.000985 |
| variant_index_type_128.test | RUN | 0.710978 | 1.619921 | 2.860742 | 0.000926 | 0.000968 | 0.000950 |
| variant_index_type_129.test | RUN | 0.706039 | 1.583596 | 2.832554 | 0.000874 | 0.001061 | 0.000992 |
| variant_index_type_254.test | RUN | 2.548480 | 5.712954 | 8.990549 | 0.001015 | 0.001078 | 0.000916 |
| variant_index_type_255.test | RUN | 2.563151 | 5.738162 | 9.018441 | 0.000963 | 0.000860 | 0.001169 |
| variant_index_type_256.test | RUN | 2.575489 | 5.777250 | 9.123860 | 0.000932 | 0.001009 | 0.000917 |
| variant_index_type_257.test | RUN | 2.604833 | 5.854506 | 9.202791 | 0.000915 | 0.001169 | 0.000962 |
| variant_default_construct_cx_2.test | COMPILE | 0.078527 | 0.172109 | 0.203469 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.079351 | 0.167232 | 0.197069 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.075752 | 0.171732 | 0.206210 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.078492 | 0.174296 | 0.200433 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.075499 | 0.174071 | 0.202772 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.078944 | 0.172368 | 0.204817 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.075111 | 0.172409 | 0.206892 | — | — | — |
| variant_issue_55.test | RUN | 0.151600 | 0.425597 | 0.493901 | 0.001080 | 0.000953 | 0.001068 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.991×, 0.990× | 1.001× |
| clang | 0.995× | 0.995×, 0.994× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000905s | 0.000918s | 0.000913s | byte equality observed |
| quick.test | 10 | 0.000891s | 0.000403s | 0.000907s | byte equality observed |
| variant_alternative.test | 10 | 0.000901s | 0.000910s | 0.000907s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000911s | 0.000919s | 0.000908s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000940s | 0.000934s | 0.000934s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000922s | 0.000926s | 0.000904s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000936s | 0.000933s | 0.000935s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000913s | 0.000924s | 0.000910s | byte equality observed |
| variant_copy_construct_throw.test | 9 | 0.000931s | 0.000929s | 0.000927s | byte equality observed |
| variant_default_construct.test | 10 | 0.000921s | 0.000911s | 0.000911s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000911s | 0.000912s | 0.000908s | byte equality observed |
| variant_destroy.test | 10 | 0.000906s | 0.000914s | 0.000903s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000914s | 0.000916s | 0.000911s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000920s | 0.000914s | 0.000908s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000911s | 0.000906s | 0.000907s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000972s | 0.000988s | 0.000964s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000923s | 0.000913s | 0.000902s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000962s | 0.000967s | 0.000959s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000919s | 0.000921s | 0.000902s | byte equality observed |
| variant_hash.test | 10 | 0.000912s | 0.000917s | 0.000913s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000905s | 0.000923s | 0.000907s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000921s | 0.000923s | 0.000913s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000922s | 0.000912s | 0.000911s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000906s | 0.000905s | 0.000905s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000909s | 0.000908s | 0.000903s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000917s | 0.000894s | 0.000904s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000909s | 0.000898s | 0.000910s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000908s | 0.000902s | 0.000909s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000910s | 0.000898s | 0.000900s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000905s | 0.000902s | 0.000910s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000912s | 0.000904s | 0.000907s | byte equality observed |
| variant_issue_55.test | 10 | 0.000922s | 0.000915s | 0.000928s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000950s | 0.000944s | 0.000929s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000952s | 0.000939s | 0.000936s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000906s | 0.000898s | 0.000905s | byte equality observed |
| variant_many_types.test | 10 | 0.000942s | 0.000929s | 0.000929s | byte equality observed |
| variant_move_assign.test | 10 | 0.000910s | 0.000927s | 0.000908s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000935s | 0.000945s | 0.000929s | byte equality observed |
| variant_move_construct.test | 10 | 0.000908s | 0.000934s | 0.000912s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000936s | 0.000939s | 0.000945s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000939s | 0.000928s | 0.000933s | byte equality observed |
| variant_size.test | 10 | 0.000906s | 0.000919s | 0.000905s | byte equality observed |
| variant_special.test | 10 | 0.000975s | 0.000975s | 0.000942s | byte equality observed |
| variant_subset.test | 10 | 0.000942s | 0.000941s | 0.000936s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000909s | 0.000913s | 0.000912s | byte equality observed |
| variant_swap.test | 10 | 0.000916s | 0.000921s | 0.000904s | byte equality observed |
| variant_trivial.test | 10 | 0.000945s | 0.000951s | 0.000921s | byte equality observed |
| variant_value_assign.test | 10 | 0.000915s | 0.000918s | 0.000913s | byte equality observed |
| variant_value_construct.test | 10 | 0.000919s | 0.000917s | 0.000918s | byte equality observed |
| variant_valueless.test | 10 | 0.000954s | 0.000951s | 0.000944s | byte equality observed |
| variant_visit.test | 10 | 0.000917s | 0.000922s | 0.000921s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000908s | 0.000904s | 0.000908s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000906s | 0.000902s | 0.000911s | byte equality observed |
| variant_visit_r.test | 10 | 0.000920s | 0.000912s | 0.000918s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
