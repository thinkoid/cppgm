# An array of f32 is copied between two globals, then some of its elements
# are written again, so those addresses each take two stores. Any store to
# the first or last address of four adjacent ones may begin or end their
# group, tried in block order: the groups do not depend on how the host's
# sort orders stores to one address.
global @source : obj<64x4> = { f32 1 f32 2 f32 3 f32 4 f32 5 f32 6 f32 7 f32 8 f32 9 f32 10 f32 11 f32 12 f32 13 f32 14 f32 15 f32 16 }
global @copy : obj<64x4> = { zero 64 }

function @copy_then_set(%p : ptr) -> void [no_inline=yes] {
  block ^entry:
    %src = addr @source
    %dst = addr @copy
    %l0 = load typed f32 %src
    store typed f32 %l0, %dst
    %s1 = index i8 %src, 4
    %l1 = load typed f32 %s1
    %d1 = index i8 %dst, 4
    store typed f32 %l1, %d1
    %s2 = index i8 %src, 8
    %l2 = load typed f32 %s2
    %d2 = index i8 %dst, 8
    store typed f32 %l2, %d2
    %s3 = index i8 %src, 12
    %l3 = load typed f32 %s3
    %d3 = index i8 %dst, 12
    store typed f32 %l3, %d3
    %s4 = index i8 %src, 16
    %l4 = load typed f32 %s4
    %d4 = index i8 %dst, 16
    store typed f32 %l4, %d4
    %s5 = index i8 %src, 20
    %l5 = load typed f32 %s5
    %d5 = index i8 %dst, 20
    store typed f32 %l5, %d5
    %s6 = index i8 %src, 24
    %l6 = load typed f32 %s6
    %d6 = index i8 %dst, 24
    store typed f32 %l6, %d6
    %s7 = index i8 %src, 28
    %l7 = load typed f32 %s7
    %d7 = index i8 %dst, 28
    store typed f32 %l7, %d7
    %s8 = index i8 %src, 32
    %l8 = load typed f32 %s8
    %d8 = index i8 %dst, 32
    store typed f32 %l8, %d8
    %s9 = index i8 %src, 36
    %l9 = load typed f32 %s9
    %d9 = index i8 %dst, 36
    store typed f32 %l9, %d9
    %s10 = index i8 %src, 40
    %l10 = load typed f32 %s10
    %d10 = index i8 %dst, 40
    store typed f32 %l10, %d10
    %s11 = index i8 %src, 44
    %l11 = load typed f32 %s11
    %d11 = index i8 %dst, 44
    store typed f32 %l11, %d11
    %s12 = index i8 %src, 48
    %l12 = load typed f32 %s12
    %d12 = index i8 %dst, 48
    store typed f32 %l12, %d12
    %s13 = index i8 %src, 52
    %l13 = load typed f32 %s13
    %d13 = index i8 %dst, 52
    store typed f32 %l13, %d13
    %s14 = index i8 %src, 56
    %l14 = load typed f32 %s14
    %d14 = index i8 %dst, 56
    store typed f32 %l14, %d14
    %s15 = index i8 %src, 60
    %l15 = load typed f32 %s15
    %d15 = index i8 %dst, 60
    store typed f32 %l15, %d15
    %a0 = load typed f32 %p
    store typed f32 %a0, %d1
    %a1 = load typed f32 %p
    store typed f32 %a1, %d3
    return void
}

function @main() -> i32 [role=entry] {
  slot $v : obj<4x4>
  block ^entry:
    %p = addr $v
    store typed f32 100f, %p
    call void @copy_then_set(%p)
    %d = addr @copy
    %sum0 = load typed f32 %d
    %q1 = index i8 %d, 4
    %r1 = load typed f32 %q1
    %m1 = binary mul f32 %r1, 2f
    %sum1 = binary add f32 %sum0, %m1
    %q2 = index i8 %d, 8
    %r2 = load typed f32 %q2
    %m2 = binary mul f32 %r2, 3f
    %sum2 = binary add f32 %sum1, %m2
    %q3 = index i8 %d, 12
    %r3 = load typed f32 %q3
    %m3 = binary mul f32 %r3, 4f
    %sum3 = binary add f32 %sum2, %m3
    %q4 = index i8 %d, 16
    %r4 = load typed f32 %q4
    %m4 = binary mul f32 %r4, 5f
    %sum4 = binary add f32 %sum3, %m4
    %q5 = index i8 %d, 20
    %r5 = load typed f32 %q5
    %m5 = binary mul f32 %r5, 6f
    %sum5 = binary add f32 %sum4, %m5
    %q6 = index i8 %d, 24
    %r6 = load typed f32 %q6
    %m6 = binary mul f32 %r6, 7f
    %sum6 = binary add f32 %sum5, %m6
    %q7 = index i8 %d, 28
    %r7 = load typed f32 %q7
    %m7 = binary mul f32 %r7, 1f
    %sum7 = binary add f32 %sum6, %m7
    %q8 = index i8 %d, 32
    %r8 = load typed f32 %q8
    %m8 = binary mul f32 %r8, 2f
    %sum8 = binary add f32 %sum7, %m8
    %q9 = index i8 %d, 36
    %r9 = load typed f32 %q9
    %m9 = binary mul f32 %r9, 3f
    %sum9 = binary add f32 %sum8, %m9
    %q10 = index i8 %d, 40
    %r10 = load typed f32 %q10
    %m10 = binary mul f32 %r10, 4f
    %sum10 = binary add f32 %sum9, %m10
    %q11 = index i8 %d, 44
    %r11 = load typed f32 %q11
    %m11 = binary mul f32 %r11, 5f
    %sum11 = binary add f32 %sum10, %m11
    %q12 = index i8 %d, 48
    %r12 = load typed f32 %q12
    %m12 = binary mul f32 %r12, 6f
    %sum12 = binary add f32 %sum11, %m12
    %q13 = index i8 %d, 52
    %r13 = load typed f32 %q13
    %m13 = binary mul f32 %r13, 7f
    %sum13 = binary add f32 %sum12, %m13
    %q14 = index i8 %d, 56
    %r14 = load typed f32 %q14
    %m14 = binary mul f32 %r14, 1f
    %sum14 = binary add f32 %sum13, %m14
    %q15 = index i8 %d, 60
    %r15 = load typed f32 %q15
    %m15 = binary mul f32 %r15, 2f
    %sum15 = binary add f32 %sum14, %m15
    %e = cmp eq f32 %sum15, 1103f
    %r = select i32 %e, 0, 1
    return i32 %r
}
