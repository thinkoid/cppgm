# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.763513 | 4.350244 | 3.667750 | 0.002047 | 0.002190 | 0.002105 |
| basic_parser.test | RUN | 4.781024 | 110.769300 | 61.735327 | 0.412860 | 0.181465 | 0.601866 |
| conversion.test | RUN | 0.500197 | 1.599755 | 1.816882 | 0.001196 | 0.001398 | 0.001280 |
| doc_background.test | RUN | 0.513430 | 1.617266 | 1.786783 | 0.001218 | 0.001349 | 0.001207 |
| doc_forward_conversion.test | RUN | 0.560948 | 1.874266 | 2.011405 | 0.001453 | 0.001513 | 0.001163 |
| doc_parsing.test | RUN | 0.569856 | 1.753573 | 1.834186 | 0.001350 | 0.001580 | 0.001143 |
| doc_quick_look.test | RUN | 0.720221 | 2.087698 | 2.486134 | 0.001282 | 0.001380 | 0.001271 |
| doc_serializing.test | RUN | 0.494668 | 1.546133 | 1.675453 | 0.001270 | 0.001359 | 0.001290 |
| doc_storage_ptr.test | RUN | 0.496386 | 1.615139 | 1.719051 | 0.001273 | 0.001485 | 0.001203 |
| doc_uses_allocator.test | RUN | 0.504775 | 1.562283 | 1.712755 | 0.001401 | 0.001252 | 0.001338 |
| doc_using_numbers.test | RUN | 0.562369 | 1.623570 | 1.875561 | 0.001363 | 0.001375 | 0.001316 |
| double.test | RUN | 0.592997 | 2.771620 | 2.137653 | 1.220878 | 1.215057 | 1.297379 |
| error.test | RUN | 0.434962 | 1.565114 | 1.406866 | 0.001371 | 0.001317 | 0.001249 |
| fwd.test | RUN | 0.486361 | 1.528525 | 1.640974 | 0.001225 | 0.001309 | 0.001251 |
| json.test | RUN | 0.519605 | 1.805719 | 1.998441 | 0.001356 | 0.001368 | 0.001108 |
| kind.test | RUN | 0.398873 | 1.396523 | 1.365352 | 0.001258 | 0.001523 | 0.001325 |
| memory_resource.test | RUN | 0.529975 | 1.902693 | 1.868107 | 0.001255 | 0.001474 | 0.001245 |
| monotonic_resource.test | RUN | 0.498167 | 1.778052 | 1.777956 | 0.001917 | 0.001924 | 0.001848 |
| natvis.test | RUN | 0.494471 | 1.700204 | 1.752047 | 0.001204 | 0.001327 | 0.001296 |
| null_resource.test | RUN | 0.418096 | 1.458416 | 1.431988 | 0.001201 | 0.001633 | 0.001353 |
| object.test | RUN | 0.889918 | 5.197160 | 4.447363 | 0.005161 | 0.004588 | 0.005196 |
| parse.test | RUN | 0.557683 | 2.593685 | 2.000509 | 0.001682 | 0.002142 | 0.001869 |
| parser.test | RUN | 0.525577 | 2.216159 | 1.923244 | 0.001349 | 0.001546 | 0.001488 |
| pilfer.test | RUN | 0.277167 | 0.994939 | 0.948194 | 0.001163 | 0.001320 | 0.001201 |
| pointer.test | RUN | 0.622585 | 2.993554 | 2.442008 | 0.001652 | 0.001646 | 0.001617 |
| result_for.test | RUN | 0.508815 | 1.775586 | 1.860565 | 0.001199 | 0.001318 | 0.001314 |
| serialize.test | RUN | 0.514272 | 1.849720 | 1.799723 | 0.001316 | 0.001395 | 0.001224 |
| serializer.test | RUN | 0.865537 | 5.323993 | 4.164271 | 0.002070 | 0.002424 | 0.002193 |
| snippets.test | RUN | 1.381828 | 7.459453 | 6.004317 | 0.001601 | 0.001786 | 0.001581 |
| static_resource.test | RUN | 0.495927 | 1.688955 | 1.747961 | 0.001383 | 0.001690 | 0.001364 |
| storage_ptr.test | RUN | 0.519776 | 1.780555 | 1.839669 | 0.001327 | 0.001716 | 0.001285 |
| stream_parser.test | RUN | 0.642095 | 3.577334 | 2.708797 | 0.068557 | 0.074779 | 0.065044 |
| string.test | RUN | 1.264890 | 8.463758 | 6.656508 | 0.002164 | 0.002129 | 0.002102 |
| string_view.test | RUN | 0.309552 | 1.075411 | 1.038278 | 0.001287 | 0.001499 | 0.001227 |
| value.test | RUN | 1.159542 | 9.159309 | 5.421784 | 0.002721 | 0.002663 | 0.003440 |
| value_from.test | RUN | 1.060301 | 5.369484 | 4.798057 | 0.001588 | 0.001735 | 0.001515 |
| value_stack.test | RUN | 0.494688 | 1.615065 | 1.673139 | 0.001238 | 0.001648 | 0.001413 |
| value_to.test | RUN | 2.544147 | 16.985196 | 12.395144 | 0.002254 | 0.002740 | 0.002379 |
| value_ref.test | RUN | 0.567586 | 2.270565 | 2.087007 | 0.001304 | 0.001494 | 0.001316 |
| utf8.test | RUN | 0.417968 | 1.475641 | 1.439233 | 0.001165 | 0.001769 | 0.001266 |
| visit.test | RUN | 0.561403 | 2.492345 | 2.021069 | 0.001219 | 0.001640 | 0.001394 |
| d2s_intrinsics_test.test | RUN | 0.409058 | 1.469946 | 1.391534 | 0.001301 | 0.001612 | 0.001285 |
| d2s_table_test.test | RUN | 0.427033 | 1.531359 | 1.464872 | 0.001285 | 0.001442 | 0.001245 |
| d2s_test.test | RUN | 0.449266 | 1.919669 | 1.716013 | 0.001589 | 0.001593 | 0.001302 |
| parse_into.test | RUN | 17.254521 | 140.420857 | 81.925442 | 0.002432 | 0.002544 | 0.002238 |
| limits.test | RUN | 1.901845 | 12.588303 | 7.911025 | 0.001626 | 0.001959 | 0.001417 |
| header_only.test | RUN | 1.268498 | 9.227250 | 5.966694 | 0.001228 | 0.001414 | 0.001348 |
| no_exceptions.test | RUN | 1.765530 | 10.271936 | 7.652394 | 0.001310 | 0.001612 | 0.001197 |
| intrusive_macros.test | RUN | 1.512500 | 10.020125 | 6.847118 | 0.001224 | 0.001531 | 0.001230 |
| _gdb-printers.test | RUN | 0.231062 | 0.697547 | 0.792262 | 0.152435 | 0.265401 | 0.169770 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.892× | 0.892×, 0.892× | 1.004× |
| clang | 1.141× | 1.140×, 1.141× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001366s | 0.001243s | 0.001360s | byte equality observed |
| basic_parser.test | 1 | 0.287357s | 0.188200s | 0.429987s | native test oracle; output varies |
| conversion.test | 10 | 0.000741s | 0.000738s | 0.000728s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000747s | 0.000740s | 0.000735s | byte equality observed |
| d2s_table_test.test | 10 | 0.000760s | 0.000766s | 0.000754s | byte equality observed |
| d2s_test.test | 10 | 0.000811s | 0.000788s | 0.000791s | byte equality observed |
| doc_background.test | 10 | 0.000782s | 0.000758s | 0.000739s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000783s | 0.000788s | 0.000774s | byte equality observed |
| doc_parsing.test | 10 | 0.000805s | 0.000801s | 0.000784s | byte equality observed |
| doc_quick_look.test | 10 | 0.000784s | 0.000767s | 0.000775s | byte equality observed |
| doc_serializing.test | 10 | 0.000781s | 0.000765s | 0.000731s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000770s | 0.000766s | 0.000750s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000787s | 0.000749s | 0.000740s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000783s | 0.000756s | 0.000751s | byte equality observed |
| double.test | 1 | 0.834492s | 0.807846s | 0.864936s | native test oracle; output varies |
| error.test | 10 | 0.000889s | 0.000891s | 0.000865s | byte equality observed |
| fwd.test | 10 | 0.000761s | 0.000767s | 0.000767s | byte equality observed |
| header_only.test | 10 | 0.000768s | 0.000761s | 0.000751s | byte equality observed |
| intrusive_macros.test | 10 | 0.000798s | 0.000786s | 0.000776s | byte equality observed |
| json.test | 10 | 0.000776s | 0.000792s | 0.000775s | byte equality observed |
| kind.test | 10 | 0.000801s | 0.000794s | 0.000778s | byte equality observed |
| limits.test | 10 | 0.000946s | 0.000923s | 0.000923s | byte equality observed |
| memory_resource.test | 10 | 0.000788s | 0.000786s | 0.000783s | byte equality observed |
| monotonic_resource.test | 10 | 0.001167s | 0.001160s | 0.001146s | byte equality observed |
| natvis.test | 10 | 0.000802s | 0.000798s | 0.000791s | byte equality observed |
| no_exceptions.test | 10 | 0.000794s | 0.000790s | 0.000771s | byte equality observed |
| null_resource.test | 10 | 0.000814s | 0.000803s | 0.000797s | byte equality observed |
| object.test | 6 | 0.003403s | 0.002848s | 0.003317s | native test oracle; output varies |
| parse.test | 10 | 0.001112s | 0.001117s | 0.001104s | byte equality observed |
| parse_into.test | 8 | 0.001925s | 0.001795s | 0.001723s | native test oracle; output varies |
| parser.test | 10 | 0.000901s | 0.000869s | 0.000875s | byte equality observed |
| pilfer.test | 10 | 0.000747s | 0.000756s | 0.000748s | byte equality observed |
| pointer.test | 10 | 0.000926s | 0.000923s | 0.000920s | byte equality observed |
| result_for.test | 10 | 0.000773s | 0.000773s | 0.000771s | byte equality observed |
| serialize.test | 10 | 0.000807s | 0.000818s | 0.000791s | byte equality observed |
| serializer.test | 10 | 0.001376s | 0.001381s | 0.001355s | byte equality observed |
| snippets.test | 10 | 0.000933s | 0.000916s | 0.000923s | byte equality observed |
| static_resource.test | 10 | 0.000835s | 0.000818s | 0.000814s | byte equality observed |
| storage_ptr.test | 10 | 0.000812s | 0.000809s | 0.000793s | byte equality observed |
| stream_parser.test | 1 | 0.043159s | 0.040333s | 0.043240s | native test oracle; output varies |
| string.test | 10 | 0.001388s | 0.001202s | 0.001329s | byte equality observed |
| string_view.test | 10 | 0.000759s | 0.000776s | 0.000761s | byte equality observed |
| utf8.test | 10 | 0.000765s | 0.000760s | 0.000754s | byte equality observed |
| value.test | 9 | 0.001717s | 0.001614s | 0.001978s | native test oracle; output varies |
| value_from.test | 10 | 0.000907s | 0.000908s | 0.000885s | byte equality observed |
| value_ref.test | 10 | 0.000815s | 0.000824s | 0.000794s | byte equality observed |
| value_stack.test | 10 | 0.000803s | 0.000801s | 0.000783s | byte equality observed |
| value_to.test | 10 | 0.001455s | 0.001448s | 0.001424s | byte equality observed |
| visit.test | 10 | 0.000791s | 0.000797s | 0.000767s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
