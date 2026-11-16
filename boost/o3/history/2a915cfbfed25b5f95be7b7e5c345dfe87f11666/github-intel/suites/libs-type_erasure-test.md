# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.430078 | 1.849703 | 1.474681 | 0.002418 | 0.002544 | 0.002046 |
| test_increment.test | RUN | 0.409492 | 1.376987 | 1.244982 | 0.002114 | 0.002361 | 0.001861 |
| test_add.test | RUN | 0.548194 | 2.218420 | 1.892475 | 0.002233 | 0.002454 | 0.002071 |
| test_add_assign.test | RUN | 0.549315 | 2.417484 | 1.975750 | 0.002429 | 0.002478 | 0.002028 |
| test_callable.test | RUN | 0.911756 | 4.184925 | 4.341543 | 0.003009 | 0.003546 | 0.002977 |
| test_reference.test | RUN | 0.438203 | 1.655879 | 1.337517 | 0.002220 | 0.002462 | 0.002010 |
| test_construct.test | RUN | 2.098939 | 20.602599 | 13.289850 | 0.004225 | 0.004207 | 0.003900 |
| test_relaxed.test | RUN | 0.409617 | 1.182201 | 1.185894 | 0.002088 | 0.002320 | 0.001911 |
| test_assign.test | RUN | 5.543478 | 67.681165 | 44.799631 | 0.006742 | 0.004035 | 0.004266 |
| test_construct_ref.test | RUN | 0.515464 | 2.916133 | 1.953655 | 0.002669 | 0.002905 | 0.002384 |
| test_construct_cref.test | RUN | 0.600459 | 2.733159 | 2.435069 | 0.002874 | 0.003311 | 0.002611 |
| test_any_cast.test | RUN | 0.491599 | 2.866193 | 1.892004 | 0.002665 | 0.003018 | 0.002283 |
| test_binding_of.test | RUN | 0.391727 | 1.080900 | 1.112146 | 0.002104 | 0.002442 | 0.001896 |
| test_typeid_of.test | RUN | 0.433893 | 1.588803 | 1.242431 | 0.002705 | 0.002556 | 0.002011 |
| test_nested.test | RUN | 0.454707 | 1.543134 | 1.463830 | 0.002145 | 0.002457 | 0.001667 |
| test_less.test | RUN | 0.603058 | 3.031667 | 2.393159 | 0.002664 | 0.002858 | 0.002504 |
| test_equal.test | RUN | 0.587781 | 2.910518 | 1.975822 | 0.003342 | 0.002776 | 0.002201 |
| test_negate.test | RUN | 0.398585 | 1.163050 | 1.167808 | 0.002041 | 0.002296 | 0.001843 |
| test_dereference.test | RUN | 0.453138 | 1.534531 | 1.274256 | 0.002414 | 0.002518 | 0.001842 |
| test_subscript.test | RUN | 0.488401 | 1.713681 | 1.463376 | 0.002678 | 0.002392 | 0.002126 |
| test_forward_iterator.test | RUN | 0.537884 | 1.929812 | 1.613648 | 0.002205 | 0.002496 | 0.001912 |
| test_tuple.test | RUN | 0.483126 | 1.950385 | 1.535714 | 0.002616 | 0.002566 | 0.002128 |
| test_stream.test | RUN | 0.624243 | 3.277928 | 2.435845 | 0.002686 | 0.002898 | 0.002694 |
| test_deduced.test | RUN | 0.397852 | 1.140737 | 1.100101 | 0.002016 | 0.002384 | 0.001955 |
| test_same_type.test | RUN | 0.477118 | 1.574524 | 1.438461 | 0.002473 | 0.002230 | 0.002028 |
| test_member.test | RUN | 0.582936 | 3.117013 | 2.190394 | 0.002943 | 0.003112 | 0.002773 |
| test_null.test | RUN | 0.403353 | 1.485408 | 1.225850 | 0.002234 | 0.002336 | 0.002009 |
| test_free.test | RUN | 0.542596 | 2.504333 | 1.765835 | 0.002992 | 0.002497 | 0.002250 |
| test_is_empty.test | RUN | 0.380118 | 1.227523 | 1.156589 | 0.002276 | 0.002134 | 0.001925 |
| test_dynamic_any_cast.test | RUN | 0.750393 | 3.727594 | 3.248330 | 0.002900 | 0.002976 | 0.002615 |
| test_limits.test | RUN | 0.672076 | 2.532259 | 2.307715 | 0.002078 | 0.002335 | 0.002159 |
| test_param.test | COMPILE | 0.265712 | 0.684796 | 0.739437 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.249639 | 0.513841 | 0.632810 | — | — | — |
| test_sfinae.test | COMPILE | 0.251473 | 0.532572 | 0.654402 | — | — | — |
| test_interface_order.test | COMPILE | 0.243525 | 0.519368 | 0.635804 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.029663 | 0.049220 | 0.050395 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.237159 | 0.502499 | 0.591855 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.240524 | 0.510234 | 0.561782 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.238820 | 0.508545 | 0.590786 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.240273 | 0.501232 | 0.587872 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.239741 | 0.504096 | 0.578895 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.232931 | 0.489241 | 0.579291 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.240316 | 0.504162 | 0.565294 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.253670 | 0.509889 | 0.625157 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.238267 | 0.491975 | 0.577124 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.236689 | 0.498014 | 0.576618 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.239631 | 0.473517 | 0.583408 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.237388 | 0.508150 | 0.595668 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.240734 | 0.533789 | 0.578225 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.240397 | 0.535528 | 0.616414 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.241434 | 0.522743 | 0.617245 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.242202 | 0.508331 | 0.588331 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.241389 | 0.518314 | 0.613701 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.239394 | 0.524691 | 0.615685 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.245038 | 0.514574 | 0.586238 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.243337 | 0.519053 | 0.624688 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.243388 | 0.517846 | 0.587269 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.241470 | 0.511440 | 0.623476 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.240574 | 0.472511 | 0.613418 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.226747 | 0.344276 | 0.445039 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.969×, 0.967× | 1.003× |
| clang | 0.962× | 0.957×, 0.968× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001378s | 0.001382s | 0.001327s | byte equality observed |
| test_add_assign.test | 10 | 0.001398s | 0.001298s | 0.001319s | byte equality observed |
| test_any_cast.test | 10 | 0.001471s | 0.001467s | 0.001430s | byte equality observed |
| test_assign.test | 5 | 0.003850s | 0.003283s | 0.003717s | byte equality observed |
| test_binding.test | 10 | 0.001290s | 0.001245s | 0.001227s | byte equality observed |
| test_binding_of.test | 10 | 0.001278s | 0.001247s | 0.001225s | byte equality observed |
| test_callable.test | 10 | 0.001712s | 0.001676s | 0.001646s | byte equality observed |
| test_construct.test | 8 | 0.002244s | 0.002152s | 0.002126s | byte equality observed |
| test_construct_cref.test | 10 | 0.001616s | 0.001583s | 0.001557s | byte equality observed |
| test_construct_ref.test | 10 | 0.001486s | 0.001514s | 0.001449s | byte equality observed |
| test_deduced.test | 10 | 0.001255s | 0.001239s | 0.001220s | byte equality observed |
| test_dereference.test | 10 | 0.001312s | 0.001254s | 0.001251s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001622s | 0.001597s | 0.001599s | byte equality observed |
| test_equal.test | 10 | 0.001447s | 0.001411s | 0.001417s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001305s | 0.001261s | 0.001237s | byte equality observed |
| test_free.test | 10 | 0.001401s | 0.001397s | 0.001383s | byte equality observed |
| test_increment.test | 10 | 0.001306s | 0.001296s | 0.001214s | byte equality observed |
| test_is_empty.test | 10 | 0.001291s | 0.001248s | 0.001247s | byte equality observed |
| test_less.test | 10 | 0.001522s | 0.001507s | 0.001439s | byte equality observed |
| test_limits.test | 10 | 0.001386s | 0.001357s | 0.001313s | byte equality observed |
| test_member.test | 10 | 0.001600s | 0.001604s | 0.001554s | byte equality observed |
| test_negate.test | 10 | 0.001277s | 0.001243s | 0.001194s | byte equality observed |
| test_nested.test | 10 | 0.001273s | 0.001253s | 0.001218s | byte equality observed |
| test_null.test | 10 | 0.001290s | 0.001244s | 0.001236s | byte equality observed |
| test_reference.test | 10 | 0.001316s | 0.001291s | 0.001258s | byte equality observed |
| test_relaxed.test | 10 | 0.001290s | 0.001271s | 0.001237s | byte equality observed |
| test_same_type.test | 10 | 0.001290s | 0.001276s | 0.001229s | byte equality observed |
| test_stream.test | 10 | 0.001560s | 0.001510s | 0.001490s | byte equality observed |
| test_subscript.test | 10 | 0.001350s | 0.001325s | 0.001322s | byte equality observed |
| test_tuple.test | 10 | 0.001312s | 0.001289s | 0.001291s | byte equality observed |
| test_typeid_of.test | 10 | 0.001338s | 0.001293s | 0.001303s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
