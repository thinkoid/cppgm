# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.950776 | 5.088280 | 4.508702 | 0.002728 | 0.002891 | 0.002874 |
| basic_parser.test | RUN | 5.547937 | 140.261243 | 79.743098 | 0.535222 | 0.198157 | 0.434133 |
| conversion.test | RUN | 0.669672 | 1.940809 | 2.274225 | 0.001594 | 0.001928 | 0.001770 |
| doc_background.test | RUN | 0.676562 | 1.897638 | 2.280100 | 0.001927 | 0.002024 | 0.001800 |
| doc_forward_conversion.test | RUN | 0.683799 | 2.204583 | 2.591616 | 0.001796 | 0.001786 | 0.001832 |
| doc_parsing.test | RUN | 0.692593 | 1.970603 | 2.431918 | 0.002036 | 0.001996 | 0.001854 |
| doc_quick_look.test | RUN | 0.911756 | 2.435640 | 3.217770 | 0.001883 | 0.001848 | 0.001796 |
| doc_serializing.test | RUN | 0.643852 | 1.800891 | 2.189538 | 0.001856 | 0.001579 | 0.001751 |
| doc_storage_ptr.test | RUN | 0.634797 | 1.769037 | 2.198626 | 0.001738 | 0.001720 | 0.001927 |
| doc_uses_allocator.test | RUN | 0.656138 | 1.733627 | 2.186416 | 0.001976 | 0.001603 | 0.001747 |
| doc_using_numbers.test | RUN | 0.694317 | 1.808796 | 2.404712 | 0.001811 | 0.001850 | 0.001766 |
| double.test | RUN | 0.747939 | 3.218453 | 2.829346 | 1.365332 | 1.355607 | 1.484548 |
| error.test | RUN | 0.527026 | 1.730260 | 1.658443 | 0.002012 | 0.001931 | 0.001841 |
| fwd.test | RUN | 0.663266 | 1.706758 | 2.079439 | 0.001862 | 0.001770 | 0.001832 |
| json.test | RUN | 0.671993 | 2.007475 | 2.638692 | 0.001849 | 0.002055 | 0.001866 |
| kind.test | RUN | 0.488682 | 1.586606 | 1.781713 | 0.001620 | 0.001607 | 0.001892 |
| memory_resource.test | RUN | 0.683504 | 2.168369 | 2.306234 | 0.001933 | 0.001957 | 0.001982 |
| monotonic_resource.test | RUN | 0.644624 | 2.064810 | 2.106852 | 0.002564 | 0.002484 | 0.002378 |
| natvis.test | RUN | 0.665965 | 1.950516 | 2.339358 | 0.001895 | 0.002043 | 0.002034 |
| null_resource.test | RUN | 0.548295 | 1.667537 | 1.723790 | 0.001768 | 0.002205 | 0.001833 |
| object.test | RUN | 1.094967 | 5.923910 | 4.874373 | 0.006822 | 0.005615 | 0.006531 |
| parse.test | RUN | 0.706542 | 3.024575 | 2.671229 | 0.002324 | 0.002701 | 0.003230 |
| parser.test | RUN | 0.683718 | 2.615930 | 2.517500 | 0.001968 | 0.002224 | 0.001894 |
| pilfer.test | RUN | 0.352561 | 1.159339 | 1.043733 | 0.001792 | 0.001834 | 0.001699 |
| pointer.test | RUN | 0.771288 | 3.470353 | 3.253346 | 0.002068 | 0.002304 | 0.002126 |
| result_for.test | RUN | 0.640111 | 2.055570 | 2.249534 | 0.001664 | 0.001966 | 0.001566 |
| serialize.test | RUN | 0.649592 | 2.139799 | 2.320193 | 0.001938 | 0.002256 | 0.002056 |
| serializer.test | RUN | 1.033308 | 6.012093 | 5.340953 | 0.002644 | 0.002986 | 0.002998 |
| snippets.test | RUN | 1.564845 | 8.632702 | 7.755707 | 0.002283 | 0.002109 | 0.002076 |
| static_resource.test | RUN | 0.657846 | 1.939047 | 2.198699 | 0.002012 | 0.002104 | 0.002074 |
| storage_ptr.test | RUN | 0.691001 | 2.005780 | 2.294516 | 0.002026 | 0.002215 | 0.002004 |
| stream_parser.test | RUN | 0.802831 | 3.519330 | 2.883898 | 0.080486 | 0.105666 | 0.080742 |
| string.test | RUN | 1.421116 | 9.144380 | 8.317535 | 0.003135 | 0.002856 | 0.002872 |
| string_view.test | RUN | 0.408431 | 1.074044 | 1.099555 | 0.001923 | 0.001819 | 0.001798 |
| value.test | RUN | 1.476038 | 10.353574 | 7.093813 | 0.003892 | 0.003685 | 0.004259 |
| value_from.test | RUN | 1.305004 | 5.479920 | 5.039440 | 0.002152 | 0.001982 | 0.002194 |
| value_stack.test | RUN | 0.653110 | 1.885448 | 2.055501 | 0.001888 | 0.001842 | 0.001816 |
| value_to.test | RUN | 3.117054 | 18.630999 | 15.346576 | 0.003286 | 0.003246 | 0.003251 |
| value_ref.test | RUN | 0.737213 | 2.441722 | 2.589538 | 0.001849 | 0.002169 | 0.001993 |
| utf8.test | RUN | 0.554656 | 1.689536 | 1.826308 | 0.001876 | 0.001916 | 0.001873 |
| visit.test | RUN | 0.745591 | 2.603276 | 2.570010 | 0.001860 | 0.001952 | 0.001912 |
| d2s_intrinsics_test.test | RUN | 0.544505 | 1.530738 | 1.720934 | 0.001938 | 0.002036 | 0.001879 |
| d2s_table_test.test | RUN | 0.555393 | 1.694227 | 1.763007 | 0.001942 | 0.001951 | 0.001920 |
| d2s_test.test | RUN | 0.581637 | 1.969198 | 2.041007 | 0.002020 | 0.002072 | 0.002000 |
| parse_into.test | RUN | 17.745842 | 161.404000 | 94.014137 | 0.003244 | 0.003151 | 0.003349 |
| limits.test | RUN | 2.211141 | 13.101264 | 9.948828 | 0.002156 | 0.002188 | 0.002096 |
| header_only.test | RUN | 1.389018 | 9.601270 | 7.154783 | 0.001860 | 0.002026 | 0.001855 |
| no_exceptions.test | RUN | 2.053845 | 10.559387 | 8.855430 | 0.001831 | 0.002066 | 0.001943 |
| intrusive_macros.test | RUN | 1.716091 | 10.983709 | 8.036237 | 0.002061 | 0.002105 | 0.001790 |
| _gdb-printers.test | RUN | 0.306636 | 0.715253 | 1.114209 | 0.189566 | 0.270775 | 0.259445 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.866× | 0.872×, 0.860× | 1.018× |
| clang | 1.047×† | 1.019×, 1.075× | 0.967× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001666s | 0.001504s | 0.001656s | byte equality observed |
| basic_parser.test | 1 | 0.354295s | 0.211435s | 0.443016s | native test oracle; output varies |
| conversion.test | 10 | 0.000979s | 0.000981s | 0.000992s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000977s | 0.000980s | 0.000981s | byte equality observed |
| d2s_table_test.test | 10 | 0.001002s | 0.000990s | 0.000995s | byte equality observed |
| d2s_test.test | 10 | 0.001062s | 0.001043s | 0.001039s | byte equality observed |
| doc_background.test | 10 | 0.001020s | 0.001001s | 0.000994s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001041s | 0.001038s | 0.001020s | byte equality observed |
| doc_parsing.test | 10 | 0.001045s | 0.001051s | 0.001075s | byte equality observed |
| doc_quick_look.test | 10 | 0.001020s | 0.001015s | 0.001021s | byte equality observed |
| doc_serializing.test | 10 | 0.001025s | 0.001021s | 0.000987s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001037s | 0.001057s | 0.000998s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001037s | 0.001001s | 0.001007s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001023s | 0.000993s | 0.001023s | byte equality observed |
| double.test | 1 | 0.883750s | 0.832919s | 0.890303s | native test oracle; output varies |
| error.test | 10 | 0.001095s | 0.001078s | 0.001118s | byte equality observed |
| fwd.test | 10 | 0.000986s | 0.000989s | 0.000985s | byte equality observed |
| header_only.test | 10 | 0.000981s | 0.000973s | 0.000985s | byte equality observed |
| intrusive_macros.test | 10 | 0.001031s | 0.001030s | 0.001021s | byte equality observed |
| json.test | 10 | 0.001022s | 0.001007s | 0.001018s | byte equality observed |
| kind.test | 10 | 0.001044s | 0.001030s | 0.001035s | byte equality observed |
| limits.test | 10 | 0.001236s | 0.001179s | 0.001214s | byte equality observed |
| memory_resource.test | 10 | 0.001026s | 0.001019s | 0.001023s | byte equality observed |
| monotonic_resource.test | 10 | 0.001466s | 0.001348s | 0.001405s | byte equality observed |
| natvis.test | 10 | 0.001043s | 0.001028s | 0.001042s | byte equality observed |
| no_exceptions.test | 10 | 0.001044s | 0.001032s | 0.001032s | byte equality observed |
| null_resource.test | 10 | 0.001059s | 0.001055s | 0.001061s | byte equality observed |
| object.test | 5 | 0.003944s | 0.003210s | 0.003772s | native test oracle; output varies |
| parse.test | 10 | 0.001441s | 0.001405s | 0.001456s | byte equality observed |
| parse_into.test | 7 | 0.002455s | 0.002212s | 0.002228s | native test oracle; output varies |
| parser.test | 10 | 0.001165s | 0.001134s | 0.001149s | byte equality observed |
| pilfer.test | 10 | 0.000990s | 0.000996s | 0.001008s | byte equality observed |
| pointer.test | 10 | 0.001220s | 0.001202s | 0.001195s | byte equality observed |
| result_for.test | 10 | 0.001005s | 0.000997s | 0.000988s | byte equality observed |
| serialize.test | 10 | 0.001069s | 0.001058s | 0.001041s | byte equality observed |
| serializer.test | 10 | 0.001689s | 0.001672s | 0.001658s | byte equality observed |
| snippets.test | 10 | 0.001240s | 0.001193s | 0.001187s | byte equality observed |
| static_resource.test | 10 | 0.001080s | 0.001069s | 0.001061s | byte equality observed |
| storage_ptr.test | 10 | 0.001062s | 0.001059s | 0.001062s | byte equality observed |
| stream_parser.test | 1 | 0.050339s | 0.065124s | 0.046791s | native test oracle; output varies |
| string.test | 9 | 0.001717s | 0.001482s | 0.001716s | byte equality observed |
| string_view.test | 10 | 0.000985s | 0.000999s | 0.000995s | byte equality observed |
| utf8.test | 10 | 0.000993s | 0.000997s | 0.000979s | byte equality observed |
| value.test | 8 | 0.002136s | 0.001917s | 0.002385s | native test oracle; output varies |
| value_from.test | 10 | 0.001179s | 0.001151s | 0.001169s | byte equality observed |
| value_ref.test | 10 | 0.001072s | 0.001053s | 0.001052s | byte equality observed |
| value_stack.test | 10 | 0.001053s | 0.001055s | 0.001064s | byte equality observed |
| value_to.test | 10 | 0.001872s | 0.001747s | 0.001880s | native test oracle; output varies |
| visit.test | 10 | 0.001054s | 0.001067s | 0.001046s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
