# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.264086 | 6.485836 | 6.817325 | 0.003493 | 0.002921 | 0.003577 |
| basic_parser.test | RUN | 6.773925 | 143.576845 | 97.207170 | 0.844192 | 0.275764 | 1.109625 |
| conversion.test | RUN | 0.914712 | 2.456223 | 3.492525 | 0.001839 | 0.002088 | 0.002108 |
| doc_background.test | RUN | 0.889837 | 2.522249 | 3.518244 | 0.002112 | 0.002110 | 0.002152 |
| doc_forward_conversion.test | RUN | 0.888942 | 2.921214 | 3.962909 | 0.002020 | 0.001978 | 0.002161 |
| doc_parsing.test | RUN | 0.927354 | 2.731872 | 3.631621 | 0.002221 | 0.002271 | 0.002226 |
| doc_quick_look.test | RUN | 1.153172 | 3.253197 | 4.909765 | 0.002054 | 0.001952 | 0.001817 |
| doc_serializing.test | RUN | 0.818257 | 2.305341 | 3.392245 | 0.002122 | 0.002004 | 0.001955 |
| doc_storage_ptr.test | RUN | 0.829653 | 2.445095 | 3.371881 | 0.002008 | 0.002154 | 0.002029 |
| doc_uses_allocator.test | RUN | 0.808041 | 2.323290 | 3.352213 | 0.002156 | 0.002238 | 0.002077 |
| doc_using_numbers.test | RUN | 0.895515 | 2.388910 | 3.700499 | 0.001897 | 0.002167 | 0.002118 |
| double.test | RUN | 0.940883 | 4.178465 | 4.456747 | 1.841651 | 1.960480 | 2.090273 |
| error.test | RUN | 0.694493 | 2.290134 | 2.674526 | 0.002071 | 0.001959 | 0.001972 |
| fwd.test | RUN | 0.816370 | 2.298783 | 3.097462 | 0.002112 | 0.002098 | 0.001984 |
| json.test | RUN | 0.887630 | 2.594598 | 3.815924 | 0.002030 | 0.001883 | 0.002106 |
| kind.test | RUN | 0.661660 | 2.179833 | 2.751797 | 0.002121 | 0.002260 | 0.002353 |
| memory_resource.test | RUN | 0.919161 | 2.805596 | 3.495131 | 0.001739 | 0.002105 | 0.001910 |
| monotonic_resource.test | RUN | 0.839520 | 2.726745 | 3.484126 | 0.003042 | 0.002800 | 0.003080 |
| natvis.test | RUN | 0.840291 | 2.496704 | 3.187189 | 0.002118 | 0.002326 | 0.002223 |
| null_resource.test | RUN | 0.702676 | 2.194312 | 2.568697 | 0.002105 | 0.002295 | 0.001986 |
| object.test | RUN | 1.422787 | 7.519969 | 8.334270 | 0.008809 | 0.007130 | 0.009675 |
| parse.test | RUN | 0.939649 | 3.856868 | 3.665919 | 0.002800 | 0.002910 | 0.003061 |
| parser.test | RUN | 0.897635 | 3.301239 | 3.356399 | 0.002405 | 0.002415 | 0.002284 |
| pilfer.test | RUN | 0.453782 | 1.430523 | 1.553908 | 0.002029 | 0.001992 | 0.001926 |
| pointer.test | RUN | 1.018377 | 4.455545 | 4.470065 | 0.002482 | 0.002628 | 0.002335 |
| result_for.test | RUN | 0.849645 | 2.727948 | 3.427068 | 0.001884 | 0.002388 | 0.002234 |
| serialize.test | RUN | 0.866990 | 2.778884 | 3.254960 | 0.002220 | 0.002201 | 0.002282 |
| serializer.test | RUN | 1.345363 | 7.956406 | 7.592634 | 0.003429 | 0.003160 | 0.003058 |
| snippets.test | RUN | 2.098184 | 10.854996 | 11.404986 | 0.002460 | 0.002438 | 0.002525 |
| static_resource.test | RUN | 0.842060 | 2.403379 | 3.112944 | 0.002194 | 0.002254 | 0.001876 |
| storage_ptr.test | RUN | 0.890495 | 2.548918 | 3.285300 | 0.002288 | 0.002020 | 0.002140 |
| stream_parser.test | RUN | 1.053034 | 4.712197 | 4.570608 | 0.124698 | 0.138279 | 0.129928 |
| string.test | RUN | 1.846728 | 11.760439 | 10.473200 | 0.003580 | 0.003255 | 0.003093 |
| string_view.test | RUN | 0.519852 | 1.505188 | 2.060846 | 0.002025 | 0.001924 | 0.002146 |
| value.test | RUN | 1.783895 | 11.571458 | 10.237390 | 0.004716 | 0.004420 | 0.005158 |
| value_from.test | RUN | 1.659052 | 7.571005 | 8.393055 | 0.002322 | 0.002574 | 0.002054 |
| value_stack.test | RUN | 0.822062 | 2.555921 | 3.108000 | 0.002067 | 0.002086 | 0.002212 |
| value_to.test | RUN | 3.848331 | 23.657253 | 19.330936 | 0.003950 | 0.003382 | 0.003491 |
| value_ref.test | RUN | 0.995361 | 3.434479 | 4.243899 | 0.002216 | 0.002110 | 0.002300 |
| utf8.test | RUN | 0.709770 | 2.145697 | 2.878840 | 0.001978 | 0.002030 | 0.002053 |
| visit.test | RUN | 0.938009 | 3.489708 | 3.953174 | 0.002124 | 0.001990 | 0.002164 |
| d2s_intrinsics_test.test | RUN | 0.685084 | 2.049742 | 2.783185 | 0.002034 | 0.001979 | 0.001881 |
| d2s_table_test.test | RUN | 0.702578 | 2.327602 | 2.903009 | 0.002056 | 0.002038 | 0.002033 |
| d2s_test.test | RUN | 0.765383 | 2.765677 | 3.215319 | 0.001962 | 0.002127 | 0.002306 |
| parse_into.test | RUN | 22.026522 | 182.229023 | 120.230508 | 0.003212 | 0.003144 | 0.003076 |
| limits.test | RUN | 2.923974 | 15.904620 | 14.245559 | 0.002596 | 0.002156 | 0.002530 |
| header_only.test | RUN | 1.825348 | 12.232216 | 10.124449 | 0.001875 | 0.001971 | 0.001897 |
| no_exceptions.test | RUN | 2.667544 | 14.505021 | 13.423459 | 0.002130 | 0.002258 | 0.002208 |
| intrusive_macros.test | RUN | 2.235309 | 14.102299 | 11.899829 | 0.001843 | 0.002231 | 0.002242 |
| _gdb-printers.test | RUN | 0.373644 | 1.076231 | 1.594983 | 0.236176 | 0.272469 | 0.269808 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.887× | 0.871×, 0.903× | 1.009× |
| clang | 1.076× | 1.077×, 1.075× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 6 | 0.002207s | 0.001961s | 0.001957s | native test oracle; output varies |
| basic_parser.test | 1 | 0.484235s | 0.303912s | 0.649930s | native test oracle; output varies |
| conversion.test | 10 | 0.001143s | 0.001154s | 0.001146s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001169s | 0.001153s | 0.001139s | byte equality observed |
| d2s_table_test.test | 10 | 0.001191s | 0.001165s | 0.001163s | byte equality observed |
| d2s_test.test | 10 | 0.001241s | 0.001229s | 0.001217s | byte equality observed |
| doc_background.test | 10 | 0.001200s | 0.001148s | 0.001159s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001220s | 0.001185s | 0.001206s | byte equality observed |
| doc_parsing.test | 10 | 0.001247s | 0.001196s | 0.001214s | byte equality observed |
| doc_quick_look.test | 10 | 0.001224s | 0.001178s | 0.001207s | byte equality observed |
| doc_serializing.test | 10 | 0.001195s | 0.001140s | 0.001153s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001200s | 0.001190s | 0.001181s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001202s | 0.001177s | 0.001155s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001192s | 0.001161s | 0.001149s | byte equality observed |
| double.test | 1 | 1.171959s | 1.160394s | 1.171288s | native test oracle; output varies |
| error.test | 10 | 0.001286s | 0.001267s | 0.001268s | byte equality observed |
| fwd.test | 10 | 0.001176s | 0.001194s | 0.001181s | byte equality observed |
| header_only.test | 10 | 0.001165s | 0.001162s | 0.001145s | byte equality observed |
| intrusive_macros.test | 10 | 0.001221s | 0.001222s | 0.001186s | byte equality observed |
| json.test | 10 | 0.001182s | 0.001209s | 0.001169s | byte equality observed |
| kind.test | 10 | 0.001207s | 0.001237s | 0.001189s | byte equality observed |
| limits.test | 10 | 0.001426s | 0.001413s | 0.001382s | byte equality observed |
| memory_resource.test | 10 | 0.001214s | 0.001216s | 0.001210s | byte equality observed |
| monotonic_resource.test | 8 | 0.001740s | 0.001598s | 0.001671s | native test oracle; output varies |
| natvis.test | 10 | 0.001222s | 0.001234s | 0.001218s | byte equality observed |
| no_exceptions.test | 10 | 0.001198s | 0.001223s | 0.001205s | byte equality observed |
| null_resource.test | 10 | 0.001236s | 0.001259s | 0.001236s | byte equality observed |
| object.test | 4 | 0.004969s | 0.004227s | 0.004834s | native test oracle; output varies |
| parse.test | 10 | 0.001671s | 0.001682s | 0.001686s | byte equality observed |
| parse_into.test | 7 | 0.002692s | 0.002601s | 0.002516s | native test oracle; output varies |
| parser.test | 10 | 0.001372s | 0.001348s | 0.001366s | byte equality observed |
| pilfer.test | 10 | 0.001152s | 0.001171s | 0.001185s | byte equality observed |
| pointer.test | 10 | 0.001389s | 0.001398s | 0.001405s | byte equality observed |
| result_for.test | 10 | 0.001178s | 0.001184s | 0.001186s | byte equality observed |
| serialize.test | 10 | 0.001228s | 0.001259s | 0.001275s | byte equality observed |
| serializer.test | 9 | 0.001991s | 0.002020s | 0.001976s | native test oracle; output varies |
| snippets.test | 10 | 0.001424s | 0.001419s | 0.001405s | byte equality observed |
| static_resource.test | 10 | 0.001286s | 0.001290s | 0.001264s | byte equality observed |
| storage_ptr.test | 10 | 0.001255s | 0.001258s | 0.001249s | byte equality observed |
| stream_parser.test | 1 | 0.079974s | 0.077800s | 0.056798s | native test oracle; output varies |
| string.test | 8 | 0.002023s | 0.001736s | 0.002049s | native test oracle; output varies |
| string_view.test | 10 | 0.001183s | 0.001173s | 0.001177s | byte equality observed |
| utf8.test | 10 | 0.001184s | 0.001197s | 0.001187s | byte equality observed |
| value.test | 7 | 0.002629s | 0.002382s | 0.002947s | native test oracle; output varies |
| value_from.test | 10 | 0.001393s | 0.001362s | 0.001410s | byte equality observed |
| value_ref.test | 10 | 0.001252s | 0.001232s | 0.001227s | byte equality observed |
| value_stack.test | 10 | 0.001232s | 0.001228s | 0.001212s | byte equality observed |
| value_to.test | 9 | 0.002170s | 0.002146s | 0.002186s | native test oracle; output varies |
| visit.test | 10 | 0.001225s | 0.001219s | 0.001196s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
