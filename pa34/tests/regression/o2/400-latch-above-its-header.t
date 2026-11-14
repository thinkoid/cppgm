# Two loops whose latch has several predecessors. In `@settle` the paths of a
# pass end in the latch from three blocks: `^below` and `^under` (no change)
# and `^arm` (a store). The latch is placed above the loop's first block with
# `^arm` before it, so the back edge falls into the loop and each path takes
# one jump or branch to the latch. In `@plain` the block before the latch
# took a copy of the loop test; the latch stays below the loop there.
global @places : obj<64x8> [binding=internal] = {
  i64 3
  i64 40
  i64 5
  i64 90
  i64 7
  i64 20
  i64 9
  i64 300
}
global @wanted : obj<64x8> [binding=internal] = {
  i64 0
  i64 100
  i64 6
  i64 30
  i64 8
  i64 500
  i64 10
  i64 310
}

function @settle(%places : ptr, %wanted : ptr, %n : i64) -> void [binding=internal, no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 1, ^latch: %next]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done

  block ^body:
    %w = index inbounds i64 [projection=array_element] %wanted, %i
    %x = load typed i64 %w
    %p = index inbounds i64 [projection=array_element] %places, %i
    %y = load typed i64 %p
    %d = binary sub i64 %x, %y
    %j = binary add nowrap i64 %i, 1
    %pn = index inbounds i64 [projection=array_element] %places, %j
    %yn = load typed i64 %pn
    %e = binary sub i64 %yn, %y
    %h = binary sub nowrap i64 %i, 1
    %pp = index inbounds i64 [projection=array_element] %places, %h
    %yp = load typed i64 %pp
    %f = binary sub i64 %yp, %y
    %up = cmp ge i64 %d, 16
    branch %up, ^above, ^below

  block ^above:
    %far = cmp gt i64 %e, 1
    branch %far, ^arm, ^below

  block ^below:
    %down = cmp le i64 %d, -16
    branch %down, ^under, ^latch

  block ^under:
    %near = cmp lt i64 %f, -1
    branch %near, ^arm, ^latch

  block ^arm:
    %q = binary div i64 %d, 16
    %s = binary add i64 %y, %q
    store typed i64 %s, %p
    jump ^latch

  block ^latch:
    %next = binary add nowrap i64 %i, 1
    jump ^head

  block ^done:
    return void
}

function @plain(%places : ptr, %wanted : ptr, %n : i64) -> void [binding=internal, no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 1, ^latch: %next]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done

  block ^body:
    %w = index inbounds i64 [projection=array_element] %wanted, %i
    %x = load typed i64 %w
    %p = index inbounds i64 [projection=array_element] %places, %i
    %y = load typed i64 %p
    %d = binary sub i64 %x, %y
    %up = cmp ge i64 %d, 16
    branch %up, ^arm, ^low

  block ^low:
    %odd = binary and i64 %d, 1
    %down = cmp ne i64 %odd, 0
    branch %down, ^arm, ^latch

  block ^arm:
    %q = binary div i64 %d, 16
    %s = binary add i64 %y, %q
    store typed i64 %s, %p
    jump ^latch

  block ^latch:
    %next = binary add nowrap i64 %i, 1
    jump ^head

  block ^done:
    return void
}

function @main() -> i32 [role=entry] {
  block ^entry:
    call void @settle(@places, @wanted, 7)
    call void @plain(@wanted, @places, 8)
    %a = index inbounds i64 [projection=array_element] @places, 1
    %b = load typed i64 %a
    %c = index inbounds i64 [projection=array_element] @places, 5
    %e = load typed i64 %c
    %f = binary add i64 %b, %e
    %g = index inbounds i64 [projection=array_element] @wanted, 3
    %h = load typed i64 %g
    %k = binary add i64 %f, %h
    %r = convert trunc i32 i64 %k
    return i32 %r
}
