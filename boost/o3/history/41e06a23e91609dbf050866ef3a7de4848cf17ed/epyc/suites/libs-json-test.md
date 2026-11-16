# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.257760 | 6.401513 | 6.784918 | 0.003268 | 0.003386 | 0.003616 |
| basic_parser.test | RUN | 6.675567 | 147.262212 | 99.584467 | 0.850146 | 0.272737 | 1.108053 |
| conversion.test | RUN | 0.875737 | 2.445308 | 3.526992 | 0.001778 | 0.002140 | 0.002230 |
| doc_background.test | RUN | 0.865820 | 2.468793 | 3.524530 | 0.001905 | 0.002196 | 0.002169 |
| doc_forward_conversion.test | RUN | 0.854900 | 2.854934 | 3.988956 | 0.002144 | 0.002254 | 0.002356 |
| doc_parsing.test | RUN | 0.894864 | 2.574631 | 3.653294 | 0.002206 | 0.002092 | 0.002210 |
| doc_quick_look.test | RUN | 1.165789 | 3.247564 | 4.992454 | 0.002062 | 0.001886 | 0.001830 |
| doc_serializing.test | RUN | 0.826749 | 2.299532 | 3.426513 | 0.002109 | 0.002052 | 0.002016 |
| doc_storage_ptr.test | RUN | 0.807694 | 2.347256 | 3.492718 | 0.002214 | 0.002104 | 0.002066 |
| doc_uses_allocator.test | RUN | 0.829607 | 2.253918 | 3.395711 | 0.002071 | 0.002168 | 0.002151 |
| doc_using_numbers.test | RUN | 0.908521 | 2.495264 | 3.748194 | 0.001902 | 0.002258 | 0.002162 |
| double.test | RUN | 0.947103 | 4.101400 | 4.462215 | 2.003437 | 1.766634 | 1.933328 |
| error.test | RUN | 0.689078 | 2.184459 | 2.725108 | 0.002071 | 0.002195 | 0.002272 |
| fwd.test | RUN | 0.828693 | 2.455441 | 3.565129 | 0.001913 | 0.002236 | 0.002180 |
| json.test | RUN | 0.822327 | 2.771924 | 3.911846 | 0.001823 | 0.002253 | 0.002147 |
| kind.test | RUN | 0.605896 | 2.061588 | 2.629896 | 0.002210 | 0.002188 | 0.002068 |
| memory_resource.test | RUN | 0.919015 | 2.877585 | 3.793385 | 0.002160 | 0.002434 | 0.002226 |
| monotonic_resource.test | RUN | 0.849981 | 2.556984 | 3.191478 | 0.003159 | 0.002872 | 0.002678 |
| natvis.test | RUN | 0.847959 | 2.553608 | 3.343930 | 0.002182 | 0.002081 | 0.002250 |
| null_resource.test | RUN | 0.701187 | 2.221679 | 2.550286 | 0.002242 | 0.002147 | 0.001986 |
| object.test | RUN | 1.426799 | 7.563417 | 8.344144 | 0.009485 | 0.007998 | 0.009489 |
| parse.test | RUN | 0.936043 | 3.809344 | 3.649024 | 0.002781 | 0.002901 | 0.003001 |
| parser.test | RUN | 0.901043 | 3.278972 | 3.362532 | 0.002478 | 0.002298 | 0.002108 |
| pilfer.test | RUN | 0.461184 | 1.505381 | 1.614777 | 0.002086 | 0.001946 | 0.001806 |
| pointer.test | RUN | 1.015642 | 4.406881 | 4.765060 | 0.002459 | 0.002336 | 0.002540 |
| result_for.test | RUN | 0.874624 | 2.617536 | 3.275133 | 0.001924 | 0.002172 | 0.002304 |
| serialize.test | RUN | 0.846283 | 2.751112 | 3.336299 | 0.002184 | 0.002405 | 0.002234 |
| serializer.test | RUN | 1.346257 | 7.763172 | 8.123645 | 0.003382 | 0.003066 | 0.003201 |
| snippets.test | RUN | 2.117844 | 10.713867 | 10.249032 | 0.002451 | 0.002539 | 0.002278 |
| static_resource.test | RUN | 0.852933 | 2.434449 | 3.058551 | 0.002344 | 0.002202 | 0.002033 |
| storage_ptr.test | RUN | 0.867890 | 2.526774 | 3.737683 | 0.002016 | 0.001960 | 0.002253 |
| stream_parser.test | RUN | 1.058513 | 4.702853 | 5.154193 | 0.123962 | 0.141872 | 0.129469 |
| string.test | RUN | 1.834632 | 11.197133 | 10.353419 | 0.003364 | 0.002766 | 0.003476 |
| string_view.test | RUN | 0.520123 | 1.417354 | 2.062356 | 0.001879 | 0.002010 | 0.002182 |
| value.test | RUN | 1.772780 | 12.696748 | 10.330654 | 0.004563 | 0.004070 | 0.005367 |
| value_from.test | RUN | 1.687745 | 7.237991 | 8.446976 | 0.002416 | 0.002330 | 0.002626 |
| value_stack.test | RUN | 0.836236 | 2.344841 | 3.158973 | 0.002122 | 0.002199 | 0.002241 |
| value_to.test | RUN | 3.790505 | 21.604007 | 20.973394 | 0.003735 | 0.003901 | 0.004042 |
| value_ref.test | RUN | 0.942139 | 3.342353 | 4.334653 | 0.002271 | 0.002367 | 0.002222 |
| utf8.test | RUN | 0.710710 | 2.105567 | 2.897214 | 0.002065 | 0.002114 | 0.002162 |
| visit.test | RUN | 0.963309 | 3.434066 | 4.003774 | 0.002016 | 0.002218 | 0.002148 |
| d2s_intrinsics_test.test | RUN | 0.713787 | 2.140811 | 2.590968 | 0.002242 | 0.002098 | 0.001950 |
| d2s_table_test.test | RUN | 0.723827 | 2.349799 | 2.685290 | 0.002165 | 0.002042 | 0.002209 |
| d2s_test.test | RUN | 0.757784 | 2.885430 | 3.215672 | 0.002322 | 0.002334 | 0.002269 |
| parse_into.test | RUN | 22.106853 | 188.089773 | 118.900910 | 0.003548 | 0.003475 | 0.003205 |
| limits.test | RUN | 2.949024 | 16.899144 | 14.397369 | 0.002366 | 0.002430 | 0.002432 |
| header_only.test | RUN | 1.827470 | 12.678357 | 10.166367 | 0.001862 | 0.001842 | 0.002071 |
| no_exceptions.test | RUN | 2.694519 | 14.046206 | 13.785365 | 0.002151 | 0.002117 | 0.002216 |
| intrusive_macros.test | RUN | 2.222879 | 13.902244 | 11.352120 | 0.002056 | 0.001990 | 0.002092 |
| _gdb-printers.test | RUN | 0.380267 | 1.067754 | 1.619153 | 0.231630 | 0.270835 | 0.260765 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.878× | 0.866×, 0.891× | 1.017× |
| clang | 1.093× | 1.087×, 1.100× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002110s | 0.001864s | 0.002008s | native test oracle; output varies |
| basic_parser.test | 1 | 0.480140s | 0.303909s | 0.654740s | native test oracle; output varies |
| conversion.test | 10 | 0.001178s | 0.001175s | 0.001142s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001177s | 0.001185s | 0.001146s | byte equality observed |
| d2s_table_test.test | 10 | 0.001196s | 0.001193s | 0.001159s | byte equality observed |
| d2s_test.test | 10 | 0.001262s | 0.001239s | 0.001210s | byte equality observed |
| doc_background.test | 10 | 0.001203s | 0.001166s | 0.001161s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001229s | 0.001201s | 0.001207s | byte equality observed |
| doc_parsing.test | 10 | 0.001270s | 0.001214s | 0.001220s | byte equality observed |
| doc_quick_look.test | 10 | 0.001222s | 0.001167s | 0.001183s | byte equality observed |
| doc_serializing.test | 10 | 0.001206s | 0.001132s | 0.001161s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001211s | 0.001172s | 0.001192s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001211s | 0.001143s | 0.001149s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001221s | 0.001129s | 0.001154s | byte equality observed |
| double.test | 1 | 1.174113s | 1.160263s | 1.179267s | native test oracle; output varies |
| error.test | 10 | 0.001250s | 0.001235s | 0.001333s | byte equality observed |
| fwd.test | 10 | 0.001167s | 0.001183s | 0.001184s | byte equality observed |
| header_only.test | 10 | 0.001150s | 0.001168s | 0.001195s | byte equality observed |
| intrusive_macros.test | 10 | 0.001221s | 0.001231s | 0.001215s | byte equality observed |
| json.test | 10 | 0.001198s | 0.001200s | 0.001208s | byte equality observed |
| kind.test | 10 | 0.001220s | 0.001229s | 0.001217s | byte equality observed |
| limits.test | 10 | 0.001425s | 0.001406s | 0.001424s | byte equality observed |
| memory_resource.test | 10 | 0.001200s | 0.001230s | 0.001210s | byte equality observed |
| monotonic_resource.test | 10 | 0.001747s | 0.001592s | 0.001772s | native test oracle; output varies |
| natvis.test | 10 | 0.001204s | 0.001225s | 0.001237s | byte equality observed |
| no_exceptions.test | 10 | 0.001198s | 0.001222s | 0.001224s | byte equality observed |
| null_resource.test | 10 | 0.001244s | 0.001252s | 0.001253s | byte equality observed |
| object.test | 4 | 0.004969s | 0.004098s | 0.004889s | native test oracle; output varies |
| parse.test | 10 | 0.001665s | 0.001677s | 0.001699s | byte equality observed |
| parse_into.test | 5 | 0.002746s | 0.002591s | 0.002492s | native test oracle; output varies |
| parser.test | 10 | 0.001382s | 0.001355s | 0.001379s | byte equality observed |
| pilfer.test | 10 | 0.001185s | 0.001185s | 0.001184s | byte equality observed |
| pointer.test | 10 | 0.001410s | 0.001432s | 0.001405s | byte equality observed |
| result_for.test | 10 | 0.001203s | 0.001186s | 0.001181s | byte equality observed |
| serialize.test | 10 | 0.001249s | 0.001253s | 0.001234s | byte equality observed |
| serializer.test | 9 | 0.002003s | 0.002002s | 0.001982s | native test oracle; output varies |
| snippets.test | 10 | 0.001423s | 0.001396s | 0.001408s | byte equality observed |
| static_resource.test | 10 | 0.001305s | 0.001280s | 0.001286s | byte equality observed |
| storage_ptr.test | 10 | 0.001254s | 0.001265s | 0.001231s | byte equality observed |
| stream_parser.test | 1 | 0.080106s | 0.077953s | 0.056876s | native test oracle; output varies |
| string.test | 9 | 0.001971s | 0.001745s | 0.001982s | native test oracle; output varies |
| string_view.test | 10 | 0.001171s | 0.001185s | 0.001181s | byte equality observed |
| utf8.test | 10 | 0.001188s | 0.001181s | 0.001171s | byte equality observed |
| value.test | 7 | 0.002610s | 0.002373s | 0.002940s | native test oracle; output varies |
| value_from.test | 10 | 0.001369s | 0.001394s | 0.001399s | byte equality observed |
| value_ref.test | 10 | 0.001253s | 0.001245s | 0.001253s | byte equality observed |
| value_stack.test | 10 | 0.001234s | 0.001226s | 0.001195s | byte equality observed |
| value_to.test | 9 | 0.002171s | 0.002139s | 0.002194s | native test oracle; output varies |
| visit.test | 10 | 0.001218s | 0.001239s | 0.001195s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
