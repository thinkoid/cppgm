# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.900275 | 4.800696 | 4.488195 | 0.002649 | 0.002520 | 0.002842 |
| basic_parser.test | RUN | 5.376297 | 120.986094 | 73.758259 | 0.555474 | 0.189443 | 0.698192 |
| conversion.test | RUN | 0.639097 | 1.862852 | 2.325350 | 0.001790 | 0.001841 | 0.001790 |
| doc_background.test | RUN | 0.658294 | 1.892156 | 2.267499 | 0.001850 | 0.001938 | 0.001764 |
| doc_forward_conversion.test | RUN | 0.675638 | 2.158593 | 2.563110 | 0.001724 | 0.001898 | 0.001812 |
| doc_parsing.test | RUN | 0.688473 | 1.929842 | 2.359634 | 0.001968 | 0.001888 | 0.001847 |
| doc_quick_look.test | RUN | 0.850777 | 2.409880 | 3.230941 | 0.001826 | 0.001814 | 0.001734 |
| doc_serializing.test | RUN | 0.605614 | 1.763975 | 2.167884 | 0.001697 | 0.001638 | 0.001744 |
| doc_storage_ptr.test | RUN | 0.616361 | 1.866262 | 2.149584 | 0.001731 | 0.001798 | 0.001751 |
| doc_uses_allocator.test | RUN | 0.628593 | 1.812413 | 2.158692 | 0.001892 | 0.001773 | 0.001632 |
| doc_using_numbers.test | RUN | 0.664295 | 1.763990 | 2.439393 | 0.001690 | 0.001810 | 0.001856 |
| double.test | RUN | 0.702165 | 3.027221 | 2.784428 | 1.517717 | 1.342532 | 1.328801 |
| error.test | RUN | 0.507284 | 1.676843 | 1.901850 | 0.001802 | 0.001844 | 0.001802 |
| fwd.test | RUN | 0.589871 | 1.679936 | 2.385401 | 0.001675 | 0.001891 | 0.001785 |
| json.test | RUN | 0.624862 | 1.965949 | 2.446877 | 0.001705 | 0.001915 | 0.001677 |
| kind.test | RUN | 0.465534 | 1.501615 | 1.793509 | 0.001798 | 0.001936 | 0.001833 |
| memory_resource.test | RUN | 0.656847 | 2.157744 | 2.298043 | 0.001910 | 0.001958 | 0.001860 |
| monotonic_resource.test | RUN | 0.626822 | 1.962727 | 2.139693 | 0.002574 | 0.002444 | 0.002381 |
| natvis.test | RUN | 0.630279 | 1.907408 | 2.126326 | 0.001903 | 0.002006 | 0.001572 |
| null_resource.test | RUN | 0.519777 | 1.592116 | 1.738816 | 0.001897 | 0.002069 | 0.001722 |
| object.test | RUN | 1.028663 | 5.722819 | 5.663251 | 0.006966 | 0.005617 | 0.006804 |
| parse.test | RUN | 0.680308 | 2.890030 | 2.394616 | 0.002298 | 0.002487 | 0.002307 |
| parser.test | RUN | 0.661227 | 2.459886 | 2.360573 | 0.002050 | 0.002144 | 0.001885 |
| pilfer.test | RUN | 0.353426 | 1.128242 | 1.077893 | 0.001852 | 0.001926 | 0.001818 |
| pointer.test | RUN | 0.745535 | 3.347191 | 2.897280 | 0.002126 | 0.002107 | 0.002102 |
| result_for.test | RUN | 0.641448 | 2.013354 | 2.334197 | 0.001764 | 0.001917 | 0.001790 |
| serialize.test | RUN | 0.643675 | 2.054824 | 2.185756 | 0.001910 | 0.001950 | 0.001844 |
| serializer.test | RUN | 0.996481 | 5.903383 | 5.287556 | 0.002848 | 0.002935 | 0.002484 |
| snippets.test | RUN | 1.536331 | 7.728897 | 7.337295 | 0.002197 | 0.002102 | 0.001954 |
| static_resource.test | RUN | 0.635973 | 1.878338 | 2.147317 | 0.001984 | 0.002095 | 0.001786 |
| storage_ptr.test | RUN | 0.646127 | 2.015746 | 2.191617 | 0.001768 | 0.002094 | 0.001996 |
| stream_parser.test | RUN | 0.776511 | 3.779337 | 3.429009 | 0.091919 | 0.123132 | 0.091909 |
| string.test | RUN | 1.273179 | 8.792156 | 7.862736 | 0.002962 | 0.002454 | 0.002662 |
| string_view.test | RUN | 0.387030 | 1.205142 | 1.227868 | 0.001872 | 0.002039 | 0.001664 |
| value.test | RUN | 1.265816 | 9.256083 | 6.914865 | 0.003676 | 0.003561 | 0.003413 |
| value_from.test | RUN | 1.181852 | 5.878088 | 5.561970 | 0.002092 | 0.002132 | 0.002139 |
| value_stack.test | RUN | 0.616811 | 1.760793 | 1.961027 | 0.001903 | 0.002036 | 0.001679 |
| value_to.test | RUN | 2.881719 | 17.175149 | 15.162245 | 0.004278 | 0.003238 | 0.003111 |
| value_ref.test | RUN | 0.698972 | 2.648512 | 2.596876 | 0.002076 | 0.002044 | 0.001880 |
| utf8.test | RUN | 0.509045 | 1.710596 | 1.804683 | 0.001712 | 0.001834 | 0.001765 |
| visit.test | RUN | 0.694562 | 2.473949 | 2.477973 | 0.001710 | 0.002106 | 0.001878 |
| d2s_intrinsics_test.test | RUN | 0.510416 | 1.495677 | 1.834152 | 0.001764 | 0.001956 | 0.001824 |
| d2s_table_test.test | RUN | 0.519039 | 1.795739 | 1.767930 | 0.001818 | 0.001915 | 0.001952 |
| d2s_test.test | RUN | 0.555596 | 2.144312 | 2.030902 | 0.001895 | 0.002030 | 0.001934 |
| parse_into.test | RUN | 17.178865 | 147.485653 | 90.388988 | 0.003147 | 0.003016 | 0.002944 |
| limits.test | RUN | 2.035319 | 12.686806 | 9.984958 | 0.002229 | 0.002404 | 0.002195 |
| header_only.test | RUN | 1.313484 | 9.527063 | 6.934375 | 0.001728 | 0.001872 | 0.001649 |
| no_exceptions.test | RUN | 1.979740 | 11.448172 | 9.339049 | 0.001827 | 0.002050 | 0.001924 |
| intrusive_macros.test | RUN | 1.580311 | 10.810256 | 7.389835 | 0.001604 | 0.001996 | 0.001897 |
| _gdb-printers.test | RUN | 0.289104 | 0.800545 | 0.983930 | 0.181379 | 0.290675 | 0.209789 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.810× | 0.809×, 0.811× | 1.006× |
| clang | 1.020× | 1.039×, 1.001× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001700s | 0.001551s | 0.001641s | native test oracle; output varies |
| basic_parser.test | 1 | 0.355377s | 0.207262s | 0.449695s | native test oracle; output varies |
| conversion.test | 10 | 0.000961s | 0.000980s | 0.000964s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000974s | 0.000996s | 0.000965s | byte equality observed |
| d2s_table_test.test | 10 | 0.000999s | 0.001001s | 0.000985s | byte equality observed |
| d2s_test.test | 10 | 0.001059s | 0.001074s | 0.001023s | byte equality observed |
| doc_background.test | 10 | 0.001016s | 0.000987s | 0.000956s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001039s | 0.001025s | 0.001007s | byte equality observed |
| doc_parsing.test | 10 | 0.001054s | 0.001026s | 0.001009s | byte equality observed |
| doc_quick_look.test | 10 | 0.001024s | 0.001016s | 0.000979s | byte equality observed |
| doc_serializing.test | 10 | 0.001011s | 0.000996s | 0.000966s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001015s | 0.001005s | 0.000993s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001033s | 0.000996s | 0.000981s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001025s | 0.001011s | 0.000984s | byte equality observed |
| double.test | 1 | 0.942589s | 0.805993s | 0.876026s | native test oracle; output varies |
| error.test | 10 | 0.001074s | 0.001031s | 0.001048s | byte equality observed |
| fwd.test | 10 | 0.000989s | 0.000968s | 0.000998s | byte equality observed |
| header_only.test | 10 | 0.000972s | 0.000961s | 0.000957s | byte equality observed |
| intrusive_macros.test | 10 | 0.001025s | 0.000995s | 0.001022s | byte equality observed |
| json.test | 10 | 0.001005s | 0.000974s | 0.000989s | byte equality observed |
| kind.test | 10 | 0.001020s | 0.001015s | 0.001002s | byte equality observed |
| limits.test | 10 | 0.001200s | 0.001160s | 0.001172s | byte equality observed |
| memory_resource.test | 10 | 0.001020s | 0.001002s | 0.001011s | byte equality observed |
| monotonic_resource.test | 10 | 0.001457s | 0.001325s | 0.001394s | byte equality observed |
| natvis.test | 10 | 0.001028s | 0.001015s | 0.001005s | byte equality observed |
| no_exceptions.test | 10 | 0.001017s | 0.000995s | 0.001004s | byte equality observed |
| null_resource.test | 10 | 0.001043s | 0.001035s | 0.001035s | byte equality observed |
| object.test | 5 | 0.003920s | 0.003293s | 0.003778s | native test oracle; output varies |
| parse.test | 10 | 0.001447s | 0.001427s | 0.001406s | byte equality observed |
| parse_into.test | 7 | 0.002308s | 0.002220s | 0.002125s | native test oracle; output varies |
| parser.test | 10 | 0.001156s | 0.001130s | 0.001128s | byte equality observed |
| pilfer.test | 10 | 0.000986s | 0.000977s | 0.000996s | byte equality observed |
| pointer.test | 10 | 0.001192s | 0.001168s | 0.001175s | byte equality observed |
| result_for.test | 10 | 0.000994s | 0.000989s | 0.000979s | byte equality observed |
| serialize.test | 10 | 0.001040s | 0.001064s | 0.001042s | byte equality observed |
| serializer.test | 10 | 0.001690s | 0.001690s | 0.001641s | byte equality observed |
| snippets.test | 10 | 0.001202s | 0.001210s | 0.001187s | byte equality observed |
| static_resource.test | 10 | 0.001074s | 0.001076s | 0.001072s | byte equality observed |
| storage_ptr.test | 10 | 0.001045s | 0.001049s | 0.001020s | byte equality observed |
| stream_parser.test | 1 | 0.051919s | 0.065203s | 0.046257s | native test oracle; output varies |
| string.test | 10 | 0.001661s | 0.001501s | 0.001654s | byte equality observed |
| string_view.test | 10 | 0.000982s | 0.000999s | 0.000983s | byte equality observed |
| utf8.test | 10 | 0.000995s | 0.001001s | 0.001004s | byte equality observed |
| value.test | 8 | 0.002131s | 0.001991s | 0.002314s | native test oracle; output varies |
| value_from.test | 10 | 0.001204s | 0.001189s | 0.001156s | byte equality observed |
| value_ref.test | 10 | 0.001049s | 0.001064s | 0.001043s | byte equality observed |
| value_stack.test | 10 | 0.001033s | 0.001049s | 0.001038s | byte equality observed |
| value_to.test | 8 | 0.001822s | 0.001781s | 0.001797s | native test oracle; output varies |
| visit.test | 10 | 0.001033s | 0.001053s | 0.001015s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
