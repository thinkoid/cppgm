# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.183900 | 6.068506 | 5.758190 | 0.003280 | 0.003388 | 0.003537 |
| basic_parser.test | RUN | 6.962878 | 138.457910 | 87.058998 | 0.697911 | 0.251974 | 0.904991 |
| conversion.test | RUN | 0.809856 | 2.296944 | 2.985039 | 0.002094 | 0.002316 | 0.001837 |
| doc_background.test | RUN | 0.848516 | 2.319156 | 2.941828 | 0.002217 | 0.002033 | 0.002123 |
| doc_forward_conversion.test | RUN | 0.850814 | 2.696059 | 3.235861 | 0.001980 | 0.001989 | 0.002151 |
| doc_parsing.test | RUN | 0.858139 | 2.419396 | 3.046148 | 0.002312 | 0.002277 | 0.002228 |
| doc_quick_look.test | RUN | 1.113415 | 3.021805 | 4.119558 | 0.002276 | 0.002112 | 0.002058 |
| doc_serializing.test | RUN | 0.783412 | 2.181098 | 2.790793 | 0.002163 | 0.002034 | 0.002163 |
| doc_storage_ptr.test | RUN | 0.792022 | 2.224852 | 2.804771 | 0.002078 | 0.002104 | 0.002125 |
| doc_uses_allocator.test | RUN | 0.790035 | 2.168770 | 2.791679 | 0.002278 | 0.002148 | 0.001910 |
| doc_using_numbers.test | RUN | 0.859212 | 2.341131 | 3.087347 | 0.002076 | 0.002064 | 0.002111 |
| double.test | RUN | 0.939171 | 3.866472 | 3.656135 | 1.735264 | 1.742166 | 1.849130 |
| error.test | RUN | 0.663642 | 2.098810 | 2.190384 | 0.002147 | 0.002050 | 0.002044 |
| fwd.test | RUN | 0.763340 | 2.121726 | 2.855214 | 0.002108 | 0.002046 | 0.002109 |
| json.test | RUN | 0.812574 | 2.545633 | 3.212892 | 0.002180 | 0.002384 | 0.002045 |
| kind.test | RUN | 0.629630 | 1.947628 | 2.294159 | 0.002249 | 0.002332 | 0.002187 |
| memory_resource.test | RUN | 0.834185 | 2.695773 | 2.923529 | 0.002278 | 0.002272 | 0.002238 |
| monotonic_resource.test | RUN | 0.788400 | 2.403697 | 2.744497 | 0.003211 | 0.003004 | 0.003088 |
| natvis.test | RUN | 0.800200 | 2.389860 | 2.761140 | 0.002239 | 0.002280 | 0.002202 |
| null_resource.test | RUN | 0.660918 | 2.081701 | 2.175373 | 0.002096 | 0.002270 | 0.002060 |
| object.test | RUN | 1.357635 | 7.108743 | 6.990322 | 0.008434 | 0.007379 | 0.007677 |
| parse.test | RUN | 0.871697 | 3.591399 | 3.078196 | 0.002884 | 0.003024 | 0.002870 |
| parser.test | RUN | 0.842040 | 3.043544 | 2.842669 | 0.002295 | 0.002560 | 0.002417 |
| pilfer.test | RUN | 0.449937 | 1.383141 | 1.383888 | 0.002162 | 0.002279 | 0.001691 |
| pointer.test | RUN | 0.964616 | 4.159245 | 3.962683 | 0.002575 | 0.002606 | 0.002583 |
| result_for.test | RUN | 0.808138 | 2.470113 | 2.789617 | 0.001987 | 0.002124 | 0.002231 |
| serialize.test | RUN | 0.814643 | 2.583736 | 2.750322 | 0.002291 | 0.002386 | 0.002138 |
| serializer.test | RUN | 1.317615 | 7.244759 | 6.962913 | 0.003303 | 0.003285 | 0.002985 |
| snippets.test | RUN | 2.033812 | 10.262380 | 8.956463 | 0.002494 | 0.002530 | 0.002292 |
| static_resource.test | RUN | 0.789351 | 2.355582 | 2.625800 | 0.002317 | 0.002381 | 0.002125 |
| storage_ptr.test | RUN | 0.836679 | 2.402412 | 3.062257 | 0.002012 | 0.002180 | 0.002136 |
| stream_parser.test | RUN | 0.993943 | 4.470294 | 4.111263 | 0.113226 | 0.160718 | 0.110983 |
| string.test | RUN | 1.773271 | 10.911900 | 10.267941 | 0.003471 | 0.003234 | 0.003324 |
| string_view.test | RUN | 0.492734 | 1.523184 | 1.681322 | 0.001884 | 0.002348 | 0.001988 |
| value.test | RUN | 1.791533 | 10.997871 | 7.856383 | 0.004352 | 0.004074 | 0.004935 |
| value_from.test | RUN | 1.592909 | 7.196749 | 7.313755 | 0.002473 | 0.002593 | 0.002397 |
| value_stack.test | RUN | 0.792954 | 2.338835 | 2.670672 | 0.002224 | 0.002280 | 0.002283 |
| value_to.test | RUN | 3.848996 | 22.416218 | 18.484468 | 0.003966 | 0.003968 | 0.003501 |
| value_ref.test | RUN | 0.901346 | 3.119689 | 3.435152 | 0.002384 | 0.002242 | 0.001722 |
| utf8.test | RUN | 0.665188 | 2.031100 | 2.367728 | 0.002247 | 0.002254 | 0.002079 |
| visit.test | RUN | 0.911059 | 3.270370 | 3.184713 | 0.001978 | 0.002167 | 0.002052 |
| d2s_intrinsics_test.test | RUN | 0.656774 | 1.886050 | 2.149134 | 0.002308 | 0.002168 | 0.001953 |
| d2s_table_test.test | RUN | 0.677846 | 2.034457 | 2.224193 | 0.002259 | 0.002079 | 0.002070 |
| d2s_test.test | RUN | 0.712434 | 2.567135 | 2.571674 | 0.002425 | 0.002268 | 0.002218 |
| parse_into.test | RUN | 22.395712 | 181.743478 | 111.458358 | 0.003784 | 0.003514 | 0.003324 |
| limits.test | RUN | 2.744691 | 15.240245 | 12.843320 | 0.002705 | 0.002526 | 0.002414 |
| header_only.test | RUN | 1.776425 | 11.845446 | 8.027055 | 0.002100 | 0.002264 | 0.002170 |
| no_exceptions.test | RUN | 2.662127 | 13.305230 | 10.999494 | 0.002269 | 0.002092 | 0.002166 |
| intrusive_macros.test | RUN | 2.154757 | 13.240057 | 10.435337 | 0.002280 | 0.002092 | 0.002176 |
| _gdb-printers.test | RUN | 0.373772 | 0.927015 | 1.344288 | 0.237088 | 0.366445 | 0.273501 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.879× | 0.874×, 0.884× | 0.996× |
| clang | 1.080× | 1.065×, 1.095× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002178s | 0.001909s | 0.002067s | native test oracle; output varies |
| basic_parser.test | 1 | 0.454594s | 0.273027s | 0.579265s | native test oracle; output varies |
| conversion.test | 10 | 0.001260s | 0.001243s | 0.001230s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001276s | 0.001257s | 0.001226s | byte equality observed |
| d2s_table_test.test | 10 | 0.001279s | 0.001273s | 0.001251s | byte equality observed |
| d2s_test.test | 10 | 0.001355s | 0.001329s | 0.001306s | byte equality observed |
| doc_background.test | 10 | 0.001302s | 0.001238s | 0.001217s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001321s | 0.001291s | 0.001272s | byte equality observed |
| doc_parsing.test | 10 | 0.001345s | 0.001310s | 0.001294s | byte equality observed |
| doc_quick_look.test | 10 | 0.001297s | 0.001270s | 0.001265s | byte equality observed |
| doc_serializing.test | 10 | 0.001287s | 0.001247s | 0.001239s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001288s | 0.001272s | 0.001248s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001286s | 0.001251s | 0.001229s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001298s | 0.001241s | 0.001228s | byte equality observed |
| double.test | 1 | 1.101019s | 1.068807s | 1.125411s | native test oracle; output varies |
| error.test | 10 | 0.001353s | 0.001328s | 0.001334s | byte equality observed |
| fwd.test | 10 | 0.001256s | 0.001259s | 0.001260s | byte equality observed |
| header_only.test | 10 | 0.001240s | 0.001237s | 0.001257s | byte equality observed |
| intrusive_macros.test | 10 | 0.001313s | 0.001298s | 0.001290s | byte equality observed |
| json.test | 10 | 0.001285s | 0.001270s | 0.001262s | byte equality observed |
| kind.test | 10 | 0.001309s | 0.001315s | 0.001302s | byte equality observed |
| limits.test | 10 | 0.001527s | 0.001506s | 0.001495s | byte equality observed |
| memory_resource.test | 10 | 0.001311s | 0.001316s | 0.001283s | byte equality observed |
| monotonic_resource.test | 10 | 0.001859s | 0.001702s | 0.001816s | native test oracle; output varies |
| natvis.test | 10 | 0.001316s | 0.001329s | 0.001305s | byte equality observed |
| no_exceptions.test | 10 | 0.001309s | 0.001296s | 0.001298s | byte equality observed |
| null_resource.test | 10 | 0.001341s | 0.001321s | 0.001322s | byte equality observed |
| object.test | 4 | 0.004935s | 0.004381s | 0.004857s | native test oracle; output varies |
| parse.test | 10 | 0.001812s | 0.001776s | 0.001802s | byte equality observed |
| parse_into.test | 6 | 0.002962s | 0.002778s | 0.002710s | native test oracle; output varies |
| parser.test | 10 | 0.001456s | 0.001425s | 0.001443s | byte equality observed |
| pilfer.test | 10 | 0.001266s | 0.001263s | 0.001232s | byte equality observed |
| pointer.test | 10 | 0.001507s | 0.001478s | 0.001479s | byte equality observed |
| result_for.test | 10 | 0.001265s | 0.001254s | 0.001232s | byte equality observed |
| serialize.test | 10 | 0.001331s | 0.001340s | 0.001289s | byte equality observed |
| serializer.test | 8 | 0.002098s | 0.002179s | 0.002084s | native test oracle; output varies |
| snippets.test | 10 | 0.001508s | 0.001498s | 0.001485s | byte equality observed |
| static_resource.test | 10 | 0.001367s | 0.001350s | 0.001329s | byte equality observed |
| storage_ptr.test | 10 | 0.001335s | 0.001332s | 0.001298s | byte equality observed |
| stream_parser.test | 1 | 0.063392s | 0.083224s | 0.059155s | native test oracle; output varies |
| string.test | 8 | 0.002126s | 0.001889s | 0.002086s | native test oracle; output varies |
| string_view.test | 10 | 0.001247s | 0.001263s | 0.001231s | byte equality observed |
| utf8.test | 10 | 0.001274s | 0.001270s | 0.001218s | byte equality observed |
| value.test | 7 | 0.002689s | 0.002445s | 0.003046s | native test oracle; output varies |
| value_from.test | 10 | 0.001485s | 0.001452s | 0.001479s | byte equality observed |
| value_ref.test | 10 | 0.001344s | 0.001353s | 0.001337s | byte equality observed |
| value_stack.test | 10 | 0.001328s | 0.001291s | 0.001306s | byte equality observed |
| value_to.test | 6 | 0.002280s | 0.002244s | 0.002237s | native test oracle; output varies |
| visit.test | 10 | 0.001312s | 0.001285s | 0.001301s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
