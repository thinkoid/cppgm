# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.429443 | 1.808458 | 1.508050 | 0.002550 | 0.002217 | 0.002271 |
| test_increment.test | RUN | 0.437142 | 1.365621 | 1.303356 | 0.002531 | 0.002308 | 0.002156 |
| test_add.test | RUN | 0.546072 | 2.205071 | 1.926336 | 0.002451 | 0.002633 | 0.002323 |
| test_add_assign.test | RUN | 0.562299 | 2.358794 | 2.033334 | 0.002530 | 0.002353 | 0.002290 |
| test_callable.test | RUN | 0.974940 | 4.104431 | 4.469988 | 0.003320 | 0.003415 | 0.003020 |
| test_reference.test | RUN | 0.426975 | 1.655056 | 1.392403 | 0.002490 | 0.002606 | 0.002269 |
| test_construct.test | RUN | 2.139553 | 20.177862 | 13.779810 | 0.004332 | 0.004206 | 0.004073 |
| test_relaxed.test | RUN | 0.419145 | 1.159969 | 1.222698 | 0.002316 | 0.002352 | 0.002199 |
| test_assign.test | RUN | 5.615356 | 65.380798 | 48.256329 | 0.006766 | 0.004087 | 0.004450 |
| test_construct_ref.test | RUN | 0.522165 | 2.889352 | 2.021886 | 0.002835 | 0.002758 | 0.002690 |
| test_construct_cref.test | RUN | 0.629348 | 2.688783 | 2.508955 | 0.002978 | 0.003099 | 0.002905 |
| test_any_cast.test | RUN | 0.510623 | 2.831483 | 1.975869 | 0.002779 | 0.003023 | 0.002691 |
| test_binding_of.test | RUN | 0.393334 | 1.067388 | 1.172753 | 0.002387 | 0.002280 | 0.002170 |
| test_typeid_of.test | RUN | 0.433321 | 1.562481 | 1.297674 | 0.002464 | 0.002483 | 0.002326 |
| test_nested.test | RUN | 0.469636 | 1.527244 | 1.531327 | 0.002421 | 0.002359 | 0.002006 |
| test_less.test | RUN | 0.641660 | 3.012161 | 2.457310 | 0.002737 | 0.003104 | 0.002558 |
| test_equal.test | RUN | 0.572904 | 2.893139 | 2.077641 | 0.002670 | 0.002631 | 0.002544 |
| test_negate.test | RUN | 0.416799 | 1.136118 | 1.167930 | 0.002199 | 0.002328 | 0.002051 |
| test_dereference.test | RUN | 0.471006 | 1.512135 | 1.352634 | 0.002500 | 0.002597 | 0.002234 |
| test_subscript.test | RUN | 0.464960 | 1.700895 | 1.486573 | 0.002498 | 0.002405 | 0.002386 |
| test_forward_iterator.test | RUN | 0.551821 | 1.898692 | 1.643814 | 0.002221 | 0.002304 | 0.002351 |
| test_tuple.test | RUN | 0.495500 | 1.926422 | 1.567503 | 0.002361 | 0.002325 | 0.002378 |
| test_stream.test | RUN | 0.670954 | 3.199829 | 2.513543 | 0.003280 | 0.002958 | 0.002697 |
| test_deduced.test | RUN | 0.406622 | 1.140909 | 1.156513 | 0.002054 | 0.002290 | 0.002271 |
| test_same_type.test | RUN | 0.460029 | 1.570515 | 1.460773 | 0.002532 | 0.002284 | 0.002206 |
| test_member.test | RUN | 0.608309 | 3.063906 | 2.309569 | 0.003124 | 0.003016 | 0.002992 |
| test_null.test | RUN | 0.450199 | 1.451003 | 1.262506 | 0.002374 | 0.002160 | 0.002508 |
| test_free.test | RUN | 0.523727 | 2.529343 | 1.819811 | 0.002741 | 0.002752 | 0.002758 |
| test_is_empty.test | RUN | 0.420683 | 1.223366 | 1.181725 | 0.002654 | 0.002178 | 0.002255 |
| test_dynamic_any_cast.test | RUN | 0.776284 | 3.616965 | 3.375796 | 0.003114 | 0.003200 | 0.002825 |
| test_limits.test | RUN | 0.705285 | 2.493507 | 2.378988 | 0.002636 | 0.002579 | 0.002471 |
| test_param.test | COMPILE | 0.265555 | 0.671115 | 0.751431 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.254554 | 0.520461 | 0.651365 | — | — | — |
| test_sfinae.test | COMPILE | 0.258712 | 0.513579 | 0.668586 | — | — | — |
| test_interface_order.test | COMPILE | 0.254004 | 0.525766 | 0.645322 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.031636 | 0.050361 | 0.055474 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.244150 | 0.501197 | 0.605353 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.247093 | 0.508045 | 0.585796 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.240648 | 0.499314 | 0.611813 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.239721 | 0.500105 | 0.625278 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.243905 | 0.500122 | 0.573184 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.234613 | 0.496048 | 0.592619 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.239851 | 0.487680 | 0.588700 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.253300 | 0.520953 | 0.635867 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.247260 | 0.492325 | 0.595288 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.243218 | 0.481324 | 0.570906 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.241555 | 0.493321 | 0.600091 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.239367 | 0.506871 | 0.609866 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.247599 | 0.541052 | 0.621339 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.248597 | 0.527165 | 0.633950 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.248529 | 0.539208 | 0.628568 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.244437 | 0.505202 | 0.564119 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.248852 | 0.512736 | 0.631488 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.249748 | 0.518074 | 0.629325 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.248489 | 0.515758 | 0.616398 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.248415 | 0.507026 | 0.629386 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.250309 | 0.505788 | 0.629581 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.247866 | 0.517734 | 0.599390 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.249484 | 0.481752 | 0.627640 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.204936 | 0.345632 | 0.543826 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963× | 0.958×, 0.968× | 0.996× |
| clang | 0.959× | 0.958×, 0.961× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001387s | 0.001337s | 0.001338s | byte equality observed |
| test_add_assign.test | 10 | 0.001392s | 0.001327s | 0.001352s | byte equality observed |
| test_any_cast.test | 10 | 0.001487s | 0.001438s | 0.001418s | byte equality observed |
| test_assign.test | 5 | 0.003851s | 0.003253s | 0.003678s | byte equality observed |
| test_binding.test | 10 | 0.001283s | 0.001256s | 0.001249s | byte equality observed |
| test_binding_of.test | 10 | 0.001269s | 0.001237s | 0.001217s | byte equality observed |
| test_callable.test | 10 | 0.001716s | 0.001686s | 0.001670s | byte equality observed |
| test_construct.test | 8 | 0.002259s | 0.002149s | 0.002107s | byte equality observed |
| test_construct_cref.test | 10 | 0.001596s | 0.001567s | 0.001562s | byte equality observed |
| test_construct_ref.test | 10 | 0.001504s | 0.001461s | 0.001419s | byte equality observed |
| test_deduced.test | 10 | 0.001262s | 0.001233s | 0.001222s | byte equality observed |
| test_dereference.test | 10 | 0.001304s | 0.001302s | 0.001266s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001622s | 0.001594s | 0.001613s | byte equality observed |
| test_equal.test | 10 | 0.001442s | 0.001374s | 0.001384s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001310s | 0.001268s | 0.001275s | byte equality observed |
| test_free.test | 10 | 0.001412s | 0.001393s | 0.001343s | byte equality observed |
| test_increment.test | 10 | 0.001306s | 0.001263s | 0.001231s | byte equality observed |
| test_is_empty.test | 10 | 0.001293s | 0.001228s | 0.001222s | byte equality observed |
| test_less.test | 10 | 0.001475s | 0.001492s | 0.001470s | byte equality observed |
| test_limits.test | 10 | 0.001373s | 0.001344s | 0.001312s | byte equality observed |
| test_member.test | 10 | 0.001632s | 0.001595s | 0.001573s | byte equality observed |
| test_negate.test | 10 | 0.001271s | 0.001231s | 0.001226s | byte equality observed |
| test_nested.test | 10 | 0.001283s | 0.001268s | 0.001237s | byte equality observed |
| test_null.test | 10 | 0.001318s | 0.001253s | 0.001275s | byte equality observed |
| test_reference.test | 10 | 0.001316s | 0.001296s | 0.001271s | byte equality observed |
| test_relaxed.test | 10 | 0.001276s | 0.001266s | 0.001247s | byte equality observed |
| test_same_type.test | 10 | 0.001304s | 0.001268s | 0.001277s | byte equality observed |
| test_stream.test | 10 | 0.001568s | 0.001520s | 0.001507s | byte equality observed |
| test_subscript.test | 10 | 0.001354s | 0.001299s | 0.001302s | byte equality observed |
| test_tuple.test | 10 | 0.001337s | 0.001280s | 0.001257s | byte equality observed |
| test_typeid_of.test | 10 | 0.001337s | 0.001288s | 0.001280s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
