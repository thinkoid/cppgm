# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.925075 | 4.900302 | 4.511197 | 0.002917 | 0.002813 | 0.002805 |
| basic_parser.test | RUN | 5.537379 | 133.617104 | 77.735766 | 0.534464 | 0.197711 | 0.589623 |
| conversion.test | RUN | 0.704287 | 1.856387 | 2.354639 | 0.001776 | 0.001889 | 0.001738 |
| doc_background.test | RUN | 0.705431 | 1.883302 | 2.313066 | 0.001925 | 0.001931 | 0.001528 |
| doc_forward_conversion.test | RUN | 0.703841 | 2.212939 | 2.555577 | 0.001728 | 0.002112 | 0.001882 |
| doc_parsing.test | RUN | 0.703759 | 2.059655 | 2.344968 | 0.002002 | 0.001882 | 0.001844 |
| doc_quick_look.test | RUN | 0.919857 | 2.493880 | 3.225178 | 0.001507 | 0.001843 | 0.001630 |
| doc_serializing.test | RUN | 0.648962 | 1.818748 | 2.219188 | 0.001850 | 0.001910 | 0.001700 |
| doc_storage_ptr.test | RUN | 0.672712 | 1.751222 | 2.257860 | 0.001650 | 0.001931 | 0.001896 |
| doc_uses_allocator.test | RUN | 0.660315 | 1.726009 | 2.204009 | 0.001867 | 0.001824 | 0.001804 |
| doc_using_numbers.test | RUN | 0.705032 | 1.941395 | 2.475705 | 0.001652 | 0.002056 | 0.001867 |
| double.test | RUN | 0.744116 | 3.092067 | 2.794003 | 1.483140 | 1.178799 | 1.325542 |
| error.test | RUN | 0.529799 | 1.745297 | 1.906850 | 0.001972 | 0.001774 | 0.001928 |
| fwd.test | RUN | 0.631345 | 1.797305 | 2.406291 | 0.001892 | 0.001832 | 0.001732 |
| json.test | RUN | 0.678222 | 2.128697 | 2.530193 | 0.001794 | 0.001881 | 0.001833 |
| kind.test | RUN | 0.496252 | 1.634082 | 1.697923 | 0.001806 | 0.002130 | 0.002008 |
| memory_resource.test | RUN | 0.708251 | 2.181994 | 2.469639 | 0.001926 | 0.001998 | 0.001933 |
| monotonic_resource.test | RUN | 0.650009 | 1.956387 | 2.096148 | 0.002585 | 0.002367 | 0.002534 |
| natvis.test | RUN | 0.649713 | 2.022298 | 2.163401 | 0.001941 | 0.001966 | 0.001785 |
| null_resource.test | RUN | 0.534451 | 1.625733 | 1.805714 | 0.001854 | 0.002060 | 0.001973 |
| object.test | RUN | 1.055863 | 5.797389 | 4.883171 | 0.006836 | 0.005553 | 0.005455 |
| parse.test | RUN | 0.703767 | 2.903611 | 2.759737 | 0.002371 | 0.002571 | 0.002536 |
| parser.test | RUN | 0.679050 | 2.571508 | 2.559819 | 0.002269 | 0.002155 | 0.002134 |
| pilfer.test | RUN | 0.356059 | 1.146323 | 1.217383 | 0.001736 | 0.001882 | 0.001760 |
| pointer.test | RUN | 0.768381 | 3.397930 | 3.051982 | 0.002198 | 0.002190 | 0.001712 |
| result_for.test | RUN | 0.658389 | 2.030272 | 2.228549 | 0.001896 | 0.001944 | 0.001776 |
| serialize.test | RUN | 0.655288 | 2.124461 | 2.182457 | 0.001822 | 0.002042 | 0.002080 |
| serializer.test | RUN | 1.020783 | 5.980803 | 5.429339 | 0.002980 | 0.003007 | 0.002622 |
| snippets.test | RUN | 1.630607 | 8.181450 | 7.437989 | 0.002241 | 0.002184 | 0.002042 |
| static_resource.test | RUN | 0.654726 | 1.914882 | 2.072477 | 0.002016 | 0.001994 | 0.001906 |
| storage_ptr.test | RUN | 0.678378 | 1.972442 | 2.331710 | 0.001966 | 0.001992 | 0.001844 |
| stream_parser.test | RUN | 0.798681 | 3.765311 | 2.957961 | 0.090750 | 0.120860 | 0.084621 |
| string.test | RUN | 1.324749 | 8.397441 | 7.873850 | 0.003013 | 0.002386 | 0.002601 |
| string_view.test | RUN | 0.394277 | 1.251800 | 1.148233 | 0.001916 | 0.002141 | 0.001686 |
| value.test | RUN | 1.335937 | 10.320275 | 6.867004 | 0.003776 | 0.003159 | 0.003955 |
| value_from.test | RUN | 1.230641 | 5.719679 | 5.662898 | 0.002184 | 0.002202 | 0.001978 |
| value_stack.test | RUN | 0.649367 | 1.707766 | 2.253697 | 0.001932 | 0.001950 | 0.001967 |
| value_to.test | RUN | 2.998746 | 18.300879 | 14.377275 | 0.003346 | 0.003196 | 0.003126 |
| value_ref.test | RUN | 0.748520 | 2.510076 | 2.829505 | 0.002012 | 0.002118 | 0.002024 |
| utf8.test | RUN | 0.539058 | 1.646450 | 1.885688 | 0.001784 | 0.001954 | 0.001790 |
| visit.test | RUN | 0.728447 | 2.522678 | 2.649092 | 0.001926 | 0.002054 | 0.001966 |
| d2s_intrinsics_test.test | RUN | 0.528006 | 1.552258 | 1.845003 | 0.001871 | 0.001934 | 0.001955 |
| d2s_table_test.test | RUN | 0.555490 | 1.562695 | 1.939455 | 0.001918 | 0.001870 | 0.002119 |
| d2s_test.test | RUN | 0.581869 | 2.036257 | 2.203039 | 0.002052 | 0.001957 | 0.001984 |
| parse_into.test | RUN | 17.566219 | 152.756452 | 92.425180 | 0.003317 | 0.003070 | 0.002874 |
| limits.test | RUN | 2.138354 | 12.354955 | 9.738246 | 0.002284 | 0.002265 | 0.002088 |
| header_only.test | RUN | 1.364901 | 10.236306 | 7.263016 | 0.001784 | 0.001885 | 0.002273 |
| no_exceptions.test | RUN | 2.063047 | 11.494379 | 9.212964 | 0.001833 | 0.001950 | 0.001728 |
| intrusive_macros.test | RUN | 1.638129 | 10.003732 | 7.448566 | 0.001943 | 0.002014 | 0.001706 |
| _gdb-printers.test | RUN | 0.302646 | 0.824368 | 0.978737 | 0.193282 | 0.226836 | 0.226813 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.819× | 0.804×, 0.833× | 0.984× |
| clang | 1.010× | 1.011×, 1.010× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001732s | 0.001534s | 0.001621s | byte equality observed |
| basic_parser.test | 1 | 0.356863s | 0.208896s | 0.440637s | native test oracle; output varies |
| conversion.test | 10 | 0.000991s | 0.000982s | 0.000987s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001013s | 0.000982s | 0.000990s | byte equality observed |
| d2s_table_test.test | 10 | 0.001019s | 0.001071s | 0.000996s | byte equality observed |
| d2s_test.test | 10 | 0.001072s | 0.001122s | 0.001060s | byte equality observed |
| doc_background.test | 10 | 0.001016s | 0.000992s | 0.000997s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001062s | 0.001066s | 0.001024s | byte equality observed |
| doc_parsing.test | 10 | 0.001062s | 0.001105s | 0.001069s | byte equality observed |
| doc_quick_look.test | 10 | 0.001023s | 0.001037s | 0.001006s | byte equality observed |
| doc_serializing.test | 10 | 0.001036s | 0.001041s | 0.000992s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001016s | 0.001082s | 0.001028s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001041s | 0.001051s | 0.000993s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001035s | 0.001013s | 0.000987s | byte equality observed |
| double.test | 1 | 0.931758s | 0.801126s | 0.870937s | native test oracle; output varies |
| error.test | 10 | 0.001074s | 0.001030s | 0.001088s | byte equality observed |
| fwd.test | 10 | 0.000993s | 0.001007s | 0.000994s | byte equality observed |
| header_only.test | 10 | 0.000972s | 0.000977s | 0.000953s | byte equality observed |
| intrusive_macros.test | 10 | 0.001034s | 0.001090s | 0.000998s | byte equality observed |
| json.test | 10 | 0.001005s | 0.001021s | 0.001006s | byte equality observed |
| kind.test | 10 | 0.001021s | 0.001049s | 0.001014s | byte equality observed |
| limits.test | 10 | 0.001201s | 0.001200s | 0.001169s | byte equality observed |
| memory_resource.test | 10 | 0.001018s | 0.001057s | 0.001018s | byte equality observed |
| monotonic_resource.test | 9 | 0.001465s | 0.001393s | 0.001396s | byte equality observed |
| natvis.test | 10 | 0.001040s | 0.001067s | 0.001039s | byte equality observed |
| no_exceptions.test | 10 | 0.001050s | 0.001042s | 0.001055s | byte equality observed |
| null_resource.test | 10 | 0.001058s | 0.001065s | 0.001055s | byte equality observed |
| object.test | 5 | 0.003983s | 0.003290s | 0.003827s | native test oracle; output varies |
| parse.test | 10 | 0.001481s | 0.001441s | 0.001446s | byte equality observed |
| parse_into.test | 6 | 0.002453s | 0.002335s | 0.002206s | native test oracle; output varies |
| parser.test | 10 | 0.001177s | 0.001177s | 0.001140s | byte equality observed |
| pilfer.test | 10 | 0.000988s | 0.001014s | 0.001010s | byte equality observed |
| pointer.test | 10 | 0.001200s | 0.001215s | 0.001211s | byte equality observed |
| result_for.test | 10 | 0.001017s | 0.001031s | 0.001027s | byte equality observed |
| serialize.test | 10 | 0.001063s | 0.001071s | 0.001070s | byte equality observed |
| serializer.test | 10 | 0.001707s | 0.001718s | 0.001662s | byte equality observed |
| snippets.test | 10 | 0.001253s | 0.001237s | 0.001205s | byte equality observed |
| static_resource.test | 10 | 0.001079s | 0.001137s | 0.001100s | byte equality observed |
| storage_ptr.test | 10 | 0.001061s | 0.001084s | 0.001062s | byte equality observed |
| stream_parser.test | 1 | 0.052079s | 0.065432s | 0.047144s | native test oracle; output varies |
| string.test | 9 | 0.001722s | 0.001592s | 0.001680s | byte equality observed |
| string_view.test | 10 | 0.001010s | 0.001046s | 0.001013s | byte equality observed |
| utf8.test | 10 | 0.000999s | 0.001051s | 0.001024s | byte equality observed |
| value.test | 8 | 0.002163s | 0.001947s | 0.002379s | native test oracle; output varies |
| value_from.test | 10 | 0.001222s | 0.001216s | 0.001190s | byte equality observed |
| value_ref.test | 10 | 0.001089s | 0.001138s | 0.001097s | byte equality observed |
| value_stack.test | 10 | 0.001056s | 0.001090s | 0.001078s | byte equality observed |
| value_to.test | 10 | 0.001946s | 0.001860s | 0.001865s | native test oracle; output varies |
| visit.test | 10 | 0.001058s | 0.001073s | 0.001040s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
