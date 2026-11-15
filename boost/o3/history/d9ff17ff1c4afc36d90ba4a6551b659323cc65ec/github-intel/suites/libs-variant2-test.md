# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.090225 | 0.202514 | 0.268880 | 0.001055 | 0.000502 | 0.001009 |
| variant_size.test | RUN | 0.157968 | 0.512553 | 0.534618 | 0.001014 | 0.001300 | 0.001022 |
| variant_alternative.test | RUN | 0.205843 | 1.714245 | 0.930732 | 0.001120 | 0.001174 | 0.000860 |
| variant_holds_alternative.test | RUN | 0.144403 | 0.378315 | 0.512311 | 0.000989 | 0.001275 | 0.001032 |
| variant_holds_alternative_cx.test | COMPILE | 0.088017 | 0.219834 | 0.286091 | — | — | — |
| variant_get_by_index.test | RUN | 0.236773 | 1.890994 | 1.149985 | 0.001150 | 0.001315 | 0.001154 |
| variant_get_by_index_cx.test | COMPILE | 0.090782 | 0.231193 | 0.296208 | — | — | — |
| variant_get_by_type.test | RUN | 0.248337 | 2.008884 | 1.214188 | 0.001124 | 0.001151 | 0.001142 |
| variant_get_by_type_cx.test | COMPILE | 0.080491 | 0.196251 | 0.253743 | — | — | — |
| variant_default_construct.test | RUN | 0.227274 | 1.483975 | 0.967687 | 0.001159 | 0.001226 | 0.001053 |
| variant_default_construct_cx.test | COMPILE | 0.093585 | 0.224845 | 0.294651 | — | — | — |
| variant_copy_construct.test | RUN | 0.372668 | 2.476936 | 1.773539 | 0.001144 | 0.001096 | 0.001076 |
| variant_copy_construct_cx.test | COMPILE | 0.104943 | 0.252895 | 0.351857 | — | — | — |
| variant_move_construct.test | RUN | 0.345014 | 2.112022 | 1.603059 | 0.001024 | 0.001141 | 0.001018 |
| variant_move_construct_cx.test | COMPILE | 0.080599 | 0.208050 | 0.257221 | — | — | — |
| variant_value_construct.test | RUN | 0.184962 | 0.517607 | 0.666948 | 0.001056 | 0.001272 | 0.001029 |
| variant_value_construct_cx.test | COMPILE | 0.098837 | 0.233466 | 0.303288 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.188102 | 0.524695 | 0.683663 | 0.001045 | 0.001181 | 0.001035 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.092536 | 0.230909 | 0.299875 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.183207 | 0.522043 | 0.656981 | 0.001049 | 0.001341 | 0.001034 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.094085 | 0.235443 | 0.308751 | — | — | — |
| variant_copy_assign.test | RUN | 0.246738 | 1.726652 | 1.077394 | 0.001076 | 0.001186 | 0.000961 |
| variant_copy_assign_cx.test | COMPILE | 0.083615 | 0.197110 | 0.239438 | — | — | — |
| variant_move_assign.test | RUN | 0.246646 | 1.698903 | 1.068264 | 0.001080 | 0.001182 | 0.000988 |
| variant_move_assign_cx.test | COMPILE | 0.086774 | 0.199993 | 0.241486 | — | — | — |
| variant_value_assign.test | RUN | 0.183969 | 0.581574 | 0.722087 | 0.001049 | 0.001364 | 0.000975 |
| variant_value_assign_cx.test | COMPILE | 0.084490 | 0.195817 | 0.246966 | — | — | — |
| variant_emplace_index.test | RUN | 0.202606 | 0.677435 | 0.801046 | 0.001076 | 0.001227 | 0.001051 |
| variant_emplace_index_cx.test | COMPILE | 0.081340 | 0.189337 | 0.249273 | — | — | — |
| variant_emplace_type.test | RUN | 0.189833 | 0.588564 | 0.718885 | 0.001118 | 0.001259 | 0.001034 |
| variant_emplace_type_cx.test | COMPILE | 0.080075 | 0.198416 | 0.246244 | — | — | — |
| variant_swap.test | RUN | 0.191871 | 0.727613 | 0.755694 | 0.001030 | 0.001190 | 0.000950 |
| variant_eq_ne.test | RUN | 0.152596 | 0.433597 | 0.549650 | 0.001064 | 0.001235 | 0.001029 |
| variant_eq_ne_cx.test | COMPILE | 0.084205 | 0.199857 | 0.254604 | — | — | — |
| variant_lt_gt.test | RUN | 0.156753 | 0.505943 | 0.576125 | 0.001110 | 0.001270 | 0.001043 |
| variant_lt_gt_cx.test | COMPILE | 0.083164 | 0.195745 | 0.238916 | — | — | — |
| variant_destroy.test | RUN | 0.164506 | 0.495896 | 0.594675 | 0.001052 | 0.001186 | 0.001021 |
| variant_visit.test | RUN | 1.046548 | 3.778326 | 10.217488 | 0.001019 | 0.001366 | 0.001189 |
| variant_convert_construct.test | RUN | 0.209791 | 0.664053 | 0.831048 | 0.001081 | 0.001282 | 0.001034 |
| variant_subset.test | RUN | 0.220773 | 0.693331 | 0.887486 | 0.001218 | 0.001182 | 0.001064 |
| variant_valueless.test | RUN | 0.150463 | 0.446714 | 0.596904 | 0.001046 | 0.001243 | 0.001118 |
| variant_copy_construct_throw.test | RUN | 0.123597 | 0.340013 | 0.407983 | 0.001100 | 0.001232 | 0.001078 |
| variant_move_construct_throw.test | RUN | 0.121767 | 0.327984 | 0.409592 | 0.001112 | 0.001335 | 0.001109 |
| variant_convert_construct_throw.test | RUN | 0.125439 | 0.369814 | 0.435585 | 0.001056 | 0.001138 | 0.001093 |
| variant_copy_assign_throw.test | RUN | 0.115259 | 0.316804 | 0.402734 | 0.001036 | 0.001200 | 0.001030 |
| variant_move_assign_throw.test | RUN | 0.114073 | 0.322024 | 0.407710 | 0.001110 | 0.001196 | 0.000867 |
| variant_get_by_index_nx.test | RUN | 0.302945 | 1.589677 | 1.090995 | 0.001083 | 0.001182 | 0.001029 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.099875 | 0.227585 | 0.290709 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.299835 | 1.782040 | 1.160677 | 0.001212 | 0.001273 | 0.001042 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.084017 | 0.193985 | 0.254465 | — | — | — |
| variant_subset_nx.test | RUN | 0.219370 | 0.671647 | 0.883268 | 0.001178 | 0.001348 | 0.001054 |
| variant_hash.test | RUN | 0.223905 | 0.781208 | 0.822208 | 0.001080 | 0.001238 | 0.001068 |
| variant_trivial.test | RUN | 1.266354 | 4.546663 | 5.801111 | 0.001089 | 0.001470 | 0.001043 |
| variant_special.test | RUN | 1.233542 | 4.783185 | 6.318040 | 0.001469 | 0.001444 | 0.001118 |
| variant_visit_derived.test | RUN | 0.151293 | 0.412176 | 0.620661 | 0.001211 | 0.001241 | 0.001221 |
| variant_many_types.test | RUN | 1.343711 | 6.022237 | 8.458162 | 0.001061 | 0.001351 | 0.001066 |
| variant_visit_r.test | RUN | 0.575744 | 1.845703 | 3.297569 | 0.001181 | 0.001126 | 0.001078 |
| variant_derived_construct.test | COMPILE | 0.087895 | 0.205074 | 0.260111 | — | — | — |
| variant_visit_by_index.test | RUN | 0.202151 | 0.537176 | 0.776335 | 0.001161 | 0.001234 | 0.001054 |
| variant_ostream_insert.test | RUN | 0.140822 | 0.435734 | 0.533172 | 0.001185 | 0.001266 | 0.001169 |
| is_output_streamable.test | RUN | 0.186507 | 0.921111 | 0.728274 | 0.001040 | 0.001287 | 0.001102 |
| variant_json_value_from.test | RUN | 0.275580 | 0.718979 | 0.906385 | 0.001151 | 0.001197 | 0.001086 |
| variant_json_value_to.test | RUN | 0.345780 | 0.987631 | 1.232762 | 0.001066 | 0.001313 | 0.001071 |
| variant_uses_double_storage.test | COMPILE | 0.090840 | 0.212871 | 0.292230 | — | — | — |
| variant_derived_construct2.test | RUN | 0.127487 | 0.360545 | 0.449219 | 0.001025 | 0.001342 | 0.001141 |
| variant_visit_cx.test | COMPILE | 0.085325 | 0.193964 | 0.238247 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.079683 | 0.196927 | 0.229494 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.081798 | 0.196414 | 0.244736 | — | — | — |
| variant_index_type_126.test | RUN | 0.788370 | 1.926383 | 3.630927 | 0.001236 | 0.001363 | 0.001157 |
| variant_index_type_127.test | RUN | 0.798101 | 1.915476 | 3.665197 | 0.001106 | 0.001200 | 0.001091 |
| variant_index_type_128.test | RUN | 0.801223 | 1.925254 | 3.709074 | 0.001086 | 0.001163 | 0.001037 |
| variant_index_type_129.test | RUN | 0.806501 | 1.990836 | 3.674151 | 0.001117 | 0.001268 | 0.001052 |
| variant_index_type_254.test | RUN | 2.936937 | 7.599415 | 12.091347 | 0.001044 | 0.001297 | 0.001139 |
| variant_index_type_255.test | RUN | 2.941010 | 7.624191 | 11.866882 | 0.001230 | 0.001414 | 0.001169 |
| variant_index_type_256.test | RUN | 2.980256 | 7.819035 | 12.046750 | 0.000994 | 0.001229 | 0.000978 |
| variant_index_type_257.test | RUN | 2.982139 | 7.946820 | 12.261913 | 0.001098 | 0.000910 | 0.001017 |
| variant_default_construct_cx_2.test | COMPILE | 0.083844 | 0.202795 | 0.274856 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.082609 | 0.206792 | 0.251132 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.084818 | 0.211148 | 0.239131 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.084133 | 0.194151 | 0.248752 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.081219 | 0.191728 | 0.245918 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.073044 | 0.206126 | 0.245387 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.080607 | 0.196207 | 0.228837 | — | — | — |
| variant_issue_55.test | RUN | 0.141687 | 0.350726 | 0.364946 | 0.000799 | 0.000864 | 0.000773 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.989×, 0.992× | 0.995× |
| clang | 0.994× | 0.998×, 0.991× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000791s | 0.000788s | 0.000818s | byte equality observed |
| quick.test | 10 | 0.000806s | 0.000368s | 0.000817s | byte equality observed |
| variant_alternative.test | 10 | 0.000812s | 0.000820s | 0.000790s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000844s | 0.000809s | 0.000797s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000845s | 0.000820s | 0.000798s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000806s | 0.000790s | 0.000829s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000821s | 0.000840s | 0.000816s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000816s | 0.000821s | 0.000822s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000827s | 0.000850s | 0.000815s | byte equality observed |
| variant_default_construct.test | 10 | 0.000802s | 0.000837s | 0.000799s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000820s | 0.000808s | 0.000821s | byte equality observed |
| variant_destroy.test | 10 | 0.000817s | 0.000823s | 0.000823s | byte equality observed |
| variant_emplace_index.test | 8 | 0.000843s | 0.000798s | 0.000823s | byte equality observed |
| variant_emplace_type.test | 9 | 0.000832s | 0.000804s | 0.000839s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000778s | 0.000794s | 0.000818s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000841s | 0.000852s | 0.000845s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000794s | 0.000815s | 0.000830s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000834s | 0.000878s | 0.000835s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000832s | 0.000826s | 0.000832s | byte equality observed |
| variant_hash.test | 10 | 0.000810s | 0.000807s | 0.000812s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000811s | 0.000833s | 0.000826s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000837s | 0.000818s | 0.000843s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000824s | 0.000807s | 0.000803s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000807s | 0.000783s | 0.000802s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000834s | 0.000796s | 0.000814s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000845s | 0.000794s | 0.000815s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000806s | 0.000828s | 0.000840s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000808s | 0.000822s | 0.000826s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000821s | 0.000800s | 0.000827s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000822s | 0.000816s | 0.000833s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000804s | 0.000833s | 0.000831s | byte equality observed |
| variant_issue_55.test | 10 | 0.000806s | 0.000851s | 0.000836s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000851s | 0.000855s | 0.000803s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000854s | 0.000822s | 0.000826s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000814s | 0.000806s | 0.000817s | byte equality observed |
| variant_many_types.test | 10 | 0.000833s | 0.000813s | 0.000825s | byte equality observed |
| variant_move_assign.test | 10 | 0.000827s | 0.000844s | 0.000830s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000850s | 0.000853s | 0.000822s | byte equality observed |
| variant_move_construct.test | 10 | 0.000849s | 0.000844s | 0.000790s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000820s | 0.000836s | 0.000820s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000813s | 0.000821s | 0.000830s | byte equality observed |
| variant_size.test | 10 | 0.000799s | 0.000820s | 0.000812s | byte equality observed |
| variant_special.test | 10 | 0.000849s | 0.000871s | 0.000858s | byte equality observed |
| variant_subset.test | 10 | 0.000845s | 0.000858s | 0.000815s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000799s | 0.000807s | 0.000798s | byte equality observed |
| variant_swap.test | 10 | 0.000828s | 0.000819s | 0.000802s | byte equality observed |
| variant_trivial.test | 10 | 0.000856s | 0.000860s | 0.000833s | byte equality observed |
| variant_value_assign.test | 10 | 0.000830s | 0.000855s | 0.000796s | byte equality observed |
| variant_value_construct.test | 10 | 0.000827s | 0.000827s | 0.000795s | byte equality observed |
| variant_valueless.test | 10 | 0.000873s | 0.000815s | 0.000846s | byte equality observed |
| variant_visit.test | 10 | 0.000843s | 0.000814s | 0.000840s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000821s | 0.000800s | 0.000812s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000799s | 0.000809s | 0.000789s | byte equality observed |
| variant_visit_r.test | 10 | 0.000787s | 0.000802s | 0.000785s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
