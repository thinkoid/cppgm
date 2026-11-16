# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.676103 | 3.552055 | 2.818370 | 0.001815 | 0.001678 | 0.001720 |
| basic_parser.test | RUN | 4.278781 | 87.666592 | 44.284357 | 0.379293 | 0.261990 | 0.614897 |
| conversion.test | RUN | 0.440037 | 1.319254 | 1.347815 | 0.001049 | 0.001088 | 0.000956 |
| doc_background.test | RUN | 0.449289 | 1.308204 | 1.346789 | 0.001114 | 0.000939 | 0.001009 |
| doc_forward_conversion.test | RUN | 0.483323 | 1.526432 | 1.527445 | 0.001160 | 0.001144 | 0.001026 |
| doc_parsing.test | RUN | 0.479149 | 1.446558 | 1.458634 | 0.001174 | 0.001123 | 0.001040 |
| doc_quick_look.test | RUN | 0.633507 | 1.735626 | 1.907472 | 0.001114 | 0.001088 | 0.000987 |
| doc_serializing.test | RUN | 0.425817 | 1.288020 | 1.287585 | 0.001073 | 0.000989 | 0.000927 |
| doc_storage_ptr.test | RUN | 0.432897 | 1.320715 | 1.321352 | 0.001063 | 0.001116 | 0.001046 |
| doc_uses_allocator.test | RUN | 0.442883 | 1.285060 | 1.303187 | 0.001044 | 0.000958 | 0.000961 |
| doc_using_numbers.test | RUN | 0.481057 | 1.314915 | 1.416828 | 0.001146 | 0.000920 | 0.001116 |
| double.test | RUN | 0.513572 | 2.249882 | 1.751332 | 1.038721 | 0.978586 | 1.063638 |
| error.test | RUN | 0.368483 | 1.273088 | 1.140012 | 0.001099 | 0.001083 | 0.001011 |
| fwd.test | RUN | 0.430720 | 1.302207 | 1.439863 | 0.001060 | 0.001009 | 0.000959 |
| json.test | RUN | 0.469070 | 1.510309 | 1.503212 | 0.000923 | 0.001087 | 0.001026 |
| kind.test | RUN | 0.349365 | 1.164997 | 1.059269 | 0.001096 | 0.001039 | 0.000954 |
| memory_resource.test | RUN | 0.479332 | 1.541077 | 1.449908 | 0.001062 | 0.001047 | 0.001033 |
| monotonic_resource.test | RUN | 0.440840 | 1.446313 | 1.366961 | 0.001448 | 0.001601 | 0.001431 |
| natvis.test | RUN | 0.439887 | 1.417075 | 1.380704 | 0.001256 | 0.001159 | 0.001029 |
| null_resource.test | RUN | 0.370329 | 1.178289 | 1.098305 | 0.001012 | 0.001153 | 0.001078 |
| object.test | RUN | 0.794806 | 4.177997 | 3.454250 | 0.004387 | 0.003667 | 0.004231 |
| parse.test | RUN | 0.479328 | 2.110885 | 1.581978 | 0.001480 | 0.001524 | 0.001336 |
| parser.test | RUN | 0.459144 | 1.784755 | 1.474863 | 0.001148 | 0.001291 | 0.001151 |
| pilfer.test | RUN | 0.243834 | 0.801877 | 0.758524 | 0.000978 | 0.001151 | 0.000931 |
| pointer.test | RUN | 0.552550 | 2.391579 | 1.961377 | 0.001250 | 0.001317 | 0.001097 |
| result_for.test | RUN | 0.447089 | 1.414004 | 1.422217 | 0.000940 | 0.001024 | 0.000918 |
| serialize.test | RUN | 0.456576 | 1.476803 | 1.387288 | 0.001224 | 0.001194 | 0.000960 |
| serializer.test | RUN | 0.773157 | 4.292964 | 3.271289 | 0.001782 | 0.001815 | 0.001810 |
| snippets.test | RUN | 1.252874 | 6.161578 | 4.848824 | 0.001235 | 0.001199 | 0.001311 |
| static_resource.test | RUN | 0.438903 | 1.359299 | 1.327387 | 0.001059 | 0.001154 | 0.001065 |
| storage_ptr.test | RUN | 0.456558 | 1.456078 | 1.407957 | 0.000968 | 0.001134 | 0.000931 |
| stream_parser.test | RUN | 0.570687 | 2.716654 | 2.087477 | 0.055685 | 0.076982 | 0.056264 |
| string.test | RUN | 1.110698 | 6.907378 | 5.430561 | 0.001786 | 0.001575 | 0.001750 |
| string_view.test | RUN | 0.270231 | 0.852715 | 0.813816 | 0.000967 | 0.001048 | 0.000913 |
| value.test | RUN | 1.019029 | 6.476983 | 4.205835 | 0.002410 | 0.002490 | 0.002746 |
| value_from.test | RUN | 0.942878 | 4.327147 | 3.726743 | 0.001205 | 0.001142 | 0.001172 |
| value_stack.test | RUN | 0.430066 | 1.298724 | 1.320325 | 0.001023 | 0.000969 | 0.001099 |
| value_to.test | RUN | 2.256249 | 12.973066 | 9.263427 | 0.002032 | 0.001960 | 0.002054 |
| value_ref.test | RUN | 0.492349 | 1.894287 | 1.649232 | 0.001129 | 0.001085 | 0.001048 |
| utf8.test | RUN | 0.362125 | 1.208468 | 1.150852 | 0.001065 | 0.001265 | 0.001051 |
| visit.test | RUN | 0.493900 | 1.921804 | 1.601370 | 0.001052 | 0.001048 | 0.001117 |
| d2s_intrinsics_test.test | RUN | 0.363519 | 1.134636 | 1.125624 | 0.001058 | 0.001046 | 0.001014 |
| d2s_table_test.test | RUN | 0.368200 | 1.286621 | 1.170321 | 0.001043 | 0.000956 | 0.001131 |
| d2s_test.test | RUN | 0.387791 | 1.548493 | 1.327400 | 0.001212 | 0.001088 | 0.001080 |
| parse_into.test | RUN | 20.135179 | 147.213866 | 85.405123 | 0.002578 | 0.002524 | 0.002247 |
| limits.test | RUN | 1.657515 | 9.840889 | 6.518225 | 0.001273 | 0.001257 | 0.001191 |
| header_only.test | RUN | 1.116296 | 7.462551 | 4.637295 | 0.001036 | 0.001036 | 0.000966 |
| no_exceptions.test | RUN | 1.543996 | 8.600262 | 5.990691 | 0.001010 | 0.001091 | 0.001038 |
| intrusive_macros.test | RUN | 1.327428 | 8.275426 | 5.339742 | 0.001003 | 0.001083 | 0.000916 |
| _gdb-printers.test | RUN | 0.190171 | 0.554774 | 0.611775 | 0.173202 | 0.214796 | 0.190805 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.896× | 0.898×, 0.894× | 0.998× |
| clang | 1.170× | 1.169×, 1.171× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001654s | 0.001499s | 0.001617s | byte equality observed |
| basic_parser.test | 1 | 0.379948s | 0.263468s | 0.615680s | native test oracle; output varies |
| conversion.test | 10 | 0.000924s | 0.000926s | 0.000918s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000929s | 0.000929s | 0.000926s | byte equality observed |
| d2s_table_test.test | 10 | 0.000956s | 0.000939s | 0.000946s | byte equality observed |
| d2s_test.test | 10 | 0.001003s | 0.000987s | 0.000983s | byte equality observed |
| doc_background.test | 10 | 0.000966s | 0.000935s | 0.000927s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000974s | 0.000970s | 0.000954s | byte equality observed |
| doc_parsing.test | 10 | 0.000999s | 0.000985s | 0.000968s | byte equality observed |
| doc_quick_look.test | 10 | 0.000966s | 0.000956s | 0.000954s | byte equality observed |
| doc_serializing.test | 10 | 0.000963s | 0.000923s | 0.000926s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000964s | 0.000955s | 0.000940s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000955s | 0.000920s | 0.000920s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000951s | 0.000916s | 0.000916s | byte equality observed |
| double.test | 1 | 1.038952s | 0.979826s | 1.065847s | native test oracle; output varies |
| error.test | 10 | 0.000970s | 0.000952s | 0.000942s | byte equality observed |
| fwd.test | 10 | 0.000918s | 0.000912s | 0.000906s | byte equality observed |
| header_only.test | 10 | 0.000913s | 0.000900s | 0.000896s | byte equality observed |
| intrusive_macros.test | 10 | 0.000953s | 0.000946s | 0.000938s | byte equality observed |
| json.test | 10 | 0.000945s | 0.000927s | 0.000923s | byte equality observed |
| kind.test | 10 | 0.000957s | 0.000953s | 0.000936s | byte equality observed |
| limits.test | 10 | 0.001157s | 0.001122s | 0.001124s | byte equality observed |
| memory_resource.test | 10 | 0.000953s | 0.000941s | 0.000933s | byte equality observed |
| monotonic_resource.test | 10 | 0.001445s | 0.001405s | 0.001379s | byte equality observed |
| natvis.test | 10 | 0.000976s | 0.000964s | 0.000948s | byte equality observed |
| no_exceptions.test | 10 | 0.000957s | 0.000952s | 0.000938s | byte equality observed |
| null_resource.test | 10 | 0.000979s | 0.000970s | 0.000963s | byte equality observed |
| object.test | 5 | 0.004271s | 0.003532s | 0.004213s | native test oracle; output varies |
| parse.test | 10 | 0.001369s | 0.001358s | 0.001350s | byte equality observed |
| parse_into.test | 8 | 0.002312s | 0.002218s | 0.002082s | native test oracle; output varies |
| parser.test | 10 | 0.001088s | 0.001057s | 0.001073s | byte equality observed |
| pilfer.test | 10 | 0.000920s | 0.000916s | 0.000917s | byte equality observed |
| pointer.test | 10 | 0.001146s | 0.001113s | 0.001115s | byte equality observed |
| result_for.test | 10 | 0.000930s | 0.000916s | 0.000919s | byte equality observed |
| serialize.test | 10 | 0.000979s | 0.000977s | 0.000957s | byte equality observed |
| serializer.test | 10 | 0.001703s | 0.001691s | 0.001688s | byte equality observed |
| snippets.test | 10 | 0.001139s | 0.001101s | 0.001121s | byte equality observed |
| static_resource.test | 10 | 0.001012s | 0.000994s | 0.000990s | byte equality observed |
| storage_ptr.test | 10 | 0.000989s | 0.000990s | 0.000967s | byte equality observed |
| stream_parser.test | 1 | 0.055705s | 0.076462s | 0.055796s | native test oracle; output varies |
| string.test | 10 | 0.001651s | 0.001413s | 0.001628s | byte equality observed |
| string_view.test | 10 | 0.000910s | 0.000912s | 0.000918s | byte equality observed |
| utf8.test | 10 | 0.000916s | 0.000919s | 0.000916s | byte equality observed |
| value.test | 8 | 0.002174s | 0.002018s | 0.002600s | byte equality observed |
| value_from.test | 10 | 0.001107s | 0.001075s | 0.001085s | byte equality observed |
| value_ref.test | 10 | 0.000989s | 0.000980s | 0.000971s | byte equality observed |
| value_stack.test | 10 | 0.000960s | 0.000943s | 0.000942s | byte equality observed |
| value_to.test | 10 | 0.001815s | 0.001792s | 0.001811s | byte equality observed |
| visit.test | 10 | 0.000963s | 0.000941s | 0.000933s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
