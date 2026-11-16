# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.807394 | 4.457238 | 3.611799 | 0.002086 | 0.002118 | 0.002176 |
| basic_parser.test | RUN | 5.013417 | 108.732353 | 61.741870 | 0.412051 | 0.180394 | 0.589901 |
| conversion.test | RUN | 0.517310 | 1.581653 | 1.802937 | 0.001197 | 0.001369 | 0.001294 |
| doc_background.test | RUN | 0.529614 | 1.585163 | 1.784415 | 0.001174 | 0.001359 | 0.001168 |
| doc_forward_conversion.test | RUN | 0.578761 | 1.864835 | 2.009894 | 0.001554 | 0.001512 | 0.001283 |
| doc_parsing.test | RUN | 0.558337 | 1.731513 | 1.819967 | 0.001272 | 0.001406 | 0.001157 |
| doc_quick_look.test | RUN | 0.736669 | 2.127282 | 2.450346 | 0.001283 | 0.001519 | 0.001140 |
| doc_serializing.test | RUN | 0.517896 | 1.550300 | 1.702292 | 0.001348 | 0.001366 | 0.001135 |
| doc_storage_ptr.test | RUN | 0.508202 | 1.620043 | 1.718423 | 0.001465 | 0.001377 | 0.001152 |
| doc_uses_allocator.test | RUN | 0.515613 | 1.533721 | 1.695365 | 0.001416 | 0.001427 | 0.001147 |
| doc_using_numbers.test | RUN | 0.584898 | 1.619476 | 1.830009 | 0.001464 | 0.001369 | 0.001250 |
| double.test | RUN | 0.599395 | 2.755098 | 2.173082 | 1.235152 | 1.208681 | 1.304999 |
| error.test | RUN | 0.447208 | 1.537086 | 1.416629 | 0.001215 | 0.001265 | 0.001126 |
| fwd.test | RUN | 0.475675 | 1.538194 | 1.622974 | 0.001381 | 0.001488 | 0.001161 |
| json.test | RUN | 0.514500 | 1.723935 | 1.975494 | 0.001200 | 0.001298 | 0.001259 |
| kind.test | RUN | 0.376452 | 1.444173 | 1.373376 | 0.001238 | 0.001530 | 0.001204 |
| memory_resource.test | RUN | 0.570440 | 1.834315 | 1.844944 | 0.001120 | 0.001429 | 0.001247 |
| monotonic_resource.test | RUN | 0.491586 | 1.776091 | 1.760403 | 0.001827 | 0.002107 | 0.001717 |
| natvis.test | RUN | 0.516193 | 1.718236 | 1.798478 | 0.001374 | 0.001444 | 0.001267 |
| null_resource.test | RUN | 0.426948 | 1.377517 | 1.394064 | 0.001375 | 0.001462 | 0.001383 |
| object.test | RUN | 0.925231 | 5.184835 | 4.134410 | 0.005182 | 0.004225 | 0.005068 |
| parse.test | RUN | 0.562029 | 2.556980 | 2.112055 | 0.001783 | 0.002024 | 0.001781 |
| parser.test | RUN | 0.548110 | 2.182019 | 1.938164 | 0.001386 | 0.001465 | 0.001361 |
| pilfer.test | RUN | 0.289287 | 0.981331 | 0.947235 | 0.001220 | 0.001314 | 0.001228 |
| pointer.test | RUN | 0.650824 | 2.967085 | 2.490926 | 0.001697 | 0.001656 | 0.001394 |
| result_for.test | RUN | 0.524555 | 1.748053 | 1.831048 | 0.001274 | 0.001351 | 0.001194 |
| serialize.test | RUN | 0.526534 | 1.811736 | 1.773758 | 0.001340 | 0.001607 | 0.001314 |
| serializer.test | RUN | 0.898364 | 5.286902 | 4.192942 | 0.002094 | 0.002473 | 0.002218 |
| snippets.test | RUN | 1.416167 | 7.582373 | 6.245905 | 0.001741 | 0.001540 | 0.001153 |
| static_resource.test | RUN | 0.504145 | 1.680168 | 1.674513 | 0.001373 | 0.001631 | 0.001372 |
| storage_ptr.test | RUN | 0.539301 | 1.747862 | 1.863431 | 0.001326 | 0.001378 | 0.001296 |
| stream_parser.test | RUN | 0.659163 | 3.342248 | 2.599108 | 0.069781 | 0.070754 | 0.067228 |
| string.test | RUN | 1.272812 | 8.622111 | 6.467040 | 0.002169 | 0.002178 | 0.002152 |
| string_view.test | RUN | 0.311454 | 1.057545 | 1.074693 | 0.001209 | 0.001505 | 0.001293 |
| value.test | RUN | 1.169610 | 8.632464 | 5.658736 | 0.002743 | 0.002659 | 0.003009 |
| value_from.test | RUN | 1.093076 | 5.361392 | 4.756578 | 0.001448 | 0.001574 | 0.001600 |
| value_stack.test | RUN | 0.504424 | 1.559756 | 1.698853 | 0.001468 | 0.001498 | 0.001391 |
| value_to.test | RUN | 2.591602 | 16.762600 | 12.629321 | 0.002278 | 0.002568 | 0.002449 |
| value_ref.test | RUN | 0.578536 | 2.235858 | 2.076081 | 0.001491 | 0.001670 | 0.001401 |
| utf8.test | RUN | 0.433533 | 1.463019 | 1.451443 | 0.001347 | 0.001503 | 0.001207 |
| visit.test | RUN | 0.575762 | 2.588222 | 2.043399 | 0.001347 | 0.001495 | 0.001397 |
| d2s_intrinsics_test.test | RUN | 0.429864 | 1.329297 | 1.441305 | 0.001248 | 0.001517 | 0.001318 |
| d2s_table_test.test | RUN | 0.436096 | 1.565672 | 1.474307 | 0.001290 | 0.001554 | 0.001274 |
| d2s_test.test | RUN | 0.464788 | 1.950186 | 1.725355 | 0.001545 | 0.001495 | 0.001447 |
| parse_into.test | RUN | 17.571422 | 139.075205 | 82.739491 | 0.002634 | 0.002629 | 0.002011 |
| limits.test | RUN | 1.910768 | 12.489379 | 8.038031 | 0.001546 | 0.001650 | 0.001534 |
| header_only.test | RUN | 1.323867 | 8.879079 | 6.071763 | 0.001303 | 0.001356 | 0.001360 |
| no_exceptions.test | RUN | 1.785540 | 10.179888 | 7.310412 | 0.001109 | 0.001494 | 0.001406 |
| intrusive_macros.test | RUN | 1.554720 | 10.003042 | 6.970668 | 0.000932 | 0.001726 | 0.000982 |
| _gdb-printers.test | RUN | 0.235021 | 0.667195 | 0.798634 | 0.160051 | 0.255784 | 0.175217 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.888× | 0.900×, 0.875× | 1.005× |
| clang | 1.131× | 1.134×, 1.128× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001376s | 0.001214s | 0.001342s | byte equality observed |
| basic_parser.test | 1 | 0.289723s | 0.190712s | 0.430951s | native test oracle; output varies |
| conversion.test | 10 | 0.000739s | 0.000750s | 0.000749s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000751s | 0.000742s | 0.000746s | byte equality observed |
| d2s_table_test.test | 10 | 0.000770s | 0.000766s | 0.000758s | byte equality observed |
| d2s_test.test | 10 | 0.000801s | 0.000798s | 0.000789s | byte equality observed |
| doc_background.test | 10 | 0.000767s | 0.000738s | 0.000749s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000784s | 0.000769s | 0.000775s | byte equality observed |
| doc_parsing.test | 10 | 0.000798s | 0.000793s | 0.000779s | byte equality observed |
| doc_quick_look.test | 10 | 0.000763s | 0.000770s | 0.000769s | byte equality observed |
| doc_serializing.test | 10 | 0.000763s | 0.000732s | 0.000742s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000762s | 0.000756s | 0.000763s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000773s | 0.000737s | 0.000753s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000769s | 0.000732s | 0.000745s | byte equality observed |
| double.test | 1 | 0.843560s | 0.822294s | 0.864030s | native test oracle; output varies |
| error.test | 10 | 0.000829s | 0.000800s | 0.000846s | byte equality observed |
| fwd.test | 10 | 0.000748s | 0.000769s | 0.000754s | byte equality observed |
| header_only.test | 10 | 0.000753s | 0.000746s | 0.000737s | byte equality observed |
| intrusive_macros.test | 10 | 0.000780s | 0.000765s | 0.000762s | byte equality observed |
| json.test | 10 | 0.000777s | 0.000774s | 0.000754s | byte equality observed |
| kind.test | 10 | 0.000784s | 0.000778s | 0.000774s | byte equality observed |
| limits.test | 10 | 0.000943s | 0.000906s | 0.000904s | byte equality observed |
| memory_resource.test | 10 | 0.000785s | 0.000779s | 0.000771s | byte equality observed |
| monotonic_resource.test | 10 | 0.001166s | 0.001143s | 0.001162s | byte equality observed |
| natvis.test | 10 | 0.000790s | 0.000785s | 0.000790s | byte equality observed |
| no_exceptions.test | 10 | 0.000782s | 0.000777s | 0.000761s | byte equality observed |
| null_resource.test | 10 | 0.000807s | 0.000786s | 0.000793s | byte equality observed |
| object.test | 6 | 0.003373s | 0.002829s | 0.003305s | native test oracle; output varies |
| parse.test | 10 | 0.001101s | 0.001106s | 0.001098s | byte equality observed |
| parse_into.test | 8 | 0.001892s | 0.001798s | 0.001638s | native test oracle; output varies |
| parser.test | 10 | 0.000873s | 0.000852s | 0.000876s | byte equality observed |
| pilfer.test | 10 | 0.000740s | 0.000754s | 0.000749s | byte equality observed |
| pointer.test | 10 | 0.000922s | 0.000921s | 0.000898s | byte equality observed |
| result_for.test | 10 | 0.000757s | 0.000761s | 0.000766s | byte equality observed |
| serialize.test | 10 | 0.000789s | 0.000789s | 0.000773s | byte equality observed |
| serializer.test | 10 | 0.001360s | 0.001361s | 0.001357s | byte equality observed |
| snippets.test | 10 | 0.000926s | 0.000903s | 0.000900s | byte equality observed |
| static_resource.test | 10 | 0.000820s | 0.000816s | 0.000806s | byte equality observed |
| storage_ptr.test | 10 | 0.000795s | 0.000797s | 0.000790s | byte equality observed |
| stream_parser.test | 1 | 0.043104s | 0.040365s | 0.043306s | native test oracle; output varies |
| string.test | 10 | 0.001330s | 0.001156s | 0.001325s | byte equality observed |
| string_view.test | 10 | 0.000728s | 0.000765s | 0.000765s | byte equality observed |
| utf8.test | 10 | 0.000759s | 0.000755s | 0.000781s | byte equality observed |
| value.test | 10 | 0.001703s | 0.001594s | 0.001982s | native test oracle; output varies |
| value_from.test | 10 | 0.000897s | 0.000884s | 0.000879s | byte equality observed |
| value_ref.test | 10 | 0.000806s | 0.000800s | 0.000803s | byte equality observed |
| value_stack.test | 10 | 0.000785s | 0.000774s | 0.000775s | byte equality observed |
| value_to.test | 10 | 0.001438s | 0.001430s | 0.001427s | byte equality observed |
| visit.test | 10 | 0.000789s | 0.000760s | 0.000779s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
