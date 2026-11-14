# A counted loop whose passes return to its header from several blocks (its
# step is computed in the body and no latch block is left) is unrolled as a
# loop of one latch is. @marks: three passes, the index a literal in each.
# @weights: each back edge brings its own value, which one phi merges at the
# end of a pass. A loop of no literal bound (@uncounted) and one of more
# passes than the unroller copies (@long_run) stay loops.
function @marks(%v : ptr, %below : ptr, %same : ptr, %x : i32) -> void [no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 1, ^low: %next, ^rest: %next, ^equal: %next]
    %more = cmp ule i64 %i, 3
    branch %more, ^body, ^done

  block ^body:
    %next = binary add i64 %i, 1
    %p = index inbounds i32 [projection=array_element] %v, %i
    %a = load typed i32 %p
    %q = index inbounds i32 [projection=array_element] %v, %next
    %b = load typed i32 %q
    %lt = cmp lt i32 %a, %b
    branch %lt, ^low, ^rest

  block ^low:
    %c = load typed i32 %below
    %c1 = binary add i32 %c, 1
    store typed i32 %c1, %below
    jump ^head

  block ^rest:
    %eq = cmp eq i32 %a, %x
    branch %eq, ^equal, ^head

  block ^equal:
    %d = load typed i32 %same
    %d1 = binary add i32 %d, 1
    store typed i32 %d1, %same
    jump ^head

  block ^done:
    return void
}

function @weights(%v : ptr, %x : i32) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 0, ^low: %next, ^rest: %next, ^equal: %next]
    %n = phi i32 [^entry: 0, ^low: %n3, ^rest: %n, ^equal: %n5]
    %more = cmp ult i64 %i, 4
    branch %more, ^body, ^done

  block ^body:
    %next = binary add i64 %i, 1
    %p = index inbounds i32 [projection=array_element] %v, %i
    %a = load typed i32 %p
    %lt = cmp lt i32 %a, %x
    branch %lt, ^low, ^rest

  block ^low:
    store typed i32 1, %p
    %n3 = binary add i32 %n, 3
    jump ^head

  block ^rest:
    %eq = cmp eq i32 %a, %x
    branch %eq, ^equal, ^head

  block ^equal:
    store typed i32 2, %p
    %n5 = binary xor i32 %n, 5
    jump ^head

  block ^done:
    return i32 %n
}

function @uncounted(%v : ptr, %below : ptr, %same : ptr, %x : i32, %count : i64) -> void [no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 0, ^low: %next, ^rest: %next, ^equal: %next]
    %more = cmp ult i64 %i, %count
    branch %more, ^body, ^done

  block ^body:
    %next = binary add i64 %i, 1
    %p = index inbounds i32 [projection=array_element] %v, %i
    %a = load typed i32 %p
    %lt = cmp lt i32 %a, %x
    branch %lt, ^low, ^rest

  block ^low:
    %c = load typed i32 %below
    %c1 = binary add i32 %c, 1
    store typed i32 %c1, %below
    jump ^head

  block ^rest:
    %eq = cmp eq i32 %a, %x
    branch %eq, ^equal, ^head

  block ^equal:
    %d = load typed i32 %same
    %d1 = binary add i32 %d, 1
    store typed i32 %d1, %same
    jump ^head

  block ^done:
    return void
}

function @long_run(%v : ptr, %below : ptr, %same : ptr, %x : i32) -> void [no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 0, ^low: %next, ^rest: %next, ^equal: %next]
    %more = cmp ult i64 %i, 40
    branch %more, ^body, ^done

  block ^body:
    %next = binary add i64 %i, 1
    %p = index inbounds i32 [projection=array_element] %v, %i
    %a = load typed i32 %p
    %lt = cmp lt i32 %a, %x
    branch %lt, ^low, ^rest

  block ^low:
    %c = load typed i32 %below
    %c1 = binary add i32 %c, 1
    store typed i32 %c1, %below
    jump ^head

  block ^rest:
    %eq = cmp eq i32 %a, %x
    branch %eq, ^equal, ^head

  block ^equal:
    %d = load typed i32 %same
    %d1 = binary add i32 %d, 1
    store typed i32 %d1, %same
    jump ^head

  block ^done:
    return void
}
