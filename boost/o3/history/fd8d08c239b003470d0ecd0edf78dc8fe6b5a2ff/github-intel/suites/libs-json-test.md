# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.821875 | 4.423989 | 3.728582 | 0.002557 | 0.002137 | 0.002204 |
| basic_parser.test | RUN | 5.054829 | 110.689947 | 64.584642 | 0.403466 | 0.181376 | 0.544760 |
| conversion.test | RUN | 0.548373 | 1.633826 | 1.832353 | 0.001343 | 0.001444 | 0.001338 |
| doc_background.test | RUN | 0.565010 | 1.644468 | 1.801884 | 0.001424 | 0.001344 | 0.001291 |
| doc_forward_conversion.test | RUN | 0.585243 | 1.924044 | 2.058259 | 0.001413 | 0.001625 | 0.001557 |
| doc_parsing.test | RUN | 0.618538 | 1.797637 | 1.911902 | 0.001471 | 0.001397 | 0.001494 |
| doc_quick_look.test | RUN | 0.764537 | 2.144192 | 2.581904 | 0.001408 | 0.001542 | 0.001222 |
| doc_serializing.test | RUN | 0.529285 | 1.569376 | 1.760876 | 0.001364 | 0.001278 | 0.001276 |
| doc_storage_ptr.test | RUN | 0.530392 | 1.641716 | 1.758248 | 0.001422 | 0.001393 | 0.001444 |
| doc_uses_allocator.test | RUN | 0.530128 | 1.548587 | 1.744621 | 0.001475 | 0.001435 | 0.001345 |
| doc_using_numbers.test | RUN | 0.604756 | 1.624888 | 1.909272 | 0.001231 | 0.001611 | 0.001280 |
| double.test | RUN | 0.623529 | 2.762536 | 2.169573 | 1.235120 | 1.197078 | 1.297119 |
| error.test | RUN | 0.455331 | 1.588095 | 1.451297 | 0.001355 | 0.001405 | 0.001336 |
| fwd.test | RUN | 0.502711 | 1.486779 | 1.684833 | 0.001289 | 0.001234 | 0.001351 |
| json.test | RUN | 0.542683 | 1.800127 | 2.036307 | 0.001508 | 0.001544 | 0.001324 |
| kind.test | RUN | 0.410468 | 1.423523 | 1.413258 | 0.001346 | 0.001715 | 0.001369 |
| memory_resource.test | RUN | 0.584184 | 1.895903 | 1.903224 | 0.001519 | 0.001630 | 0.001526 |
| monotonic_resource.test | RUN | 0.507223 | 1.755584 | 1.818365 | 0.002199 | 0.001942 | 0.002004 |
| natvis.test | RUN | 0.539682 | 1.699934 | 1.773781 | 0.001528 | 0.001498 | 0.001391 |
| null_resource.test | RUN | 0.438282 | 1.452295 | 1.435072 | 0.001316 | 0.001743 | 0.001405 |
| object.test | RUN | 0.949563 | 5.137354 | 4.530332 | 0.005557 | 0.004685 | 0.005276 |
| parse.test | RUN | 0.593471 | 2.593997 | 2.026544 | 0.001991 | 0.002073 | 0.001912 |
| parser.test | RUN | 0.559907 | 2.227192 | 1.950114 | 0.001486 | 0.001678 | 0.001540 |
| pilfer.test | RUN | 0.300116 | 0.986035 | 0.965560 | 0.001362 | 0.001600 | 0.001306 |
| pointer.test | RUN | 0.664319 | 3.013228 | 2.492448 | 0.001617 | 0.001874 | 0.001644 |
| result_for.test | RUN | 0.544535 | 1.777878 | 1.906178 | 0.001483 | 0.001504 | 0.001322 |
| serialize.test | RUN | 0.553463 | 1.861860 | 1.819404 | 0.001502 | 0.001573 | 0.001685 |
| serializer.test | RUN | 0.919982 | 5.302529 | 4.250258 | 0.002257 | 0.002610 | 0.002362 |
| snippets.test | RUN | 1.466453 | 7.670220 | 6.158383 | 0.001785 | 0.001946 | 0.001608 |
| static_resource.test | RUN | 0.529781 | 1.636704 | 1.759769 | 0.001542 | 0.001732 | 0.001556 |
| storage_ptr.test | RUN | 0.544825 | 1.796998 | 1.857171 | 0.001389 | 0.001564 | 0.001403 |
| stream_parser.test | RUN | 0.683403 | 3.350964 | 2.702430 | 0.073527 | 0.070085 | 0.066514 |
| string.test | RUN | 1.314113 | 8.454605 | 6.608359 | 0.002461 | 0.001992 | 0.002288 |
| string_view.test | RUN | 0.319703 | 1.160313 | 1.071789 | 0.001423 | 0.001418 | 0.001414 |
| value.test | RUN | 1.233958 | 8.644857 | 5.751975 | 0.002920 | 0.002835 | 0.003270 |
| value_from.test | RUN | 1.162336 | 5.704709 | 4.883405 | 0.001387 | 0.001694 | 0.001746 |
| value_stack.test | RUN | 0.528070 | 1.593228 | 1.693924 | 0.001436 | 0.001656 | 0.001530 |
| value_to.test | RUN | 2.691979 | 17.391321 | 12.587441 | 0.002719 | 0.002854 | 0.002475 |
| value_ref.test | RUN | 0.605185 | 2.339739 | 2.171669 | 0.001545 | 0.001590 | 0.001472 |
| utf8.test | RUN | 0.448007 | 1.500406 | 1.380074 | 0.001537 | 0.001564 | 0.001280 |
| visit.test | RUN | 0.597741 | 2.406932 | 2.027062 | 0.001448 | 0.001559 | 0.001445 |
| d2s_intrinsics_test.test | RUN | 0.442428 | 1.418666 | 1.379282 | 0.001509 | 0.001484 | 0.001389 |
| d2s_table_test.test | RUN | 0.445561 | 1.591743 | 1.459879 | 0.001515 | 0.001683 | 0.001308 |
| d2s_test.test | RUN | 0.475566 | 1.897503 | 1.717944 | 0.001576 | 0.001628 | 0.001382 |
| parse_into.test | RUN | 17.903808 | 137.652597 | 84.408716 | 0.002763 | 0.002631 | 0.002400 |
| limits.test | RUN | 1.964941 | 12.124530 | 7.953125 | 0.001694 | 0.002156 | 0.001581 |
| header_only.test | RUN | 1.349232 | 9.243945 | 6.087984 | 0.001351 | 0.001518 | 0.001375 |
| no_exceptions.test | RUN | 1.842776 | 10.342965 | 7.589753 | 0.001502 | 0.001449 | 0.001595 |
| intrusive_macros.test | RUN | 1.578801 | 9.997081 | 6.669368 | 0.001306 | 0.001426 | 0.001262 |
| _gdb-printers.test | RUN | 0.247112 | 0.689102 | 0.850864 | 0.164008 | 0.253743 | 0.173216 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.895× | 0.895×, 0.895× | 0.995× |
| clang | 1.139× | 1.140×, 1.138× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001370s | 0.001237s | 0.001374s | byte equality observed |
| basic_parser.test | 1 | 0.287361s | 0.188836s | 0.430292s | native test oracle; output varies |
| conversion.test | 10 | 0.000750s | 0.000738s | 0.000735s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000734s | 0.000737s | 0.000751s | byte equality observed |
| d2s_table_test.test | 10 | 0.000771s | 0.000764s | 0.000773s | byte equality observed |
| d2s_test.test | 10 | 0.000805s | 0.000786s | 0.000781s | byte equality observed |
| doc_background.test | 10 | 0.000764s | 0.000737s | 0.000746s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000781s | 0.000777s | 0.000762s | byte equality observed |
| doc_parsing.test | 10 | 0.000798s | 0.000790s | 0.000781s | byte equality observed |
| doc_quick_look.test | 10 | 0.000763s | 0.000786s | 0.000763s | byte equality observed |
| doc_serializing.test | 10 | 0.000763s | 0.000753s | 0.000763s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000758s | 0.000771s | 0.000750s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000777s | 0.000748s | 0.000744s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000780s | 0.000747s | 0.000755s | byte equality observed |
| double.test | 1 | 0.837212s | 0.811249s | 0.863391s | native test oracle; output varies |
| error.test | 10 | 0.000875s | 0.000846s | 0.000862s | byte equality observed |
| fwd.test | 10 | 0.000773s | 0.000741s | 0.000766s | byte equality observed |
| header_only.test | 10 | 0.000764s | 0.000725s | 0.000733s | byte equality observed |
| intrusive_macros.test | 10 | 0.000795s | 0.000762s | 0.000780s | byte equality observed |
| json.test | 10 | 0.000772s | 0.000751s | 0.000767s | byte equality observed |
| kind.test | 10 | 0.000795s | 0.000771s | 0.000788s | byte equality observed |
| limits.test | 10 | 0.000955s | 0.000901s | 0.000922s | byte equality observed |
| memory_resource.test | 10 | 0.000793s | 0.000771s | 0.000782s | byte equality observed |
| monotonic_resource.test | 10 | 0.001160s | 0.001129s | 0.001150s | byte equality observed |
| natvis.test | 10 | 0.000798s | 0.000781s | 0.000792s | byte equality observed |
| no_exceptions.test | 10 | 0.000791s | 0.000762s | 0.000778s | byte equality observed |
| null_resource.test | 10 | 0.000814s | 0.000797s | 0.000801s | byte equality observed |
| object.test | 6 | 0.003395s | 0.002836s | 0.003323s | native test oracle; output varies |
| parse.test | 10 | 0.001113s | 0.001105s | 0.001104s | byte equality observed |
| parse_into.test | 9 | 0.001848s | 0.001799s | 0.001656s | native test oracle; output varies |
| parser.test | 10 | 0.000896s | 0.000867s | 0.000880s | byte equality observed |
| pilfer.test | 10 | 0.000760s | 0.000748s | 0.000771s | byte equality observed |
| pointer.test | 10 | 0.000925s | 0.000918s | 0.000927s | byte equality observed |
| result_for.test | 10 | 0.000755s | 0.000755s | 0.000771s | byte equality observed |
| serialize.test | 10 | 0.000802s | 0.000801s | 0.000798s | byte equality observed |
| serializer.test | 10 | 0.001372s | 0.001369s | 0.001362s | byte equality observed |
| snippets.test | 10 | 0.000928s | 0.000895s | 0.000913s | byte equality observed |
| static_resource.test | 10 | 0.000831s | 0.000807s | 0.000821s | byte equality observed |
| storage_ptr.test | 10 | 0.000805s | 0.000799s | 0.000797s | byte equality observed |
| stream_parser.test | 1 | 0.042959s | 0.040108s | 0.043238s | native test oracle; output varies |
| string.test | 10 | 0.001372s | 0.001152s | 0.001397s | byte equality observed |
| string_view.test | 10 | 0.000761s | 0.000758s | 0.000768s | byte equality observed |
| utf8.test | 10 | 0.000756s | 0.000758s | 0.000763s | byte equality observed |
| value.test | 10 | 0.001705s | 0.001587s | 0.002000s | native test oracle; output varies |
| value_from.test | 10 | 0.000916s | 0.000890s | 0.000894s | byte equality observed |
| value_ref.test | 10 | 0.000820s | 0.000806s | 0.000793s | byte equality observed |
| value_stack.test | 10 | 0.000794s | 0.000786s | 0.000783s | byte equality observed |
| value_to.test | 10 | 0.001454s | 0.001428s | 0.001452s | byte equality observed |
| visit.test | 10 | 0.000801s | 0.000778s | 0.000785s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
