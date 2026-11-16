# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.939212 | 4.802898 | 4.528622 | 0.002732 | 0.002870 | 0.003016 |
| basic_parser.test | RUN | 5.009022 | 120.250480 | 75.624184 | 0.549519 | 0.199780 | 0.479467 |
| conversion.test | RUN | 0.654307 | 1.823513 | 2.346506 | 0.001413 | 0.001893 | 0.001862 |
| doc_background.test | RUN | 0.671880 | 1.815440 | 2.329125 | 0.001850 | 0.001771 | 0.001776 |
| doc_forward_conversion.test | RUN | 0.671257 | 2.032548 | 2.578675 | 0.001904 | 0.001948 | 0.001932 |
| doc_parsing.test | RUN | 0.672076 | 1.944481 | 2.355719 | 0.002004 | 0.001884 | 0.001926 |
| doc_quick_look.test | RUN | 0.877461 | 2.393437 | 3.286764 | 0.001614 | 0.001461 | 0.001888 |
| doc_serializing.test | RUN | 0.598584 | 1.754217 | 2.259583 | 0.001833 | 0.001527 | 0.001698 |
| doc_storage_ptr.test | RUN | 0.607975 | 1.741859 | 2.265046 | 0.002068 | 0.001640 | 0.001898 |
| doc_uses_allocator.test | RUN | 0.622296 | 1.665244 | 2.205267 | 0.001895 | 0.001728 | 0.001814 |
| doc_using_numbers.test | RUN | 0.669765 | 1.847680 | 2.472808 | 0.001720 | 0.001860 | 0.001958 |
| double.test | RUN | 0.728207 | 3.063641 | 2.917870 | 1.337353 | 1.332469 | 1.420870 |
| error.test | RUN | 0.510692 | 1.685213 | 1.644092 | 0.001848 | 0.001870 | 0.001708 |
| fwd.test | RUN | 0.602482 | 1.695146 | 2.073738 | 0.001773 | 0.001735 | 0.001654 |
| json.test | RUN | 0.619567 | 1.976507 | 2.557119 | 0.001815 | 0.001824 | 0.001886 |
| kind.test | RUN | 0.475099 | 1.625721 | 1.736387 | 0.001652 | 0.002099 | 0.001878 |
| memory_resource.test | RUN | 0.681868 | 2.002795 | 2.409646 | 0.001885 | 0.001970 | 0.001820 |
| monotonic_resource.test | RUN | 0.624694 | 1.973813 | 2.280121 | 0.002378 | 0.002536 | 0.002565 |
| natvis.test | RUN | 0.626226 | 1.968148 | 2.116958 | 0.001851 | 0.001645 | 0.001654 |
| null_resource.test | RUN | 0.516887 | 1.589140 | 1.736109 | 0.001945 | 0.002130 | 0.001914 |
| object.test | RUN | 1.052679 | 5.784721 | 5.655346 | 0.006550 | 0.005741 | 0.006537 |
| parse.test | RUN | 0.680649 | 2.868435 | 2.451258 | 0.002292 | 0.002008 | 0.002533 |
| parser.test | RUN | 0.644929 | 2.467402 | 2.249609 | 0.002076 | 0.001971 | 0.001838 |
| pilfer.test | RUN | 0.343201 | 1.127540 | 1.005121 | 0.001796 | 0.001971 | 0.001687 |
| pointer.test | RUN | 0.748421 | 3.336001 | 2.998731 | 0.002192 | 0.002248 | 0.002230 |
| result_for.test | RUN | 0.632010 | 1.980842 | 2.232932 | 0.001538 | 0.001974 | 0.001804 |
| serialize.test | RUN | 0.655382 | 2.029822 | 2.393374 | 0.001857 | 0.002068 | 0.002008 |
| serializer.test | RUN | 0.991940 | 5.853510 | 5.135009 | 0.002341 | 0.002958 | 0.002748 |
| snippets.test | RUN | 1.563076 | 8.252196 | 7.991573 | 0.002132 | 0.002210 | 0.002033 |
| static_resource.test | RUN | 0.621043 | 1.827227 | 2.231613 | 0.001954 | 0.001891 | 0.002086 |
| storage_ptr.test | RUN | 0.654905 | 1.945571 | 2.184958 | 0.001798 | 0.001986 | 0.001800 |
| stream_parser.test | RUN | 0.774503 | 3.454405 | 3.082795 | 0.083530 | 0.097336 | 0.075962 |
| string.test | RUN | 1.368898 | 8.731741 | 7.941901 | 0.003031 | 0.002349 | 0.002908 |
| string_view.test | RUN | 0.377134 | 1.024853 | 1.069244 | 0.001835 | 0.001733 | 0.001601 |
| value.test | RUN | 1.322528 | 9.583033 | 6.708750 | 0.003609 | 0.003192 | 0.003895 |
| value_from.test | RUN | 1.231283 | 5.353844 | 5.314928 | 0.002180 | 0.002212 | 0.002152 |
| value_stack.test | RUN | 0.607935 | 1.659061 | 2.167998 | 0.001828 | 0.001910 | 0.001992 |
| value_to.test | RUN | 2.829340 | 17.607929 | 15.033878 | 0.003057 | 0.003260 | 0.003242 |
| value_ref.test | RUN | 0.680910 | 2.451299 | 2.717850 | 0.001968 | 0.002144 | 0.002020 |
| utf8.test | RUN | 0.516327 | 1.494095 | 1.796206 | 0.001840 | 0.001704 | 0.001888 |
| visit.test | RUN | 0.697475 | 2.564249 | 2.473834 | 0.001859 | 0.002000 | 0.001834 |
| d2s_intrinsics_test.test | RUN | 0.514588 | 1.651426 | 1.742480 | 0.001828 | 0.002020 | 0.001754 |
| d2s_table_test.test | RUN | 0.519857 | 1.788671 | 1.812540 | 0.001796 | 0.001862 | 0.001869 |
| d2s_test.test | RUN | 0.549399 | 2.124647 | 2.103144 | 0.001984 | 0.001976 | 0.001747 |
| parse_into.test | RUN | 17.504414 | 148.540164 | 90.182389 | 0.003352 | 0.002977 | 0.002803 |
| limits.test | RUN | 2.170062 | 12.249997 | 9.608545 | 0.002182 | 0.002092 | 0.002058 |
| header_only.test | RUN | 1.363167 | 9.557503 | 7.129273 | 0.001400 | 0.001717 | 0.001722 |
| no_exceptions.test | RUN | 1.968856 | 10.468533 | 9.516207 | 0.001931 | 0.001920 | 0.001738 |
| intrusive_macros.test | RUN | 1.675748 | 10.249477 | 7.749221 | 0.001898 | 0.001849 | 0.001974 |
| _gdb-printers.test | RUN | 0.291069 | 0.792551 | 0.983453 | 0.182250 | 0.279387 | 0.207959 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.886× | 0.896×, 0.877× | 0.971× |
| clang | 1.084× | 1.087×, 1.080× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.001646s | 0.001514s | 0.001672s | byte equality observed |
| basic_parser.test | 1 | 0.353967s | 0.212994s | 0.449577s | native test oracle; output varies |
| conversion.test | 10 | 0.000962s | 0.000990s | 0.001000s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000962s | 0.000985s | 0.001014s | byte equality observed |
| d2s_table_test.test | 10 | 0.000990s | 0.001011s | 0.000995s | byte equality observed |
| d2s_test.test | 10 | 0.001055s | 0.001060s | 0.001069s | byte equality observed |
| doc_background.test | 10 | 0.001015s | 0.001001s | 0.001003s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001062s | 0.001028s | 0.001044s | byte equality observed |
| doc_parsing.test | 10 | 0.001077s | 0.001050s | 0.001040s | byte equality observed |
| doc_quick_look.test | 10 | 0.001055s | 0.001029s | 0.001023s | byte equality observed |
| doc_serializing.test | 10 | 0.001033s | 0.000990s | 0.001004s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001039s | 0.001016s | 0.001016s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001036s | 0.000996s | 0.001009s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001041s | 0.000981s | 0.000990s | byte equality observed |
| double.test | 1 | 0.849585s | 0.824159s | 0.863120s | native test oracle; output varies |
| error.test | 10 | 0.001126s | 0.001039s | 0.001091s | byte equality observed |
| fwd.test | 10 | 0.001032s | 0.000977s | 0.000977s | byte equality observed |
| header_only.test | 10 | 0.000989s | 0.000957s | 0.000952s | byte equality observed |
| intrusive_macros.test | 10 | 0.001037s | 0.001019s | 0.001005s | byte equality observed |
| json.test | 10 | 0.001040s | 0.001006s | 0.000993s | byte equality observed |
| kind.test | 10 | 0.001060s | 0.001023s | 0.001014s | byte equality observed |
| limits.test | 10 | 0.001212s | 0.001212s | 0.001178s | byte equality observed |
| memory_resource.test | 10 | 0.001035s | 0.001040s | 0.001038s | byte equality observed |
| monotonic_resource.test | 10 | 0.001500s | 0.001369s | 0.001447s | byte equality observed |
| natvis.test | 10 | 0.001041s | 0.001042s | 0.001054s | byte equality observed |
| no_exceptions.test | 10 | 0.001041s | 0.001024s | 0.001021s | byte equality observed |
| null_resource.test | 10 | 0.001058s | 0.001048s | 0.001064s | byte equality observed |
| object.test | 5 | 0.003885s | 0.003463s | 0.003835s | native test oracle; output varies |
| parse.test | 10 | 0.001454s | 0.001417s | 0.001447s | byte equality observed |
| parse_into.test | 7 | 0.002371s | 0.002350s | 0.002249s | native test oracle; output varies |
| parser.test | 10 | 0.001169s | 0.001135s | 0.001159s | byte equality observed |
| pilfer.test | 10 | 0.000997s | 0.000997s | 0.000976s | byte equality observed |
| pointer.test | 10 | 0.001187s | 0.001167s | 0.001161s | byte equality observed |
| result_for.test | 10 | 0.001003s | 0.000981s | 0.001004s | byte equality observed |
| serialize.test | 10 | 0.001045s | 0.001070s | 0.001032s | byte equality observed |
| serializer.test | 10 | 0.001648s | 0.001666s | 0.001692s | byte equality observed |
| snippets.test | 10 | 0.001209s | 0.001173s | 0.001193s | byte equality observed |
| static_resource.test | 10 | 0.001092s | 0.001058s | 0.001090s | byte equality observed |
| storage_ptr.test | 10 | 0.001066s | 0.001055s | 0.001058s | byte equality observed |
| stream_parser.test | 1 | 0.049696s | 0.065405s | 0.046321s | native test oracle; output varies |
| string.test | 9 | 0.001757s | 0.001540s | 0.001717s | byte equality observed |
| string_view.test | 10 | 0.001003s | 0.000996s | 0.000998s | byte equality observed |
| utf8.test | 10 | 0.001018s | 0.000990s | 0.001028s | byte equality observed |
| value.test | 8 | 0.002190s | 0.001916s | 0.002370s | native test oracle; output varies |
| value_from.test | 10 | 0.001199s | 0.001142s | 0.001184s | byte equality observed |
| value_ref.test | 10 | 0.001094s | 0.001085s | 0.001045s | byte equality observed |
| value_stack.test | 10 | 0.001059s | 0.001038s | 0.001032s | byte equality observed |
| value_to.test | 10 | 0.001861s | 0.001750s | 0.001837s | native test oracle; output varies |
| visit.test | 10 | 0.001073s | 0.001040s | 0.001053s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
