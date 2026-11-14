# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.768020 | 3.686109 | 3.271078 | 0.002563 | 0.002350 | 0.002466 |
| basic_parser.test | RUN | 4.582600 | 96.113209 | 56.828066 | 0.381422 | 0.143232 | 0.516927 |
| conversion.test | RUN | 0.550477 | 1.411347 | 1.613040 | 0.001525 | 0.001713 | 0.001531 |
| doc_background.test | RUN | 0.579545 | 1.427733 | 1.593308 | 0.001900 | 0.001690 | 0.001640 |
| doc_forward_conversion.test | RUN | 0.571726 | 1.651772 | 1.834837 | 0.001651 | 0.001790 | 0.001558 |
| doc_parsing.test | RUN | 0.579654 | 1.534522 | 1.660649 | 0.001980 | 0.001760 | 0.001450 |
| doc_quick_look.test | RUN | 0.751208 | 1.893703 | 2.195616 | 0.001742 | 0.001767 | 0.001678 |
| doc_serializing.test | RUN | 0.532267 | 1.322446 | 1.483700 | 0.001910 | 0.001368 | 0.001480 |
| doc_storage_ptr.test | RUN | 0.603757 | 1.387705 | 1.549605 | 0.001595 | 0.001507 | 0.001377 |
| doc_uses_allocator.test | RUN | 0.581382 | 1.385302 | 1.506475 | 0.001908 | 0.001725 | 0.001812 |
| doc_using_numbers.test | RUN | 0.591439 | 1.379121 | 1.571478 | 0.001637 | 0.001680 | 0.001560 |
| double.test | RUN | 0.619083 | 2.348106 | 2.025190 | 1.111616 | 0.978225 | 1.084984 |
| error.test | RUN | 0.448918 | 1.320847 | 1.166738 | 0.001793 | 0.001566 | 0.001711 |
| fwd.test | RUN | 0.523840 | 1.313579 | 1.537707 | 0.001772 | 0.001491 | 0.001664 |
| json.test | RUN | 0.563217 | 1.578165 | 1.719780 | 0.001810 | 0.001736 | 0.001627 |
| kind.test | RUN | 0.417071 | 1.224678 | 1.264588 | 0.001928 | 0.001738 | 0.001631 |
| memory_resource.test | RUN | 0.578481 | 1.667785 | 1.631631 | 0.001812 | 0.001785 | 0.001752 |
| monotonic_resource.test | RUN | 0.532526 | 1.510999 | 1.508230 | 0.002248 | 0.002112 | 0.002082 |
| natvis.test | RUN | 0.557309 | 1.410621 | 1.537115 | 0.001884 | 0.001831 | 0.001726 |
| null_resource.test | RUN | 0.440356 | 1.240630 | 1.254481 | 0.001812 | 0.001761 | 0.001864 |
| object.test | RUN | 0.894857 | 4.357648 | 3.623151 | 0.005090 | 0.004210 | 0.004838 |
| parse.test | RUN | 0.597017 | 2.169865 | 1.858973 | 0.002280 | 0.002262 | 0.002231 |
| parser.test | RUN | 0.558638 | 1.848916 | 1.722731 | 0.002168 | 0.001776 | 0.001918 |
| pilfer.test | RUN | 0.299239 | 0.841004 | 0.853223 | 0.001746 | 0.001531 | 0.001747 |
| pointer.test | RUN | 0.632328 | 2.497698 | 2.180539 | 0.001932 | 0.001950 | 0.001900 |
| result_for.test | RUN | 0.548476 | 1.504690 | 1.554648 | 0.001739 | 0.001658 | 0.001810 |
| serialize.test | RUN | 0.546265 | 1.546096 | 1.520426 | 0.001672 | 0.001714 | 0.001708 |
| serializer.test | RUN | 0.851100 | 4.443157 | 3.824829 | 0.002776 | 0.002533 | 0.002604 |
| snippets.test | RUN | 1.324358 | 6.100042 | 5.427868 | 0.002167 | 0.001829 | 0.002050 |
| static_resource.test | RUN | 0.530318 | 1.448266 | 1.454946 | 0.001890 | 0.001893 | 0.001839 |
| storage_ptr.test | RUN | 0.554998 | 1.551763 | 1.620647 | 0.001984 | 0.001820 | 0.001809 |
| stream_parser.test | RUN | 0.661911 | 2.834233 | 2.421148 | 0.065461 | 0.077526 | 0.066808 |
| string.test | RUN | 1.078785 | 6.888566 | 5.820624 | 0.005621 | 0.002412 | 0.002580 |
| string_view.test | RUN | 0.328331 | 0.841464 | 0.872249 | 0.001870 | 0.001706 | 0.001710 |
| value.test | RUN | 1.145898 | 7.048208 | 4.806794 | 0.003337 | 0.002451 | 0.003436 |
| value_from.test | RUN | 1.047082 | 4.088169 | 4.042416 | 0.002126 | 0.002044 | 0.002000 |
| value_stack.test | RUN | 0.569400 | 1.374155 | 1.423365 | 0.001800 | 0.001614 | 0.001756 |
| value_to.test | RUN | 2.481424 | 13.263037 | 11.161079 | 0.003144 | 0.002671 | 0.002750 |
| value_ref.test | RUN | 0.597740 | 1.906704 | 1.849606 | 0.001954 | 0.001878 | 0.001786 |
| utf8.test | RUN | 0.445644 | 1.305665 | 1.227836 | 0.001810 | 0.001746 | 0.001697 |
| visit.test | RUN | 0.569824 | 2.048629 | 1.706440 | 0.001879 | 0.001837 | 0.001670 |
| d2s_intrinsics_test.test | RUN | 0.439506 | 1.247360 | 1.196413 | 0.001810 | 0.001840 | 0.001673 |
| d2s_table_test.test | RUN | 0.443073 | 1.497514 | 1.301360 | 0.001813 | 0.001910 | 0.001816 |
| d2s_test.test | RUN | 0.468764 | 1.683067 | 1.514683 | 0.001824 | 0.001872 | 0.001852 |
| parse_into.test | RUN | 14.894869 | 117.701120 | 73.408435 | 0.003286 | 0.002974 | 0.003252 |
| limits.test | RUN | 1.807578 | 10.053890 | 7.530666 | 0.002218 | 0.002072 | 0.001973 |
| header_only.test | RUN | 1.139931 | 8.156360 | 5.500623 | 0.001848 | 0.001761 | 0.001737 |
| no_exceptions.test | RUN | 1.703018 | 9.374587 | 7.019010 | 0.001747 | 0.001888 | 0.001810 |
| intrusive_macros.test | RUN | 1.429136 | 8.891512 | 6.043161 | 0.001949 | 0.001952 | 0.001679 |
| _gdb-printers.test | RUN | 0.252796 | 0.623565 | 0.736644 | 0.164502 | 0.244916 | 0.177958 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.808× | 0.800×, 0.815× | 0.999× |
| clang | 1.063× | 1.049×, 1.077× | 0.972× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001421s | 0.001315s | 0.001393s | byte equality observed |
| basic_parser.test | 1 | 0.240489s | 0.155512s | 0.339336s | native test oracle; output varies |
| conversion.test | 10 | 0.000871s | 0.000869s | 0.000871s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000870s | 0.000867s | 0.000864s | byte equality observed |
| d2s_table_test.test | 10 | 0.000897s | 0.000905s | 0.000900s | byte equality observed |
| d2s_test.test | 10 | 0.000961s | 0.000963s | 0.000930s | byte equality observed |
| doc_background.test | 10 | 0.000903s | 0.000887s | 0.000867s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000925s | 0.000921s | 0.000929s | byte equality observed |
| doc_parsing.test | 10 | 0.000944s | 0.000938s | 0.000914s | byte equality observed |
| doc_quick_look.test | 10 | 0.000914s | 0.000889s | 0.000902s | byte equality observed |
| doc_serializing.test | 10 | 0.000908s | 0.000855s | 0.000882s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000906s | 0.000887s | 0.000908s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000897s | 0.000855s | 0.000915s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000896s | 0.000887s | 0.000877s | byte equality observed |
| double.test | 1 | 0.741099s | 0.628254s | 0.691550s | native test oracle; output varies |
| error.test | 10 | 0.000948s | 0.000893s | 0.001029s | byte equality observed |
| fwd.test | 10 | 0.000868s | 0.000846s | 0.000866s | byte equality observed |
| header_only.test | 10 | 0.000863s | 0.000847s | 0.000859s | byte equality observed |
| intrusive_macros.test | 8 | 0.000910s | 0.000927s | 0.000900s | byte equality observed |
| json.test | 10 | 0.000896s | 0.000881s | 0.000893s | byte equality observed |
| kind.test | 10 | 0.000933s | 0.000896s | 0.000907s | byte equality observed |
| limits.test | 10 | 0.001084s | 0.001033s | 0.001079s | byte equality observed |
| memory_resource.test | 10 | 0.000927s | 0.000906s | 0.000908s | byte equality observed |
| monotonic_resource.test | 10 | 0.001268s | 0.001198s | 0.001213s | byte equality observed |
| natvis.test | 10 | 0.000941s | 0.000939s | 0.000918s | byte equality observed |
| no_exceptions.test | 10 | 0.000936s | 0.000929s | 0.000894s | byte equality observed |
| null_resource.test | 10 | 0.000952s | 0.000964s | 0.000926s | byte equality observed |
| object.test | 6 | 0.003007s | 0.002510s | 0.002875s | native test oracle; output varies |
| parse.test | 6 | 0.001317s | 0.001277s | 0.001233s | byte equality observed |
| parse_into.test | 3 | 0.002479s | 0.002400s | 0.002309s | native test oracle; output varies |
| parser.test | 6 | 0.001037s | 0.001037s | 0.001012s | byte equality observed |
| pilfer.test | 7 | 0.000887s | 0.000909s | 0.000881s | byte equality observed |
| pointer.test | 9 | 0.001076s | 0.001082s | 0.001069s | byte equality observed |
| result_for.test | 10 | 0.000911s | 0.000895s | 0.000888s | byte equality observed |
| serialize.test | 10 | 0.000960s | 0.000956s | 0.000937s | byte equality observed |
| serializer.test | 10 | 0.001521s | 0.001461s | 0.001442s | byte equality observed |
| snippets.test | 10 | 0.001129s | 0.001065s | 0.001074s | byte equality observed |
| static_resource.test | 10 | 0.000993s | 0.000985s | 0.000944s | byte equality observed |
| storage_ptr.test | 10 | 0.000970s | 0.000960s | 0.000927s | byte equality observed |
| stream_parser.test | 1 | 0.043052s | 0.045670s | 0.038892s | native test oracle; output varies |
| string.test | 10 | 0.001513s | 0.001296s | 0.001435s | byte equality observed |
| string_view.test | 10 | 0.000886s | 0.000887s | 0.000910s | byte equality observed |
| utf8.test | 10 | 0.000880s | 0.000895s | 0.000905s | byte equality observed |
| value.test | 9 | 0.001777s | 0.001613s | 0.001909s | native test oracle; output varies |
| value_from.test | 10 | 0.001090s | 0.001051s | 0.001052s | byte equality observed |
| value_ref.test | 10 | 0.000953s | 0.000929s | 0.000976s | byte equality observed |
| value_stack.test | 10 | 0.000954s | 0.000938s | 0.000954s | byte equality observed |
| value_to.test | 10 | 0.001630s | 0.001520s | 0.001531s | byte equality observed |
| visit.test | 10 | 0.000936s | 0.000902s | 0.000940s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
