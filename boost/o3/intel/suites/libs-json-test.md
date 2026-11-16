# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.671705 | 3.642956 | 2.876176 | 0.001896 | 0.001843 | 0.001839 |
| basic_parser.test | RUN | 4.267440 | 94.906888 | 48.606754 | 0.346977 | 0.227101 | 0.531965 |
| conversion.test | RUN | 0.437419 | 1.329766 | 1.360933 | 0.001153 | 0.001115 | 0.001243 |
| doc_background.test | RUN | 0.446536 | 1.303822 | 1.340361 | 0.001150 | 0.001139 | 0.001077 |
| doc_forward_conversion.test | RUN | 0.465787 | 1.549736 | 1.543067 | 0.001188 | 0.001313 | 0.001107 |
| doc_parsing.test | RUN | 0.469995 | 1.447278 | 1.447298 | 0.001174 | 0.001324 | 0.001180 |
| doc_quick_look.test | RUN | 0.626200 | 1.752788 | 1.901907 | 0.001191 | 0.001324 | 0.001031 |
| doc_serializing.test | RUN | 0.422149 | 1.325967 | 1.300179 | 0.001158 | 0.001163 | 0.001113 |
| doc_storage_ptr.test | RUN | 0.433763 | 1.311327 | 1.347002 | 0.001198 | 0.001208 | 0.001028 |
| doc_uses_allocator.test | RUN | 0.432684 | 1.294151 | 1.327229 | 0.001137 | 0.001181 | 0.001037 |
| doc_using_numbers.test | RUN | 0.479362 | 1.312471 | 1.438222 | 0.001169 | 0.001240 | 0.001031 |
| double.test | RUN | 0.507854 | 2.280408 | 1.760088 | 0.997227 | 0.961638 | 1.050872 |
| error.test | RUN | 0.360985 | 1.319205 | 1.133939 | 0.001228 | 0.001176 | 0.001116 |
| fwd.test | RUN | 0.424289 | 1.287632 | 1.389966 | 0.001141 | 0.001128 | 0.001111 |
| json.test | RUN | 0.454579 | 1.537619 | 1.503991 | 0.001177 | 0.001095 | 0.001101 |
| kind.test | RUN | 0.348772 | 1.172087 | 1.111220 | 0.001212 | 0.001217 | 0.001019 |
| memory_resource.test | RUN | 0.470215 | 1.538568 | 1.472957 | 0.001184 | 0.001211 | 0.001111 |
| monotonic_resource.test | RUN | 0.432236 | 1.509083 | 1.344663 | 0.001556 | 0.001658 | 0.001486 |
| natvis.test | RUN | 0.429504 | 1.392989 | 1.369904 | 0.001193 | 0.001139 | 0.001210 |
| null_resource.test | RUN | 0.356008 | 1.170746 | 1.100993 | 0.001150 | 0.001154 | 0.001090 |
| object.test | RUN | 0.795058 | 4.264392 | 3.516833 | 0.004443 | 0.003793 | 0.004522 |
| parse.test | RUN | 0.473152 | 2.085158 | 1.593109 | 0.001586 | 0.001702 | 0.001497 |
| parser.test | RUN | 0.459758 | 1.766305 | 1.482564 | 0.001202 | 0.001244 | 0.001266 |
| pilfer.test | RUN | 0.241714 | 0.814055 | 0.740456 | 0.001081 | 0.001038 | 0.001119 |
| pointer.test | RUN | 0.556320 | 2.447737 | 1.925211 | 0.001289 | 0.001330 | 0.001191 |
| result_for.test | RUN | 0.437427 | 1.472166 | 1.420133 | 0.001090 | 0.001107 | 0.000993 |
| serialize.test | RUN | 0.443681 | 1.493337 | 1.428137 | 0.001231 | 0.001165 | 0.001161 |
| serializer.test | RUN | 0.771404 | 4.316451 | 3.320381 | 0.001910 | 0.001874 | 0.001892 |
| snippets.test | RUN | 1.235562 | 6.172419 | 4.944074 | 0.001382 | 0.001498 | 0.001421 |
| static_resource.test | RUN | 0.427699 | 1.388038 | 1.308211 | 0.001306 | 0.001298 | 0.001182 |
| storage_ptr.test | RUN | 0.440753 | 1.428431 | 1.402878 | 0.001152 | 0.001234 | 0.001075 |
| stream_parser.test | RUN | 0.558109 | 2.716662 | 2.078005 | 0.054667 | 0.050809 | 0.055146 |
| string.test | RUN | 1.076577 | 6.974058 | 5.476155 | 0.001835 | 0.001664 | 0.001893 |
| string_view.test | RUN | 0.275685 | 0.855715 | 0.796347 | 0.001066 | 0.001165 | 0.001136 |
| value.test | RUN | 1.028107 | 6.853124 | 4.330359 | 0.002486 | 0.002184 | 0.002743 |
| value_from.test | RUN | 0.937453 | 4.351181 | 3.822444 | 0.001286 | 0.001350 | 0.001329 |
| value_stack.test | RUN | 0.426940 | 1.321508 | 1.318073 | 0.001375 | 0.001278 | 0.001277 |
| value_to.test | RUN | 2.250731 | 13.213052 | 9.639191 | 0.002151 | 0.002259 | 0.002373 |
| value_ref.test | RUN | 0.491076 | 1.926476 | 1.695463 | 0.001262 | 0.001210 | 0.001236 |
| utf8.test | RUN | 0.359393 | 1.240367 | 1.125949 | 0.001062 | 0.001146 | 0.001157 |
| visit.test | RUN | 0.485636 | 1.953149 | 1.604327 | 0.001162 | 0.001147 | 0.001272 |
| d2s_intrinsics_test.test | RUN | 0.355621 | 1.190844 | 1.104496 | 0.001043 | 0.001059 | 0.001240 |
| d2s_table_test.test | RUN | 0.367426 | 1.308481 | 1.149994 | 0.001160 | 0.001139 | 0.001200 |
| d2s_test.test | RUN | 0.391839 | 1.543772 | 1.288988 | 0.001476 | 0.001094 | 0.001178 |
| parse_into.test | RUN | 19.815212 | 152.640541 | 88.742856 | 0.003268 | 0.003195 | 0.002959 |
| limits.test | RUN | 1.611763 | 9.953159 | 6.570537 | 0.001346 | 0.001421 | 0.001430 |
| header_only.test | RUN | 1.102221 | 7.522060 | 4.718374 | 0.001039 | 0.001162 | 0.001157 |
| no_exceptions.test | RUN | 1.524111 | 8.545135 | 6.061730 | 0.001124 | 0.001209 | 0.001138 |
| intrusive_macros.test | RUN | 1.305806 | 8.237203 | 5.395578 | 0.001175 | 0.001250 | 0.001152 |
| _gdb-printers.test | RUN | 0.195142 | 0.570018 | 0.608786 | 0.177399 | 0.208636 | 0.196827 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.889× | 0.887×, 0.891× | 1.007× |
| clang | 1.153× | 1.154×, 1.152× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001678s | 0.001511s | 0.001659s | byte equality observed |
| basic_parser.test | 1 | 0.348572s | 0.227648s | 0.528064s | native test oracle; output varies |
| conversion.test | 10 | 0.000954s | 0.000951s | 0.000956s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000955s | 0.000946s | 0.000959s | byte equality observed |
| d2s_table_test.test | 10 | 0.000986s | 0.000979s | 0.000981s | byte equality observed |
| d2s_test.test | 10 | 0.001022s | 0.001016s | 0.001010s | byte equality observed |
| doc_background.test | 10 | 0.000980s | 0.000949s | 0.000958s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001004s | 0.000997s | 0.000992s | byte equality observed |
| doc_parsing.test | 10 | 0.001030s | 0.001020s | 0.001000s | byte equality observed |
| doc_quick_look.test | 10 | 0.000998s | 0.000984s | 0.000975s | byte equality observed |
| doc_serializing.test | 10 | 0.000992s | 0.000955s | 0.000955s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000994s | 0.000988s | 0.000969s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000983s | 0.000951s | 0.000951s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000985s | 0.000956s | 0.000953s | byte equality observed |
| double.test | 1 | 0.996785s | 0.959858s | 1.041707s | native test oracle; output varies |
| error.test | 10 | 0.000998s | 0.000987s | 0.000986s | byte equality observed |
| fwd.test | 10 | 0.000951s | 0.000945s | 0.000959s | byte equality observed |
| header_only.test | 10 | 0.000957s | 0.000951s | 0.000954s | byte equality observed |
| intrusive_macros.test | 10 | 0.000989s | 0.000983s | 0.000983s | byte equality observed |
| json.test | 10 | 0.000974s | 0.000977s | 0.000974s | byte equality observed |
| kind.test | 10 | 0.000996s | 0.000990s | 0.000994s | byte equality observed |
| limits.test | 10 | 0.001199s | 0.001163s | 0.001156s | byte equality observed |
| memory_resource.test | 10 | 0.000993s | 0.000989s | 0.000993s | byte equality observed |
| monotonic_resource.test | 10 | 0.001472s | 0.001471s | 0.001442s | byte equality observed |
| natvis.test | 10 | 0.001012s | 0.000997s | 0.000998s | byte equality observed |
| no_exceptions.test | 10 | 0.001005s | 0.000992s | 0.000980s | byte equality observed |
| null_resource.test | 10 | 0.001022s | 0.001016s | 0.001015s | byte equality observed |
| object.test | 5 | 0.004226s | 0.003529s | 0.004128s | native test oracle; output varies |
| parse.test | 10 | 0.001410s | 0.001396s | 0.001397s | byte equality observed |
| parse_into.test | 7 | 0.002429s | 0.002302s | 0.002205s | native test oracle; output varies |
| parser.test | 10 | 0.001132s | 0.001102s | 0.001109s | byte equality observed |
| pilfer.test | 10 | 0.000959s | 0.000958s | 0.000959s | byte equality observed |
| pointer.test | 10 | 0.001178s | 0.001151s | 0.001158s | byte equality observed |
| result_for.test | 10 | 0.000971s | 0.000973s | 0.000960s | byte equality observed |
| serialize.test | 10 | 0.001025s | 0.001024s | 0.001004s | byte equality observed |
| serializer.test | 10 | 0.001732s | 0.001732s | 0.001720s | byte equality observed |
| snippets.test | 10 | 0.001178s | 0.001142s | 0.001155s | byte equality observed |
| static_resource.test | 10 | 0.001050s | 0.001046s | 0.001027s | byte equality observed |
| storage_ptr.test | 10 | 0.001019s | 0.001012s | 0.001002s | byte equality observed |
| stream_parser.test | 1 | 0.054025s | 0.050279s | 0.054336s | native test oracle; output varies |
| string.test | 10 | 0.001676s | 0.001448s | 0.001655s | byte equality observed |
| string_view.test | 10 | 0.000953s | 0.000953s | 0.000950s | byte equality observed |
| utf8.test | 10 | 0.000967s | 0.000964s | 0.000958s | byte equality observed |
| value.test | 8 | 0.002160s | 0.002017s | 0.002494s | native test oracle; output varies |
| value_from.test | 10 | 0.001134s | 0.001131s | 0.001131s | byte equality observed |
| value_ref.test | 10 | 0.001024s | 0.001022s | 0.001004s | byte equality observed |
| value_stack.test | 10 | 0.001013s | 0.001004s | 0.000988s | byte equality observed |
| value_to.test | 10 | 0.001835s | 0.001820s | 0.001820s | byte equality observed |
| visit.test | 10 | 0.001003s | 0.001008s | 0.000981s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
