# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.221832 | 6.743710 | 6.833845 | 0.003410 | 0.003639 | 0.003638 |
| basic_parser.test | RUN | 7.170778 | 159.094847 | 99.024343 | 0.831901 | 0.275708 | 1.110498 |
| conversion.test | RUN | 0.906091 | 2.606430 | 3.561413 | 0.001874 | 0.002140 | 0.002103 |
| doc_background.test | RUN | 0.897386 | 2.604470 | 3.555670 | 0.002128 | 0.002120 | 0.002091 |
| doc_forward_conversion.test | RUN | 0.917564 | 3.002204 | 4.004549 | 0.002016 | 0.002075 | 0.002212 |
| doc_parsing.test | RUN | 0.911892 | 2.811935 | 3.757999 | 0.002118 | 0.002402 | 0.002264 |
| doc_quick_look.test | RUN | 1.162867 | 3.410448 | 4.968945 | 0.001945 | 0.002286 | 0.001970 |
| doc_serializing.test | RUN | 0.835768 | 2.419519 | 3.436585 | 0.002008 | 0.002198 | 0.001950 |
| doc_storage_ptr.test | RUN | 0.845401 | 2.534112 | 3.452250 | 0.001776 | 0.002180 | 0.002204 |
| doc_uses_allocator.test | RUN | 0.812716 | 2.411807 | 3.348907 | 0.002148 | 0.002100 | 0.002150 |
| doc_using_numbers.test | RUN | 0.920522 | 2.463406 | 3.741336 | 0.001808 | 0.002016 | 0.002242 |
| double.test | RUN | 0.970199 | 4.416639 | 4.475325 | 1.927876 | 1.982375 | 2.198440 |
| error.test | RUN | 0.697842 | 2.382961 | 2.925412 | 0.002146 | 0.002188 | 0.002160 |
| fwd.test | RUN | 0.849687 | 2.319655 | 3.102232 | 0.001952 | 0.002046 | 0.002112 |
| json.test | RUN | 0.891425 | 2.788976 | 3.759313 | 0.001834 | 0.001984 | 0.002160 |
| kind.test | RUN | 0.670081 | 2.305490 | 2.675654 | 0.002611 | 0.002384 | 0.002154 |
| memory_resource.test | RUN | 0.889326 | 2.857806 | 3.824653 | 0.002162 | 0.002234 | 0.002204 |
| monotonic_resource.test | RUN | 0.851914 | 2.795952 | 3.306648 | 0.003088 | 0.002935 | 0.003127 |
| natvis.test | RUN | 0.881998 | 2.611804 | 3.309958 | 0.002164 | 0.002350 | 0.002232 |
| null_resource.test | RUN | 0.721063 | 2.239318 | 2.829086 | 0.002196 | 0.002194 | 0.002377 |
| object.test | RUN | 1.444007 | 7.963419 | 7.286639 | 0.009452 | 0.007817 | 0.009528 |
| parse.test | RUN | 0.938369 | 4.004475 | 4.117116 | 0.002994 | 0.002938 | 0.003180 |
| parser.test | RUN | 0.893382 | 3.459329 | 3.855385 | 0.002537 | 0.002324 | 0.002096 |
| pilfer.test | RUN | 0.461220 | 1.567770 | 1.659537 | 0.002030 | 0.002148 | 0.002146 |
| pointer.test | RUN | 1.036516 | 4.632199 | 4.900446 | 0.002343 | 0.002725 | 0.002489 |
| result_for.test | RUN | 0.863638 | 2.750867 | 3.406387 | 0.001864 | 0.002140 | 0.001992 |
| serialize.test | RUN | 0.889176 | 2.888171 | 3.575398 | 0.002217 | 0.002390 | 0.002176 |
| serializer.test | RUN | 1.356717 | 8.096204 | 7.638823 | 0.003501 | 0.003782 | 0.003591 |
| snippets.test | RUN | 2.125573 | 10.561344 | 11.032278 | 0.002529 | 0.002361 | 0.002605 |
| static_resource.test | RUN | 0.836966 | 2.681361 | 3.071407 | 0.002386 | 0.002214 | 0.002349 |
| storage_ptr.test | RUN | 0.858467 | 2.805923 | 3.381645 | 0.002244 | 0.002460 | 0.002098 |
| stream_parser.test | RUN | 1.039974 | 5.098689 | 4.708723 | 0.126940 | 0.169242 | 0.131047 |
| string.test | RUN | 1.847408 | 10.935899 | 10.561599 | 0.003434 | 0.003284 | 0.003621 |
| string_view.test | RUN | 0.517294 | 1.663564 | 2.077932 | 0.002104 | 0.002308 | 0.002194 |
| value.test | RUN | 1.906068 | 13.395228 | 10.373520 | 0.004603 | 0.004204 | 0.005208 |
| value_from.test | RUN | 1.684078 | 7.532058 | 8.431579 | 0.002416 | 0.002296 | 0.001924 |
| value_stack.test | RUN | 0.847184 | 2.276732 | 3.212764 | 0.002150 | 0.001969 | 0.001837 |
| value_to.test | RUN | 4.007774 | 24.274322 | 20.402105 | 0.003886 | 0.003582 | 0.004112 |
| value_ref.test | RUN | 0.973887 | 3.769041 | 4.322373 | 0.002320 | 0.002251 | 0.002402 |
| utf8.test | RUN | 0.690381 | 2.360551 | 2.906715 | 0.002096 | 0.002282 | 0.002131 |
| visit.test | RUN | 0.974288 | 3.577379 | 3.818502 | 0.002207 | 0.002174 | 0.002382 |
| d2s_intrinsics_test.test | RUN | 0.702880 | 2.105012 | 2.809110 | 0.002148 | 0.002210 | 0.002242 |
| d2s_table_test.test | RUN | 0.708635 | 2.277670 | 2.936111 | 0.001716 | 0.002218 | 0.002264 |
| d2s_test.test | RUN | 0.754411 | 2.809689 | 3.222687 | 0.002142 | 0.002362 | 0.002258 |
| parse_into.test | RUN | 21.823475 | 192.182664 | 120.688377 | 0.003384 | 0.003700 | 0.003061 |
| limits.test | RUN | 2.937975 | 17.513245 | 14.854437 | 0.002650 | 0.002464 | 0.002367 |
| header_only.test | RUN | 1.823653 | 12.201680 | 9.893020 | 0.001936 | 0.001938 | 0.001978 |
| no_exceptions.test | RUN | 2.670874 | 14.318416 | 14.157006 | 0.002106 | 0.002309 | 0.002193 |
| intrusive_macros.test | RUN | 2.239016 | 14.734973 | 12.066748 | 0.001894 | 0.002266 | 0.002000 |
| _gdb-printers.test | RUN | 0.397304 | 1.122103 | 1.604710 | 0.246320 | 0.296965 | 0.265372 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.879× | 0.881×, 0.878× | 1.019× |
| clang | 1.055× | 1.054×, 1.057× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002142s | 0.001876s | 0.002060s | native test oracle; output varies |
| basic_parser.test | 1 | 0.490033s | 0.302158s | 0.649363s | native test oracle; output varies |
| conversion.test | 10 | 0.001201s | 0.001194s | 0.001200s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001197s | 0.001202s | 0.001195s | byte equality observed |
| d2s_table_test.test | 10 | 0.001193s | 0.001215s | 0.001220s | byte equality observed |
| d2s_test.test | 10 | 0.001269s | 0.001270s | 0.001293s | byte equality observed |
| doc_background.test | 10 | 0.001222s | 0.001203s | 0.001210s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001257s | 0.001268s | 0.001235s | byte equality observed |
| doc_parsing.test | 10 | 0.001276s | 0.001249s | 0.001264s | byte equality observed |
| doc_quick_look.test | 10 | 0.001246s | 0.001226s | 0.001224s | byte equality observed |
| doc_serializing.test | 10 | 0.001221s | 0.001183s | 0.001187s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001224s | 0.001201s | 0.001216s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001233s | 0.001188s | 0.001192s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001237s | 0.001175s | 0.001189s | byte equality observed |
| double.test | 1 | 1.216830s | 1.184217s | 1.175506s | native test oracle; output varies |
| error.test | 10 | 0.001314s | 0.001272s | 0.001300s | byte equality observed |
| fwd.test | 10 | 0.001200s | 0.001180s | 0.001224s | byte equality observed |
| header_only.test | 10 | 0.001193s | 0.001181s | 0.001178s | byte equality observed |
| intrusive_macros.test | 10 | 0.001247s | 0.001256s | 0.001249s | byte equality observed |
| json.test | 10 | 0.001232s | 0.001238s | 0.001228s | byte equality observed |
| kind.test | 10 | 0.001251s | 0.001261s | 0.001268s | byte equality observed |
| limits.test | 10 | 0.001443s | 0.001422s | 0.001426s | byte equality observed |
| memory_resource.test | 10 | 0.001227s | 0.001263s | 0.001233s | byte equality observed |
| monotonic_resource.test | 10 | 0.001770s | 0.001609s | 0.001721s | byte equality observed |
| natvis.test | 10 | 0.001238s | 0.001250s | 0.001254s | byte equality observed |
| no_exceptions.test | 10 | 0.001231s | 0.001257s | 0.001226s | byte equality observed |
| null_resource.test | 10 | 0.001273s | 0.001268s | 0.001280s | byte equality observed |
| object.test | 4 | 0.005026s | 0.004101s | 0.004872s | native test oracle; output varies |
| parse.test | 10 | 0.001727s | 0.001728s | 0.001715s | byte equality observed |
| parse_into.test | 6 | 0.002809s | 0.002672s | 0.002533s | native test oracle; output varies |
| parser.test | 10 | 0.001386s | 0.001371s | 0.001368s | byte equality observed |
| pilfer.test | 10 | 0.001186s | 0.001208s | 0.001200s | byte equality observed |
| pointer.test | 10 | 0.001448s | 0.001450s | 0.001422s | byte equality observed |
| result_for.test | 10 | 0.001199s | 0.001200s | 0.001191s | byte equality observed |
| serialize.test | 10 | 0.001271s | 0.001279s | 0.001240s | byte equality observed |
| serializer.test | 9 | 0.002021s | 0.002014s | 0.001987s | native test oracle; output varies |
| snippets.test | 10 | 0.001449s | 0.001432s | 0.001431s | byte equality observed |
| static_resource.test | 10 | 0.001312s | 0.001312s | 0.001281s | byte equality observed |
| storage_ptr.test | 10 | 0.001271s | 0.001273s | 0.001259s | byte equality observed |
| stream_parser.test | 1 | 0.080572s | 0.078192s | 0.056980s | native test oracle; output varies |
| string.test | 8 | 0.002010s | 0.001776s | 0.001966s | byte equality observed |
| string_view.test | 10 | 0.001201s | 0.001203s | 0.001189s | byte equality observed |
| utf8.test | 10 | 0.001212s | 0.001203s | 0.001204s | byte equality observed |
| value.test | 6 | 0.002649s | 0.002416s | 0.002969s | native test oracle; output varies |
| value_from.test | 10 | 0.001391s | 0.001387s | 0.001407s | byte equality observed |
| value_ref.test | 10 | 0.001281s | 0.001269s | 0.001260s | byte equality observed |
| value_stack.test | 10 | 0.001255s | 0.001250s | 0.001215s | byte equality observed |
| value_to.test | 8 | 0.002206s | 0.002167s | 0.002142s | native test oracle; output varies |
| visit.test | 10 | 0.001252s | 0.001266s | 0.001208s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
