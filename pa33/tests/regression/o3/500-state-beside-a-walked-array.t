# -O3: a state the loop keeps in a global, beside a pointer that walks a
# slot. The pointer stays in the slot, so the state is read before the loop
# and written once after it.
global @seed : i32 = 42

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

function @main() -> i32 [binding=strong] {
  block ^entry:
    %a = call i32 @fill(16)
    %s = load typed i32 @seed
    %x = binary add i32 %a, %s
    %rc = binary and i32 %x, 255
    return i32 %rc
}
