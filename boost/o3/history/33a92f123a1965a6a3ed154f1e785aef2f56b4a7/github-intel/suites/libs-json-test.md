# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.792085 | 4.350112 | 3.580766 | 0.002104 | 0.002140 | 0.001972 |
| basic_parser.test | RUN | 4.933433 | 106.160375 | 60.944584 | 0.409532 | 0.181501 | 0.593475 |
| conversion.test | RUN | 0.528306 | 1.576018 | 1.785275 | 0.001204 | 0.001415 | 0.001128 |
| doc_background.test | RUN | 0.535559 | 1.604670 | 1.746573 | 0.001229 | 0.001231 | 0.001181 |
| doc_forward_conversion.test | RUN | 0.553936 | 1.872393 | 1.983315 | 0.001145 | 0.001433 | 0.001255 |
| doc_parsing.test | RUN | 0.588433 | 1.749609 | 1.805329 | 0.001431 | 0.001284 | 0.001211 |
| doc_quick_look.test | RUN | 0.745813 | 2.100160 | 2.453276 | 0.001221 | 0.001373 | 0.001073 |
| doc_serializing.test | RUN | 0.499192 | 1.526380 | 1.642098 | 0.001260 | 0.001311 | 0.001118 |
| doc_storage_ptr.test | RUN | 0.507929 | 1.566299 | 1.695125 | 0.001171 | 0.001310 | 0.001198 |
| doc_uses_allocator.test | RUN | 0.512562 | 1.542814 | 1.678285 | 0.001430 | 0.001462 | 0.001173 |
| doc_using_numbers.test | RUN | 0.586269 | 1.609760 | 1.815122 | 0.001497 | 0.001302 | 0.001173 |
| double.test | RUN | 0.626115 | 2.747785 | 2.229552 | 1.241551 | 1.215784 | 1.295028 |
| error.test | RUN | 0.457881 | 1.531429 | 1.266611 | 0.001221 | 0.001497 | 0.001134 |
| fwd.test | RUN | 0.484629 | 1.531788 | 1.670217 | 0.001590 | 0.001252 | 0.001101 |
| json.test | RUN | 0.511058 | 1.706407 | 1.913610 | 0.001215 | 0.001419 | 0.001185 |
| kind.test | RUN | 0.373056 | 1.396004 | 1.378570 | 0.001220 | 0.001493 | 0.001170 |
| memory_resource.test | RUN | 0.540542 | 1.827546 | 1.833853 | 0.001248 | 0.001478 | 0.001159 |
| monotonic_resource.test | RUN | 0.490047 | 1.765915 | 1.717856 | 0.001946 | 0.001976 | 0.001713 |
| natvis.test | RUN | 0.516351 | 1.664061 | 1.684451 | 0.001323 | 0.001311 | 0.001307 |
| null_resource.test | RUN | 0.425665 | 1.430296 | 1.406242 | 0.001267 | 0.001287 | 0.001269 |
| object.test | RUN | 0.914180 | 5.079543 | 4.105170 | 0.005045 | 0.004438 | 0.004750 |
| parse.test | RUN | 0.563662 | 2.520914 | 2.025468 | 0.001767 | 0.001880 | 0.001696 |
| parser.test | RUN | 0.541812 | 2.152820 | 1.913337 | 0.001309 | 0.001422 | 0.001390 |
| pilfer.test | RUN | 0.286145 | 0.972794 | 0.927323 | 0.001299 | 0.001395 | 0.001204 |
| pointer.test | RUN | 0.645137 | 2.948431 | 2.426314 | 0.001594 | 0.001607 | 0.001473 |
| result_for.test | RUN | 0.522449 | 1.729059 | 1.792763 | 0.001264 | 0.001415 | 0.001154 |
| serialize.test | RUN | 0.536473 | 1.810973 | 1.784358 | 0.001414 | 0.001419 | 0.001269 |
| serializer.test | RUN | 0.883608 | 5.288309 | 4.023392 | 0.002132 | 0.002218 | 0.002110 |
| snippets.test | RUN | 1.398534 | 7.436212 | 6.140019 | 0.001487 | 0.001649 | 0.001474 |
| static_resource.test | RUN | 0.507972 | 1.633302 | 1.688939 | 0.001184 | 0.001511 | 0.001344 |
| storage_ptr.test | RUN | 0.523410 | 1.693748 | 1.808446 | 0.001278 | 0.001783 | 0.001310 |
| stream_parser.test | RUN | 0.650770 | 3.312661 | 2.572817 | 0.074464 | 0.071869 | 0.068675 |
| string.test | RUN | 1.265871 | 8.323833 | 6.590012 | 0.002202 | 0.002118 | 0.002161 |
| string_view.test | RUN | 0.309424 | 1.038399 | 0.988420 | 0.001186 | 0.001414 | 0.001286 |
| value.test | RUN | 1.176761 | 8.437679 | 5.420399 | 0.002743 | 0.002800 | 0.003269 |
| value_from.test | RUN | 1.095829 | 5.404713 | 4.675749 | 0.001551 | 0.001512 | 0.001659 |
| value_stack.test | RUN | 0.506126 | 1.548563 | 1.682724 | 0.001354 | 0.001542 | 0.001268 |
| value_to.test | RUN | 2.600223 | 17.082185 | 12.352351 | 0.002644 | 0.002384 | 0.002630 |
| value_ref.test | RUN | 0.578593 | 2.230601 | 2.074392 | 0.001288 | 0.001543 | 0.001403 |
| utf8.test | RUN | 0.423715 | 1.568540 | 1.420207 | 0.001146 | 0.001360 | 0.001349 |
| visit.test | RUN | 0.577062 | 2.336078 | 1.997569 | 0.001260 | 0.001504 | 0.001283 |
| d2s_intrinsics_test.test | RUN | 0.423352 | 1.359418 | 1.394703 | 0.001186 | 0.001379 | 0.001285 |
| d2s_table_test.test | RUN | 0.441777 | 1.573341 | 1.487590 | 0.001240 | 0.001423 | 0.001426 |
| d2s_test.test | RUN | 0.457881 | 1.875189 | 1.651830 | 0.001275 | 0.001349 | 0.001487 |
| parse_into.test | RUN | 17.403241 | 137.198080 | 80.820468 | 0.002647 | 0.002451 | 0.002193 |
| limits.test | RUN | 1.919416 | 12.152246 | 8.212693 | 0.001645 | 0.001624 | 0.001419 |
| header_only.test | RUN | 1.268409 | 8.878695 | 5.914343 | 0.001148 | 0.001384 | 0.001275 |
| no_exceptions.test | RUN | 1.791462 | 9.912798 | 7.318069 | 0.001135 | 0.001430 | 0.001444 |
| intrusive_macros.test | RUN | 1.547499 | 9.839840 | 6.756739 | 0.001181 | 0.001328 | 0.001292 |
| _gdb-printers.test | RUN | 0.232533 | 0.664606 | 0.789515 | 0.159235 | 0.258353 | 0.164206 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.888× | 0.886×, 0.891× | 1.004× |
| clang | 1.143× | 1.148×, 1.137× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001387s | 0.001220s | 0.001353s | byte equality observed |
| basic_parser.test | 1 | 0.288335s | 0.187906s | 0.428912s | native test oracle; output varies |
| conversion.test | 10 | 0.000731s | 0.000758s | 0.000725s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000740s | 0.000751s | 0.000728s | byte equality observed |
| d2s_table_test.test | 10 | 0.000757s | 0.000752s | 0.000767s | byte equality observed |
| d2s_test.test | 10 | 0.000789s | 0.000793s | 0.000777s | byte equality observed |
| doc_background.test | 10 | 0.000749s | 0.000732s | 0.000743s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000770s | 0.000769s | 0.000763s | byte equality observed |
| doc_parsing.test | 10 | 0.000797s | 0.000786s | 0.000760s | byte equality observed |
| doc_quick_look.test | 10 | 0.000767s | 0.000747s | 0.000746s | byte equality observed |
| doc_serializing.test | 10 | 0.000753s | 0.000743s | 0.000731s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000755s | 0.000767s | 0.000761s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000760s | 0.000739s | 0.000748s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000762s | 0.000742s | 0.000751s | byte equality observed |
| double.test | 1 | 0.836580s | 0.810772s | 0.864492s | native test oracle; output varies |
| error.test | 10 | 0.000876s | 0.000819s | 0.000862s | byte equality observed |
| fwd.test | 10 | 0.000756s | 0.000745s | 0.000744s | byte equality observed |
| header_only.test | 10 | 0.000749s | 0.000744s | 0.000728s | byte equality observed |
| intrusive_macros.test | 10 | 0.000785s | 0.000770s | 0.000761s | byte equality observed |
| json.test | 10 | 0.000772s | 0.000773s | 0.000749s | byte equality observed |
| kind.test | 10 | 0.000787s | 0.000784s | 0.000779s | byte equality observed |
| limits.test | 10 | 0.000938s | 0.000924s | 0.000923s | byte equality observed |
| memory_resource.test | 10 | 0.000791s | 0.000768s | 0.000782s | byte equality observed |
| monotonic_resource.test | 10 | 0.001159s | 0.001153s | 0.001155s | byte equality observed |
| natvis.test | 10 | 0.000795s | 0.000779s | 0.000786s | byte equality observed |
| no_exceptions.test | 10 | 0.000789s | 0.000776s | 0.000769s | byte equality observed |
| null_resource.test | 10 | 0.000807s | 0.000799s | 0.000798s | byte equality observed |
| object.test | 6 | 0.003384s | 0.002823s | 0.003302s | native test oracle; output varies |
| parse.test | 10 | 0.001106s | 0.001108s | 0.001095s | native test oracle; output varies |
| parse_into.test | 8 | 0.001879s | 0.001798s | 0.001724s | native test oracle; output varies |
| parser.test | 10 | 0.000887s | 0.000860s | 0.000882s | byte equality observed |
| pilfer.test | 10 | 0.000752s | 0.000757s | 0.000764s | byte equality observed |
| pointer.test | 10 | 0.000920s | 0.000901s | 0.000917s | byte equality observed |
| result_for.test | 10 | 0.000753s | 0.000762s | 0.000760s | byte equality observed |
| serialize.test | 10 | 0.000801s | 0.000796s | 0.000786s | byte equality observed |
| serializer.test | 10 | 0.001372s | 0.001364s | 0.001353s | byte equality observed |
| snippets.test | 10 | 0.000923s | 0.000900s | 0.000919s | byte equality observed |
| static_resource.test | 10 | 0.000814s | 0.000805s | 0.000825s | byte equality observed |
| storage_ptr.test | 10 | 0.000805s | 0.000798s | 0.000799s | byte equality observed |
| stream_parser.test | 1 | 0.042961s | 0.040287s | 0.043140s | native test oracle; output varies |
| string.test | 10 | 0.001344s | 0.001163s | 0.001331s | byte equality observed |
| string_view.test | 10 | 0.000754s | 0.000756s | 0.000742s | byte equality observed |
| utf8.test | 10 | 0.000759s | 0.000752s | 0.000758s | byte equality observed |
| value.test | 10 | 0.001700s | 0.001598s | 0.001972s | native test oracle; output varies |
| value_from.test | 10 | 0.000902s | 0.000889s | 0.000875s | byte equality observed |
| value_ref.test | 10 | 0.000807s | 0.000797s | 0.000786s | byte equality observed |
| value_stack.test | 10 | 0.000785s | 0.000797s | 0.000791s | byte equality observed |
| value_to.test | 10 | 0.001439s | 0.001437s | 0.001418s | byte equality observed |
| visit.test | 10 | 0.000795s | 0.000780s | 0.000750s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
