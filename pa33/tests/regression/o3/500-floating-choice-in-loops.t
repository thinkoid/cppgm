# A branch on a floating compare in a loop whose arm only computes a floating
# value becomes a select of that value at -O3. @fill: both loops then run in
# lanes (the compare's mask over the two values); the second reads x[j - 273]
# through an index the counter's range proves cannot wrap. @carried: the
# value is carried around the loop, so the select stays scalar. @floats: four
# float lanes. A test outside a loop (@outside_a_loop), an arm that divides
# (@quotient_arm) and a value of another width than the test's (@other_width)
# keep the branch.
function @fill(%e : ptr [pass=by_address, object_bytes=4864]) -> void [binding=strong, object=_Z4fillR6Engine] {
  block ^entry:
    jump ^for_cond_1

  block ^for_cond_1:
    %t1 = phi u32 [^entry: 0, ^if_end_4: %t13]
    %t2 = cmp ult u32 %t1, 273
    branch %t2, ^for_body_2, ^for_cond_5

  block ^for_body_2:
    %t3 = index inbounds i8 [projection=field] %e, 8
    %t4 = index inbounds f64 [projection=array_element] %t3, %t1
    %t5 = load typed f64 %t4
    %t6 = binary add u32 %t1, 334
    %t7 = index inbounds f64 [projection=array_element] %t3, %t6
    %t8 = load typed f64 %t7
    %t9 = binary add f64 %t5, %t8
    %t10 = cmp ge f64 %t9, 1
    branch %t10, ^if_then_3, ^if_end_4

  block ^if_then_3:
    %t11 = binary sub f64 %t9, 1
    jump ^if_end_4

  block ^if_end_4:
    %t12 = phi f64 [^if_then_3: %t11, ^for_body_2: %t9]
    store typed f64 %t12, %t4
    %t13 = binary add u32 %t1, 1
    jump ^for_cond_1

  block ^for_cond_5:
    %t14 = phi u32 [^if_end_8: %t26, ^for_cond_1: 273]
    %t15 = cmp ult u32 %t14, 607
    branch %t15, ^for_body_6, ^for_end_9

  block ^for_body_6:
    %t16 = index inbounds i8 [projection=field] %e, 8
    %t17 = index inbounds f64 [projection=array_element] %t16, %t14
    %t18 = load typed f64 %t17
    %t19 = binary sub u32 %t14, 273
    %t20 = index inbounds f64 [projection=array_element] %t16, %t19
    %t21 = load typed f64 %t20
    %t22 = binary add f64 %t18, %t21
    %t23 = cmp ge f64 %t22, 1
    branch %t23, ^if_then_7, ^if_end_8

  block ^if_then_7:
    %t24 = binary sub f64 %t22, 1
    jump ^if_end_8

  block ^if_end_8:
    %t25 = phi f64 [^if_then_7: %t24, ^for_body_6: %t22]
    store typed f64 %t25, %t17
    %t26 = binary add u32 %t14, 1
    jump ^for_cond_5

  block ^for_end_9:
    store typed u32 0, %e
    return void
}
function @carried(%v : ptr, %n : i64, %lim : f64) -> f64 [binding=strong, object=_Z7carriedPKdld] {
  block ^entry:
    jump ^for_cond_1

  block ^for_cond_1:
    %t1 = phi i64 [^entry: 0, ^if_end_4: %t10]
    %t2 = phi f64 [^entry: 0, ^if_end_4: %t9]
    %t3 = cmp lt i64 %t1, %n
    branch %t3, ^for_body_2, ^for_end_5

  block ^for_body_2:
    %t4 = index inbounds f64 [projection=array_element] %v, %t1
    %t5 = load typed f64 %t4
    %t6 = binary add f64 %t5, %t2
    %t7 = cmp ge f64 %t6, %lim
    branch %t7, ^if_then_3, ^if_end_4

  block ^if_then_3:
    %t8 = binary sub f64 %t6, %lim
    jump ^if_end_4

  block ^if_end_4:
    %t9 = phi f64 [^if_then_3: %t8, ^for_body_2: %t6]
    %t10 = binary add nowrap i64 %t1, 1
    jump ^for_cond_1

  block ^for_end_5:
    return f64 %t2
}
function @floats(%v : ptr, %lim : ptr, %n : i64) -> void [binding=strong, object=_Z6floatsPfPKfl] {
  block ^entry:
    jump ^for_cond_1

  block ^for_cond_1:
    %t1 = phi i64 [^entry: 0, ^if_end_4: %t11]
    %t2 = cmp lt i64 %t1, %n
    branch %t2, ^for_body_2, ^for_end_5

  block ^for_body_2:
    %t3 = index inbounds f32 [projection=array_element] %v, %t1
    %t4 = load typed f32 %t3
    %t5 = binary mul f32 %t4, 1.5f
    %t6 = index inbounds f32 [projection=array_element] %lim, %t1
    %t7 = load typed f32 %t6
    %t8 = cmp gt f32 %t5, %t7
    branch %t8, ^if_then_3, ^if_end_4

  block ^if_then_3:
    %t9 = binary sub f32 %t5, %t7
    jump ^if_end_4

  block ^if_end_4:
    %t10 = phi f32 [^if_then_3: %t9, ^for_body_2: %t5]
    store typed f32 %t10, %t3
    %t11 = binary add nowrap i64 %t1, 1
    jump ^for_cond_1

  block ^for_end_5:
    return void
}
function @outside_a_loop(%t : f64, %lim : f64) -> f64 [binding=strong, object=_Z14outside_a_loopdd] {
  block ^entry:
    %t1 = cmp ge f64 %t, %lim
    branch %t1, ^if_then_1, ^if_end_2

  block ^if_then_1:
    %t2 = binary sub f64 %t, %lim
    jump ^if_end_2

  block ^if_end_2:
    %t3 = phi f64 [^if_then_1: %t2, ^entry: %t]
    return f64 %t3
}
function @quotient_arm(%v : ptr, %n : i64, %lim : f64) -> void [binding=strong, object=_Z12quotient_armPdld] {
  block ^entry:
    jump ^for_cond_1

  block ^for_cond_1:
    %t1 = phi i64 [^entry: 0, ^if_end_4: %t8]
    %t2 = cmp lt i64 %t1, %n
    branch %t2, ^for_body_2, ^for_end_5

  block ^for_body_2:
    %t3 = index inbounds f64 [projection=array_element] %v, %t1
    %t4 = load typed f64 %t3
    %t5 = cmp ge f64 %t4, %lim
    branch %t5, ^if_then_3, ^if_end_4

  block ^if_then_3:
    %t6 = binary div f64 %t4, %lim
    jump ^if_end_4

  block ^if_end_4:
    %t7 = phi f64 [^if_then_3: %t6, ^for_body_2: %t4]
    store typed f64 %t7, %t3
    %t8 = binary add nowrap i64 %t1, 1
    jump ^for_cond_1

  block ^for_end_5:
    return void
}
function @other_width(%v : ptr, %w : ptr, %n : i64) -> void [binding=strong, object=_Z11other_widthPfPKdl] {
  block ^entry:
    jump ^for_cond_1

  block ^for_cond_1:
    %t1 = phi i64 [^entry: 0, ^if_end_4: %t10]
    %t2 = cmp lt i64 %t1, %n
    branch %t2, ^for_body_2, ^for_end_5

  block ^for_body_2:
    %t3 = index inbounds f32 [projection=array_element] %v, %t1
    %t4 = load typed f32 %t3
    %t5 = index inbounds f64 [projection=array_element] %w, %t1
    %t6 = load typed f64 %t5
    %t7 = cmp ge f64 %t6, 1
    branch %t7, ^if_then_3, ^if_end_4

  block ^if_then_3:
    %t8 = binary add f32 %t4, 1f
    jump ^if_end_4

  block ^if_end_4:
    %t9 = phi f32 [^if_then_3: %t8, ^for_body_2: %t4]
    store typed f32 %t9, %t3
    %t10 = binary add nowrap i64 %t1, 1
    jump ^for_cond_1

  block ^for_end_5:
    return void
}
