# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.520204 | 2.050583 | 1.914139 | 0.003546 | 0.003314 | 0.003310 |
| test_increment.test | RUN | 0.506575 | 1.553406 | 1.616329 | 0.002968 | 0.003219 | 0.003248 |
| test_add.test | RUN | 0.639292 | 2.456466 | 2.404157 | 0.003192 | 0.003582 | 0.003499 |
| test_add_assign.test | RUN | 0.711442 | 2.602902 | 2.493849 | 0.003542 | 0.003807 | 0.003764 |
| test_callable.test | RUN | 1.080878 | 4.611345 | 5.522038 | 0.005723 | 0.006012 | 0.005895 |
| test_reference.test | RUN | 0.530672 | 1.843435 | 1.739094 | 0.003508 | 0.003529 | 0.003603 |
| test_construct.test | RUN | 2.267119 | 22.747487 | 15.910500 | 0.007790 | 0.007676 | 0.007645 |
| test_relaxed.test | RUN | 0.483175 | 1.309769 | 1.532213 | 0.003295 | 0.003063 | 0.003088 |
| test_assign.test | RUN | 5.493121 | 75.360340 | 55.229910 | 0.010494 | 0.007031 | 0.007246 |
| test_construct_ref.test | RUN | 0.627060 | 3.238133 | 2.495475 | 0.004459 | 0.004219 | 0.004685 |
| test_construct_cref.test | RUN | 0.701735 | 2.915703 | 2.982123 | 0.005198 | 0.005414 | 0.005446 |
| test_any_cast.test | RUN | 0.598220 | 3.088312 | 2.452091 | 0.004337 | 0.004431 | 0.004645 |
| test_binding_of.test | RUN | 0.477352 | 1.143471 | 1.443591 | 0.002996 | 0.003351 | 0.003249 |
| test_typeid_of.test | RUN | 0.529382 | 1.611405 | 1.641727 | 0.003612 | 0.003278 | 0.003621 |
| test_nested.test | RUN | 0.561079 | 1.697856 | 1.894846 | 0.003259 | 0.003221 | 0.003346 |
| test_less.test | RUN | 0.704885 | 3.317029 | 3.138324 | 0.004610 | 0.004559 | 0.004692 |
| test_equal.test | RUN | 0.655290 | 3.193772 | 2.528810 | 0.004113 | 0.003797 | 0.004077 |
| test_negate.test | RUN | 0.480928 | 1.313760 | 1.569537 | 0.003003 | 0.002990 | 0.002937 |
| test_dereference.test | RUN | 0.531858 | 1.672189 | 1.731177 | 0.003282 | 0.002873 | 0.003462 |
| test_subscript.test | RUN | 0.561230 | 1.862011 | 1.615635 | 0.003480 | 0.003300 | 0.003159 |
| test_forward_iterator.test | RUN | 0.646075 | 2.016192 | 2.264409 | 0.003397 | 0.003177 | 0.002984 |
| test_tuple.test | RUN | 0.576334 | 2.066378 | 1.956190 | 0.003403 | 0.003317 | 0.003481 |
| test_stream.test | RUN | 0.727381 | 3.363373 | 2.731606 | 0.004711 | 0.004289 | 0.004901 |
| test_deduced.test | RUN | 0.486551 | 1.311893 | 1.471238 | 0.003142 | 0.002942 | 0.003264 |
| test_same_type.test | RUN | 0.529504 | 1.613486 | 1.816639 | 0.002830 | 0.003404 | 0.003283 |
| test_member.test | RUN | 0.708766 | 3.381736 | 2.873655 | 0.005008 | 0.004872 | 0.005509 |
| test_null.test | RUN | 0.490037 | 1.606338 | 1.564970 | 0.003324 | 0.003443 | 0.003621 |
| test_free.test | RUN | 0.587348 | 2.706574 | 1.905308 | 0.004245 | 0.004382 | 0.003831 |
| test_is_empty.test | RUN | 0.463631 | 1.355934 | 1.413502 | 0.003247 | 0.003222 | 0.003036 |
| test_dynamic_any_cast.test | RUN | 0.886818 | 4.073787 | 4.177417 | 0.005023 | 0.005300 | 0.004621 |
| test_limits.test | RUN | 0.808712 | 2.648747 | 2.971030 | 0.003310 | 0.003368 | 0.003714 |
| test_param.test | COMPILE | 0.326632 | 0.808519 | 0.881882 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.318069 | 0.600976 | 0.741503 | — | — | — |
| test_sfinae.test | COMPILE | 0.314185 | 0.648930 | 0.790513 | — | — | — |
| test_interface_order.test | COMPILE | 0.304138 | 0.612520 | 0.782066 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.039305 | 0.057483 | 0.070167 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.303425 | 0.570803 | 0.766822 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.298923 | 0.581008 | 0.676861 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.302364 | 0.583605 | 0.797245 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.300422 | 0.582196 | 0.798216 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.300233 | 0.588823 | 0.665788 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.294918 | 0.562764 | 0.783740 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.293446 | 0.587056 | 0.803612 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.312517 | 0.609719 | 0.709331 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.297074 | 0.547186 | 0.775756 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.297695 | 0.579365 | 0.793427 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.295115 | 0.588992 | 0.658606 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.297650 | 0.517020 | 0.812632 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.300495 | 0.585649 | 0.751005 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.297334 | 0.599710 | 0.833289 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.296407 | 0.633159 | 0.703989 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.297366 | 0.583600 | 0.777663 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.300970 | 0.552771 | 0.821454 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.300689 | 0.601237 | 0.736192 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.300955 | 0.591296 | 0.833540 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.303484 | 0.571378 | 0.838189 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.301452 | 0.612488 | 0.718817 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.300179 | 0.577748 | 0.828086 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.291234 | 0.592613 | 0.788643 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.260392 | 0.547699 | 0.613661 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979×† | 0.991×, 0.966× | 0.915× |
| clang | 0.896×† | 0.976×, 0.816× | 0.938× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001981s | 0.001943s | 0.002099s | byte equality observed |
| test_add_assign.test | 9 | 0.001997s | 0.001865s | 0.002058s | byte equality observed |
| test_any_cast.test | 9 | 0.002283s | 0.002153s | 0.002394s | byte equality observed |
| test_assign.test | 4 | 0.006054s | 0.005157s | 0.006187s | byte equality observed |
| test_binding.test | 10 | 0.001941s | 0.001771s | 0.001964s | byte equality observed |
| test_binding_of.test | 10 | 0.001826s | 0.001660s | 0.001853s | byte equality observed |
| test_callable.test | 6 | 0.003080s | 0.002836s | 0.003042s | byte equality observed |
| test_construct.test | 5 | 0.004131s | 0.003678s | 0.003919s | byte equality observed |
| test_construct_cref.test | 7 | 0.002837s | 0.002528s | 0.002865s | byte equality observed |
| test_construct_ref.test | 8 | 0.002536s | 0.002334s | 0.002458s | byte equality observed |
| test_deduced.test | 10 | 0.001888s | 0.001686s | 0.001851s | byte equality observed |
| test_dereference.test | 10 | 0.002020s | 0.001770s | 0.001948s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002845s | 0.002602s | 0.002759s | byte equality observed |
| test_equal.test | 8 | 0.002370s | 0.002184s | 0.002298s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001933s | 0.001793s | 0.001905s | byte equality observed |
| test_free.test | 8 | 0.002397s | 0.002162s | 0.002281s | byte equality observed |
| test_increment.test | 10 | 0.001994s | 0.001748s | 0.001812s | byte equality observed |
| test_is_empty.test | 10 | 0.001905s | 0.001722s | 0.001853s | byte equality observed |
| test_less.test | 8 | 0.002578s | 0.002298s | 0.002486s | byte equality observed |
| test_limits.test | 8 | 0.002070s | 0.001884s | 0.002015s | byte equality observed |
| test_member.test | 7 | 0.002903s | 0.002645s | 0.002785s | byte equality observed |
| test_negate.test | 10 | 0.001875s | 0.001696s | 0.001805s | byte equality observed |
| test_nested.test | 9 | 0.001916s | 0.001728s | 0.001854s | byte equality observed |
| test_null.test | 9 | 0.001969s | 0.001787s | 0.001966s | byte equality observed |
| test_reference.test | 10 | 0.002024s | 0.001894s | 0.002012s | byte equality observed |
| test_relaxed.test | 10 | 0.001886s | 0.001722s | 0.001841s | byte equality observed |
| test_same_type.test | 9 | 0.002001s | 0.001804s | 0.001999s | byte equality observed |
| test_stream.test | 8 | 0.002665s | 0.002540s | 0.002643s | byte equality observed |
| test_subscript.test | 9 | 0.002107s | 0.001903s | 0.001978s | byte equality observed |
| test_tuple.test | 10 | 0.002126s | 0.001890s | 0.001990s | byte equality observed |
| test_typeid_of.test | 9 | 0.002069s | 0.001896s | 0.002005s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
