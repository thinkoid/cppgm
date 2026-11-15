# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.218683 | 6.528991 | 6.609868 | 0.002859 | 0.003374 | 0.003652 |
| basic_parser.test | RUN | 7.291796 | 141.577125 | 99.216713 | 0.852930 | 0.271638 | 1.115898 |
| conversion.test | RUN | 0.898515 | 2.446701 | 3.577836 | 0.001983 | 0.002217 | 0.002176 |
| doc_background.test | RUN | 0.865208 | 2.486803 | 3.534360 | 0.002102 | 0.001992 | 0.002048 |
| doc_forward_conversion.test | RUN | 0.899364 | 2.886612 | 3.885407 | 0.002235 | 0.001993 | 0.002266 |
| doc_parsing.test | RUN | 0.885620 | 2.577881 | 3.415418 | 0.002184 | 0.002010 | 0.002266 |
| doc_quick_look.test | RUN | 1.153118 | 3.237737 | 4.888401 | 0.001853 | 0.002032 | 0.002032 |
| doc_serializing.test | RUN | 0.820920 | 2.407102 | 3.313483 | 0.001938 | 0.001978 | 0.002146 |
| doc_storage_ptr.test | RUN | 0.828276 | 2.505022 | 3.352892 | 0.001967 | 0.002021 | 0.002166 |
| doc_uses_allocator.test | RUN | 0.823743 | 2.265696 | 3.308196 | 0.002138 | 0.002056 | 0.002198 |
| doc_using_numbers.test | RUN | 0.909675 | 2.551431 | 3.599410 | 0.001876 | 0.002238 | 0.002000 |
| double.test | RUN | 0.945163 | 3.962887 | 4.336956 | 2.003594 | 2.009608 | 1.885176 |
| error.test | RUN | 0.677088 | 2.356421 | 2.841677 | 0.002048 | 0.001684 | 0.002672 |
| fwd.test | RUN | 0.805406 | 2.321314 | 3.649568 | 0.001984 | 0.002098 | 0.002184 |
| json.test | RUN | 0.864025 | 2.590797 | 3.834778 | 0.002014 | 0.002016 | 0.002128 |
| kind.test | RUN | 0.640226 | 2.198868 | 2.589439 | 0.002072 | 0.002178 | 0.002088 |
| memory_resource.test | RUN | 0.877762 | 2.795235 | 3.683215 | 0.002134 | 0.002161 | 0.002227 |
| monotonic_resource.test | RUN | 0.823532 | 2.698619 | 3.222558 | 0.003174 | 0.002788 | 0.003126 |
| natvis.test | RUN | 0.862204 | 2.468136 | 3.318191 | 0.002046 | 0.002182 | 0.002458 |
| null_resource.test | RUN | 0.704031 | 2.161891 | 2.564947 | 0.002139 | 0.002374 | 0.002265 |
| object.test | RUN | 1.422079 | 7.516794 | 8.362613 | 0.009285 | 0.007351 | 0.009697 |
| parse.test | RUN | 0.932376 | 3.910504 | 3.631540 | 0.002700 | 0.003157 | 0.003159 |
| parser.test | RUN | 0.889376 | 3.291479 | 3.375883 | 0.002294 | 0.002595 | 0.002370 |
| pilfer.test | RUN | 0.472719 | 1.504416 | 1.655742 | 0.002194 | 0.002014 | 0.002098 |
| pointer.test | RUN | 1.022754 | 4.559669 | 4.744783 | 0.002538 | 0.002528 | 0.002602 |
| result_for.test | RUN | 0.853552 | 2.686073 | 3.271521 | 0.001979 | 0.002236 | 0.002297 |
| serialize.test | RUN | 0.868893 | 2.778059 | 3.317393 | 0.002283 | 0.002350 | 0.002097 |
| serializer.test | RUN | 1.357656 | 7.654618 | 7.996515 | 0.003360 | 0.003136 | 0.003169 |
| snippets.test | RUN | 2.093111 | 11.030667 | 10.713526 | 0.002413 | 0.002426 | 0.002682 |
| static_resource.test | RUN | 0.834295 | 2.571064 | 3.014517 | 0.002318 | 0.002343 | 0.002132 |
| storage_ptr.test | RUN | 0.867344 | 2.535093 | 3.318357 | 0.002036 | 0.002048 | 0.002257 |
| stream_parser.test | RUN | 1.044744 | 4.698644 | 4.419745 | 0.124348 | 0.174568 | 0.128836 |
| string.test | RUN | 1.826830 | 10.744844 | 10.888795 | 0.003594 | 0.003172 | 0.003788 |
| string_view.test | RUN | 0.518142 | 1.638080 | 2.075282 | 0.002118 | 0.002286 | 0.002254 |
| value.test | RUN | 1.906997 | 12.813060 | 9.869525 | 0.004831 | 0.003778 | 0.005863 |
| value_from.test | RUN | 1.634876 | 7.306616 | 8.169357 | 0.002515 | 0.002530 | 0.002484 |
| value_stack.test | RUN | 0.829841 | 2.269523 | 3.435037 | 0.001976 | 0.002104 | 0.002283 |
| value_to.test | RUN | 4.031561 | 22.103793 | 21.112848 | 0.003902 | 0.003409 | 0.004221 |
| value_ref.test | RUN | 0.964018 | 3.250229 | 4.219659 | 0.002426 | 0.002138 | 0.002317 |
| utf8.test | RUN | 0.704959 | 2.307858 | 2.770997 | 0.002051 | 0.002338 | 0.002244 |
| visit.test | RUN | 0.948998 | 3.625102 | 3.711791 | 0.001886 | 0.002305 | 0.002265 |
| d2s_intrinsics_test.test | RUN | 0.682305 | 2.144341 | 2.539977 | 0.002001 | 0.002097 | 0.002296 |
| d2s_table_test.test | RUN | 0.706792 | 2.324518 | 2.875324 | 0.002078 | 0.001953 | 0.002212 |
| d2s_test.test | RUN | 0.729799 | 2.700177 | 3.229514 | 0.002290 | 0.002363 | 0.002236 |
| parse_into.test | RUN | 22.120714 | 180.827728 | 119.186359 | 0.003342 | 0.003388 | 0.002995 |
| limits.test | RUN | 2.859962 | 16.453033 | 14.323952 | 0.002170 | 0.002350 | 0.002452 |
| header_only.test | RUN | 1.817215 | 12.338665 | 10.087707 | 0.002066 | 0.002114 | 0.002146 |
| no_exceptions.test | RUN | 2.710677 | 14.668416 | 12.690917 | 0.002186 | 0.002146 | 0.002190 |
| intrusive_macros.test | RUN | 2.216406 | 13.413865 | 11.851885 | 0.002018 | 0.002212 | 0.002030 |
| _gdb-printers.test | RUN | 0.394651 | 1.024417 | 1.621723 | 0.231790 | 0.281114 | 0.268137 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.893× | 0.879×, 0.907× | 1.015× |
| clang | 1.071× | 1.058×, 1.085× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002163s | 0.001925s | 0.001992s | native test oracle; output varies |
| basic_parser.test | 1 | 0.485385s | 0.293714s | 0.650284s | native test oracle; output varies |
| conversion.test | 10 | 0.001165s | 0.001187s | 0.001149s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001164s | 0.001191s | 0.001166s | byte equality observed |
| d2s_table_test.test | 10 | 0.001191s | 0.001204s | 0.001187s | byte equality observed |
| d2s_test.test | 10 | 0.001257s | 0.001273s | 0.001224s | byte equality observed |
| doc_background.test | 10 | 0.001201s | 0.001193s | 0.001169s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001217s | 0.001232s | 0.001211s | byte equality observed |
| doc_parsing.test | 10 | 0.001235s | 0.001228s | 0.001213s | byte equality observed |
| doc_quick_look.test | 10 | 0.001204s | 0.001216s | 0.001187s | byte equality observed |
| doc_serializing.test | 10 | 0.001230s | 0.001181s | 0.001174s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001219s | 0.001216s | 0.001189s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001224s | 0.001185s | 0.001153s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001218s | 0.001187s | 0.001160s | byte equality observed |
| double.test | 1 | 1.175810s | 1.180805s | 1.177880s | native test oracle; output varies |
| error.test | 10 | 0.001279s | 0.001259s | 0.001278s | byte equality observed |
| fwd.test | 10 | 0.001200s | 0.001203s | 0.001185s | byte equality observed |
| header_only.test | 10 | 0.001177s | 0.001174s | 0.001152s | byte equality observed |
| intrusive_macros.test | 10 | 0.001237s | 0.001238s | 0.001205s | byte equality observed |
| json.test | 10 | 0.001218s | 0.001224s | 0.001182s | byte equality observed |
| kind.test | 10 | 0.001239s | 0.001219s | 0.001207s | byte equality observed |
| limits.test | 10 | 0.001451s | 0.001400s | 0.001391s | byte equality observed |
| memory_resource.test | 10 | 0.001218s | 0.001230s | 0.001200s | byte equality observed |
| monotonic_resource.test | 10 | 0.001768s | 0.001597s | 0.001692s | native test oracle; output varies |
| natvis.test | 10 | 0.001237s | 0.001250s | 0.001210s | byte equality observed |
| no_exceptions.test | 10 | 0.001220s | 0.001232s | 0.001207s | byte equality observed |
| null_resource.test | 10 | 0.001257s | 0.001261s | 0.001249s | byte equality observed |
| object.test | 4 | 0.005007s | 0.004115s | 0.004870s | native test oracle; output varies |
| parse.test | 10 | 0.001698s | 0.001683s | 0.001672s | byte equality observed |
| parse_into.test | 6 | 0.002787s | 0.002608s | 0.002521s | native test oracle; output varies |
| parser.test | 10 | 0.001375s | 0.001352s | 0.001339s | byte equality observed |
| pilfer.test | 10 | 0.001180s | 0.001165s | 0.001145s | byte equality observed |
| pointer.test | 10 | 0.001416s | 0.001385s | 0.001396s | byte equality observed |
| result_for.test | 10 | 0.001221s | 0.001181s | 0.001151s | byte equality observed |
| serialize.test | 10 | 0.001239s | 0.001240s | 0.001198s | byte equality observed |
| serializer.test | 9 | 0.002012s | 0.002001s | 0.001957s | native test oracle; output varies |
| snippets.test | 10 | 0.001434s | 0.001415s | 0.001382s | byte equality observed |
| static_resource.test | 10 | 0.001279s | 0.001283s | 0.001252s | byte equality observed |
| storage_ptr.test | 10 | 0.001258s | 0.001270s | 0.001242s | byte equality observed |
| stream_parser.test | 1 | 0.079855s | 0.077426s | 0.056888s | native test oracle; output varies |
| string.test | 8 | 0.002036s | 0.001703s | 0.001963s | native test oracle; output varies |
| string_view.test | 10 | 0.001183s | 0.001175s | 0.001188s | byte equality observed |
| utf8.test | 10 | 0.001193s | 0.001166s | 0.001175s | byte equality observed |
| value.test | 6 | 0.002620s | 0.002363s | 0.002954s | byte equality observed |
| value_from.test | 10 | 0.001394s | 0.001348s | 0.001364s | byte equality observed |
| value_ref.test | 10 | 0.001257s | 0.001222s | 0.001212s | byte equality observed |
| value_stack.test | 10 | 0.001239s | 0.001205s | 0.001210s | byte equality observed |
| value_to.test | 8 | 0.002216s | 0.002125s | 0.002148s | native test oracle; output varies |
| visit.test | 10 | 0.001247s | 0.001216s | 0.001208s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
