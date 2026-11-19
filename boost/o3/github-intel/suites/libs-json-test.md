# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.786417 | 4.339123 | 3.626100 | 0.002102 | 0.002190 | 0.001884 |
| basic_parser.test | RUN | 4.798948 | 104.417252 | 61.159524 | 0.404944 | 0.180958 | 0.502359 |
| conversion.test | RUN | 0.525098 | 1.575639 | 1.789790 | 0.001207 | 0.001114 | 0.001282 |
| doc_background.test | RUN | 0.523417 | 1.552959 | 1.764844 | 0.001164 | 0.001350 | 0.001243 |
| doc_forward_conversion.test | RUN | 0.544097 | 1.788661 | 2.004549 | 0.001281 | 0.001225 | 0.001289 |
| doc_parsing.test | RUN | 0.581269 | 1.707990 | 1.830067 | 0.001422 | 0.001294 | 0.001176 |
| doc_quick_look.test | RUN | 0.745514 | 2.087100 | 2.462953 | 0.001245 | 0.001467 | 0.001235 |
| doc_serializing.test | RUN | 0.498442 | 1.518289 | 1.690610 | 0.001325 | 0.001271 | 0.001114 |
| doc_storage_ptr.test | RUN | 0.499339 | 1.577685 | 1.724302 | 0.001225 | 0.001066 | 0.001335 |
| doc_uses_allocator.test | RUN | 0.517476 | 1.515844 | 1.706770 | 0.001452 | 0.001419 | 0.001235 |
| doc_using_numbers.test | RUN | 0.556077 | 1.585451 | 1.851519 | 0.001276 | 0.001305 | 0.001451 |
| double.test | RUN | 0.606089 | 2.719136 | 2.189742 | 1.239604 | 1.216980 | 1.296734 |
| error.test | RUN | 0.421514 | 1.539061 | 1.393873 | 0.001259 | 0.001344 | 0.001199 |
| fwd.test | RUN | 0.474946 | 1.497504 | 1.642173 | 0.001246 | 0.001425 | 0.001256 |
| json.test | RUN | 0.501035 | 1.694901 | 1.917167 | 0.001195 | 0.001236 | 0.001388 |
| kind.test | RUN | 0.367866 | 1.417466 | 1.407813 | 0.001281 | 0.001545 | 0.001282 |
| memory_resource.test | RUN | 0.517452 | 1.823955 | 1.885464 | 0.001184 | 0.001508 | 0.001370 |
| monotonic_resource.test | RUN | 0.466968 | 1.755265 | 1.739129 | 0.001950 | 0.001915 | 0.001788 |
| natvis.test | RUN | 0.500297 | 1.654401 | 1.744690 | 0.001278 | 0.001399 | 0.001166 |
| null_resource.test | RUN | 0.419859 | 1.355339 | 1.434983 | 0.001243 | 0.001439 | 0.001342 |
| object.test | RUN | 0.901021 | 5.092019 | 4.177696 | 0.005305 | 0.004426 | 0.004948 |
| parse.test | RUN | 0.559597 | 2.530399 | 2.090886 | 0.001870 | 0.001796 | 0.001763 |
| parser.test | RUN | 0.529683 | 2.146305 | 1.943221 | 0.001341 | 0.001506 | 0.001533 |
| pilfer.test | RUN | 0.285312 | 0.958472 | 0.960264 | 0.001376 | 0.001361 | 0.001372 |
| pointer.test | RUN | 0.630922 | 2.942435 | 2.489887 | 0.001650 | 0.001555 | 0.001422 |
| result_for.test | RUN | 0.507511 | 1.726210 | 1.827333 | 0.001292 | 0.001413 | 0.001330 |
| serialize.test | RUN | 0.515705 | 1.822916 | 1.793714 | 0.001402 | 0.001438 | 0.001387 |
| serializer.test | RUN | 0.871827 | 5.204728 | 4.140590 | 0.002308 | 0.002366 | 0.002118 |
| snippets.test | RUN | 1.383323 | 7.263350 | 6.240587 | 0.001566 | 0.001612 | 0.001559 |
| static_resource.test | RUN | 0.498514 | 1.660124 | 1.665524 | 0.001469 | 0.001351 | 0.001382 |
| storage_ptr.test | RUN | 0.517295 | 1.742400 | 1.849536 | 0.001321 | 0.001500 | 0.001240 |
| stream_parser.test | RUN | 0.651864 | 3.522292 | 2.620210 | 0.072958 | 0.073944 | 0.066814 |
| string.test | RUN | 1.275727 | 8.183449 | 6.458918 | 0.002056 | 0.001752 | 0.002194 |
| string_view.test | RUN | 0.307494 | 1.061642 | 1.066422 | 0.001284 | 0.001282 | 0.001157 |
| value.test | RUN | 1.154587 | 8.882067 | 5.603106 | 0.002961 | 0.002796 | 0.003108 |
| value_from.test | RUN | 1.062121 | 5.215120 | 4.751268 | 0.001511 | 0.001491 | 0.001396 |
| value_stack.test | RUN | 0.495559 | 1.573465 | 1.652263 | 0.001392 | 0.001528 | 0.001309 |
| value_to.test | RUN | 2.570758 | 16.487015 | 12.279236 | 0.002332 | 0.002422 | 0.002228 |
| value_ref.test | RUN | 0.570998 | 2.288772 | 2.088732 | 0.001408 | 0.001409 | 0.001351 |
| utf8.test | RUN | 0.420447 | 1.489069 | 1.439141 | 0.001283 | 0.001509 | 0.001251 |
| visit.test | RUN | 0.566058 | 2.309204 | 2.020739 | 0.001315 | 0.001290 | 0.001322 |
| d2s_intrinsics_test.test | RUN | 0.416707 | 1.315540 | 1.401426 | 0.001292 | 0.001236 | 0.001459 |
| d2s_table_test.test | RUN | 0.423299 | 1.528858 | 1.411118 | 0.001335 | 0.001371 | 0.001185 |
| d2s_test.test | RUN | 0.445131 | 1.932667 | 1.725371 | 0.001436 | 0.001319 | 0.001218 |
| parse_into.test | RUN | 17.211607 | 135.677673 | 82.085838 | 0.002550 | 0.002401 | 0.002310 |
| limits.test | RUN | 1.883669 | 12.229085 | 7.845035 | 0.001470 | 0.001554 | 0.001580 |
| header_only.test | RUN | 1.294091 | 8.846829 | 5.923110 | 0.001270 | 0.001420 | 0.001231 |
| no_exceptions.test | RUN | 1.763310 | 9.951908 | 7.576194 | 0.001128 | 0.001447 | 0.001203 |
| intrusive_macros.test | RUN | 1.509949 | 9.890237 | 6.436191 | 0.001229 | 0.001341 | 0.001205 |
| _gdb-printers.test | RUN | 0.230157 | 0.681669 | 0.829256 | 0.153438 | 0.183512 | 0.168084 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.893× | 0.889×, 0.898× | 0.992× |
| clang | 1.146× | 1.145×, 1.147× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001363s | 0.001220s | 0.001334s | byte equality observed |
| basic_parser.test | 1 | 0.285719s | 0.189100s | 0.427601s | native test oracle; output varies |
| conversion.test | 10 | 0.000738s | 0.000723s | 0.000721s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000727s | 0.000724s | 0.000739s | byte equality observed |
| d2s_table_test.test | 10 | 0.000751s | 0.000741s | 0.000741s | byte equality observed |
| d2s_test.test | 10 | 0.000790s | 0.000775s | 0.000779s | byte equality observed |
| doc_background.test | 10 | 0.000757s | 0.000720s | 0.000724s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000787s | 0.000758s | 0.000758s | byte equality observed |
| doc_parsing.test | 10 | 0.000793s | 0.000781s | 0.000774s | byte equality observed |
| doc_quick_look.test | 10 | 0.000770s | 0.000742s | 0.000733s | byte equality observed |
| doc_serializing.test | 10 | 0.000776s | 0.000730s | 0.000719s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000761s | 0.000759s | 0.000733s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000756s | 0.000723s | 0.000734s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000755s | 0.000719s | 0.000724s | byte equality observed |
| double.test | 1 | 0.831792s | 0.807207s | 0.867114s | native test oracle; output varies |
| error.test | 10 | 0.000872s | 0.000800s | 0.000861s | byte equality observed |
| fwd.test | 10 | 0.000760s | 0.000757s | 0.000768s | byte equality observed |
| header_only.test | 10 | 0.000749s | 0.000732s | 0.000731s | byte equality observed |
| intrusive_macros.test | 10 | 0.000786s | 0.000774s | 0.000780s | byte equality observed |
| json.test | 10 | 0.000771s | 0.000767s | 0.000764s | byte equality observed |
| kind.test | 10 | 0.000795s | 0.000773s | 0.000780s | byte equality observed |
| limits.test | 10 | 0.000935s | 0.000907s | 0.000905s | byte equality observed |
| memory_resource.test | 10 | 0.000779s | 0.000768s | 0.000767s | byte equality observed |
| monotonic_resource.test | 10 | 0.001175s | 0.001144s | 0.001150s | byte equality observed |
| natvis.test | 10 | 0.000798s | 0.000783s | 0.000766s | byte equality observed |
| no_exceptions.test | 10 | 0.000780s | 0.000787s | 0.000773s | byte equality observed |
| null_resource.test | 10 | 0.000811s | 0.000791s | 0.000780s | byte equality observed |
| object.test | 6 | 0.003367s | 0.002812s | 0.003400s | native test oracle; output varies |
| parse.test | 10 | 0.001104s | 0.001095s | 0.001088s | byte equality observed |
| parse_into.test | 8 | 0.001894s | 0.001755s | 0.001721s | native test oracle; output varies |
| parser.test | 10 | 0.000889s | 0.000858s | 0.000861s | byte equality observed |
| pilfer.test | 10 | 0.000761s | 0.000757s | 0.000748s | byte equality observed |
| pointer.test | 10 | 0.000924s | 0.000909s | 0.000904s | byte equality observed |
| result_for.test | 10 | 0.000754s | 0.000766s | 0.000751s | byte equality observed |
| serialize.test | 10 | 0.000800s | 0.000804s | 0.000778s | byte equality observed |
| serializer.test | 10 | 0.001364s | 0.001367s | 0.001336s | byte equality observed |
| snippets.test | 10 | 0.000929s | 0.000907s | 0.000901s | byte equality observed |
| static_resource.test | 10 | 0.000829s | 0.000804s | 0.000813s | byte equality observed |
| storage_ptr.test | 10 | 0.000800s | 0.000794s | 0.000788s | byte equality observed |
| stream_parser.test | 1 | 0.042810s | 0.040017s | 0.042950s | native test oracle; output varies |
| string.test | 10 | 0.001349s | 0.001150s | 0.001339s | byte equality observed |
| string_view.test | 10 | 0.000757s | 0.000760s | 0.000737s | byte equality observed |
| utf8.test | 10 | 0.000763s | 0.000753s | 0.000747s | byte equality observed |
| value.test | 10 | 0.001706s | 0.001587s | 0.001956s | native test oracle; output varies |
| value_from.test | 10 | 0.000904s | 0.000886s | 0.000871s | byte equality observed |
| value_ref.test | 10 | 0.000808s | 0.000800s | 0.000788s | byte equality observed |
| value_stack.test | 10 | 0.000796s | 0.000781s | 0.000753s | byte equality observed |
| value_to.test | 10 | 0.001435s | 0.001426s | 0.001411s | byte equality observed |
| visit.test | 10 | 0.000785s | 0.000776s | 0.000746s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
