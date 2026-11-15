# A vector whose lanes are all literals is read from read-only data: x86-64
# has no vector immediate, and a half built in place goes through a general
# register. One global holds each value of the program, whatever joins the
# lanes: @splat and @again read the same one. A zero vector, a vector with a
# lane that is not a literal and a single literal lane stay as written.
function @splat(%p : ptr) -> i32 [binding=strong] {
  block ^entry:
    %v = load v128 %p
    %half = vector fromi64 6655295901103053916
    %all = vector punpcklqdq %half, %half
    %eq = vector pcmpeqb %v, %all
    %mask = vector pmovmskb %eq
    return i32 %mask
}

function @again(%p : ptr) -> i32 [binding=strong] {
  block ^entry:
    %v = load v128 %p
    %half = vector fromi64 6655295901103053916
    %all = vector pshufd %half, 68
    %eq = vector pcmpeqb %v, %all
    %mask = vector pmovmskb %eq
    return i32 %mask
}

function @halves() -> v128 [binding=strong] {
  block ^entry:
    %low = vector fromi64 578437695752307201
    %high = vector fromi64 1157159078456920585
    %all = vector punpcklqdq %low, %high
    return v128 %all
}

function @words() -> v128 [binding=strong] {
  block ^entry:
    %a = vector fromi32 1
    %b = vector fromi32 2
    %c = vector fromi32 3
    %d = vector fromi32 4
    %ab = vector punpckldq %a, %b
    %cd = vector punpckldq %c, %d
    %all = vector punpcklqdq %ab, %cd
    return v128 %all
}

function @floats() -> v128 [binding=strong] {
  block ^entry:
    %one = vector fromf32 1.5f
    %two = vector unpcklps %one, %one
    %all = vector movlhps %two, %two
    return v128 %all
}

function @doubles() -> v128 [binding=strong] {
  block ^entry:
    %low = vector fromf64 3
    %high = vector fromf64 2
    %all = vector unpcklpd %low, %high
    return v128 %all
}

function @in_loop(%p : ptr, %n : i64) -> i32 [binding=strong] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %sum = phi i32 [^entry: 0, ^body: %more]
    %go = cmp lt i64 %i, %n
    branch %go, ^body, ^out

  block ^body:
    %at = index inbounds i8 %p, %i
    %v = load v128 %at
    %half = vector fromi64 8680820740569200760
    %all = vector punpcklqdq %half, %half
    %eq = vector pcmpeqb %v, %all
    %mask = vector pmovmskb %eq
    %more = binary add i32 %mask, %sum
    %next = binary add nowrap i64 %i, 16
    jump ^head

  block ^out:
    return i32 %sum
}

function @zero() -> v128 [binding=strong] {
  block ^entry:
    %half = vector fromi64 0
    %all = vector punpcklqdq %half, %half
    return v128 %all
}

function @one_lane() -> v128 [binding=strong] {
  block ^entry:
    %low = vector fromi64 7
    return v128 %low
}

function @not_literal(%x : i64) -> v128 [binding=strong] {
  block ^entry:
    %low = vector fromi64 %x
    %high = vector fromi64 7
    %all = vector punpcklqdq %low, %high
    return v128 %all
}
