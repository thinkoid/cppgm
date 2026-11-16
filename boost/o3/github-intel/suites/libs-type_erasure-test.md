# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.421522 | 1.827424 | 1.477341 | 0.002203 | 0.002420 | 0.002050 |
| test_increment.test | RUN | 0.400198 | 1.358602 | 1.276415 | 0.002513 | 0.002301 | 0.001952 |
| test_add.test | RUN | 0.526922 | 2.213277 | 1.899692 | 0.002382 | 0.002429 | 0.002364 |
| test_add_assign.test | RUN | 0.522953 | 2.362447 | 1.961703 | 0.002325 | 0.002376 | 0.002097 |
| test_callable.test | RUN | 0.885413 | 4.124892 | 4.391251 | 0.002904 | 0.003348 | 0.002985 |
| test_reference.test | RUN | 0.430871 | 1.666979 | 1.325414 | 0.001985 | 0.002558 | 0.002110 |
| test_construct.test | RUN | 2.051268 | 20.707234 | 13.433374 | 0.004301 | 0.004412 | 0.003748 |
| test_relaxed.test | RUN | 0.402909 | 1.174925 | 1.197815 | 0.002081 | 0.002240 | 0.002163 |
| test_assign.test | RUN | 5.357471 | 66.168610 | 46.647158 | 0.006684 | 0.004076 | 0.004380 |
| test_construct_ref.test | RUN | 0.505453 | 2.907573 | 1.945704 | 0.002783 | 0.002796 | 0.002402 |
| test_construct_cref.test | RUN | 0.585018 | 2.710234 | 2.526469 | 0.002988 | 0.003233 | 0.002743 |
| test_any_cast.test | RUN | 0.502185 | 2.851072 | 1.917190 | 0.002753 | 0.002992 | 0.002483 |
| test_binding_of.test | RUN | 0.390895 | 1.074293 | 1.123030 | 0.002136 | 0.002528 | 0.002164 |
| test_typeid_of.test | RUN | 0.412171 | 1.577690 | 1.332027 | 0.002482 | 0.002618 | 0.002100 |
| test_nested.test | RUN | 0.444752 | 1.537987 | 1.469541 | 0.002154 | 0.002327 | 0.002061 |
| test_less.test | RUN | 0.606877 | 3.047751 | 2.456515 | 0.002978 | 0.003113 | 0.002522 |
| test_equal.test | RUN | 0.537758 | 2.877458 | 2.012919 | 0.002486 | 0.002944 | 0.002483 |
| test_negate.test | RUN | 0.397238 | 1.169091 | 1.169304 | 0.002161 | 0.002543 | 0.002032 |
| test_dereference.test | RUN | 0.451398 | 1.511903 | 1.332780 | 0.002386 | 0.002320 | 0.002086 |
| test_subscript.test | RUN | 0.438186 | 1.710919 | 1.477810 | 0.002253 | 0.002452 | 0.002204 |
| test_forward_iterator.test | RUN | 0.533159 | 1.878446 | 1.615530 | 0.002417 | 0.002663 | 0.002208 |
| test_tuple.test | RUN | 0.484745 | 1.913465 | 1.532579 | 0.002515 | 0.002631 | 0.002141 |
| test_stream.test | RUN | 0.604963 | 3.189582 | 2.377600 | 0.003041 | 0.002753 | 0.002894 |
| test_deduced.test | RUN | 0.391538 | 1.127056 | 1.154739 | 0.002186 | 0.002295 | 0.001974 |
| test_same_type.test | RUN | 0.456223 | 1.511853 | 1.420054 | 0.002503 | 0.002314 | 0.002065 |
| test_member.test | RUN | 0.577038 | 3.077231 | 2.338396 | 0.002835 | 0.003038 | 0.002871 |
| test_null.test | RUN | 0.402425 | 1.421577 | 1.190315 | 0.002198 | 0.002447 | 0.002070 |
| test_free.test | RUN | 0.510185 | 2.563195 | 1.756619 | 0.002298 | 0.002744 | 0.002356 |
| test_is_empty.test | RUN | 0.373980 | 1.250110 | 1.140451 | 0.002157 | 0.002182 | 0.002026 |
| test_dynamic_any_cast.test | RUN | 0.751403 | 3.673318 | 3.389618 | 0.003082 | 0.003212 | 0.002736 |
| test_limits.test | RUN | 0.644934 | 2.573150 | 2.340842 | 0.002228 | 0.002560 | 0.002277 |
| test_param.test | COMPILE | 0.253054 | 0.699299 | 0.698506 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.252458 | 0.527914 | 0.616312 | — | — | — |
| test_sfinae.test | COMPILE | 0.247905 | 0.534837 | 0.666054 | — | — | — |
| test_interface_order.test | COMPILE | 0.241945 | 0.521758 | 0.642390 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027319 | 0.049582 | 0.052012 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.241527 | 0.511775 | 0.571852 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.238956 | 0.509652 | 0.594924 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.238738 | 0.497702 | 0.600848 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.232953 | 0.500353 | 0.569725 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.236462 | 0.486333 | 0.596887 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.229235 | 0.492422 | 0.582445 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.233799 | 0.491559 | 0.569990 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.245876 | 0.514697 | 0.627730 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.235789 | 0.489780 | 0.590296 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.234989 | 0.479262 | 0.592597 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.232724 | 0.490143 | 0.588454 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.228052 | 0.504241 | 0.606186 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.236285 | 0.534778 | 0.588977 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.236919 | 0.533678 | 0.619639 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.234023 | 0.533002 | 0.607812 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.228869 | 0.503188 | 0.585320 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.242210 | 0.508694 | 0.586993 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.236934 | 0.515279 | 0.626884 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.238017 | 0.520921 | 0.630091 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.235271 | 0.510554 | 0.636746 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.238303 | 0.510091 | 0.629673 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.238625 | 0.509359 | 0.623113 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.189569 | 0.508633 | 0.572264 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.186093 | 0.439950 | 0.387844 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.965× | 0.968×, 0.962× | 0.998× |
| clang | 0.957× | 0.959×, 0.954× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001384s | 0.001346s | 0.001310s | byte equality observed |
| test_add_assign.test | 10 | 0.001350s | 0.001323s | 0.001334s | byte equality observed |
| test_any_cast.test | 10 | 0.001487s | 0.001419s | 0.001445s | byte equality observed |
| test_assign.test | 5 | 0.003959s | 0.003313s | 0.003705s | byte equality observed |
| test_binding.test | 10 | 0.001300s | 0.001246s | 0.001246s | byte equality observed |
| test_binding_of.test | 10 | 0.001254s | 0.001235s | 0.001228s | byte equality observed |
| test_callable.test | 10 | 0.001755s | 0.001709s | 0.001652s | byte equality observed |
| test_construct.test | 8 | 0.002248s | 0.002180s | 0.002114s | byte equality observed |
| test_construct_cref.test | 10 | 0.001652s | 0.001603s | 0.001558s | byte equality observed |
| test_construct_ref.test | 10 | 0.001492s | 0.001461s | 0.001458s | byte equality observed |
| test_deduced.test | 10 | 0.001281s | 0.001234s | 0.001216s | byte equality observed |
| test_dereference.test | 10 | 0.001319s | 0.001314s | 0.001233s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001619s | 0.001561s | 0.001624s | byte equality observed |
| test_equal.test | 10 | 0.001446s | 0.001425s | 0.001362s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001308s | 0.001281s | 0.001240s | byte equality observed |
| test_free.test | 10 | 0.001424s | 0.001393s | 0.001386s | byte equality observed |
| test_increment.test | 10 | 0.001279s | 0.001271s | 0.001242s | byte equality observed |
| test_is_empty.test | 10 | 0.001288s | 0.001234s | 0.001239s | byte equality observed |
| test_less.test | 10 | 0.001506s | 0.001466s | 0.001435s | byte equality observed |
| test_limits.test | 10 | 0.001387s | 0.001390s | 0.001295s | byte equality observed |
| test_member.test | 10 | 0.001633s | 0.001586s | 0.001548s | byte equality observed |
| test_negate.test | 10 | 0.001284s | 0.001242s | 0.001218s | byte equality observed |
| test_nested.test | 10 | 0.001256s | 0.001262s | 0.001212s | byte equality observed |
| test_null.test | 10 | 0.001305s | 0.001265s | 0.001235s | byte equality observed |
| test_reference.test | 10 | 0.001342s | 0.001278s | 0.001242s | byte equality observed |
| test_relaxed.test | 10 | 0.001285s | 0.001231s | 0.001259s | byte equality observed |
| test_same_type.test | 10 | 0.001305s | 0.001273s | 0.001233s | byte equality observed |
| test_stream.test | 10 | 0.001588s | 0.001562s | 0.001490s | byte equality observed |
| test_subscript.test | 10 | 0.001325s | 0.001320s | 0.001280s | byte equality observed |
| test_tuple.test | 10 | 0.001323s | 0.001306s | 0.001257s | byte equality observed |
| test_typeid_of.test | 10 | 0.001330s | 0.001318s | 0.001265s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
