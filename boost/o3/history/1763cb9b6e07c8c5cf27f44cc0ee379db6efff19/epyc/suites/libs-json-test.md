# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.186219 | 6.063064 | 6.056535 | 0.003514 | 0.003172 | 0.003859 |
| basic_parser.test | RUN | 6.364188 | 142.335534 | 105.087224 | 0.701232 | 0.253862 | 0.604208 |
| conversion.test | RUN | 0.828847 | 2.263688 | 3.113243 | 0.001877 | 0.002150 | 0.002499 |
| doc_background.test | RUN | 0.828972 | 2.319545 | 3.058311 | 0.002165 | 0.002079 | 0.002094 |
| doc_forward_conversion.test | RUN | 0.840054 | 2.690641 | 3.410529 | 0.002094 | 0.002356 | 0.002512 |
| doc_parsing.test | RUN | 0.860026 | 2.536545 | 3.102781 | 0.002424 | 0.002224 | 0.002499 |
| doc_quick_look.test | RUN | 1.103150 | 3.008340 | 4.294564 | 0.001818 | 0.002072 | 0.002536 |
| doc_serializing.test | RUN | 0.771106 | 2.222135 | 2.942961 | 0.002174 | 0.001884 | 0.002080 |
| doc_storage_ptr.test | RUN | 0.772394 | 2.324388 | 2.960516 | 0.001956 | 0.002338 | 0.002446 |
| doc_uses_allocator.test | RUN | 0.785343 | 2.147448 | 2.905026 | 0.002240 | 0.002298 | 0.002407 |
| doc_using_numbers.test | RUN | 0.853883 | 2.302584 | 3.276719 | 0.002106 | 0.002206 | 0.002384 |
| double.test | RUN | 0.918496 | 3.889024 | 3.659453 | 1.696346 | 1.753636 | 1.694464 |
| error.test | RUN | 0.639516 | 2.103739 | 2.492213 | 0.002194 | 0.002250 | 0.002450 |
| fwd.test | RUN | 0.758249 | 2.130058 | 3.196725 | 0.002138 | 0.002024 | 0.002379 |
| json.test | RUN | 0.848596 | 2.537644 | 3.265190 | 0.002228 | 0.002271 | 0.002188 |
| kind.test | RUN | 0.627855 | 1.959083 | 2.393308 | 0.002391 | 0.002362 | 0.002346 |
| memory_resource.test | RUN | 0.856492 | 2.614272 | 3.042994 | 0.002238 | 0.002282 | 0.002272 |
| monotonic_resource.test | RUN | 0.796744 | 2.420276 | 2.797905 | 0.002748 | 0.003061 | 0.003205 |
| natvis.test | RUN | 0.790718 | 2.414732 | 2.837430 | 0.002287 | 0.002104 | 0.001881 |
| null_resource.test | RUN | 0.665843 | 2.049283 | 2.243842 | 0.002094 | 0.002296 | 0.002610 |
| object.test | RUN | 1.332924 | 7.024335 | 6.489197 | 0.007349 | 0.007123 | 0.006941 |
| parse.test | RUN | 0.870506 | 3.596924 | 3.602738 | 0.003067 | 0.003067 | 0.003319 |
| parser.test | RUN | 0.824093 | 3.069837 | 3.316139 | 0.002600 | 0.002485 | 0.002446 |
| pilfer.test | RUN | 0.435066 | 1.417141 | 1.344114 | 0.001995 | 0.002218 | 0.002020 |
| pointer.test | RUN | 0.969241 | 4.095607 | 4.355063 | 0.002310 | 0.002609 | 0.002766 |
| result_for.test | RUN | 0.800142 | 2.510439 | 2.786089 | 0.001940 | 0.002278 | 0.001849 |
| serialize.test | RUN | 0.800666 | 2.584726 | 2.738599 | 0.002196 | 0.002376 | 0.002541 |
| serializer.test | RUN | 1.274985 | 7.419352 | 6.596368 | 0.003367 | 0.003312 | 0.003305 |
| snippets.test | RUN | 1.985476 | 10.240850 | 10.355001 | 0.002616 | 0.002763 | 0.002622 |
| static_resource.test | RUN | 0.788781 | 2.223625 | 2.898735 | 0.002286 | 0.002257 | 0.002274 |
| storage_ptr.test | RUN | 0.829660 | 2.374373 | 2.938029 | 0.002066 | 0.002498 | 0.002378 |
| stream_parser.test | RUN | 0.982106 | 4.287383 | 4.176303 | 0.109042 | 0.134913 | 0.102702 |
| string.test | RUN | 1.762690 | 11.234963 | 10.490613 | 0.003746 | 0.003160 | 0.003426 |
| string_view.test | RUN | 0.488538 | 1.525136 | 1.369639 | 0.002202 | 0.002160 | 0.002169 |
| value.test | RUN | 1.680276 | 11.321141 | 8.866017 | 0.004658 | 0.003984 | 0.004750 |
| value_from.test | RUN | 1.601248 | 7.158666 | 6.543336 | 0.002565 | 0.002384 | 0.002620 |
| value_stack.test | RUN | 0.772659 | 2.380773 | 2.622658 | 0.002399 | 0.002511 | 0.002266 |
| value_to.test | RUN | 3.645824 | 21.936904 | 20.452349 | 0.004010 | 0.003600 | 0.004152 |
| value_ref.test | RUN | 0.900629 | 3.211730 | 3.451321 | 0.002320 | 0.002292 | 0.002476 |
| utf8.test | RUN | 0.667852 | 2.009587 | 2.342500 | 0.002218 | 0.002010 | 0.002024 |
| visit.test | RUN | 0.892078 | 3.227213 | 3.353885 | 0.002298 | 0.002320 | 0.002450 |
| d2s_intrinsics_test.test | RUN | 0.665941 | 1.882198 | 2.331764 | 0.002292 | 0.002197 | 0.002242 |
| d2s_table_test.test | RUN | 0.669605 | 1.998504 | 2.276904 | 0.002260 | 0.002061 | 0.002090 |
| d2s_test.test | RUN | 0.703731 | 2.610951 | 2.758445 | 0.002432 | 0.002328 | 0.002296 |
| parse_into.test | RUN | 22.330225 | 185.010821 | 126.282489 | 0.003731 | 0.003570 | 0.003366 |
| limits.test | RUN | 2.796747 | 15.435398 | 12.199456 | 0.002640 | 0.002800 | 0.002648 |
| header_only.test | RUN | 1.736403 | 11.778765 | 9.761070 | 0.002037 | 0.002026 | 0.002164 |
| no_exceptions.test | RUN | 2.561827 | 13.255561 | 11.995218 | 0.002346 | 0.002324 | 0.002154 |
| intrusive_macros.test | RUN | 2.114185 | 13.407972 | 11.178908 | 0.002133 | 0.002114 | 0.002550 |
| _gdb-printers.test | RUN | 0.377368 | 1.026618 | 1.390938 | 0.242315 | 0.368687 | 0.325516 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.864× | 0.869×, 0.859× | 0.976× |
| clang | 1.073× | 1.079×, 1.067× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002228s | 0.001942s | 0.002116s | native test oracle; output varies |
| basic_parser.test | 1 | 0.457942s | 0.268767s | 0.573233s | native test oracle; output varies |
| conversion.test | 10 | 0.001248s | 0.001240s | 0.001242s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001262s | 0.001240s | 0.001242s | byte equality observed |
| d2s_table_test.test | 10 | 0.001282s | 0.001285s | 0.001275s | byte equality observed |
| d2s_test.test | 10 | 0.001368s | 0.001343s | 0.001329s | byte equality observed |
| doc_background.test | 10 | 0.001322s | 0.001272s | 0.001281s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001315s | 0.001305s | 0.001290s | byte equality observed |
| doc_parsing.test | 10 | 0.001365s | 0.001317s | 0.001327s | byte equality observed |
| doc_quick_look.test | 10 | 0.001318s | 0.001292s | 0.001271s | byte equality observed |
| doc_serializing.test | 10 | 0.001312s | 0.001257s | 0.001253s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001322s | 0.001279s | 0.001288s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001321s | 0.001257s | 0.001253s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001337s | 0.001241s | 0.001258s | byte equality observed |
| double.test | 1 | 1.133752s | 1.070711s | 1.149974s | native test oracle; output varies |
| error.test | 4 | 0.001474s | 0.001374s | 0.001543s | byte equality observed |
| fwd.test | 10 | 0.001259s | 0.001252s | 0.001260s | byte equality observed |
| header_only.test | 10 | 0.001249s | 0.001225s | 0.001247s | byte equality observed |
| intrusive_macros.test | 10 | 0.001309s | 0.001311s | 0.001287s | byte equality observed |
| json.test | 10 | 0.001274s | 0.001290s | 0.001268s | byte equality observed |
| kind.test | 10 | 0.001312s | 0.001321s | 0.001307s | byte equality observed |
| limits.test | 10 | 0.001537s | 0.001487s | 0.001507s | byte equality observed |
| memory_resource.test | 10 | 0.001306s | 0.001298s | 0.001317s | byte equality observed |
| monotonic_resource.test | 10 | 0.001848s | 0.001709s | 0.001771s | native test oracle; output varies |
| natvis.test | 10 | 0.001302s | 0.001301s | 0.001308s | byte equality observed |
| no_exceptions.test | 10 | 0.001299s | 0.001276s | 0.001284s | byte equality observed |
| null_resource.test | 10 | 0.001344s | 0.001326s | 0.001332s | byte equality observed |
| object.test | 4 | 0.004989s | 0.004114s | 0.004857s | native test oracle; output varies |
| parse.test | 10 | 0.001808s | 0.001791s | 0.001813s | byte equality observed |
| parse_into.test | 4 | 0.003022s | 0.002812s | 0.002944s | native test oracle; output varies |
| parser.test | 9 | 0.001485s | 0.001414s | 0.001448s | byte equality observed |
| pilfer.test | 10 | 0.001237s | 0.001232s | 0.001246s | byte equality observed |
| pointer.test | 10 | 0.001502s | 0.001498s | 0.001487s | byte equality observed |
| result_for.test | 10 | 0.001262s | 0.001271s | 0.001243s | byte equality observed |
| serialize.test | 10 | 0.001315s | 0.001339s | 0.001318s | byte equality observed |
| serializer.test | 9 | 0.002085s | 0.002181s | 0.002105s | native test oracle; output varies |
| snippets.test | 10 | 0.001525s | 0.001503s | 0.001510s | byte equality observed |
| static_resource.test | 10 | 0.001379s | 0.001351s | 0.001369s | byte equality observed |
| storage_ptr.test | 10 | 0.001352s | 0.001330s | 0.001309s | byte equality observed |
| stream_parser.test | 1 | 0.063623s | 0.082864s | 0.058736s | native test oracle; output varies |
| string.test | 8 | 0.002161s | 0.001895s | 0.002164s | native test oracle; output varies |
| string_view.test | 10 | 0.001254s | 0.001267s | 0.001235s | byte equality observed |
| utf8.test | 10 | 0.001281s | 0.001254s | 0.001238s | byte equality observed |
| value.test | 7 | 0.002713s | 0.002441s | 0.002980s | native test oracle; output varies |
| value_from.test | 10 | 0.001476s | 0.001455s | 0.001467s | byte equality observed |
| value_ref.test | 10 | 0.001364s | 0.001329s | 0.001338s | byte equality observed |
| value_stack.test | 10 | 0.001322s | 0.001316s | 0.001309s | byte equality observed |
| value_to.test | 8 | 0.002356s | 0.002232s | 0.002311s | native test oracle; output varies |
| visit.test | 10 | 0.001319s | 0.001294s | 0.001315s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
