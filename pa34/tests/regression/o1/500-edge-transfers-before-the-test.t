# A branch with an edge that only sets a register. In `@size_of` the null
# edge sets the result to zero and the other side loads it: the zero is set
# before the test, and the load's block falls into the join. In `@either` the
# edge copies a register: the copy runs before the test too. In `@held` the
# null edge sets the tested register itself to zero: it holds zero on that
# edge, so nothing is set. In `@kept` the other side calls before it writes
# the register, so the edge keeps its block.
global @cell : obj<64x2> [binding=internal] = {
  i64 7
  i64 30
}
global @slot : ptr [binding=internal] = 0
global @empty : ptr [binding=internal] = 0
global @notes : i64 [binding=internal] = 0

function @note() -> void [binding=internal, no_inline=yes] {
  block ^entry:
    %n = load typed i64 @notes
    %m = binary add i64 %n, 1
    store typed i64 %m, @notes
    return void
}

function @size_of(%p : ptr) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %null = cmp eq ptr %p, 0
    branch %null, ^join, ^load

  block ^load:
    %a = index inbounds i8 %p, 8
    %v = load typed i64 %a
    jump ^join

  block ^join:
    %size = phi i64 [^load: %v, ^entry: 0]
    %r = binary add i64 %size, 1
    return i64 %r
}

function @either(%p : ptr, %d : i64) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %null = cmp eq ptr %p, 0
    branch %null, ^join, ^load

  block ^load:
    %v = load typed i64 %p
    jump ^join

  block ^join:
    %x = phi i64 [^load: %v, ^entry: %d]
    %m = binary mul i64 %x, 3
    %r = binary add i64 %m, %d
    return i64 %r
}

function @held(%s : ptr) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %p = load typed ptr %s
    %null = cmp eq ptr %p, 0
    branch %null, ^join, ^load

  block ^load:
    %a = index inbounds i8 %p, 8
    %v = load typed i64 %a
    jump ^join

  block ^join:
    %size = phi i64 [^load: %v, ^entry: 0]
    return i64 %size
}

function @kept(%p : ptr) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %null = cmp eq ptr %p, 0
    branch %null, ^join, ^load

  block ^load:
    call void @note()
    %v = load typed i64 %p
    jump ^join

  block ^join:
    %size = phi i64 [^load: %v, ^entry: 0]
    %r = binary add i64 %size, 2
    return i64 %r
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %cell = addr @cell
    %a = call i64 @size_of(%cell)
    %b = call i64 @size_of(0)
    %c = call i64 @either(%cell, 5)
    %d = call i64 @either(0, 5)
    %slot = addr @slot
    store typed ptr %cell, %slot
    %e = call i64 @held(%slot)
    %empty = addr @empty
    %f = call i64 @held(%empty)
    %g = call i64 @kept(%cell)
    %h = call i64 @kept(0)
    %n = load typed i64 @notes
    %s1 = binary add i64 %a, %b
    %s2 = binary add i64 %s1, %c
    %s3 = binary add i64 %s2, %d
    %s4 = binary add i64 %s3, %e
    %s5 = binary add i64 %s4, %f
    %s6 = binary add i64 %s5, %g
    %s7 = binary add i64 %s6, %h
    %s8 = binary add i64 %s7, %n
    %r = convert trunc i32 i64 %s8
    return i32 %r
}
