# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.387290 | 1.610327 | 1.359914 | 0.002844 | 0.003212 | 0.003043 |
| test_increment.test | RUN | 0.386772 | 1.186454 | 1.161568 | 0.002961 | 0.003025 | 0.002833 |
| test_add.test | RUN | 0.531050 | 1.869524 | 1.784920 | 0.003365 | 0.003283 | 0.003413 |
| test_add_assign.test | RUN | 0.504505 | 2.010135 | 1.837197 | 0.003363 | 0.003228 | 0.003099 |
| test_callable.test | RUN | 0.852549 | 3.607711 | 4.161513 | 0.005081 | 0.005360 | 0.005245 |
| test_reference.test | RUN | 0.436777 | 1.440405 | 1.223055 | 0.003149 | 0.003265 | 0.003424 |
| test_construct.test | RUN | 1.842509 | 18.983201 | 12.602200 | 0.006449 | 0.006544 | 0.006093 |
| test_relaxed.test | RUN | 0.369565 | 1.027696 | 1.106299 | 0.003519 | 0.002955 | 0.002913 |
| test_assign.test | RUN | 4.209484 | 60.830222 | 44.212420 | 0.010471 | 0.006178 | 0.006391 |
| test_construct_ref.test | RUN | 0.477584 | 2.455571 | 1.872025 | 0.004132 | 0.003997 | 0.004147 |
| test_construct_cref.test | RUN | 0.549069 | 2.351545 | 2.283795 | 0.004502 | 0.004701 | 0.004726 |
| test_any_cast.test | RUN | 0.462173 | 2.386109 | 1.803971 | 0.003936 | 0.003753 | 0.003600 |
| test_binding_of.test | RUN | 0.376763 | 0.940107 | 1.079543 | 0.002863 | 0.002865 | 0.002936 |
| test_typeid_of.test | RUN | 0.423398 | 1.254053 | 1.212536 | 0.003271 | 0.003153 | 0.003278 |
| test_nested.test | RUN | 0.454512 | 1.334408 | 1.390755 | 0.003753 | 0.002946 | 0.002921 |
| test_less.test | RUN | 0.582208 | 2.594867 | 2.283338 | 0.003828 | 0.004101 | 0.004095 |
| test_equal.test | RUN | 0.522384 | 2.396817 | 1.881979 | 0.003856 | 0.003734 | 0.003773 |
| test_negate.test | RUN | 0.398253 | 0.979222 | 1.031296 | 0.002907 | 0.002894 | 0.003175 |
| test_dereference.test | RUN | 0.420877 | 1.314984 | 1.235834 | 0.003004 | 0.003103 | 0.003095 |
| test_subscript.test | RUN | 0.443824 | 1.507887 | 1.286002 | 0.003303 | 0.003256 | 0.003310 |
| test_forward_iterator.test | RUN | 0.523903 | 1.676395 | 1.707683 | 0.003132 | 0.003275 | 0.003201 |
| test_tuple.test | RUN | 0.448692 | 1.685761 | 1.445215 | 0.003255 | 0.003316 | 0.002900 |
| test_stream.test | RUN | 0.580397 | 2.881534 | 2.157960 | 0.003689 | 0.004314 | 0.004534 |
| test_deduced.test | RUN | 0.394738 | 1.052388 | 1.054102 | 0.002616 | 0.002911 | 0.002889 |
| test_same_type.test | RUN | 0.428970 | 1.369668 | 1.281517 | 0.003083 | 0.003114 | 0.003074 |
| test_member.test | RUN | 0.551802 | 2.705196 | 2.059887 | 0.004362 | 0.004878 | 0.004309 |
| test_null.test | RUN | 0.383279 | 1.282943 | 1.127959 | 0.002950 | 0.003116 | 0.003090 |
| test_free.test | RUN | 0.461407 | 2.168102 | 1.611386 | 0.003456 | 0.003575 | 0.003705 |
| test_is_empty.test | RUN | 0.375332 | 1.039300 | 0.958671 | 0.002888 | 0.002921 | 0.003048 |
| test_dynamic_any_cast.test | RUN | 0.697044 | 3.306289 | 3.198611 | 0.004268 | 0.004673 | 0.004527 |
| test_limits.test | RUN | 0.649152 | 2.172333 | 2.171674 | 0.002858 | 0.003390 | 0.003273 |
| test_param.test | COMPILE | 0.250419 | 0.631250 | 0.647983 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.243407 | 0.493200 | 0.561115 | — | — | — |
| test_sfinae.test | COMPILE | 0.242623 | 0.473893 | 0.574687 | — | — | — |
| test_interface_order.test | COMPILE | 0.240105 | 0.487894 | 0.596735 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.031261 | 0.049736 | 0.057668 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.226091 | 0.468070 | 0.572002 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.232007 | 0.470223 | 0.532094 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.226916 | 0.475188 | 0.584118 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.227791 | 0.454664 | 0.587539 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.227642 | 0.454898 | 0.553055 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.223542 | 0.457606 | 0.536107 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.231728 | 0.465869 | 0.516307 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.241199 | 0.479869 | 0.585989 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.227565 | 0.441592 | 0.536100 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.231082 | 0.426075 | 0.493767 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.229190 | 0.446279 | 0.552711 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.228671 | 0.475567 | 0.499122 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.230994 | 0.461341 | 0.565770 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.234167 | 0.479628 | 0.574843 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.233237 | 0.497670 | 0.554796 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.228819 | 0.444914 | 0.547507 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.231803 | 0.473936 | 0.582603 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.227030 | 0.471528 | 0.521493 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.238992 | 0.449677 | 0.581154 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.233271 | 0.447052 | 0.590619 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.232591 | 0.460915 | 0.545437 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.225157 | 0.459981 | 0.591370 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.220877 | 0.461628 | 0.514631 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.199505 | 0.441825 | 0.473004 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.946× | 0.948×, 0.944× | 1.044× |
| clang | 0.941× | 0.931×, 0.951× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001781s | 0.001657s | 0.001622s | byte equality observed |
| test_add_assign.test | 10 | 0.001733s | 0.001633s | 0.001623s | byte equality observed |
| test_any_cast.test | 9 | 0.001979s | 0.001844s | 0.001832s | byte equality observed |
| test_assign.test | 4 | 0.004803s | 0.004169s | 0.004543s | byte equality observed |
| test_binding.test | 10 | 0.001633s | 0.001517s | 0.001543s | byte equality observed |
| test_binding_of.test | 10 | 0.001500s | 0.001437s | 0.001446s | byte equality observed |
| test_callable.test | 7 | 0.002528s | 0.002385s | 0.002435s | byte equality observed |
| test_construct.test | 6 | 0.003323s | 0.003089s | 0.003174s | byte equality observed |
| test_construct_cref.test | 8 | 0.002281s | 0.002175s | 0.002200s | byte equality observed |
| test_construct_ref.test | 9 | 0.002066s | 0.001974s | 0.001950s | byte equality observed |
| test_deduced.test | 10 | 0.001528s | 0.001487s | 0.001440s | byte equality observed |
| test_dereference.test | 10 | 0.001614s | 0.001567s | 0.001544s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002266s | 0.002191s | 0.002186s | byte equality observed |
| test_equal.test | 10 | 0.001914s | 0.001844s | 0.001818s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001634s | 0.001541s | 0.001560s | byte equality observed |
| test_free.test | 9 | 0.001921s | 0.001793s | 0.001833s | byte equality observed |
| test_increment.test | 10 | 0.001590s | 0.001469s | 0.001511s | byte equality observed |
| test_is_empty.test | 10 | 0.001589s | 0.001479s | 0.001493s | byte equality observed |
| test_less.test | 9 | 0.002082s | 0.001942s | 0.001986s | byte equality observed |
| test_limits.test | 10 | 0.001697s | 0.001600s | 0.001628s | byte equality observed |
| test_member.test | 8 | 0.002377s | 0.002262s | 0.002291s | byte equality observed |
| test_negate.test | 10 | 0.001526s | 0.001452s | 0.001459s | byte equality observed |
| test_nested.test | 10 | 0.001573s | 0.001513s | 0.001483s | byte equality observed |
| test_null.test | 10 | 0.001631s | 0.001542s | 0.001517s | byte equality observed |
| test_reference.test | 10 | 0.001680s | 0.001636s | 0.001586s | byte equality observed |
| test_relaxed.test | 10 | 0.001595s | 0.001474s | 0.001482s | byte equality observed |
| test_same_type.test | 9 | 0.001622s | 0.001566s | 0.001562s | byte equality observed |
| test_stream.test | 7 | 0.002202s | 0.002141s | 0.002077s | byte equality observed |
| test_subscript.test | 10 | 0.001676s | 0.001610s | 0.001570s | byte equality observed |
| test_tuple.test | 10 | 0.001691s | 0.001642s | 0.001529s | byte equality observed |
| test_typeid_of.test | 9 | 0.001693s | 0.001673s | 0.001564s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
