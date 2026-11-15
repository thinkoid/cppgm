# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.286428 | 6.562444 | 6.885171 | 0.003352 | 0.003496 | 0.003712 |
| basic_parser.test | RUN | 7.450384 | 144.587062 | 101.404477 | 0.849544 | 0.278406 | 1.116196 |
| conversion.test | RUN | 0.859652 | 2.519586 | 3.633000 | 0.001774 | 0.002000 | 0.002215 |
| doc_background.test | RUN | 0.897412 | 2.526403 | 3.622860 | 0.002135 | 0.001920 | 0.001892 |
| doc_forward_conversion.test | RUN | 0.934448 | 2.946551 | 3.871657 | 0.002112 | 0.002255 | 0.002238 |
| doc_parsing.test | RUN | 0.901474 | 2.622567 | 3.615572 | 0.002142 | 0.002153 | 0.002255 |
| doc_quick_look.test | RUN | 1.173022 | 3.277934 | 4.941385 | 0.002069 | 0.002300 | 0.002227 |
| doc_serializing.test | RUN | 0.841922 | 2.398357 | 3.490058 | 0.002168 | 0.002111 | 0.002187 |
| doc_storage_ptr.test | RUN | 0.825621 | 2.523412 | 3.487487 | 0.002044 | 0.002224 | 0.002156 |
| doc_uses_allocator.test | RUN | 0.885949 | 2.341936 | 3.443850 | 0.002103 | 0.002339 | 0.002259 |
| doc_using_numbers.test | RUN | 0.931230 | 2.431415 | 3.764221 | 0.002048 | 0.002248 | 0.002138 |
| double.test | RUN | 0.999039 | 4.167575 | 4.545537 | 2.050937 | 2.020916 | 2.131201 |
| error.test | RUN | 0.687553 | 2.261371 | 2.809960 | 0.002084 | 0.002218 | 0.001943 |
| fwd.test | RUN | 0.817774 | 2.361861 | 3.197125 | 0.001959 | 0.002206 | 0.001872 |
| json.test | RUN | 0.850959 | 2.655246 | 3.893469 | 0.002021 | 0.002136 | 0.002305 |
| kind.test | RUN | 0.664339 | 2.207176 | 2.695784 | 0.002048 | 0.002231 | 0.002020 |
| memory_resource.test | RUN | 0.856153 | 2.845036 | 3.781851 | 0.001994 | 0.002272 | 0.002300 |
| monotonic_resource.test | RUN | 0.811283 | 2.728050 | 3.265428 | 0.003079 | 0.002717 | 0.002805 |
| natvis.test | RUN | 0.870952 | 2.542488 | 3.441721 | 0.002169 | 0.002208 | 0.002331 |
| null_resource.test | RUN | 0.714773 | 2.248682 | 2.657551 | 0.001858 | 0.002410 | 0.002245 |
| object.test | RUN | 1.444079 | 7.656928 | 8.131882 | 0.008003 | 0.007753 | 0.009829 |
| parse.test | RUN | 0.945537 | 3.912945 | 3.946800 | 0.002979 | 0.002892 | 0.003006 |
| parser.test | RUN | 0.904978 | 3.364181 | 3.416739 | 0.002404 | 0.002359 | 0.002502 |
| pilfer.test | RUN | 0.482193 | 1.538669 | 1.528715 | 0.002048 | 0.002095 | 0.001805 |
| pointer.test | RUN | 1.033466 | 4.567019 | 4.670848 | 0.002233 | 0.002565 | 0.002682 |
| result_for.test | RUN | 0.877591 | 2.681522 | 3.400722 | 0.001874 | 0.002010 | 0.001918 |
| serialize.test | RUN | 0.867343 | 2.813547 | 3.388348 | 0.002084 | 0.002329 | 0.002271 |
| serializer.test | RUN | 1.389239 | 8.125156 | 7.998836 | 0.003385 | 0.003511 | 0.003469 |
| snippets.test | RUN | 2.131743 | 10.798275 | 11.190165 | 0.002464 | 0.002534 | 0.002059 |
| static_resource.test | RUN | 0.849613 | 2.476041 | 3.152385 | 0.002152 | 0.002254 | 0.001938 |
| storage_ptr.test | RUN | 0.894987 | 2.610995 | 3.373189 | 0.002102 | 0.002000 | 0.002316 |
| stream_parser.test | RUN | 1.061918 | 4.723730 | 4.312354 | 0.122251 | 0.143260 | 0.129787 |
| string.test | RUN | 1.854943 | 11.359525 | 11.090310 | 0.003721 | 0.002955 | 0.003448 |
| string_view.test | RUN | 0.533720 | 1.489122 | 2.080014 | 0.001903 | 0.001851 | 0.002144 |
| value.test | RUN | 1.918175 | 12.630116 | 9.846369 | 0.004773 | 0.004491 | 0.005617 |
| value_from.test | RUN | 1.668233 | 7.200398 | 8.531495 | 0.002367 | 0.002284 | 0.002522 |
| value_stack.test | RUN | 0.850768 | 2.298578 | 3.297412 | 0.002106 | 0.001990 | 0.002012 |
| value_to.test | RUN | 4.102034 | 22.952804 | 21.500660 | 0.003946 | 0.004250 | 0.004032 |
| value_ref.test | RUN | 0.949024 | 3.637846 | 4.180262 | 0.002136 | 0.002191 | 0.002394 |
| utf8.test | RUN | 0.724714 | 2.284498 | 2.927844 | 0.002039 | 0.002249 | 0.002171 |
| visit.test | RUN | 0.964855 | 3.631248 | 4.036174 | 0.001927 | 0.002336 | 0.002280 |
| d2s_intrinsics_test.test | RUN | 0.728625 | 2.180396 | 2.809962 | 0.002091 | 0.002138 | 0.001880 |
| d2s_table_test.test | RUN | 0.722330 | 2.404043 | 2.878751 | 0.002071 | 0.001985 | 0.002198 |
| d2s_test.test | RUN | 0.751905 | 2.766248 | 2.985996 | 0.002283 | 0.002058 | 0.002262 |
| parse_into.test | RUN | 22.171100 | 183.634648 | 122.148306 | 0.003584 | 0.003250 | 0.003294 |
| limits.test | RUN | 2.986115 | 15.500016 | 13.265726 | 0.002536 | 0.002452 | 0.002266 |
| header_only.test | RUN | 1.845326 | 13.292186 | 10.613382 | 0.001907 | 0.002034 | 0.001944 |
| no_exceptions.test | RUN | 2.693463 | 14.219774 | 12.905279 | 0.002257 | 0.002111 | 0.001998 |
| intrusive_macros.test | RUN | 2.263376 | 14.172693 | 12.015659 | 0.002212 | 0.002043 | 0.002234 |
| _gdb-printers.test | RUN | 0.406415 | 1.006574 | 1.622500 | 0.233283 | 0.361190 | 0.273904 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.886× | 0.873×, 0.898× | 1.023× |
| clang | 1.075× | 1.076×, 1.074× | 0.986× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002070s | 0.001854s | 0.001996s | native test oracle; output varies |
| basic_parser.test | 1 | 0.487831s | 0.302198s | 0.653576s | native test oracle; output varies |
| conversion.test | 10 | 0.001177s | 0.001175s | 0.001148s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001160s | 0.001197s | 0.001155s | byte equality observed |
| d2s_table_test.test | 10 | 0.001180s | 0.001206s | 0.001177s | byte equality observed |
| d2s_test.test | 10 | 0.001257s | 0.001287s | 0.001223s | byte equality observed |
| doc_background.test | 10 | 0.001187s | 0.001192s | 0.001168s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001217s | 0.001249s | 0.001206s | byte equality observed |
| doc_parsing.test | 10 | 0.001253s | 0.001251s | 0.001214s | byte equality observed |
| doc_quick_look.test | 10 | 0.001228s | 0.001258s | 0.001203s | byte equality observed |
| doc_serializing.test | 10 | 0.001197s | 0.001195s | 0.001175s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001216s | 0.001223s | 0.001212s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001229s | 0.001200s | 0.001167s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001234s | 0.001195s | 0.001196s | byte equality observed |
| double.test | 1 | 1.188191s | 1.179590s | 1.182075s | native test oracle; output varies |
| error.test | 10 | 0.001314s | 0.001271s | 0.001304s | byte equality observed |
| fwd.test | 10 | 0.001193s | 0.001198s | 0.001185s | byte equality observed |
| header_only.test | 10 | 0.001184s | 0.001176s | 0.001164s | byte equality observed |
| intrusive_macros.test | 10 | 0.001242s | 0.001223s | 0.001216s | byte equality observed |
| json.test | 10 | 0.001215s | 0.001217s | 0.001194s | byte equality observed |
| kind.test | 10 | 0.001237s | 0.001242s | 0.001203s | byte equality observed |
| limits.test | 10 | 0.001448s | 0.001433s | 0.001410s | byte equality observed |
| memory_resource.test | 10 | 0.001235s | 0.001243s | 0.001208s | byte equality observed |
| monotonic_resource.test | 10 | 0.001769s | 0.001600s | 0.001689s | native test oracle; output varies |
| natvis.test | 10 | 0.001235s | 0.001242s | 0.001209s | byte equality observed |
| no_exceptions.test | 10 | 0.001229s | 0.001236s | 0.001199s | byte equality observed |
| null_resource.test | 10 | 0.001256s | 0.001257s | 0.001244s | byte equality observed |
| object.test | 4 | 0.005015s | 0.004073s | 0.004892s | native test oracle; output varies |
| parse.test | 10 | 0.001691s | 0.001691s | 0.001677s | byte equality observed |
| parse_into.test | 6 | 0.002744s | 0.002623s | 0.002471s | native test oracle; output varies |
| parser.test | 10 | 0.001379s | 0.001391s | 0.001350s | byte equality observed |
| pilfer.test | 10 | 0.001171s | 0.001197s | 0.001174s | byte equality observed |
| pointer.test | 10 | 0.001421s | 0.001437s | 0.001405s | byte equality observed |
| result_for.test | 10 | 0.001206s | 0.001200s | 0.001201s | byte equality observed |
| serialize.test | 10 | 0.001241s | 0.001260s | 0.001250s | byte equality observed |
| serializer.test | 7 | 0.002003s | 0.002007s | 0.001986s | native test oracle; output varies |
| snippets.test | 10 | 0.001435s | 0.001419s | 0.001404s | byte equality observed |
| static_resource.test | 10 | 0.001291s | 0.001275s | 0.001273s | byte equality observed |
| storage_ptr.test | 10 | 0.001258s | 0.001256s | 0.001258s | byte equality observed |
| stream_parser.test | 1 | 0.080169s | 0.078066s | 0.056988s | native test oracle; output varies |
| string.test | 8 | 0.002040s | 0.001786s | 0.001995s | native test oracle; output varies |
| string_view.test | 10 | 0.001183s | 0.001195s | 0.001181s | byte equality observed |
| utf8.test | 10 | 0.001193s | 0.001184s | 0.001196s | byte equality observed |
| value.test | 7 | 0.002641s | 0.002388s | 0.002942s | native test oracle; output varies |
| value_from.test | 10 | 0.001396s | 0.001387s | 0.001364s | byte equality observed |
| value_ref.test | 10 | 0.001269s | 0.001249s | 0.001224s | byte equality observed |
| value_stack.test | 10 | 0.001255s | 0.001223s | 0.001236s | byte equality observed |
| value_to.test | 8 | 0.002208s | 0.002151s | 0.002153s | native test oracle; output varies |
| visit.test | 10 | 0.001252s | 0.001225s | 0.001215s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
