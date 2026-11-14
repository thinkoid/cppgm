# A sum's lanes are the first operand of each round's step, whichever side
# the scalar step reads them on: the round's result is then computed in the
# register the next round reads, with no copy on the way back.

function @sum_second(%x : ptr, %n : i64) -> i32 [no_inline=yes] {
  block ^entry:
    %any = cmp lt i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i32 [^entry: 0, ^body: %sum]
    %p = index i32 %x, %i
    %v = load typed i32 %p
    %sum = binary add i32 %v, %s
    %next = binary add i64 %i, 1
    %c = cmp lt i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    %out = phi i32 [^entry: 0, ^body: %sum]
    return i32 %out
}

# A difference does not commute: its operands stay.
function @difference(%x : ptr, %n : i64) -> i32 [no_inline=yes] {
  block ^entry:
    %any = cmp lt i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i32 [^entry: 0, ^body: %sum]
    %p = index i32 %x, %i
    %v = load typed i32 %p
    %sum = binary sub i32 %s, %v
    %next = binary add i64 %i, 1
    %c = cmp lt i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    %out = phi i32 [^entry: 0, ^body: %sum]
    return i32 %out
}
