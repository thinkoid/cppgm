# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.286198 | 6.825984 | 7.015745 | 0.003556 | 0.002953 | 0.003548 |
| basic_parser.test | RUN | 6.807010 | 167.664000 | 107.412589 | 0.843571 | 0.277633 | 1.125557 |
| conversion.test | RUN | 0.933349 | 2.544745 | 3.577101 | 0.002192 | 0.002266 | 0.002287 |
| doc_background.test | RUN | 0.881034 | 2.624423 | 3.612959 | 0.002092 | 0.002048 | 0.002139 |
| doc_forward_conversion.test | RUN | 0.928051 | 2.984845 | 4.013595 | 0.002002 | 0.002404 | 0.002248 |
| doc_parsing.test | RUN | 0.900785 | 2.702259 | 3.576396 | 0.002213 | 0.002341 | 0.002320 |
| doc_quick_look.test | RUN | 1.164125 | 3.436865 | 4.961443 | 0.001875 | 0.002232 | 0.001874 |
| doc_serializing.test | RUN | 0.848001 | 2.545625 | 3.469844 | 0.002070 | 0.001878 | 0.002165 |
| doc_storage_ptr.test | RUN | 0.857028 | 2.594614 | 3.452446 | 0.002154 | 0.002373 | 0.002207 |
| doc_uses_allocator.test | RUN | 0.824675 | 2.412453 | 3.483082 | 0.002219 | 0.002073 | 0.002189 |
| doc_using_numbers.test | RUN | 0.915032 | 2.517534 | 3.705039 | 0.002224 | 0.002168 | 0.002161 |
| double.test | RUN | 0.993843 | 4.208985 | 4.485986 | 1.949719 | 1.663059 | 2.143953 |
| error.test | RUN | 0.688690 | 2.498168 | 2.769285 | 0.002174 | 0.002324 | 0.002020 |
| fwd.test | RUN | 0.848707 | 2.628422 | 3.281488 | 0.001651 | 0.002305 | 0.001896 |
| json.test | RUN | 0.857302 | 2.923303 | 3.882710 | 0.002138 | 0.002338 | 0.002202 |
| kind.test | RUN | 0.651690 | 2.321057 | 2.704994 | 0.002192 | 0.002201 | 0.001941 |
| memory_resource.test | RUN | 0.924081 | 2.877487 | 3.739024 | 0.002205 | 0.002453 | 0.002290 |
| monotonic_resource.test | RUN | 0.852806 | 2.766793 | 3.338580 | 0.003100 | 0.003117 | 0.003221 |
| natvis.test | RUN | 0.857489 | 2.598247 | 3.317623 | 0.002196 | 0.002399 | 0.002287 |
| null_resource.test | RUN | 0.723053 | 2.304040 | 2.922750 | 0.002134 | 0.002316 | 0.002297 |
| object.test | RUN | 1.431011 | 7.969509 | 7.626659 | 0.009665 | 0.008137 | 0.009699 |
| parse.test | RUN | 0.949398 | 4.028662 | 4.163350 | 0.002897 | 0.002953 | 0.003195 |
| parser.test | RUN | 0.924884 | 3.514937 | 3.507136 | 0.002462 | 0.002577 | 0.002125 |
| pilfer.test | RUN | 0.479913 | 1.505135 | 1.492955 | 0.001992 | 0.001940 | 0.001965 |
| pointer.test | RUN | 1.043029 | 4.681762 | 4.965723 | 0.002624 | 0.002635 | 0.002140 |
| result_for.test | RUN | 0.858874 | 2.875072 | 3.313486 | 0.002017 | 0.002452 | 0.002344 |
| serialize.test | RUN | 0.867695 | 2.922671 | 3.330248 | 0.002031 | 0.002430 | 0.002370 |
| serializer.test | RUN | 1.375302 | 8.219824 | 8.104289 | 0.003530 | 0.003154 | 0.003370 |
| snippets.test | RUN | 2.129318 | 10.794775 | 11.126976 | 0.002406 | 0.002274 | 0.002608 |
| static_resource.test | RUN | 0.854737 | 2.527285 | 3.219813 | 0.002360 | 0.002307 | 0.002188 |
| storage_ptr.test | RUN | 0.885840 | 2.728264 | 3.609211 | 0.002302 | 0.002526 | 0.002258 |
| stream_parser.test | RUN | 1.054858 | 5.251859 | 4.351591 | 0.125350 | 0.148568 | 0.130890 |
| string.test | RUN | 1.865004 | 11.648729 | 10.415602 | 0.003753 | 0.002760 | 0.003172 |
| string_view.test | RUN | 0.529193 | 1.595396 | 2.103916 | 0.002149 | 0.001936 | 0.002166 |
| value.test | RUN | 1.839789 | 13.758504 | 10.738305 | 0.004658 | 0.003853 | 0.005500 |
| value_from.test | RUN | 1.682680 | 7.396043 | 8.578876 | 0.002432 | 0.002730 | 0.002126 |
| value_stack.test | RUN | 0.842061 | 2.321163 | 3.403903 | 0.002154 | 0.002096 | 0.002388 |
| value_to.test | RUN | 3.886922 | 25.240135 | 22.666722 | 0.003870 | 0.004166 | 0.004086 |
| value_ref.test | RUN | 0.949998 | 3.319842 | 4.291190 | 0.002296 | 0.002500 | 0.002340 |
| utf8.test | RUN | 0.724158 | 2.327642 | 2.639393 | 0.002092 | 0.002230 | 0.002220 |
| visit.test | RUN | 0.984307 | 3.656501 | 4.023097 | 0.002109 | 0.002327 | 0.002203 |
| d2s_intrinsics_test.test | RUN | 0.703439 | 2.188424 | 2.915510 | 0.002226 | 0.002268 | 0.002194 |
| d2s_table_test.test | RUN | 0.724322 | 2.333441 | 2.870802 | 0.002190 | 0.002106 | 0.001872 |
| d2s_test.test | RUN | 0.765525 | 2.849010 | 3.057216 | 0.002228 | 0.002201 | 0.002353 |
| parse_into.test | RUN | 22.311009 | 194.523041 | 125.670275 | 0.003684 | 0.003418 | 0.003339 |
| limits.test | RUN | 2.951928 | 17.492997 | 12.998170 | 0.002664 | 0.002449 | 0.002152 |
| header_only.test | RUN | 1.839531 | 13.231216 | 10.869047 | 0.002040 | 0.002058 | 0.002246 |
| no_exceptions.test | RUN | 2.674540 | 15.505571 | 13.441220 | 0.002108 | 0.002294 | 0.002314 |
| intrusive_macros.test | RUN | 2.242968 | 14.499910 | 11.523177 | 0.001754 | 0.002050 | 0.002078 |
| _gdb-printers.test | RUN | 0.413302 | 1.050089 | 1.684656 | 0.243930 | 0.284780 | 0.264034 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.877× | 0.868×, 0.887× | 0.982× |
| clang | 1.075× | 1.069×, 1.080× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.002065s | 0.001824s | 0.001972s | native test oracle; output varies |
| basic_parser.test | 1 | 0.484245s | 0.304215s | 0.653159s | native test oracle; output varies |
| conversion.test | 10 | 0.001199s | 0.001171s | 0.001142s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001213s | 0.001171s | 0.001139s | byte equality observed |
| d2s_table_test.test | 10 | 0.001216s | 0.001202s | 0.001145s | byte equality observed |
| d2s_test.test | 10 | 0.001295s | 0.001277s | 0.001198s | byte equality observed |
| doc_background.test | 10 | 0.001232s | 0.001177s | 0.001144s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001253s | 0.001225s | 0.001208s | byte equality observed |
| doc_parsing.test | 10 | 0.001280s | 0.001241s | 0.001200s | byte equality observed |
| doc_quick_look.test | 10 | 0.001235s | 0.001212s | 0.001183s | byte equality observed |
| doc_serializing.test | 10 | 0.001218s | 0.001213s | 0.001151s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001218s | 0.001238s | 0.001186s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001219s | 0.001209s | 0.001154s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001221s | 0.001204s | 0.001162s | byte equality observed |
| double.test | 1 | 1.176705s | 1.158319s | 1.166190s | native test oracle; output varies |
| error.test | 10 | 0.001263s | 0.001275s | 0.001245s | byte equality observed |
| fwd.test | 10 | 0.001165s | 0.001195s | 0.001177s | byte equality observed |
| header_only.test | 10 | 0.001161s | 0.001172s | 0.001159s | byte equality observed |
| intrusive_macros.test | 10 | 0.001226s | 0.001266s | 0.001217s | byte equality observed |
| json.test | 10 | 0.001216s | 0.001241s | 0.001203s | byte equality observed |
| kind.test | 10 | 0.001253s | 0.001267s | 0.001213s | byte equality observed |
| limits.test | 10 | 0.001449s | 0.001435s | 0.001428s | byte equality observed |
| memory_resource.test | 10 | 0.001239s | 0.001245s | 0.001216s | byte equality observed |
| monotonic_resource.test | 10 | 0.001792s | 0.001630s | 0.001698s | native test oracle; output varies |
| natvis.test | 10 | 0.001250s | 0.001258s | 0.001225s | byte equality observed |
| no_exceptions.test | 10 | 0.001243s | 0.001244s | 0.001212s | byte equality observed |
| null_resource.test | 10 | 0.001287s | 0.001315s | 0.001243s | byte equality observed |
| object.test | 4 | 0.005009s | 0.004206s | 0.004818s | native test oracle; output varies |
| parse.test | 10 | 0.001706s | 0.001789s | 0.001720s | byte equality observed |
| parse_into.test | 7 | 0.002791s | 0.002809s | 0.002456s | native test oracle; output varies |
| parser.test | 10 | 0.001399s | 0.001366s | 0.001355s | byte equality observed |
| pilfer.test | 10 | 0.001183s | 0.001199s | 0.001178s | byte equality observed |
| pointer.test | 10 | 0.001438s | 0.001436s | 0.001418s | byte equality observed |
| result_for.test | 10 | 0.001220s | 0.001233s | 0.001181s | byte equality observed |
| serialize.test | 10 | 0.001268s | 0.001281s | 0.001230s | byte equality observed |
| serializer.test | 10 | 0.002019s | 0.002064s | 0.001984s | native test oracle; output varies |
| snippets.test | 10 | 0.001445s | 0.001451s | 0.001408s | byte equality observed |
| static_resource.test | 10 | 0.001309s | 0.001314s | 0.001246s | byte equality observed |
| storage_ptr.test | 10 | 0.001266s | 0.001309s | 0.001237s | byte equality observed |
| stream_parser.test | 1 | 0.080539s | 0.078424s | 0.057322s | native test oracle; output varies |
| string.test | 8 | 0.002049s | 0.001856s | 0.001943s | native test oracle; output varies |
| string_view.test | 10 | 0.001200s | 0.001235s | 0.001178s | byte equality observed |
| utf8.test | 10 | 0.001196s | 0.001227s | 0.001175s | byte equality observed |
| value.test | 5 | 0.002710s | 0.002502s | 0.002939s | native test oracle; output varies |
| value_from.test | 10 | 0.001404s | 0.001447s | 0.001372s | byte equality observed |
| value_ref.test | 10 | 0.001278s | 0.001306s | 0.001230s | byte equality observed |
| value_stack.test | 10 | 0.001263s | 0.001280s | 0.001216s | byte equality observed |
| value_to.test | 8 | 0.002186s | 0.002223s | 0.002131s | native test oracle; output varies |
| visit.test | 10 | 0.001256s | 0.001263s | 0.001239s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
