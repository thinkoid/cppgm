# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.772442 | 4.223628 | 3.613314 | 0.001952 | 0.001882 | 0.001916 |
| basic_parser.test | RUN | 5.182244 | 100.067499 | 58.353425 | 0.416837 | 0.179828 | 0.598493 |
| conversion.test | RUN | 0.484457 | 1.546432 | 1.760269 | 0.001206 | 0.001214 | 0.001111 |
| doc_background.test | RUN | 0.514778 | 1.539923 | 1.738448 | 0.001106 | 0.001137 | 0.001065 |
| doc_forward_conversion.test | RUN | 0.548874 | 1.824203 | 1.974466 | 0.001404 | 0.001224 | 0.001074 |
| doc_parsing.test | RUN | 0.543906 | 1.695474 | 1.814763 | 0.001210 | 0.001194 | 0.001149 |
| doc_quick_look.test | RUN | 0.726059 | 2.050802 | 2.393310 | 0.001169 | 0.001217 | 0.001111 |
| doc_serializing.test | RUN | 0.481288 | 1.498921 | 1.667200 | 0.000931 | 0.001163 | 0.001115 |
| doc_storage_ptr.test | RUN | 0.485542 | 1.552151 | 1.680600 | 0.001191 | 0.001137 | 0.001126 |
| doc_uses_allocator.test | RUN | 0.495229 | 1.528656 | 1.660929 | 0.001288 | 0.001153 | 0.001054 |
| doc_using_numbers.test | RUN | 0.544454 | 1.581126 | 1.816981 | 0.001089 | 0.001364 | 0.001220 |
| double.test | RUN | 0.602159 | 2.690636 | 2.241214 | 1.230047 | 1.214444 | 1.298328 |
| error.test | RUN | 0.413079 | 1.527827 | 1.319859 | 0.001109 | 0.001460 | 0.001125 |
| fwd.test | RUN | 0.483339 | 1.488321 | 1.658742 | 0.001148 | 0.001110 | 0.001124 |
| json.test | RUN | 0.509980 | 1.729377 | 1.907143 | 0.001109 | 0.001208 | 0.001174 |
| kind.test | RUN | 0.396079 | 1.380805 | 1.377615 | 0.001160 | 0.001453 | 0.001169 |
| memory_resource.test | RUN | 0.548543 | 1.824649 | 1.826559 | 0.001065 | 0.001276 | 0.001187 |
| monotonic_resource.test | RUN | 0.492603 | 1.731861 | 1.722641 | 0.001785 | 0.001770 | 0.001691 |
| natvis.test | RUN | 0.470064 | 1.608077 | 1.700619 | 0.001086 | 0.001291 | 0.001203 |
| null_resource.test | RUN | 0.390397 | 1.375625 | 1.419006 | 0.001154 | 0.001334 | 0.000930 |
| object.test | RUN | 0.902703 | 5.017446 | 4.309209 | 0.004997 | 0.004251 | 0.005005 |
| parse.test | RUN | 0.556357 | 2.535719 | 1.957432 | 0.001594 | 0.001843 | 0.001654 |
| parser.test | RUN | 0.524886 | 2.112433 | 1.839786 | 0.001357 | 0.001522 | 0.001403 |
| pilfer.test | RUN | 0.272955 | 0.952224 | 0.878184 | 0.001073 | 0.001290 | 0.001059 |
| pointer.test | RUN | 0.626508 | 2.887970 | 2.433070 | 0.001422 | 0.001748 | 0.001579 |
| result_for.test | RUN | 0.500340 | 1.724016 | 1.801739 | 0.001105 | 0.001342 | 0.001228 |
| serialize.test | RUN | 0.505664 | 1.762346 | 1.801194 | 0.001226 | 0.001431 | 0.001193 |
| serializer.test | RUN | 0.862798 | 5.174431 | 3.986621 | 0.002185 | 0.002230 | 0.001922 |
| snippets.test | RUN | 1.381765 | 7.153702 | 6.093997 | 0.001370 | 0.001588 | 0.001388 |
| static_resource.test | RUN | 0.493802 | 1.642462 | 1.705294 | 0.001223 | 0.001418 | 0.001172 |
| storage_ptr.test | RUN | 0.510090 | 1.703282 | 1.784403 | 0.001200 | 0.001415 | 0.001257 |
| stream_parser.test | RUN | 0.632800 | 3.528623 | 2.468562 | 0.071000 | 0.073922 | 0.068957 |
| string.test | RUN | 1.246462 | 8.121038 | 6.614239 | 0.002014 | 0.001754 | 0.001971 |
| string_view.test | RUN | 0.301871 | 1.015459 | 0.944112 | 0.001166 | 0.001240 | 0.001068 |
| value.test | RUN | 1.219169 | 8.837759 | 5.339744 | 0.002606 | 0.002410 | 0.002865 |
| value_from.test | RUN | 1.055145 | 5.111813 | 4.543995 | 0.001324 | 0.001512 | 0.001328 |
| value_stack.test | RUN | 0.485940 | 1.551689 | 1.677273 | 0.001136 | 0.001260 | 0.001138 |
| value_to.test | RUN | 2.682399 | 16.081498 | 12.010881 | 0.002358 | 0.002370 | 0.002366 |
| value_ref.test | RUN | 0.570477 | 2.438678 | 2.074788 | 0.001132 | 0.001714 | 0.001279 |
| utf8.test | RUN | 0.417966 | 1.400047 | 1.438979 | 0.001086 | 0.001298 | 0.001209 |
| visit.test | RUN | 0.561116 | 2.291513 | 2.004604 | 0.001247 | 0.001340 | 0.001325 |
| d2s_intrinsics_test.test | RUN | 0.404276 | 1.385027 | 1.382160 | 0.001141 | 0.001260 | 0.000996 |
| d2s_table_test.test | RUN | 0.417160 | 1.555907 | 1.455494 | 0.001132 | 0.001450 | 0.001151 |
| d2s_test.test | RUN | 0.438277 | 1.860558 | 1.653746 | 0.001242 | 0.001452 | 0.001289 |
| parse_into.test | RUN | 16.869270 | 131.361128 | 77.091220 | 0.002134 | 0.002029 | 0.001822 |
| limits.test | RUN | 1.894534 | 11.622267 | 7.986959 | 0.001551 | 0.001549 | 0.001352 |
| header_only.test | RUN | 1.250584 | 8.841693 | 5.791781 | 0.001163 | 0.001132 | 0.001179 |
| no_exceptions.test | RUN | 1.737476 | 9.966621 | 7.539147 | 0.001193 | 0.001252 | 0.001187 |
| intrusive_macros.test | RUN | 1.498922 | 9.769318 | 6.671100 | 0.001130 | 0.001435 | 0.001151 |
| _gdb-printers.test | RUN | 0.226041 | 0.662361 | 0.778724 | 0.145474 | 0.237584 | 0.164113 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.889× | 0.892×, 0.886× | 1.002× |
| clang | 1.133× | 1.138×, 1.128× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001382s | 0.001235s | 0.001340s | byte equality observed |
| basic_parser.test | 1 | 0.285537s | 0.187715s | 0.427694s | native test oracle; output varies |
| conversion.test | 10 | 0.000750s | 0.000731s | 0.000749s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000742s | 0.000736s | 0.000742s | byte equality observed |
| d2s_table_test.test | 10 | 0.000775s | 0.000749s | 0.000780s | byte equality observed |
| d2s_test.test | 10 | 0.000802s | 0.000797s | 0.000776s | byte equality observed |
| doc_background.test | 10 | 0.000761s | 0.000737s | 0.000731s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000786s | 0.000769s | 0.000778s | byte equality observed |
| doc_parsing.test | 10 | 0.000804s | 0.000781s | 0.000772s | byte equality observed |
| doc_quick_look.test | 10 | 0.000769s | 0.000755s | 0.000764s | byte equality observed |
| doc_serializing.test | 10 | 0.000759s | 0.000744s | 0.000734s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000763s | 0.000759s | 0.000748s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000770s | 0.000747s | 0.000750s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000784s | 0.000759s | 0.000748s | byte equality observed |
| double.test | 1 | 0.839060s | 0.808968s | 0.856359s | native test oracle; output varies |
| error.test | 10 | 0.000794s | 0.000789s | 0.000788s | byte equality observed |
| fwd.test | 10 | 0.000760s | 0.000756s | 0.000735s | byte equality observed |
| header_only.test | 10 | 0.000747s | 0.000747s | 0.000725s | byte equality observed |
| intrusive_macros.test | 10 | 0.000786s | 0.000774s | 0.000771s | byte equality observed |
| json.test | 10 | 0.000770s | 0.000767s | 0.000773s | byte equality observed |
| kind.test | 10 | 0.000790s | 0.000782s | 0.000777s | byte equality observed |
| limits.test | 10 | 0.000948s | 0.000914s | 0.000909s | byte equality observed |
| memory_resource.test | 10 | 0.000790s | 0.000792s | 0.000775s | byte equality observed |
| monotonic_resource.test | 10 | 0.001161s | 0.001147s | 0.001139s | native test oracle; output varies |
| natvis.test | 10 | 0.000799s | 0.000783s | 0.000791s | byte equality observed |
| no_exceptions.test | 10 | 0.000782s | 0.000778s | 0.000768s | byte equality observed |
| null_resource.test | 10 | 0.000817s | 0.000808s | 0.000792s | byte equality observed |
| object.test | 5 | 0.003358s | 0.002815s | 0.003285s | native test oracle; output varies |
| parse.test | 10 | 0.001095s | 0.001106s | 0.001075s | byte equality observed |
| parse_into.test | 8 | 0.001891s | 0.001801s | 0.001699s | native test oracle; output varies |
| parser.test | 10 | 0.000900s | 0.000880s | 0.000873s | byte equality observed |
| pilfer.test | 10 | 0.000753s | 0.000758s | 0.000761s | byte equality observed |
| pointer.test | 10 | 0.000928s | 0.000911s | 0.000910s | byte equality observed |
| result_for.test | 10 | 0.000759s | 0.000762s | 0.000754s | byte equality observed |
| serialize.test | 10 | 0.000805s | 0.000795s | 0.000779s | byte equality observed |
| serializer.test | 10 | 0.001365s | 0.001399s | 0.001342s | byte equality observed |
| snippets.test | 10 | 0.000921s | 0.000909s | 0.000898s | byte equality observed |
| static_resource.test | 10 | 0.000832s | 0.000815s | 0.000810s | byte equality observed |
| storage_ptr.test | 10 | 0.000798s | 0.000786s | 0.000783s | byte equality observed |
| stream_parser.test | 1 | 0.042643s | 0.039949s | 0.042883s | native test oracle; output varies |
| string.test | 10 | 0.001340s | 0.001153s | 0.001317s | byte equality observed |
| string_view.test | 10 | 0.000758s | 0.000745s | 0.000760s | byte equality observed |
| utf8.test | 10 | 0.000756s | 0.000760s | 0.000763s | byte equality observed |
| value.test | 10 | 0.001700s | 0.001592s | 0.001966s | native test oracle; output varies |
| value_from.test | 10 | 0.000901s | 0.000889s | 0.000890s | byte equality observed |
| value_ref.test | 10 | 0.000814s | 0.000811s | 0.000796s | byte equality observed |
| value_stack.test | 10 | 0.000787s | 0.000796s | 0.000786s | byte equality observed |
| value_to.test | 10 | 0.001451s | 0.001446s | 0.001423s | native test oracle; output varies |
| visit.test | 10 | 0.000790s | 0.000782s | 0.000775s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
