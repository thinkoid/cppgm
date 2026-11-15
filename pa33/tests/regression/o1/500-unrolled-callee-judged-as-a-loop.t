# -O1: the inliner judges a callee without what its unrolled loops added.
# @kernel holds a counted loop of eight passes, which is unrolled before
# @twice decides. Both calls of @twice go inline: @kernel is as large as its
# loop was. @twice then holds two unrolled copies and is judged as two
# loops: its callers take it too.
global @left : obj<64x8> = { zero 64 }
global @right : obj<64x8> = { zero 64 }

function @kernel(%p : ptr, %q : ptr) -> void [binding=strong] {
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %pi = index inbounds i64 %p, %i
    %qi = index inbounds i64 %q, %i
    %x = load typed i64 %pi
    %y = load typed i64 %qi
    %xx = binary mul i64 %x, %x
    %yy = binary mul i64 %y, %y
    %xy = binary mul i64 %x, %y
    %d = binary sub i64 %xx, %yy
    %re = binary add i64 %d, 3
    %twice = binary add i64 %xy, %xy
    %im = binary add i64 %twice, 5
    store typed i64 %re, %pi
    store typed i64 %im, %qi
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, 8
    branch %more, ^loop, ^done

  block ^done:
    return void
}

function @twice(%p : ptr, %q : ptr) -> void [binding=strong] {
  block ^entry:
    call void @kernel(%p, %q)
    call void @kernel(%p, %q)
    return void
}

function @through(%p : ptr, %q : ptr) -> void [binding=strong] {
  block ^entry:
    call void @twice(%p, %q)
    return void
}

function @main() -> i32 [binding=strong] {
  block ^entry:
    %l1 = index inbounds i64 @left, 1
    %r1 = index inbounds i64 @right, 1
    store typed i64 2, @left
    store typed i64 1, %l1
    store typed i64 1, @right
    store typed i64 2, %r1
    call void @through(@left, @right)
    %a = load typed i64 @left
    %b = load typed i64 %l1
    %c = load typed i64 @right
    %d = load typed i64 %r1
    %s1 = binary add i64 %a, %b
    %s2 = binary add i64 %s1, %c
    %s3 = binary add i64 %s2, %d
    %s7 = index inbounds i64 @left, 7
    %e = load typed i64 %s7
    %s4 = binary add i64 %s3, %e
    %rc = convert trunc i32 i64 %s4
    %low = binary and i32 %rc, 255
    return i32 %low
}
