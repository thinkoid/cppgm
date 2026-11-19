# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.776980 | 4.397512 | 3.698182 | 0.002170 | 0.002324 | 0.001940 |
| basic_parser.test | RUN | 4.801793 | 105.288364 | 62.932284 | 0.415895 | 0.180394 | 0.598653 |
| conversion.test | RUN | 0.535726 | 1.614808 | 1.799520 | 0.001301 | 0.001327 | 0.001378 |
| doc_background.test | RUN | 0.524644 | 1.621705 | 1.807891 | 0.001230 | 0.001256 | 0.001140 |
| doc_forward_conversion.test | RUN | 0.580780 | 1.867758 | 2.040499 | 0.001276 | 0.001602 | 0.001251 |
| doc_parsing.test | RUN | 0.555979 | 1.759301 | 1.845317 | 0.001327 | 0.001521 | 0.001271 |
| doc_quick_look.test | RUN | 0.735112 | 2.091884 | 2.542245 | 0.001285 | 0.001322 | 0.001255 |
| doc_serializing.test | RUN | 0.509555 | 1.531765 | 1.698255 | 0.001330 | 0.001465 | 0.001448 |
| doc_storage_ptr.test | RUN | 0.505731 | 1.611363 | 1.744239 | 0.001270 | 0.001238 | 0.001388 |
| doc_uses_allocator.test | RUN | 0.506494 | 1.540079 | 1.725396 | 0.001453 | 0.001535 | 0.001067 |
| doc_using_numbers.test | RUN | 0.557541 | 1.619996 | 1.840879 | 0.001324 | 0.001540 | 0.001140 |
| double.test | RUN | 0.609728 | 2.778359 | 2.242572 | 1.220372 | 1.214703 | 1.332100 |
| error.test | RUN | 0.424602 | 1.558740 | 1.397959 | 0.001280 | 0.001403 | 0.001222 |
| fwd.test | RUN | 0.498752 | 1.556229 | 1.722331 | 0.001328 | 0.001291 | 0.001218 |
| json.test | RUN | 0.533955 | 1.714282 | 1.990350 | 0.001384 | 0.001380 | 0.001395 |
| kind.test | RUN | 0.411849 | 1.413633 | 1.417038 | 0.001390 | 0.001330 | 0.001410 |
| memory_resource.test | RUN | 0.533978 | 1.845514 | 1.898544 | 0.001188 | 0.001576 | 0.001349 |
| monotonic_resource.test | RUN | 0.497706 | 1.774116 | 1.783227 | 0.002032 | 0.001881 | 0.001827 |
| natvis.test | RUN | 0.503055 | 1.682563 | 1.812210 | 0.001421 | 0.001507 | 0.001331 |
| null_resource.test | RUN | 0.423939 | 1.389775 | 1.424263 | 0.001438 | 0.001371 | 0.001440 |
| object.test | RUN | 0.921443 | 5.126895 | 4.466105 | 0.005455 | 0.004407 | 0.005206 |
| parse.test | RUN | 0.563589 | 2.562579 | 1.996470 | 0.001964 | 0.001892 | 0.002088 |
| parser.test | RUN | 0.543076 | 2.152050 | 1.933482 | 0.001429 | 0.001516 | 0.001577 |
| pilfer.test | RUN | 0.276557 | 0.951207 | 0.928576 | 0.001366 | 0.001299 | 0.001510 |
| pointer.test | RUN | 0.632391 | 2.953057 | 2.509855 | 0.001670 | 0.001720 | 0.001522 |
| result_for.test | RUN | 0.522851 | 1.752908 | 1.859903 | 0.001345 | 0.001307 | 0.001522 |
| serialize.test | RUN | 0.534485 | 1.835436 | 1.837845 | 0.001486 | 0.001524 | 0.001319 |
| serializer.test | RUN | 0.888470 | 5.299737 | 4.238467 | 0.002308 | 0.002457 | 0.002129 |
| snippets.test | RUN | 1.414704 | 7.567073 | 6.105137 | 0.001681 | 0.001367 | 0.001754 |
| static_resource.test | RUN | 0.510955 | 1.650547 | 1.755728 | 0.001450 | 0.001575 | 0.001303 |
| storage_ptr.test | RUN | 0.528965 | 1.737239 | 1.821315 | 0.001326 | 0.001227 | 0.001372 |
| stream_parser.test | RUN | 0.660972 | 3.318415 | 2.715970 | 0.069243 | 0.071725 | 0.064960 |
| string.test | RUN | 1.272448 | 8.479042 | 6.617884 | 0.002292 | 0.002168 | 0.002160 |
| string_view.test | RUN | 0.311635 | 1.047001 | 1.013738 | 0.001292 | 0.001423 | 0.001389 |
| value.test | RUN | 1.180735 | 8.425589 | 5.522524 | 0.002812 | 0.002554 | 0.003223 |
| value_from.test | RUN | 1.086708 | 5.409124 | 4.768533 | 0.001435 | 0.001523 | 0.001758 |
| value_stack.test | RUN | 0.506806 | 1.543525 | 1.738436 | 0.001486 | 0.001514 | 0.001338 |
| value_to.test | RUN | 2.611131 | 16.408963 | 12.259681 | 0.002494 | 0.002547 | 0.002449 |
| value_ref.test | RUN | 0.569923 | 2.233712 | 2.163240 | 0.001364 | 0.001520 | 0.001212 |
| utf8.test | RUN | 0.425322 | 1.663689 | 1.421601 | 0.001241 | 0.001217 | 0.001339 |
| visit.test | RUN | 0.577616 | 2.300546 | 2.023745 | 0.001241 | 0.001310 | 0.001394 |
| d2s_intrinsics_test.test | RUN | 0.421177 | 1.324132 | 1.387254 | 0.001396 | 0.001342 | 0.001421 |
| d2s_table_test.test | RUN | 0.430473 | 1.571084 | 1.476781 | 0.001284 | 0.001397 | 0.001280 |
| d2s_test.test | RUN | 0.445888 | 1.932285 | 1.689594 | 0.001495 | 0.001599 | 0.001288 |
| parse_into.test | RUN | 17.476656 | 138.223366 | 82.170828 | 0.002667 | 0.002506 | 0.002258 |
| limits.test | RUN | 1.884881 | 11.948977 | 8.381903 | 0.001647 | 0.001692 | 0.001556 |
| header_only.test | RUN | 1.291847 | 8.821802 | 6.073684 | 0.001208 | 0.001488 | 0.001164 |
| no_exceptions.test | RUN | 1.835188 | 10.154758 | 7.809522 | 0.001480 | 0.001412 | 0.001392 |
| intrusive_macros.test | RUN | 1.527158 | 9.874797 | 6.958338 | 0.001550 | 0.001496 | 0.001292 |
| _gdb-printers.test | RUN | 0.232492 | 0.675683 | 0.810472 | 0.167222 | 0.179260 | 0.170827 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.898× | 0.901×, 0.896× | 0.988× |
| clang | 1.135× | 1.135×, 1.135× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.001392s | 0.001259s | 0.001327s | byte equality observed |
| basic_parser.test | 1 | 0.286100s | 0.187417s | 0.429018s | native test oracle; output varies |
| conversion.test | 10 | 0.000751s | 0.000755s | 0.000758s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000751s | 0.000753s | 0.000746s | byte equality observed |
| d2s_table_test.test | 10 | 0.000773s | 0.000763s | 0.000754s | byte equality observed |
| d2s_test.test | 10 | 0.000803s | 0.000806s | 0.000781s | byte equality observed |
| doc_background.test | 10 | 0.000773s | 0.000745s | 0.000743s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000780s | 0.000780s | 0.000767s | byte equality observed |
| doc_parsing.test | 10 | 0.000802s | 0.000793s | 0.000770s | byte equality observed |
| doc_quick_look.test | 10 | 0.000759s | 0.000786s | 0.000751s | byte equality observed |
| doc_serializing.test | 10 | 0.000773s | 0.000767s | 0.000739s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000770s | 0.000787s | 0.000745s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000775s | 0.000768s | 0.000730s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000772s | 0.000741s | 0.000737s | byte equality observed |
| double.test | 1 | 0.833351s | 0.811344s | 0.858757s | native test oracle; output varies |
| error.test | 10 | 0.000865s | 0.000811s | 0.000863s | byte equality observed |
| fwd.test | 10 | 0.000766s | 0.000765s | 0.000767s | byte equality observed |
| header_only.test | 10 | 0.000773s | 0.000759s | 0.000723s | byte equality observed |
| intrusive_macros.test | 10 | 0.000799s | 0.000776s | 0.000773s | byte equality observed |
| json.test | 10 | 0.000779s | 0.000776s | 0.000773s | byte equality observed |
| kind.test | 10 | 0.000796s | 0.000794s | 0.000784s | byte equality observed |
| limits.test | 10 | 0.000955s | 0.000923s | 0.000911s | byte equality observed |
| memory_resource.test | 10 | 0.000795s | 0.000786s | 0.000778s | byte equality observed |
| monotonic_resource.test | 10 | 0.001163s | 0.001153s | 0.001138s | byte equality observed |
| natvis.test | 10 | 0.000803s | 0.000797s | 0.000786s | byte equality observed |
| no_exceptions.test | 10 | 0.000795s | 0.000782s | 0.000765s | byte equality observed |
| null_resource.test | 10 | 0.000805s | 0.000806s | 0.000794s | byte equality observed |
| object.test | 6 | 0.003382s | 0.002826s | 0.003311s | native test oracle; output varies |
| parse.test | 10 | 0.001119s | 0.001106s | 0.001092s | byte equality observed |
| parse_into.test | 8 | 0.001940s | 0.001755s | 0.001749s | native test oracle; output varies |
| parser.test | 10 | 0.000898s | 0.000862s | 0.000873s | byte equality observed |
| pilfer.test | 10 | 0.000763s | 0.000762s | 0.000743s | byte equality observed |
| pointer.test | 10 | 0.000946s | 0.000907s | 0.000906s | byte equality observed |
| result_for.test | 10 | 0.000778s | 0.000752s | 0.000762s | byte equality observed |
| serialize.test | 10 | 0.000818s | 0.000805s | 0.000802s | byte equality observed |
| serializer.test | 10 | 0.001383s | 0.001373s | 0.001359s | byte equality observed |
| snippets.test | 10 | 0.000940s | 0.000892s | 0.000913s | byte equality observed |
| static_resource.test | 10 | 0.000846s | 0.000818s | 0.000820s | byte equality observed |
| storage_ptr.test | 10 | 0.000810s | 0.000802s | 0.000801s | byte equality observed |
| stream_parser.test | 1 | 0.042792s | 0.040093s | 0.043095s | native test oracle; output varies |
| string.test | 10 | 0.001361s | 0.001166s | 0.001338s | byte equality observed |
| string_view.test | 10 | 0.000768s | 0.000751s | 0.000760s | byte equality observed |
| utf8.test | 10 | 0.000747s | 0.000763s | 0.000768s | byte equality observed |
| value.test | 9 | 0.001719s | 0.001592s | 0.001987s | native test oracle; output varies |
| value_from.test | 10 | 0.000909s | 0.000897s | 0.000887s | byte equality observed |
| value_ref.test | 10 | 0.000820s | 0.000816s | 0.000795s | byte equality observed |
| value_stack.test | 10 | 0.000804s | 0.000794s | 0.000787s | byte equality observed |
| value_to.test | 10 | 0.001449s | 0.001436s | 0.001432s | native test oracle; output varies |
| visit.test | 10 | 0.000795s | 0.000797s | 0.000763s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
