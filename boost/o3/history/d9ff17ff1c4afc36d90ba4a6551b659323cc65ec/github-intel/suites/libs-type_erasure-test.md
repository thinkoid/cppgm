# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.414411 | 1.759092 | 1.445542 | 0.002168 | 0.001928 | 0.001843 |
| test_increment.test | RUN | 0.393782 | 1.336932 | 1.246396 | 0.002118 | 0.002165 | 0.001662 |
| test_add.test | RUN | 0.507294 | 2.135813 | 1.875130 | 0.002292 | 0.002310 | 0.002134 |
| test_add_assign.test | RUN | 0.540907 | 2.317827 | 1.960158 | 0.002216 | 0.002161 | 0.002068 |
| test_callable.test | RUN | 0.868741 | 3.931634 | 4.282671 | 0.003001 | 0.003074 | 0.002948 |
| test_reference.test | RUN | 0.414149 | 1.614301 | 1.326483 | 0.001938 | 0.002308 | 0.001927 |
| test_construct.test | RUN | 2.190101 | 18.194638 | 12.926765 | 0.004062 | 0.004051 | 0.003590 |
| test_relaxed.test | RUN | 0.393312 | 1.124555 | 1.185605 | 0.001830 | 0.002200 | 0.001827 |
| test_assign.test | RUN | 5.182872 | 60.864755 | 44.049136 | 0.006788 | 0.003764 | 0.004195 |
| test_construct_ref.test | RUN | 0.497641 | 2.908119 | 1.941988 | 0.002657 | 0.002597 | 0.002452 |
| test_construct_cref.test | RUN | 0.592170 | 2.587858 | 2.458942 | 0.002967 | 0.002948 | 0.002586 |
| test_any_cast.test | RUN | 0.493302 | 2.752607 | 1.893618 | 0.002625 | 0.002417 | 0.002232 |
| test_binding_of.test | RUN | 0.382256 | 1.012968 | 1.094329 | 0.001949 | 0.002132 | 0.001774 |
| test_typeid_of.test | RUN | 0.402697 | 1.519789 | 1.289252 | 0.002260 | 0.002240 | 0.002024 |
| test_nested.test | RUN | 0.457922 | 1.474254 | 1.426784 | 0.002278 | 0.002194 | 0.001861 |
| test_less.test | RUN | 0.598012 | 2.893213 | 2.404373 | 0.002763 | 0.002631 | 0.002367 |
| test_equal.test | RUN | 0.524999 | 2.805502 | 1.957435 | 0.002572 | 0.002413 | 0.002228 |
| test_negate.test | RUN | 0.384641 | 1.105610 | 1.149954 | 0.001833 | 0.002175 | 0.001895 |
| test_dereference.test | RUN | 0.439813 | 1.462481 | 1.358729 | 0.001948 | 0.002186 | 0.001999 |
| test_subscript.test | RUN | 0.421948 | 1.653316 | 1.441003 | 0.002133 | 0.002161 | 0.002043 |
| test_forward_iterator.test | RUN | 0.529149 | 1.836987 | 1.769171 | 0.002179 | 0.002153 | 0.002082 |
| test_tuple.test | RUN | 0.477068 | 1.869333 | 1.483071 | 0.002106 | 0.002172 | 0.002037 |
| test_stream.test | RUN | 0.604351 | 3.052833 | 2.372061 | 0.002774 | 0.002535 | 0.002441 |
| test_deduced.test | RUN | 0.404122 | 1.113890 | 1.149454 | 0.001904 | 0.002210 | 0.001848 |
| test_same_type.test | RUN | 0.436555 | 1.511120 | 1.351022 | 0.002007 | 0.002160 | 0.001955 |
| test_member.test | RUN | 0.570636 | 2.987643 | 2.272340 | 0.002735 | 0.002915 | 0.002692 |
| test_null.test | RUN | 0.419451 | 1.424182 | 1.204222 | 0.002088 | 0.002004 | 0.001958 |
| test_free.test | RUN | 0.488955 | 2.421820 | 1.643395 | 0.002201 | 0.002360 | 0.002200 |
| test_is_empty.test | RUN | 0.386954 | 1.202913 | 1.122405 | 0.001914 | 0.002050 | 0.001748 |
| test_dynamic_any_cast.test | RUN | 0.733109 | 3.541408 | 3.337166 | 0.002689 | 0.002819 | 0.002628 |
| test_limits.test | RUN | 0.653844 | 2.438289 | 2.169439 | 0.002067 | 0.002155 | 0.001998 |
| test_param.test | COMPILE | 0.249847 | 0.672118 | 0.720451 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.238299 | 0.508151 | 0.629962 | — | — | — |
| test_sfinae.test | COMPILE | 0.241384 | 0.518881 | 0.662171 | — | — | — |
| test_interface_order.test | COMPILE | 0.236687 | 0.495361 | 0.633588 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027749 | 0.045499 | 0.048186 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.227169 | 0.492830 | 0.557069 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.228557 | 0.487414 | 0.586122 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.231121 | 0.489746 | 0.560759 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.226481 | 0.483895 | 0.586415 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.225638 | 0.488487 | 0.582077 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.222336 | 0.477879 | 0.568403 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.226998 | 0.479301 | 0.588673 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.243083 | 0.509187 | 0.610582 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.224995 | 0.463753 | 0.547936 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.224139 | 0.476629 | 0.585944 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.228903 | 0.482419 | 0.575063 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.227951 | 0.501338 | 0.587859 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.225996 | 0.508312 | 0.606583 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.230153 | 0.519621 | 0.608756 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.228077 | 0.514786 | 0.584503 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.227769 | 0.484502 | 0.578278 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.223305 | 0.503137 | 0.603000 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.226733 | 0.506385 | 0.625033 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.230218 | 0.497981 | 0.610799 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.239669 | 0.498533 | 0.605295 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.226780 | 0.499395 | 0.585510 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.233494 | 0.491054 | 0.608576 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.208402 | 0.452443 | 0.401464 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.209559 | 0.381042 | 0.502240 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969× | 0.968×, 0.969× | 0.995× |
| clang | 0.962× | 0.965×, 0.959× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001357s | 0.001311s | 0.001341s | byte equality observed |
| test_add_assign.test | 10 | 0.001366s | 0.001346s | 0.001349s | byte equality observed |
| test_any_cast.test | 10 | 0.001472s | 0.001430s | 0.001402s | byte equality observed |
| test_assign.test | 5 | 0.003986s | 0.003233s | 0.003701s | byte equality observed |
| test_binding.test | 10 | 0.001287s | 0.001276s | 0.001268s | byte equality observed |
| test_binding_of.test | 10 | 0.001288s | 0.001218s | 0.001196s | byte equality observed |
| test_callable.test | 10 | 0.001701s | 0.001718s | 0.001687s | byte equality observed |
| test_construct.test | 8 | 0.002220s | 0.002132s | 0.002123s | byte equality observed |
| test_construct_cref.test | 10 | 0.001610s | 0.001597s | 0.001554s | byte equality observed |
| test_construct_ref.test | 10 | 0.001477s | 0.001483s | 0.001459s | byte equality observed |
| test_deduced.test | 10 | 0.001291s | 0.001243s | 0.001228s | byte equality observed |
| test_dereference.test | 10 | 0.001307s | 0.001288s | 0.001244s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001629s | 0.001588s | 0.001561s | byte equality observed |
| test_equal.test | 10 | 0.001464s | 0.001430s | 0.001390s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001306s | 0.001277s | 0.001279s | byte equality observed |
| test_free.test | 10 | 0.001420s | 0.001408s | 0.001355s | byte equality observed |
| test_increment.test | 10 | 0.001295s | 0.001265s | 0.001256s | byte equality observed |
| test_is_empty.test | 10 | 0.001297s | 0.001251s | 0.001245s | byte equality observed |
| test_less.test | 10 | 0.001513s | 0.001501s | 0.001455s | byte equality observed |
| test_limits.test | 10 | 0.001388s | 0.001358s | 0.001324s | byte equality observed |
| test_member.test | 10 | 0.001628s | 0.001591s | 0.001576s | byte equality observed |
| test_negate.test | 10 | 0.001281s | 0.001270s | 0.001233s | byte equality observed |
| test_nested.test | 10 | 0.001255s | 0.001224s | 0.001226s | byte equality observed |
| test_null.test | 10 | 0.001300s | 0.001276s | 0.001277s | byte equality observed |
| test_reference.test | 10 | 0.001292s | 0.001274s | 0.001274s | byte equality observed |
| test_relaxed.test | 10 | 0.001280s | 0.001255s | 0.001242s | byte equality observed |
| test_same_type.test | 10 | 0.001301s | 0.001276s | 0.001258s | byte equality observed |
| test_stream.test | 10 | 0.001569s | 0.001538s | 0.001506s | byte equality observed |
| test_subscript.test | 10 | 0.001344s | 0.001302s | 0.001315s | byte equality observed |
| test_tuple.test | 10 | 0.001302s | 0.001286s | 0.001247s | byte equality observed |
| test_typeid_of.test | 10 | 0.001329s | 0.001324s | 0.001312s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
