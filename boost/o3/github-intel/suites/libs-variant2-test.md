# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.090619 | 0.222149 | 0.276491 | 0.001149 | 0.000572 | 0.001200 |
| variant_size.test | RUN | 0.161603 | 0.534973 | 0.528567 | 0.001247 | 0.001489 | 0.001122 |
| variant_alternative.test | RUN | 0.213375 | 1.773572 | 0.943506 | 0.001362 | 0.001452 | 0.001114 |
| variant_holds_alternative.test | RUN | 0.147458 | 0.396170 | 0.526305 | 0.001074 | 0.001355 | 0.001102 |
| variant_holds_alternative_cx.test | COMPILE | 0.097392 | 0.230555 | 0.296564 | — | — | — |
| variant_get_by_index.test | RUN | 0.246609 | 1.934723 | 1.141285 | 0.001282 | 0.001454 | 0.001311 |
| variant_get_by_index_cx.test | COMPILE | 0.098445 | 0.235781 | 0.307883 | — | — | — |
| variant_get_by_type.test | RUN | 0.262498 | 2.104728 | 1.240526 | 0.001375 | 0.001207 | 0.001258 |
| variant_get_by_type_cx.test | COMPILE | 0.088638 | 0.209908 | 0.257759 | — | — | — |
| variant_default_construct.test | RUN | 0.237507 | 1.524846 | 0.984941 | 0.001249 | 0.001222 | 0.001114 |
| variant_default_construct_cx.test | COMPILE | 0.096516 | 0.223135 | 0.301020 | — | — | — |
| variant_copy_construct.test | RUN | 0.379910 | 2.526741 | 1.801365 | 0.001138 | 0.001326 | 0.001163 |
| variant_copy_construct_cx.test | COMPILE | 0.113529 | 0.258201 | 0.368259 | — | — | — |
| variant_move_construct.test | RUN | 0.352212 | 2.195278 | 1.646914 | 0.001366 | 0.000998 | 0.001293 |
| variant_move_construct_cx.test | COMPILE | 0.088403 | 0.208054 | 0.261703 | — | — | — |
| variant_value_construct.test | RUN | 0.185323 | 0.539817 | 0.685111 | 0.001146 | 0.001243 | 0.001276 |
| variant_value_construct_cx.test | COMPILE | 0.103610 | 0.240732 | 0.319394 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.191331 | 0.545064 | 0.688643 | 0.001387 | 0.001194 | 0.001201 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.098967 | 0.240643 | 0.305667 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.188812 | 0.535861 | 0.684708 | 0.001123 | 0.001268 | 0.001165 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.102134 | 0.238591 | 0.307931 | — | — | — |
| variant_copy_assign.test | RUN | 0.252264 | 1.742528 | 1.099913 | 0.001358 | 0.001409 | 0.001105 |
| variant_copy_assign_cx.test | COMPILE | 0.088516 | 0.205997 | 0.258087 | — | — | — |
| variant_move_assign.test | RUN | 0.256481 | 1.739756 | 1.073278 | 0.001227 | 0.001544 | 0.001024 |
| variant_move_assign_cx.test | COMPILE | 0.088899 | 0.202674 | 0.258750 | — | — | — |
| variant_value_assign.test | RUN | 0.194266 | 0.599365 | 0.753598 | 0.001179 | 0.001445 | 0.001149 |
| variant_value_assign_cx.test | COMPILE | 0.088508 | 0.202939 | 0.263962 | — | — | — |
| variant_emplace_index.test | RUN | 0.223198 | 0.709568 | 0.817937 | 0.001177 | 0.001413 | 0.001246 |
| variant_emplace_index_cx.test | COMPILE | 0.090029 | 0.209898 | 0.259302 | — | — | — |
| variant_emplace_type.test | RUN | 0.195110 | 0.610107 | 0.724792 | 0.001394 | 0.001382 | 0.001206 |
| variant_emplace_type_cx.test | COMPILE | 0.092054 | 0.206287 | 0.254564 | — | — | — |
| variant_swap.test | RUN | 0.202155 | 0.763326 | 0.785470 | 0.001277 | 0.001376 | 0.001175 |
| variant_eq_ne.test | RUN | 0.164657 | 0.444226 | 0.556907 | 0.001258 | 0.001292 | 0.001149 |
| variant_eq_ne_cx.test | COMPILE | 0.089725 | 0.212918 | 0.264075 | — | — | — |
| variant_lt_gt.test | RUN | 0.170695 | 0.517605 | 0.581678 | 0.001423 | 0.001529 | 0.001166 |
| variant_lt_gt_cx.test | COMPILE | 0.087609 | 0.202798 | 0.249347 | — | — | — |
| variant_destroy.test | RUN | 0.169440 | 0.513550 | 0.608313 | 0.001211 | 0.001442 | 0.001175 |
| variant_visit.test | RUN | 1.085983 | 4.007751 | 10.519739 | 0.001158 | 0.001394 | 0.001129 |
| variant_convert_construct.test | RUN | 0.218868 | 0.680609 | 0.844573 | 0.001341 | 0.001353 | 0.001251 |
| variant_subset.test | RUN | 0.227380 | 0.750244 | 0.890800 | 0.001472 | 0.001160 | 0.001203 |
| variant_valueless.test | RUN | 0.163434 | 0.457334 | 0.604576 | 0.001314 | 0.001628 | 0.001315 |
| variant_copy_construct_throw.test | RUN | 0.132399 | 0.349554 | 0.414999 | 0.001358 | 0.001492 | 0.001132 |
| variant_move_construct_throw.test | RUN | 0.127602 | 0.351304 | 0.417051 | 0.001260 | 0.001313 | 0.001087 |
| variant_convert_construct_throw.test | RUN | 0.135858 | 0.369059 | 0.440754 | 0.001048 | 0.001267 | 0.001196 |
| variant_copy_assign_throw.test | RUN | 0.130373 | 0.327840 | 0.416259 | 0.001344 | 0.001311 | 0.001257 |
| variant_move_assign_throw.test | RUN | 0.129020 | 0.327817 | 0.405352 | 0.001462 | 0.001525 | 0.001234 |
| variant_get_by_index_nx.test | RUN | 0.319241 | 1.633520 | 1.082627 | 0.001231 | 0.001462 | 0.001098 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.101764 | 0.235373 | 0.295901 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.315861 | 1.842176 | 1.182019 | 0.001255 | 0.001317 | 0.001386 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.089087 | 0.210492 | 0.255364 | — | — | — |
| variant_subset_nx.test | RUN | 0.236787 | 0.710391 | 0.904040 | 0.001414 | 0.001354 | 0.001321 |
| variant_hash.test | RUN | 0.229972 | 0.808846 | 0.815979 | 0.001211 | 0.001348 | 0.001344 |
| variant_trivial.test | RUN | 1.295338 | 4.770992 | 5.964467 | 0.001217 | 0.001297 | 0.001204 |
| variant_special.test | RUN | 1.257531 | 5.005242 | 6.409328 | 0.001414 | 0.001591 | 0.001196 |
| variant_visit_derived.test | RUN | 0.154866 | 0.431219 | 0.616320 | 0.001453 | 0.001572 | 0.001133 |
| variant_many_types.test | RUN | 1.395996 | 6.236699 | 8.781629 | 0.001174 | 0.001470 | 0.001128 |
| variant_visit_r.test | RUN | 0.581655 | 1.931090 | 3.455992 | 0.001392 | 0.001318 | 0.001165 |
| variant_derived_construct.test | COMPILE | 0.091620 | 0.214821 | 0.266267 | — | — | — |
| variant_visit_by_index.test | RUN | 0.204587 | 0.561588 | 0.791532 | 0.001088 | 0.001413 | 0.001310 |
| variant_ostream_insert.test | RUN | 0.157839 | 0.452146 | 0.495904 | 0.001432 | 0.001338 | 0.001241 |
| is_output_streamable.test | RUN | 0.190286 | 0.959113 | 0.783934 | 0.001434 | 0.001409 | 0.001186 |
| variant_json_value_from.test | RUN | 0.287999 | 0.757883 | 0.947159 | 0.001236 | 0.001369 | 0.001172 |
| variant_json_value_to.test | RUN | 0.360798 | 1.042665 | 1.265253 | 0.001283 | 0.001464 | 0.001220 |
| variant_uses_double_storage.test | COMPILE | 0.097930 | 0.220483 | 0.305620 | — | — | — |
| variant_derived_construct2.test | RUN | 0.134404 | 0.367661 | 0.449681 | 0.001178 | 0.001353 | 0.001164 |
| variant_visit_cx.test | COMPILE | 0.093281 | 0.207292 | 0.241686 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089969 | 0.206678 | 0.258107 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087039 | 0.207133 | 0.252205 | — | — | — |
| variant_index_type_126.test | RUN | 0.805471 | 2.013315 | 3.754333 | 0.001298 | 0.001316 | 0.001381 |
| variant_index_type_127.test | RUN | 0.807334 | 2.012895 | 3.829047 | 0.001187 | 0.001348 | 0.001222 |
| variant_index_type_128.test | RUN | 0.825413 | 2.072706 | 3.910957 | 0.001171 | 0.001258 | 0.001251 |
| variant_index_type_129.test | RUN | 0.822194 | 2.070506 | 3.896892 | 0.001137 | 0.001293 | 0.001132 |
| variant_index_type_254.test | RUN | 2.898029 | 8.016743 | 12.151796 | 0.001599 | 0.001237 | 0.001287 |
| variant_index_type_255.test | RUN | 2.939650 | 7.975273 | 12.199057 | 0.001170 | 0.001363 | 0.001119 |
| variant_index_type_256.test | RUN | 2.986947 | 8.216324 | 12.603253 | 0.001615 | 0.001305 | 0.001228 |
| variant_index_type_257.test | RUN | 2.988336 | 8.354993 | 12.729197 | 0.001204 | 0.001320 | 0.001284 |
| variant_default_construct_cx_2.test | COMPILE | 0.094383 | 0.205409 | 0.287491 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.091026 | 0.202923 | 0.285680 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.087909 | 0.202324 | 0.238059 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.089043 | 0.203013 | 0.243271 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.087387 | 0.201300 | 0.254042 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.087432 | 0.200217 | 0.250052 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.089267 | 0.188125 | 0.220580 | — | — | — |
| variant_issue_55.test | RUN | 0.120893 | 0.378686 | 0.419567 | 0.000981 | 0.000908 | 0.000813 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.982×, 0.995× | 1.012× |
| clang | 0.990× | 0.986×, 0.993× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000793s | 0.000816s | 0.000804s | byte equality observed |
| quick.test | 10 | 0.000773s | 0.000363s | 0.000789s | byte equality observed |
| variant_alternative.test | 10 | 0.000823s | 0.000821s | 0.000806s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000836s | 0.000826s | 0.000834s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000817s | 0.000840s | 0.000839s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000821s | 0.000804s | 0.000822s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000840s | 0.000836s | 0.000846s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000827s | 0.000822s | 0.000843s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000826s | 0.000877s | 0.000823s | byte equality observed |
| variant_default_construct.test | 10 | 0.000818s | 0.000834s | 0.000810s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000811s | 0.000783s | 0.000785s | byte equality observed |
| variant_destroy.test | 10 | 0.000833s | 0.000835s | 0.000811s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000826s | 0.000802s | 0.000828s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000819s | 0.000810s | 0.000813s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000818s | 0.000779s | 0.000821s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000848s | 0.000838s | 0.000856s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000795s | 0.000797s | 0.000804s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000828s | 0.000882s | 0.000813s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000842s | 0.000821s | 0.000817s | byte equality observed |
| variant_hash.test | 10 | 0.000808s | 0.000819s | 0.000817s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000810s | 0.000805s | 0.000828s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000815s | 0.000824s | 0.000828s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000820s | 0.000812s | 0.000788s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000838s | 0.000783s | 0.000816s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000815s | 0.000780s | 0.000797s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000821s | 0.000793s | 0.000819s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000818s | 0.000815s | 0.000813s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000812s | 0.000792s | 0.000812s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000808s | 0.000796s | 0.000842s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000821s | 0.000803s | 0.000832s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000826s | 0.000788s | 0.000805s | byte equality observed |
| variant_issue_55.test | 10 | 0.000809s | 0.000833s | 0.000828s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000834s | 0.000818s | 0.000811s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000826s | 0.000848s | 0.000809s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000795s | 0.000788s | 0.000808s | byte equality observed |
| variant_many_types.test | 10 | 0.000839s | 0.000799s | 0.000822s | byte equality observed |
| variant_move_assign.test | 10 | 0.000823s | 0.000870s | 0.000805s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000859s | 0.000829s | 0.000819s | byte equality observed |
| variant_move_construct.test | 10 | 0.000826s | 0.000842s | 0.000862s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000838s | 0.000845s | 0.000807s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000844s | 0.000856s | 0.000810s | byte equality observed |
| variant_size.test | 10 | 0.000801s | 0.000825s | 0.000807s | byte equality observed |
| variant_special.test | 10 | 0.000870s | 0.000869s | 0.000862s | byte equality observed |
| variant_subset.test | 10 | 0.000843s | 0.000826s | 0.000839s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000817s | 0.000799s | 0.000798s | byte equality observed |
| variant_swap.test | 10 | 0.000834s | 0.000805s | 0.000834s | byte equality observed |
| variant_trivial.test | 10 | 0.000843s | 0.000880s | 0.000810s | byte equality observed |
| variant_value_assign.test | 10 | 0.000831s | 0.000836s | 0.000788s | byte equality observed |
| variant_value_construct.test | 10 | 0.000816s | 0.000813s | 0.000809s | byte equality observed |
| variant_valueless.test | 10 | 0.000858s | 0.000822s | 0.000823s | byte equality observed |
| variant_visit.test | 10 | 0.000842s | 0.000803s | 0.000799s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000812s | 0.000790s | 0.000837s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000798s | 0.000795s | 0.000814s | byte equality observed |
| variant_visit_r.test | 10 | 0.000813s | 0.000814s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
