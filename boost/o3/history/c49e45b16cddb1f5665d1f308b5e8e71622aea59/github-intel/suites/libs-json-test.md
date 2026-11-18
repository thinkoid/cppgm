# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.771742 | 4.259242 | 3.638990 | 0.002020 | 0.002018 | 0.001951 |
| basic_parser.test | RUN | 4.882426 | 106.242818 | 61.768227 | 0.408124 | 0.181184 | 0.592524 |
| conversion.test | RUN | 0.535694 | 1.576550 | 1.797117 | 0.001298 | 0.001369 | 0.001102 |
| doc_background.test | RUN | 0.532942 | 1.527657 | 1.760758 | 0.001435 | 0.001054 | 0.001111 |
| doc_forward_conversion.test | RUN | 0.551887 | 1.832311 | 2.003738 | 0.001394 | 0.001455 | 0.001052 |
| doc_parsing.test | RUN | 0.590620 | 1.685216 | 1.834937 | 0.001301 | 0.001269 | 0.001116 |
| doc_quick_look.test | RUN | 0.730600 | 2.053947 | 2.478223 | 0.001266 | 0.001313 | 0.001252 |
| doc_serializing.test | RUN | 0.512607 | 1.504641 | 1.691595 | 0.001247 | 0.001187 | 0.001290 |
| doc_storage_ptr.test | RUN | 0.501730 | 1.556557 | 1.713454 | 0.001327 | 0.001250 | 0.001222 |
| doc_uses_allocator.test | RUN | 0.521966 | 1.527804 | 1.700737 | 0.001280 | 0.001440 | 0.001198 |
| doc_using_numbers.test | RUN | 0.565792 | 1.597364 | 1.841266 | 0.001321 | 0.001371 | 0.001253 |
| double.test | RUN | 0.612692 | 2.719972 | 2.266950 | 1.246430 | 1.208003 | 1.293967 |
| error.test | RUN | 0.428769 | 1.543028 | 1.295667 | 0.001328 | 0.001398 | 0.001097 |
| fwd.test | RUN | 0.493196 | 1.507049 | 1.697899 | 0.001270 | 0.001366 | 0.001256 |
| json.test | RUN | 0.522499 | 1.686003 | 1.965180 | 0.001227 | 0.001276 | 0.001346 |
| kind.test | RUN | 0.386238 | 1.377880 | 1.403954 | 0.001572 | 0.001383 | 0.001357 |
| memory_resource.test | RUN | 0.524118 | 1.822409 | 1.877926 | 0.001471 | 0.001421 | 0.001404 |
| monotonic_resource.test | RUN | 0.481777 | 1.746353 | 1.753090 | 0.001978 | 0.001876 | 0.001714 |
| natvis.test | RUN | 0.510974 | 1.642554 | 1.748764 | 0.001323 | 0.001374 | 0.001345 |
| null_resource.test | RUN | 0.422940 | 1.353441 | 1.431587 | 0.001303 | 0.001352 | 0.001348 |
| object.test | RUN | 0.931252 | 5.081419 | 4.178836 | 0.005438 | 0.004157 | 0.004873 |
| parse.test | RUN | 0.564013 | 2.515873 | 2.103780 | 0.001851 | 0.001726 | 0.001758 |
| parser.test | RUN | 0.532483 | 2.126437 | 1.926108 | 0.001390 | 0.001582 | 0.001426 |
| pilfer.test | RUN | 0.286852 | 0.947852 | 0.950605 | 0.001502 | 0.001238 | 0.001366 |
| pointer.test | RUN | 0.652545 | 2.912456 | 2.488275 | 0.001727 | 0.001688 | 0.001569 |
| result_for.test | RUN | 0.526165 | 1.711531 | 1.824325 | 0.001299 | 0.001417 | 0.001136 |
| serialize.test | RUN | 0.523400 | 1.812812 | 1.822557 | 0.001458 | 0.001300 | 0.001370 |
| serializer.test | RUN | 0.895486 | 5.207907 | 4.099633 | 0.002382 | 0.002136 | 0.002265 |
| snippets.test | RUN | 1.417587 | 7.545053 | 6.215127 | 0.001496 | 0.001849 | 0.001433 |
| static_resource.test | RUN | 0.503050 | 1.555057 | 1.704516 | 0.001416 | 0.001464 | 0.001334 |
| storage_ptr.test | RUN | 0.536958 | 1.725815 | 1.821539 | 0.001252 | 0.001459 | 0.001447 |
| stream_parser.test | RUN | 0.662940 | 3.280559 | 2.629142 | 0.074227 | 0.071118 | 0.072395 |
| string.test | RUN | 1.278824 | 8.350860 | 6.677000 | 0.002022 | 0.002173 | 0.002138 |
| string_view.test | RUN | 0.312554 | 1.104218 | 0.988935 | 0.001276 | 0.001287 | 0.001318 |
| value.test | RUN | 1.165413 | 8.998692 | 5.481336 | 0.002968 | 0.002573 | 0.003221 |
| value_from.test | RUN | 1.067074 | 5.317456 | 4.707263 | 0.001488 | 0.001816 | 0.001616 |
| value_stack.test | RUN | 0.493460 | 1.558507 | 1.675612 | 0.001536 | 0.001427 | 0.001448 |
| value_to.test | RUN | 2.617611 | 16.698543 | 12.387960 | 0.002542 | 0.002752 | 0.002338 |
| value_ref.test | RUN | 0.590382 | 2.252754 | 2.131493 | 0.001394 | 0.001538 | 0.001163 |
| utf8.test | RUN | 0.429358 | 1.510089 | 1.427662 | 0.001344 | 0.001856 | 0.001373 |
| visit.test | RUN | 0.580507 | 2.498279 | 2.032433 | 0.001389 | 0.001479 | 0.001211 |
| d2s_intrinsics_test.test | RUN | 0.420457 | 1.310703 | 1.404912 | 0.001390 | 0.001446 | 0.001340 |
| d2s_table_test.test | RUN | 0.434931 | 1.561082 | 1.500894 | 0.001298 | 0.001559 | 0.001323 |
| d2s_test.test | RUN | 0.451217 | 1.947350 | 1.642873 | 0.001503 | 0.001656 | 0.001384 |
| parse_into.test | RUN | 17.375707 | 135.563809 | 82.406211 | 0.002491 | 0.002317 | 0.002198 |
| limits.test | RUN | 1.886732 | 12.514723 | 8.001019 | 0.001783 | 0.001495 | 0.001603 |
| header_only.test | RUN | 1.283579 | 9.038430 | 6.015936 | 0.001155 | 0.001280 | 0.001362 |
| no_exceptions.test | RUN | 1.821578 | 10.015353 | 7.562806 | 0.001294 | 0.001481 | 0.001208 |
| intrusive_macros.test | RUN | 1.515474 | 9.989670 | 6.490466 | 0.001250 | 0.001464 | 0.001237 |
| _gdb-printers.test | RUN | 0.230442 | 0.667417 | 0.808518 | 0.152948 | 0.228462 | 0.164681 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.895× | 0.897×, 0.893× | 1.000× |
| clang | 1.140× | 1.141×, 1.140× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001359s | 0.001219s | 0.001351s | byte equality observed |
| basic_parser.test | 1 | 0.287431s | 0.190582s | 0.429356s | native test oracle; output varies |
| conversion.test | 10 | 0.000748s | 0.000753s | 0.000739s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000734s | 0.000740s | 0.000730s | byte equality observed |
| d2s_table_test.test | 10 | 0.000748s | 0.000756s | 0.000743s | byte equality observed |
| d2s_test.test | 10 | 0.000795s | 0.000796s | 0.000772s | byte equality observed |
| doc_background.test | 10 | 0.000756s | 0.000743s | 0.000745s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000790s | 0.000768s | 0.000770s | byte equality observed |
| doc_parsing.test | 10 | 0.000802s | 0.000785s | 0.000770s | byte equality observed |
| doc_quick_look.test | 10 | 0.000772s | 0.000767s | 0.000748s | byte equality observed |
| doc_serializing.test | 10 | 0.000757s | 0.000745s | 0.000735s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000769s | 0.000770s | 0.000752s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000777s | 0.000762s | 0.000743s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000770s | 0.000745s | 0.000747s | byte equality observed |
| double.test | 1 | 0.838310s | 0.811521s | 0.864003s | native test oracle; output varies |
| error.test | 10 | 0.000864s | 0.000850s | 0.000837s | byte equality observed |
| fwd.test | 10 | 0.000761s | 0.000753s | 0.000746s | byte equality observed |
| header_only.test | 10 | 0.000749s | 0.000763s | 0.000727s | byte equality observed |
| intrusive_macros.test | 10 | 0.000788s | 0.000785s | 0.000778s | byte equality observed |
| json.test | 10 | 0.000771s | 0.000771s | 0.000771s | byte equality observed |
| kind.test | 10 | 0.000788s | 0.000800s | 0.000759s | byte equality observed |
| limits.test | 10 | 0.000938s | 0.000929s | 0.000920s | byte equality observed |
| memory_resource.test | 10 | 0.000789s | 0.000792s | 0.000782s | byte equality observed |
| monotonic_resource.test | 10 | 0.001164s | 0.001161s | 0.001141s | byte equality observed |
| natvis.test | 10 | 0.000794s | 0.000799s | 0.000778s | byte equality observed |
| no_exceptions.test | 10 | 0.000784s | 0.000782s | 0.000770s | byte equality observed |
| null_resource.test | 10 | 0.000807s | 0.000801s | 0.000782s | byte equality observed |
| object.test | 6 | 0.003385s | 0.002841s | 0.003334s | native test oracle; output varies |
| parse.test | 10 | 0.001105s | 0.001127s | 0.001102s | byte equality observed |
| parse_into.test | 8 | 0.001903s | 0.001821s | 0.001724s | native test oracle; output varies |
| parser.test | 10 | 0.000889s | 0.000865s | 0.000864s | byte equality observed |
| pilfer.test | 10 | 0.000767s | 0.000758s | 0.000752s | byte equality observed |
| pointer.test | 10 | 0.000932s | 0.000904s | 0.000906s | byte equality observed |
| result_for.test | 10 | 0.000766s | 0.000754s | 0.000763s | byte equality observed |
| serialize.test | 10 | 0.000801s | 0.000803s | 0.000795s | byte equality observed |
| serializer.test | 10 | 0.001377s | 0.001376s | 0.001363s | byte equality observed |
| snippets.test | 10 | 0.000928s | 0.000907s | 0.000906s | byte equality observed |
| static_resource.test | 10 | 0.000821s | 0.000819s | 0.000823s | byte equality observed |
| storage_ptr.test | 10 | 0.000800s | 0.000807s | 0.000795s | byte equality observed |
| stream_parser.test | 1 | 0.042899s | 0.040227s | 0.043137s | native test oracle; output varies |
| string.test | 10 | 0.001356s | 0.001173s | 0.001327s | byte equality observed |
| string_view.test | 10 | 0.000767s | 0.000762s | 0.000751s | byte equality observed |
| utf8.test | 10 | 0.000752s | 0.000736s | 0.000774s | byte equality observed |
| value.test | 10 | 0.001707s | 0.001591s | 0.001987s | native test oracle; output varies |
| value_from.test | 10 | 0.000893s | 0.000883s | 0.000897s | byte equality observed |
| value_ref.test | 10 | 0.000811s | 0.000796s | 0.000805s | byte equality observed |
| value_stack.test | 10 | 0.000789s | 0.000764s | 0.000788s | byte equality observed |
| value_to.test | 10 | 0.001446s | 0.001438s | 0.001416s | byte equality observed |
| visit.test | 10 | 0.000785s | 0.000779s | 0.000774s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
