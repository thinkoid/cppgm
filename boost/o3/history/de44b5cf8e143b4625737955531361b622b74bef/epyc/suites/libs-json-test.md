# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.677355 | 3.797848 | 3.356674 | 0.002190 | 0.002196 | 0.002550 |
| basic_parser.test | RUN | 4.042954 | 102.245279 | 56.918865 | 0.363101 | 0.135516 | 0.353608 |
| conversion.test | RUN | 0.489189 | 1.414577 | 1.662076 | 0.001364 | 0.001570 | 0.001490 |
| doc_background.test | RUN | 0.498487 | 1.412060 | 1.586890 | 0.001656 | 0.001749 | 0.001515 |
| doc_forward_conversion.test | RUN | 0.512255 | 1.640385 | 1.841454 | 0.001465 | 0.001639 | 0.001491 |
| doc_parsing.test | RUN | 0.516432 | 1.524061 | 1.669727 | 0.001625 | 0.001840 | 0.001462 |
| doc_quick_look.test | RUN | 0.655677 | 1.852739 | 2.203289 | 0.001506 | 0.001522 | 0.001786 |
| doc_serializing.test | RUN | 0.466542 | 1.357875 | 1.525189 | 0.001686 | 0.001542 | 0.001475 |
| doc_storage_ptr.test | RUN | 0.465937 | 1.397041 | 1.522391 | 0.001468 | 0.001658 | 0.001641 |
| doc_uses_allocator.test | RUN | 0.474900 | 1.311822 | 1.518467 | 0.001720 | 0.001522 | 0.001731 |
| doc_using_numbers.test | RUN | 0.525416 | 1.442865 | 1.601852 | 0.001411 | 0.001748 | 0.001599 |
| double.test | RUN | 0.571303 | 2.346144 | 1.871787 | 0.974577 | 0.842744 | 1.022985 |
| error.test | RUN | 0.396654 | 1.344172 | 1.191171 | 0.001523 | 0.001840 | 0.001502 |
| fwd.test | RUN | 0.460617 | 1.394871 | 1.448803 | 0.001554 | 0.001757 | 0.001620 |
| json.test | RUN | 0.494079 | 1.629642 | 1.633383 | 0.001607 | 0.001914 | 0.001634 |
| kind.test | RUN | 0.373130 | 1.230383 | 1.269701 | 0.001700 | 0.001768 | 0.001782 |
| memory_resource.test | RUN | 0.530471 | 1.625970 | 1.709135 | 0.001365 | 0.001786 | 0.001685 |
| monotonic_resource.test | RUN | 0.493469 | 1.481652 | 1.542356 | 0.002176 | 0.002188 | 0.002166 |
| natvis.test | RUN | 0.471965 | 1.515059 | 1.475457 | 0.001666 | 0.001875 | 0.001614 |
| null_resource.test | RUN | 0.387632 | 1.258351 | 1.254012 | 0.001737 | 0.001860 | 0.001796 |
| object.test | RUN | 0.794244 | 4.453883 | 3.557764 | 0.004669 | 0.004405 | 0.005013 |
| parse.test | RUN | 0.509015 | 2.262679 | 1.848198 | 0.002200 | 0.002320 | 0.002248 |
| parser.test | RUN | 0.491739 | 1.935159 | 1.688658 | 0.001814 | 0.001940 | 0.001894 |
| pilfer.test | RUN | 0.259916 | 0.898566 | 0.856114 | 0.001483 | 0.001810 | 0.001771 |
| pointer.test | RUN | 0.571665 | 2.588497 | 2.125739 | 0.001919 | 0.002026 | 0.001954 |
| result_for.test | RUN | 0.484253 | 1.560439 | 1.622575 | 0.001447 | 0.001856 | 0.001751 |
| serialize.test | RUN | 0.491304 | 1.623165 | 1.462343 | 0.001706 | 0.001786 | 0.001743 |
| serializer.test | RUN | 0.763234 | 4.515965 | 3.745408 | 0.002498 | 0.002530 | 0.002577 |
| snippets.test | RUN | 1.216560 | 6.529486 | 5.466879 | 0.001974 | 0.001977 | 0.001995 |
| static_resource.test | RUN | 0.462530 | 1.472667 | 1.486565 | 0.001790 | 0.001905 | 0.001868 |
| storage_ptr.test | RUN | 0.505853 | 1.542650 | 1.670407 | 0.001816 | 0.001754 | 0.001713 |
| stream_parser.test | RUN | 0.609785 | 2.812343 | 2.226623 | 0.057883 | 0.074291 | 0.065664 |
| string.test | RUN | 1.037662 | 7.044622 | 5.887379 | 0.003059 | 0.002287 | 0.002472 |
| string_view.test | RUN | 0.305413 | 0.949869 | 0.937012 | 0.001529 | 0.001698 | 0.001671 |
| value.test | RUN | 1.080982 | 7.240075 | 4.441703 | 0.002897 | 0.002735 | 0.003182 |
| value_from.test | RUN | 0.990975 | 4.617542 | 4.186589 | 0.001990 | 0.001964 | 0.002006 |
| value_stack.test | RUN | 0.493648 | 1.411883 | 1.482099 | 0.001570 | 0.001838 | 0.001531 |
| value_to.test | RUN | 2.311872 | 14.031970 | 11.243422 | 0.002489 | 0.002653 | 0.002712 |
| value_ref.test | RUN | 0.540570 | 1.955145 | 1.731004 | 0.001579 | 0.002042 | 0.001851 |
| utf8.test | RUN | 0.400916 | 1.313670 | 1.257805 | 0.001610 | 0.001786 | 0.001599 |
| visit.test | RUN | 0.533072 | 2.167064 | 1.726321 | 0.001430 | 0.001916 | 0.001668 |
| d2s_intrinsics_test.test | RUN | 0.408300 | 1.285100 | 1.164406 | 0.001617 | 0.001796 | 0.001691 |
| d2s_table_test.test | RUN | 0.402988 | 1.441066 | 1.265950 | 0.001567 | 0.001840 | 0.001698 |
| d2s_test.test | RUN | 0.412935 | 1.751734 | 1.511559 | 0.001855 | 0.001984 | 0.001755 |
| parse_into.test | RUN | 13.206142 | 116.762474 | 69.109869 | 0.003052 | 0.002837 | 0.002666 |
| limits.test | RUN | 1.641204 | 10.379066 | 6.864274 | 0.001956 | 0.001949 | 0.001957 |
| header_only.test | RUN | 1.077131 | 7.592603 | 5.166242 | 0.001376 | 0.001409 | 0.001475 |
| no_exceptions.test | RUN | 1.532782 | 9.064661 | 6.071036 | 0.001630 | 0.001748 | 0.001663 |
| intrusive_macros.test | RUN | 1.310645 | 8.325765 | 5.946277 | 0.001464 | 0.001763 | 0.001719 |
| _gdb-printers.test | RUN | 0.219205 | 0.618630 | 0.629718 | 0.145969 | 0.229810 | 0.158059 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.846× | 0.837×, 0.856× | 1.029× |
| clang | 1.058×† | 1.104×, 1.011× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001485s | 0.001328s | 0.001357s | native test oracle; output varies |
| basic_parser.test | 1 | 0.236347s | 0.151655s | 0.325915s | native test oracle; output varies |
| conversion.test | 10 | 0.000927s | 0.000894s | 0.000845s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000922s | 0.000883s | 0.000877s | byte equality observed |
| d2s_table_test.test | 10 | 0.000959s | 0.000905s | 0.000903s | byte equality observed |
| d2s_test.test | 10 | 0.001012s | 0.000956s | 0.000908s | byte equality observed |
| doc_background.test | 10 | 0.000963s | 0.000919s | 0.000852s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000973s | 0.000951s | 0.000899s | byte equality observed |
| doc_parsing.test | 10 | 0.000998s | 0.000980s | 0.000925s | byte equality observed |
| doc_quick_look.test | 10 | 0.000982s | 0.000966s | 0.000888s | byte equality observed |
| doc_serializing.test | 10 | 0.000951s | 0.000915s | 0.000882s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000950s | 0.000932s | 0.000893s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000951s | 0.000943s | 0.000892s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000963s | 0.000934s | 0.000886s | byte equality observed |
| double.test | 1 | 0.708225s | 0.632327s | 0.688808s | native test oracle; output varies |
| error.test | 10 | 0.001161s | 0.000936s | 0.001040s | byte equality observed |
| fwd.test | 10 | 0.000994s | 0.000887s | 0.000901s | byte equality observed |
| header_only.test | 10 | 0.000920s | 0.000888s | 0.000874s | byte equality observed |
| intrusive_macros.test | 10 | 0.000955s | 0.000927s | 0.000916s | byte equality observed |
| json.test | 10 | 0.000939s | 0.000907s | 0.000912s | byte equality observed |
| kind.test | 10 | 0.000952s | 0.000922s | 0.000943s | byte equality observed |
| limits.test | 10 | 0.001100s | 0.001081s | 0.001087s | byte equality observed |
| memory_resource.test | 10 | 0.000937s | 0.000925s | 0.000928s | byte equality observed |
| monotonic_resource.test | 10 | 0.001304s | 0.001213s | 0.001220s | byte equality observed |
| natvis.test | 10 | 0.000966s | 0.000958s | 0.000918s | byte equality observed |
| no_exceptions.test | 10 | 0.000948s | 0.000948s | 0.000927s | byte equality observed |
| null_resource.test | 10 | 0.000975s | 0.000975s | 0.000943s | byte equality observed |
| object.test | 7 | 0.003051s | 0.002591s | 0.002921s | native test oracle; output varies |
| parse.test | 10 | 0.001339s | 0.001356s | 0.001293s | byte equality observed |
| parse_into.test | 7 | 0.002593s | 0.002392s | 0.002190s | native test oracle; output varies |
| parser.test | 10 | 0.001103s | 0.001045s | 0.001021s | byte equality observed |
| pilfer.test | 10 | 0.000933s | 0.000895s | 0.000885s | byte equality observed |
| pointer.test | 10 | 0.001113s | 0.001056s | 0.001076s | byte equality observed |
| result_for.test | 10 | 0.000918s | 0.000883s | 0.000886s | byte equality observed |
| serialize.test | 10 | 0.000971s | 0.000935s | 0.000947s | byte equality observed |
| serializer.test | 10 | 0.001552s | 0.001483s | 0.001450s | byte equality observed |
| snippets.test | 10 | 0.001165s | 0.001109s | 0.001114s | byte equality observed |
| static_resource.test | 10 | 0.001032s | 0.000983s | 0.000970s | byte equality observed |
| storage_ptr.test | 10 | 0.000996s | 0.000953s | 0.000938s | byte equality observed |
| stream_parser.test | 1 | 0.042226s | 0.045999s | 0.044157s | native test oracle; output varies |
| string.test | 10 | 0.001665s | 0.001495s | 0.001558s | byte equality observed |
| string_view.test | 10 | 0.000957s | 0.000953s | 0.000953s | byte equality observed |
| utf8.test | 10 | 0.000956s | 0.000925s | 0.000898s | byte equality observed |
| value.test | 10 | 0.001780s | 0.001732s | 0.001900s | native test oracle; output varies |
| value_from.test | 10 | 0.001095s | 0.001105s | 0.001036s | byte equality observed |
| value_ref.test | 10 | 0.001002s | 0.000977s | 0.000956s | byte equality observed |
| value_stack.test | 10 | 0.000972s | 0.000956s | 0.000953s | byte equality observed |
| value_to.test | 10 | 0.001627s | 0.001625s | 0.001578s | byte equality observed |
| visit.test | 10 | 0.000970s | 0.000985s | 0.000949s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
