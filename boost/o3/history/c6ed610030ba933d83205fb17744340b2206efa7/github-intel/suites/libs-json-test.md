# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.771268 | 4.401441 | 3.737756 | 0.002004 | 0.001991 | 0.002170 |
| basic_parser.test | RUN | 4.841872 | 108.888573 | 64.774998 | 0.411760 | 0.183005 | 0.598058 |
| conversion.test | RUN | 0.499027 | 1.620502 | 1.844293 | 0.001230 | 0.001404 | 0.001174 |
| doc_background.test | RUN | 0.512479 | 1.597870 | 1.820768 | 0.001401 | 0.001564 | 0.001233 |
| doc_forward_conversion.test | RUN | 0.566297 | 1.827218 | 2.053677 | 0.001522 | 0.001468 | 0.001356 |
| doc_parsing.test | RUN | 0.544518 | 1.746929 | 1.884217 | 0.001296 | 0.001504 | 0.001251 |
| doc_quick_look.test | RUN | 0.714015 | 2.118321 | 2.556138 | 0.001368 | 0.001361 | 0.001313 |
| doc_serializing.test | RUN | 0.499976 | 1.530612 | 1.741214 | 0.001340 | 0.001267 | 0.001356 |
| doc_storage_ptr.test | RUN | 0.491956 | 1.612614 | 1.763389 | 0.001262 | 0.001426 | 0.001377 |
| doc_uses_allocator.test | RUN | 0.506825 | 1.540352 | 1.722368 | 0.001518 | 0.001215 | 0.001295 |
| doc_using_numbers.test | RUN | 0.546039 | 1.624384 | 1.879941 | 0.001378 | 0.001502 | 0.001395 |
| double.test | RUN | 0.604097 | 2.772452 | 2.218816 | 1.239083 | 1.126632 | 1.301668 |
| error.test | RUN | 0.433962 | 1.559641 | 1.441271 | 0.001176 | 0.001515 | 0.001468 |
| fwd.test | RUN | 0.462397 | 1.600831 | 1.677625 | 0.001210 | 0.001400 | 0.001318 |
| json.test | RUN | 0.518587 | 1.848425 | 2.012699 | 0.001207 | 0.001217 | 0.001514 |
| kind.test | RUN | 0.384946 | 1.453243 | 1.406984 | 0.001148 | 0.001663 | 0.001566 |
| memory_resource.test | RUN | 0.536930 | 1.858763 | 1.912499 | 0.001234 | 0.001590 | 0.001594 |
| monotonic_resource.test | RUN | 0.478488 | 1.764475 | 1.826244 | 0.001914 | 0.001934 | 0.001986 |
| natvis.test | RUN | 0.505144 | 1.718020 | 1.788186 | 0.001355 | 0.001526 | 0.001358 |
| null_resource.test | RUN | 0.414971 | 1.379687 | 1.434371 | 0.001362 | 0.001407 | 0.001409 |
| object.test | RUN | 0.906715 | 5.251960 | 4.543105 | 0.005485 | 0.004508 | 0.005154 |
| parse.test | RUN | 0.554369 | 2.596819 | 2.052836 | 0.001724 | 0.001957 | 0.001918 |
| parser.test | RUN | 0.538654 | 2.181006 | 1.941606 | 0.001307 | 0.001654 | 0.001556 |
| pilfer.test | RUN | 0.280731 | 0.980866 | 0.927706 | 0.001376 | 0.001615 | 0.001391 |
| pointer.test | RUN | 0.633408 | 3.018496 | 2.551311 | 0.001675 | 0.001710 | 0.001629 |
| result_for.test | RUN | 0.519413 | 1.760678 | 1.855180 | 0.001208 | 0.001517 | 0.001540 |
| serialize.test | RUN | 0.523579 | 1.844206 | 1.799417 | 0.001308 | 0.001598 | 0.001424 |
| serializer.test | RUN | 0.886888 | 5.320197 | 4.259590 | 0.002328 | 0.002429 | 0.002270 |
| snippets.test | RUN | 1.392329 | 7.629946 | 6.165560 | 0.001480 | 0.001816 | 0.001778 |
| static_resource.test | RUN | 0.499308 | 1.585104 | 1.780012 | 0.001418 | 0.001567 | 0.001372 |
| storage_ptr.test | RUN | 0.525020 | 1.756888 | 1.835779 | 0.001351 | 0.001431 | 0.001541 |
| stream_parser.test | RUN | 0.644525 | 3.332477 | 2.731523 | 0.070905 | 0.065413 | 0.065391 |
| string.test | RUN | 1.259903 | 8.694048 | 6.724940 | 0.002258 | 0.002130 | 0.002245 |
| string_view.test | RUN | 0.312310 | 1.067386 | 1.012217 | 0.001359 | 0.001467 | 0.001273 |
| value.test | RUN | 1.174395 | 8.693287 | 5.600333 | 0.002761 | 0.002609 | 0.003460 |
| value_from.test | RUN | 1.094664 | 5.395853 | 4.802489 | 0.001576 | 0.001778 | 0.001629 |
| value_stack.test | RUN | 0.495649 | 1.558255 | 1.754523 | 0.001341 | 0.001512 | 0.001502 |
| value_to.test | RUN | 2.571779 | 17.075179 | 12.218966 | 0.002373 | 0.002567 | 0.002547 |
| value_ref.test | RUN | 0.573973 | 2.254881 | 2.244330 | 0.001387 | 0.001402 | 0.001462 |
| utf8.test | RUN | 0.420015 | 1.492077 | 1.502491 | 0.001344 | 0.001732 | 0.001350 |
| visit.test | RUN | 0.571500 | 2.526827 | 2.120015 | 0.001133 | 0.001576 | 0.001420 |
| d2s_intrinsics_test.test | RUN | 0.416320 | 1.339447 | 1.443432 | 0.001223 | 0.001424 | 0.001503 |
| d2s_table_test.test | RUN | 0.420871 | 1.567407 | 1.505751 | 0.001216 | 0.001459 | 0.001483 |
| d2s_test.test | RUN | 0.448905 | 1.862545 | 1.708843 | 0.001404 | 0.001400 | 0.001572 |
| parse_into.test | RUN | 17.158375 | 139.802173 | 84.367436 | 0.002476 | 0.002721 | 0.002209 |
| limits.test | RUN | 1.875787 | 12.111444 | 8.417795 | 0.001506 | 0.001658 | 0.001762 |
| header_only.test | RUN | 1.297969 | 9.228327 | 5.923516 | 0.001136 | 0.001391 | 0.001370 |
| no_exceptions.test | RUN | 1.752882 | 10.328702 | 7.705924 | 0.001255 | 0.001501 | 0.001485 |
| intrusive_macros.test | RUN | 1.508551 | 9.992283 | 6.913035 | 0.001182 | 0.001350 | 0.001287 |
| _gdb-printers.test | RUN | 0.231634 | 0.669038 | 0.800621 | 0.156071 | 0.253555 | 0.175625 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.891× | 0.882×, 0.901× | 1.006× |
| clang | 1.143× | 1.142×, 1.143× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001384s | 0.001246s | 0.001371s | byte equality observed |
| basic_parser.test | 1 | 0.286832s | 0.188321s | 0.430573s | native test oracle; output varies |
| conversion.test | 10 | 0.000748s | 0.000732s | 0.000748s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000733s | 0.000732s | 0.000766s | byte equality observed |
| d2s_table_test.test | 10 | 0.000766s | 0.000758s | 0.000777s | byte equality observed |
| d2s_test.test | 10 | 0.000811s | 0.000788s | 0.000801s | byte equality observed |
| doc_background.test | 10 | 0.000760s | 0.000741s | 0.000751s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000790s | 0.000775s | 0.000767s | byte equality observed |
| doc_parsing.test | 10 | 0.000792s | 0.000790s | 0.000787s | byte equality observed |
| doc_quick_look.test | 10 | 0.000781s | 0.000771s | 0.000759s | byte equality observed |
| doc_serializing.test | 10 | 0.000781s | 0.000739s | 0.000730s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000758s | 0.000767s | 0.000760s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000774s | 0.000731s | 0.000736s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000777s | 0.000744s | 0.000737s | byte equality observed |
| double.test | 1 | 0.839614s | 0.810350s | 0.870690s | native test oracle; output varies |
| error.test | 10 | 0.000865s | 0.000812s | 0.000866s | byte equality observed |
| fwd.test | 10 | 0.000761s | 0.000760s | 0.000771s | byte equality observed |
| header_only.test | 10 | 0.000764s | 0.000747s | 0.000734s | byte equality observed |
| intrusive_macros.test | 10 | 0.000789s | 0.000781s | 0.000764s | byte equality observed |
| json.test | 10 | 0.000780s | 0.000764s | 0.000764s | byte equality observed |
| kind.test | 10 | 0.000795s | 0.000771s | 0.000785s | byte equality observed |
| limits.test | 10 | 0.000936s | 0.000913s | 0.000917s | byte equality observed |
| memory_resource.test | 10 | 0.000786s | 0.000783s | 0.000787s | byte equality observed |
| monotonic_resource.test | 10 | 0.001156s | 0.001146s | 0.001151s | byte equality observed |
| natvis.test | 10 | 0.000796s | 0.000787s | 0.000785s | byte equality observed |
| no_exceptions.test | 10 | 0.000790s | 0.000784s | 0.000782s | byte equality observed |
| null_resource.test | 10 | 0.000802s | 0.000781s | 0.000808s | byte equality observed |
| object.test | 6 | 0.003403s | 0.002809s | 0.003317s | native test oracle; output varies |
| parse.test | 10 | 0.001108s | 0.001101s | 0.001100s | byte equality observed |
| parse_into.test | 8 | 0.001899s | 0.001765s | 0.001664s | native test oracle; output varies |
| parser.test | 10 | 0.000878s | 0.000857s | 0.000871s | byte equality observed |
| pilfer.test | 10 | 0.000757s | 0.000741s | 0.000740s | byte equality observed |
| pointer.test | 10 | 0.000927s | 0.000906s | 0.000906s | byte equality observed |
| result_for.test | 10 | 0.000761s | 0.000768s | 0.000739s | byte equality observed |
| serialize.test | 10 | 0.000808s | 0.000791s | 0.000800s | byte equality observed |
| serializer.test | 10 | 0.001375s | 0.001362s | 0.001352s | byte equality observed |
| snippets.test | 10 | 0.000938s | 0.000908s | 0.000913s | byte equality observed |
| static_resource.test | 10 | 0.000831s | 0.000813s | 0.000809s | byte equality observed |
| storage_ptr.test | 10 | 0.000813s | 0.000797s | 0.000790s | byte equality observed |
| stream_parser.test | 1 | 0.042936s | 0.040185s | 0.043224s | native test oracle; output varies |
| string.test | 10 | 0.001346s | 0.001153s | 0.001333s | byte equality observed |
| string_view.test | 10 | 0.000759s | 0.000749s | 0.000743s | byte equality observed |
| utf8.test | 10 | 0.000772s | 0.000748s | 0.000753s | byte equality observed |
| value.test | 9 | 0.001716s | 0.001588s | 0.001983s | native test oracle; output varies |
| value_from.test | 10 | 0.000912s | 0.000896s | 0.000883s | byte equality observed |
| value_ref.test | 10 | 0.000820s | 0.000806s | 0.000794s | byte equality observed |
| value_stack.test | 10 | 0.000804s | 0.000796s | 0.000782s | byte equality observed |
| value_to.test | 10 | 0.001444s | 0.001438s | 0.001429s | byte equality observed |
| visit.test | 10 | 0.000792s | 0.000776s | 0.000779s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
