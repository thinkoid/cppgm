# A counter that its block's accesses also index one step ahead keeps one
# register: the edges that carry the step enter one block, which steps the
# counter again for its phi. The addresses read the counter and take the
# step in their displacement.

# Each pass reads the next element and then its own; two edges carry the step back.
function @ahead(%p : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 1, ^body: %next, ^fix: %next]
    %more = cmp ult i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %next = binary add i64 %i, 1
    %r = index f64 %p, %next
    %w = load typed f64 %r
    %q = index f64 %p, %i
    %v = load typed f64 %q
    %less = cmp lt f64 %v, %w
    branch %less, ^head, ^fix
  block ^fix:
    store typed f64 %w, %q
    jump ^head
  block ^done:
    return void
}

# The step as a byte offset that an address scales.
function @scaled(%p : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 1, ^body: %next, ^fix: %next]
    %more = cmp ult i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %next = binary add i64 %i, 1
    %ahead = binary mul i64 %next, 8
    %r = index i8 %p, %ahead
    %w = load typed f64 %r
    %at = binary mul i64 %i, 8
    %q = index i8 %p, %at
    %v = load typed f64 %q
    %less = cmp lt f64 %v, %w
    branch %less, ^head, ^fix
  block ^fix:
    store typed f64 %w, %q
    jump ^head
  block ^done:
    return void
}

# The step is stored: it is a value of its own and keeps its register.
function @stored(%p : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 1, ^body: %next, ^fix: %next]
    %more = cmp ult i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %next = binary add i64 %i, 1
    %r = index i64 %p, %next
    %w = load typed i64 %r
    %q = index i64 %p, %i
    %v = load typed i64 %q
    %less = cmp lt i64 %v, %w
    branch %less, ^head, ^fix
  block ^fix:
    store typed i64 %next, %q
    jump ^head
  block ^done:
    return void
}
