# -O1: a pointer that walks one array is in that array. A store through it
# leaves a global, and another array, as they were.
# @fill steps a pointer through a slot and keeps a state in @seed: the state
# is read before the loop and written after it. @copy_scaled walks @left and
# reads @scale once. @same walks @left and reads its first element again
# after each store: that load stays. In @either the pointer steps from one
# of two arrays, so the load of @scale stays in the loop.
global @seed : i32 = 42
global @scale : i32 = 3
global @left : obj<64x4> = { zero 64 }
global @right : obj<64x4> = { zero 64 }

function @fill(%n : i64) -> i32 [binding=strong, no_inline=yes] {
  slot $buf : obj<64x4>

  block ^entry:
    %b = addr $buf
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %p = phi ptr [^entry: %b, ^loop: %p1]
    %s = load typed i32 @seed
    %m = binary mul i32 %s, 5
    %a = binary add i32 %m, 7
    %r = binary and i32 %a, 1023
    store typed i32 %r, @seed
    store typed i32 %r, %p
    %p1 = index inbounds i32 %p, 1
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, %n
    branch %more, ^loop, ^done

  block ^done:
    %last = index inbounds i32 %b, 15
    %v = load typed i32 %last
    %first = load typed i32 %b
    %sum = binary add i32 %v, %first
    return i32 %sum
}

function @copy_scaled(%n : i64) -> void [binding=strong, no_inline=yes] {
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %p = phi ptr [^entry: @left, ^loop: %p1]
    %q = index inbounds i32 @right, %i
    %x = load typed i32 %q
    %k = load typed i32 @scale
    %y = binary mul i32 %x, %k
    store typed i32 %y, %p
    %p1 = index inbounds i32 %p, 1
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, %n
    branch %more, ^loop, ^done

  block ^done:
    return void
}

function @same(%n : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %t = phi i32 [^entry: 0, ^loop: %t1]
    %p = phi ptr [^entry: @left, ^loop: %p1]
    %i32 = convert trunc i32 i64 %i
    %w = binary add i32 %i32, 100
    store typed i32 %w, %p
    %f = load typed i32 @left
    %t1 = binary add i32 %t, %f
    %p1 = index inbounds i32 %p, 1
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, %n
    branch %more, ^loop, ^done

  block ^done:
    return i32 %t1
}

function @either(%which : i32, %n : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    branch %which, ^one, ^two

  block ^one:
    jump ^head

  block ^two:
    jump ^head

  block ^head:
    %base = phi ptr [^one: @left, ^two: @scale]
    jump ^loop

  block ^loop:
    %i = phi i64 [^head: 0, ^loop: %i1]
    %t = phi i32 [^head: 0, ^loop: %t1]
    store typed i32 9, %base
    %k = load typed i32 @scale
    %t1 = binary add i32 %t, %k
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, %n
    branch %more, ^loop, ^done

  block ^done:
    return i32 %t1
}

function @main() -> i32 [binding=strong] {
  block ^entry:
    %a = call i32 @fill(16)
    %s = load typed i32 @seed
    %r1 = index inbounds i32 @right, 1
    store typed i32 10, @right
    store typed i32 20, %r1
    call void @copy_scaled(2)
    %l0 = load typed i32 @left
    %l1p = index inbounds i32 @left, 1
    %l1 = load typed i32 %l1p
    %b = call i32 @same(3)
    %c = call i32 @either(0, 2)
    %d = call i32 @either(1, 2)
    %x1 = binary add i32 %a, %s
    %x2 = binary add i32 %x1, %l0
    %x3 = binary add i32 %x2, %l1
    %x4 = binary add i32 %x3, %b
    %x5 = binary add i32 %x4, %c
    %x6 = binary add i32 %x5, %d
    return i32 %x6
}
