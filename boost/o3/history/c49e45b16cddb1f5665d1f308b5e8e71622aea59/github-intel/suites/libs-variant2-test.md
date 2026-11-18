# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091224 | 0.205083 | 0.284044 | 0.001250 | 0.000497 | 0.001261 |
| variant_size.test | RUN | 0.165570 | 0.518955 | 0.538874 | 0.001341 | 0.001340 | 0.001380 |
| variant_alternative.test | RUN | 0.216903 | 1.731953 | 0.953660 | 0.001567 | 0.001269 | 0.001310 |
| variant_holds_alternative.test | RUN | 0.150842 | 0.387056 | 0.539384 | 0.001181 | 0.001282 | 0.001230 |
| variant_holds_alternative_cx.test | COMPILE | 0.097164 | 0.220431 | 0.301578 | — | — | — |
| variant_get_by_index.test | RUN | 0.248318 | 1.907233 | 1.174795 | 0.001447 | 0.001333 | 0.001354 |
| variant_get_by_index_cx.test | COMPILE | 0.098621 | 0.232798 | 0.317718 | — | — | — |
| variant_get_by_type.test | RUN | 0.264292 | 2.033081 | 1.263850 | 0.001222 | 0.001207 | 0.001406 |
| variant_get_by_type_cx.test | COMPILE | 0.087429 | 0.201283 | 0.257381 | — | — | — |
| variant_default_construct.test | RUN | 0.240237 | 1.503616 | 1.034782 | 0.001249 | 0.001257 | 0.001175 |
| variant_default_construct_cx.test | COMPILE | 0.099890 | 0.225587 | 0.295028 | — | — | — |
| variant_copy_construct.test | RUN | 0.383230 | 2.543733 | 1.837282 | 0.001448 | 0.001284 | 0.001265 |
| variant_copy_construct_cx.test | COMPILE | 0.114296 | 0.257267 | 0.365325 | — | — | — |
| variant_move_construct.test | RUN | 0.356603 | 2.157637 | 1.703796 | 0.001316 | 0.001201 | 0.001370 |
| variant_move_construct_cx.test | COMPILE | 0.089467 | 0.207083 | 0.261996 | — | — | — |
| variant_value_construct.test | RUN | 0.186867 | 0.531018 | 0.703815 | 0.001151 | 0.001284 | 0.001267 |
| variant_value_construct_cx.test | COMPILE | 0.102464 | 0.239491 | 0.315175 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.191368 | 0.537706 | 0.707561 | 0.001357 | 0.001209 | 0.001352 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.103134 | 0.232914 | 0.321498 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.191038 | 0.533472 | 0.685150 | 0.001173 | 0.001323 | 0.001281 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.103872 | 0.232848 | 0.321420 | — | — | — |
| variant_copy_assign.test | RUN | 0.258481 | 1.746150 | 1.131187 | 0.001238 | 0.001353 | 0.001500 |
| variant_copy_assign_cx.test | COMPILE | 0.090120 | 0.208765 | 0.261354 | — | — | — |
| variant_move_assign.test | RUN | 0.259810 | 1.736997 | 1.098676 | 0.001356 | 0.001334 | 0.001246 |
| variant_move_assign_cx.test | COMPILE | 0.088794 | 0.203673 | 0.264621 | — | — | — |
| variant_value_assign.test | RUN | 0.194702 | 0.597024 | 0.774671 | 0.001319 | 0.001435 | 0.001286 |
| variant_value_assign_cx.test | COMPILE | 0.091689 | 0.203948 | 0.271230 | — | — | — |
| variant_emplace_index.test | RUN | 0.223413 | 0.694672 | 0.835973 | 0.001423 | 0.001484 | 0.001446 |
| variant_emplace_index_cx.test | COMPILE | 0.090543 | 0.205307 | 0.262591 | — | — | — |
| variant_emplace_type.test | RUN | 0.201091 | 0.599113 | 0.752494 | 0.001411 | 0.001436 | 0.001214 |
| variant_emplace_type_cx.test | COMPILE | 0.090562 | 0.201986 | 0.266690 | — | — | — |
| variant_swap.test | RUN | 0.211326 | 0.740024 | 0.812086 | 0.001407 | 0.001358 | 0.001222 |
| variant_eq_ne.test | RUN | 0.167303 | 0.451183 | 0.563228 | 0.001468 | 0.001435 | 0.001328 |
| variant_eq_ne_cx.test | COMPILE | 0.090738 | 0.200829 | 0.266857 | — | — | — |
| variant_lt_gt.test | RUN | 0.173817 | 0.504151 | 0.600055 | 0.001238 | 0.001265 | 0.001434 |
| variant_lt_gt_cx.test | COMPILE | 0.092918 | 0.209365 | 0.259713 | — | — | — |
| variant_destroy.test | RUN | 0.175110 | 0.501418 | 0.628914 | 0.001244 | 0.001456 | 0.001495 |
| variant_visit.test | RUN | 1.093309 | 3.913550 | 10.690062 | 0.001327 | 0.001322 | 0.001344 |
| variant_convert_construct.test | RUN | 0.217410 | 0.660703 | 0.885386 | 0.001361 | 0.001453 | 0.001355 |
| variant_subset.test | RUN | 0.225573 | 0.734314 | 0.915472 | 0.001254 | 0.001449 | 0.001316 |
| variant_valueless.test | RUN | 0.160337 | 0.450836 | 0.610527 | 0.001614 | 0.001446 | 0.001355 |
| variant_copy_construct_throw.test | RUN | 0.132366 | 0.337133 | 0.423047 | 0.001039 | 0.001440 | 0.001359 |
| variant_move_construct_throw.test | RUN | 0.129293 | 0.326700 | 0.419399 | 0.001359 | 0.001356 | 0.001208 |
| variant_convert_construct_throw.test | RUN | 0.132426 | 0.374954 | 0.451844 | 0.001314 | 0.001480 | 0.001253 |
| variant_copy_assign_throw.test | RUN | 0.123248 | 0.327610 | 0.412170 | 0.001225 | 0.000948 | 0.001421 |
| variant_move_assign_throw.test | RUN | 0.126465 | 0.322533 | 0.426131 | 0.001267 | 0.001314 | 0.001294 |
| variant_get_by_index_nx.test | RUN | 0.315594 | 1.629592 | 1.120302 | 0.001562 | 0.001080 | 0.001354 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.101186 | 0.235661 | 0.300281 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.319404 | 1.803714 | 1.210718 | 0.001334 | 0.001200 | 0.001196 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.091525 | 0.201971 | 0.261279 | — | — | — |
| variant_subset_nx.test | RUN | 0.233536 | 0.698622 | 0.932317 | 0.001087 | 0.001280 | 0.001183 |
| variant_hash.test | RUN | 0.228303 | 0.816334 | 0.829462 | 0.001319 | 0.001372 | 0.001427 |
| variant_trivial.test | RUN | 1.270640 | 4.572048 | 6.262776 | 0.001461 | 0.001303 | 0.001311 |
| variant_special.test | RUN | 1.245236 | 5.034716 | 6.732603 | 0.001447 | 0.001286 | 0.001426 |
| variant_visit_derived.test | RUN | 0.158172 | 0.414509 | 0.620468 | 0.001370 | 0.001486 | 0.001243 |
| variant_many_types.test | RUN | 1.413410 | 6.078182 | 9.006415 | 0.001280 | 0.001300 | 0.001304 |
| variant_visit_r.test | RUN | 0.593135 | 1.988692 | 3.550684 | 0.001361 | 0.001301 | 0.001324 |
| variant_derived_construct.test | COMPILE | 0.093673 | 0.215934 | 0.281133 | — | — | — |
| variant_visit_by_index.test | RUN | 0.206446 | 0.535075 | 0.752921 | 0.001232 | 0.001316 | 0.001376 |
| variant_ostream_insert.test | RUN | 0.158331 | 0.445374 | 0.542956 | 0.001177 | 0.001294 | 0.001251 |
| is_output_streamable.test | RUN | 0.192941 | 0.927363 | 0.785128 | 0.001341 | 0.001216 | 0.001360 |
| variant_json_value_from.test | RUN | 0.290489 | 0.704971 | 0.967327 | 0.001304 | 0.001382 | 0.001318 |
| variant_json_value_to.test | RUN | 0.362903 | 1.009113 | 1.292442 | 0.001464 | 0.001420 | 0.001184 |
| variant_uses_double_storage.test | COMPILE | 0.097952 | 0.215191 | 0.312608 | — | — | — |
| variant_derived_construct2.test | RUN | 0.133810 | 0.352339 | 0.447287 | 0.001182 | 0.001205 | 0.001249 |
| variant_visit_cx.test | COMPILE | 0.091733 | 0.204206 | 0.246881 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089986 | 0.206995 | 0.258586 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.089804 | 0.198967 | 0.254291 | — | — | — |
| variant_index_type_126.test | RUN | 0.798444 | 1.950225 | 3.837061 | 0.001356 | 0.001419 | 0.001314 |
| variant_index_type_127.test | RUN | 0.812584 | 1.951709 | 3.811183 | 0.001136 | 0.001480 | 0.001537 |
| variant_index_type_128.test | RUN | 0.828678 | 2.039587 | 3.994993 | 0.001219 | 0.001219 | 0.001225 |
| variant_index_type_129.test | RUN | 0.812485 | 1.974863 | 3.950279 | 0.001325 | 0.001249 | 0.001352 |
| variant_index_type_254.test | RUN | 2.890639 | 7.921931 | 12.385512 | 0.001405 | 0.001280 | 0.001435 |
| variant_index_type_255.test | RUN | 2.912773 | 7.923395 | 12.430149 | 0.001172 | 0.001328 | 0.001391 |
| variant_index_type_256.test | RUN | 2.944489 | 8.267941 | 12.626755 | 0.001291 | 0.001440 | 0.001217 |
| variant_index_type_257.test | RUN | 2.950287 | 8.306227 | 12.764318 | 0.001133 | 0.001156 | 0.001181 |
| variant_default_construct_cx_2.test | COMPILE | 0.085363 | 0.201790 | 0.295072 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.090349 | 0.204576 | 0.268470 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.087389 | 0.202754 | 0.271577 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.088191 | 0.189162 | 0.251465 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.090065 | 0.200364 | 0.258033 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.073828 | 0.199281 | 0.239527 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.077575 | 0.135013 | 0.233371 | — | — | — |
| variant_issue_55.test | RUN | 0.135910 | 0.396657 | 0.433766 | 0.000956 | 0.000965 | 0.000962 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.985×, 0.999× | 0.987× |
| clang | 0.999× | 0.999×, 0.999× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000809s | 0.000815s | 0.000807s | byte equality observed |
| quick.test | 10 | 0.000781s | 0.000363s | 0.000794s | byte equality observed |
| variant_alternative.test | 10 | 0.000820s | 0.000797s | 0.000792s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000796s | 0.000801s | 0.000797s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000811s | 0.000834s | 0.000857s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000831s | 0.000824s | 0.000794s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000840s | 0.000817s | 0.000796s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000809s | 0.000837s | 0.000828s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000827s | 0.000845s | 0.000846s | byte equality observed |
| variant_default_construct.test | 10 | 0.000820s | 0.000838s | 0.000814s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000796s | 0.000851s | 0.000799s | byte equality observed |
| variant_destroy.test | 10 | 0.000796s | 0.000831s | 0.000793s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000821s | 0.000850s | 0.000820s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000808s | 0.000817s | 0.000828s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000810s | 0.000813s | 0.000827s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000892s | 0.000848s | 0.000858s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000822s | 0.000844s | 0.000815s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000842s | 0.000839s | 0.000841s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000813s | 0.000828s | 0.000842s | byte equality observed |
| variant_hash.test | 10 | 0.000805s | 0.000831s | 0.000809s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000841s | 0.000806s | 0.000809s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000854s | 0.000810s | 0.000827s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000840s | 0.000802s | 0.000824s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000833s | 0.000816s | 0.000819s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000791s | 0.000817s | 0.000812s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000799s | 0.000808s | 0.000806s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000815s | 0.000811s | 0.000818s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000829s | 0.000797s | 0.000833s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000833s | 0.000821s | 0.000812s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000807s | 0.000785s | 0.000824s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000821s | 0.000810s | 0.000799s | byte equality observed |
| variant_issue_55.test | 10 | 0.000831s | 0.000826s | 0.000807s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000840s | 0.000847s | 0.000833s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000846s | 0.000844s | 0.000852s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000824s | 0.000824s | 0.000830s | byte equality observed |
| variant_many_types.test | 10 | 0.000831s | 0.000836s | 0.000840s | byte equality observed |
| variant_move_assign.test | 10 | 0.000821s | 0.000834s | 0.000834s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000849s | 0.000829s | 0.000821s | byte equality observed |
| variant_move_construct.test | 10 | 0.000834s | 0.000828s | 0.000820s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000822s | 0.000841s | 0.000842s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000847s | 0.000827s | 0.000843s | byte equality observed |
| variant_size.test | 10 | 0.000803s | 0.000830s | 0.000804s | byte equality observed |
| variant_special.test | 10 | 0.000834s | 0.000834s | 0.000836s | byte equality observed |
| variant_subset.test | 10 | 0.000829s | 0.000856s | 0.000825s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000802s | 0.000807s | 0.000807s | byte equality observed |
| variant_swap.test | 10 | 0.000818s | 0.000826s | 0.000827s | byte equality observed |
| variant_trivial.test | 10 | 0.000817s | 0.000878s | 0.000828s | byte equality observed |
| variant_value_assign.test | 10 | 0.000812s | 0.000835s | 0.000822s | byte equality observed |
| variant_value_construct.test | 10 | 0.000794s | 0.000823s | 0.000815s | byte equality observed |
| variant_valueless.test | 10 | 0.000835s | 0.000834s | 0.000846s | byte equality observed |
| variant_visit.test | 10 | 0.000826s | 0.000834s | 0.000795s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000824s | 0.000810s | 0.000821s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000820s | 0.000822s | 0.000848s | byte equality observed |
| variant_visit_r.test | 10 | 0.000816s | 0.000797s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
