# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.801478 | 4.459556 | 3.723847 | 0.002291 | 0.002079 | 0.002056 |
| basic_parser.test | RUN | 4.995920 | 111.965498 | 61.809384 | 0.416528 | 0.180814 | 0.595189 |
| conversion.test | RUN | 0.541225 | 1.650736 | 1.822159 | 0.001225 | 0.001278 | 0.001209 |
| doc_background.test | RUN | 0.547780 | 1.621705 | 1.786474 | 0.001268 | 0.001583 | 0.001246 |
| doc_forward_conversion.test | RUN | 0.565252 | 1.859642 | 2.039311 | 0.001467 | 0.001566 | 0.001374 |
| doc_parsing.test | RUN | 0.603931 | 1.767072 | 1.907357 | 0.001394 | 0.001601 | 0.001260 |
| doc_quick_look.test | RUN | 0.761315 | 2.159695 | 2.509221 | 0.001245 | 0.001468 | 0.001181 |
| doc_serializing.test | RUN | 0.507664 | 1.574624 | 1.694063 | 0.001422 | 0.001307 | 0.001302 |
| doc_storage_ptr.test | RUN | 0.520215 | 1.609983 | 1.733311 | 0.001408 | 0.001482 | 0.001233 |
| doc_uses_allocator.test | RUN | 0.542099 | 1.556415 | 1.732334 | 0.001671 | 0.001461 | 0.001332 |
| doc_using_numbers.test | RUN | 0.575626 | 1.658130 | 1.885446 | 0.001244 | 0.001518 | 0.001359 |
| double.test | RUN | 0.642293 | 2.826564 | 2.229488 | 1.231411 | 1.206469 | 1.312969 |
| error.test | RUN | 0.446201 | 1.612384 | 1.448987 | 0.001529 | 0.001374 | 0.001368 |
| fwd.test | RUN | 0.517457 | 1.521369 | 1.664551 | 0.001499 | 0.001364 | 0.001293 |
| json.test | RUN | 0.557850 | 1.818941 | 1.974073 | 0.001446 | 0.001470 | 0.001360 |
| kind.test | RUN | 0.429649 | 1.443702 | 1.393344 | 0.001396 | 0.001525 | 0.001271 |
| memory_resource.test | RUN | 0.557222 | 1.925210 | 1.917327 | 0.001418 | 0.001626 | 0.001409 |
| monotonic_resource.test | RUN | 0.527631 | 1.756673 | 1.797580 | 0.002024 | 0.002024 | 0.001824 |
| natvis.test | RUN | 0.537478 | 1.716919 | 1.841066 | 0.001538 | 0.001326 | 0.001467 |
| null_resource.test | RUN | 0.451673 | 1.459666 | 1.438535 | 0.001508 | 0.001679 | 0.001345 |
| object.test | RUN | 0.948684 | 5.158727 | 4.475825 | 0.005346 | 0.004770 | 0.005173 |
| parse.test | RUN | 0.589886 | 2.617261 | 2.048912 | 0.001914 | 0.002062 | 0.001773 |
| parser.test | RUN | 0.567950 | 2.237971 | 1.905710 | 0.001488 | 0.001726 | 0.001511 |
| pilfer.test | RUN | 0.298733 | 1.004599 | 0.924153 | 0.001308 | 0.001330 | 0.001135 |
| pointer.test | RUN | 0.656990 | 3.017672 | 2.516497 | 0.001582 | 0.001772 | 0.001409 |
| result_for.test | RUN | 0.528860 | 1.781585 | 1.837664 | 0.001355 | 0.001284 | 0.001227 |
| serialize.test | RUN | 0.538536 | 1.845824 | 1.823092 | 0.001325 | 0.001696 | 0.001266 |
| serializer.test | RUN | 0.903682 | 5.373167 | 4.177923 | 0.002197 | 0.002598 | 0.002211 |
| snippets.test | RUN | 1.433067 | 7.762295 | 6.281412 | 0.001602 | 0.001969 | 0.001589 |
| static_resource.test | RUN | 0.518793 | 1.712610 | 1.700588 | 0.001263 | 0.001593 | 0.001312 |
| storage_ptr.test | RUN | 0.538746 | 1.798396 | 1.864347 | 0.001486 | 0.001525 | 0.001369 |
| stream_parser.test | RUN | 0.674059 | 3.499982 | 2.592074 | 0.068941 | 0.071829 | 0.072164 |
| string.test | RUN | 1.288394 | 8.775864 | 6.780795 | 0.002336 | 0.002322 | 0.002184 |
| string_view.test | RUN | 0.320846 | 1.087130 | 0.982748 | 0.001181 | 0.001542 | 0.001501 |
| value.test | RUN | 1.200599 | 8.838994 | 5.580421 | 0.002870 | 0.002803 | 0.003146 |
| value_from.test | RUN | 1.114594 | 5.594295 | 4.738664 | 0.001672 | 0.001954 | 0.001484 |
| value_stack.test | RUN | 0.517978 | 1.608475 | 1.747687 | 0.001434 | 0.001421 | 0.001398 |
| value_to.test | RUN | 2.655824 | 17.585207 | 11.877937 | 0.002370 | 0.002496 | 0.002471 |
| value_ref.test | RUN | 0.596519 | 2.354965 | 2.216592 | 0.001424 | 0.001514 | 0.001368 |
| utf8.test | RUN | 0.434513 | 1.510663 | 1.499100 | 0.001235 | 0.001416 | 0.001312 |
| visit.test | RUN | 0.587899 | 2.407167 | 2.100171 | 0.001312 | 0.001656 | 0.001246 |
| d2s_intrinsics_test.test | RUN | 0.435654 | 1.417103 | 1.427682 | 0.001421 | 0.001415 | 0.001344 |
| d2s_table_test.test | RUN | 0.451142 | 1.573090 | 1.490304 | 0.001392 | 0.001656 | 0.001343 |
| d2s_test.test | RUN | 0.459907 | 1.921196 | 1.694923 | 0.001317 | 0.001663 | 0.001286 |
| parse_into.test | RUN | 17.705071 | 139.659588 | 82.472254 | 0.002628 | 0.002544 | 0.002298 |
| limits.test | RUN | 1.935842 | 12.137507 | 8.500691 | 0.001634 | 0.001696 | 0.001420 |
| header_only.test | RUN | 1.289302 | 9.479354 | 5.678849 | 0.001224 | 0.001456 | 0.001322 |
| no_exceptions.test | RUN | 1.801529 | 10.496407 | 7.790474 | 0.001256 | 0.001358 | 0.001321 |
| intrusive_macros.test | RUN | 1.559162 | 10.038329 | 6.914718 | 0.001225 | 0.001496 | 0.001193 |
| _gdb-printers.test | RUN | 0.238616 | 0.628014 | 0.800450 | 0.154523 | 0.261759 | 0.179690 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.904× | 0.907×, 0.900× | 0.981× |
| clang | 1.136× | 1.135×, 1.137× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001374s | 0.001256s | 0.001310s | native test oracle; output varies |
| basic_parser.test | 1 | 0.288822s | 0.188206s | 0.431943s | native test oracle; output varies |
| conversion.test | 10 | 0.000731s | 0.000755s | 0.000734s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000737s | 0.000760s | 0.000729s | byte equality observed |
| d2s_table_test.test | 10 | 0.000758s | 0.000770s | 0.000756s | byte equality observed |
| d2s_test.test | 10 | 0.000797s | 0.000812s | 0.000792s | byte equality observed |
| doc_background.test | 10 | 0.000763s | 0.000777s | 0.000733s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000785s | 0.000810s | 0.000765s | byte equality observed |
| doc_parsing.test | 10 | 0.000801s | 0.000795s | 0.000783s | byte equality observed |
| doc_quick_look.test | 10 | 0.000772s | 0.000776s | 0.000750s | byte equality observed |
| doc_serializing.test | 10 | 0.000764s | 0.000763s | 0.000738s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000762s | 0.000768s | 0.000756s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000786s | 0.000763s | 0.000734s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000778s | 0.000763s | 0.000730s | byte equality observed |
| double.test | 1 | 0.839265s | 0.819997s | 0.868359s | native test oracle; output varies |
| error.test | 10 | 0.000870s | 0.000840s | 0.000864s | byte equality observed |
| fwd.test | 10 | 0.000768s | 0.000778s | 0.000771s | byte equality observed |
| header_only.test | 10 | 0.000757s | 0.000739s | 0.000737s | byte equality observed |
| intrusive_macros.test | 10 | 0.000785s | 0.000782s | 0.000787s | byte equality observed |
| json.test | 10 | 0.000778s | 0.000786s | 0.000781s | byte equality observed |
| kind.test | 10 | 0.000785s | 0.000795s | 0.000787s | byte equality observed |
| limits.test | 10 | 0.000946s | 0.000931s | 0.000930s | byte equality observed |
| memory_resource.test | 10 | 0.000794s | 0.000781s | 0.000783s | byte equality observed |
| monotonic_resource.test | 10 | 0.001168s | 0.001155s | 0.001155s | byte equality observed |
| natvis.test | 10 | 0.000797s | 0.000800s | 0.000787s | byte equality observed |
| no_exceptions.test | 10 | 0.000790s | 0.000777s | 0.000781s | byte equality observed |
| null_resource.test | 10 | 0.000815s | 0.000817s | 0.000801s | byte equality observed |
| object.test | 4 | 0.003413s | 0.002854s | 0.003326s | native test oracle; output varies |
| parse.test | 10 | 0.001102s | 0.001121s | 0.001095s | byte equality observed |
| parse_into.test | 8 | 0.001900s | 0.001804s | 0.001762s | native test oracle; output varies |
| parser.test | 10 | 0.000892s | 0.000861s | 0.000869s | byte equality observed |
| pilfer.test | 10 | 0.000759s | 0.000760s | 0.000765s | byte equality observed |
| pointer.test | 10 | 0.000932s | 0.000922s | 0.000909s | byte equality observed |
| result_for.test | 10 | 0.000769s | 0.000782s | 0.000758s | byte equality observed |
| serialize.test | 10 | 0.000800s | 0.000814s | 0.000798s | byte equality observed |
| serializer.test | 10 | 0.001384s | 0.001395s | 0.001363s | byte equality observed |
| snippets.test | 10 | 0.000945s | 0.000920s | 0.000915s | byte equality observed |
| static_resource.test | 10 | 0.000833s | 0.000820s | 0.000825s | byte equality observed |
| storage_ptr.test | 10 | 0.000817s | 0.000801s | 0.000793s | byte equality observed |
| stream_parser.test | 1 | 0.042894s | 0.040383s | 0.043341s | native test oracle; output varies |
| string.test | 10 | 0.001368s | 0.001165s | 0.001348s | byte equality observed |
| string_view.test | 10 | 0.000766s | 0.000758s | 0.000762s | byte equality observed |
| utf8.test | 10 | 0.000756s | 0.000760s | 0.000746s | byte equality observed |
| value.test | 9 | 0.001721s | 0.001611s | 0.001984s | native test oracle; output varies |
| value_from.test | 10 | 0.000919s | 0.000895s | 0.000910s | byte equality observed |
| value_ref.test | 10 | 0.000823s | 0.000806s | 0.000810s | byte equality observed |
| value_stack.test | 10 | 0.000806s | 0.000786s | 0.000785s | byte equality observed |
| value_to.test | 10 | 0.001459s | 0.001450s | 0.001448s | native test oracle; output varies |
| visit.test | 10 | 0.000799s | 0.000774s | 0.000784s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
