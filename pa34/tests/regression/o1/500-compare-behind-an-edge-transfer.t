# A scan loop leaves on `x > v`, and the block after it tests `v == x`: both
# compare the same registers, so the second test reads the flags the loop
# left. The edge to `^join` copies `%out` into the register of `%p`, and
# `^hit` writes that register before it reads it: the copy runs before the
# test (500-edge-transfers-before-the-test). The copy keeps the flags, so
# the compare behind it still goes.
global @heap : obj<64x8> [binding=internal] = {
  i64 3
  i64 5
  i64 8
  i64 13
  i64 21
  i64 34
  i64 55
  i64 89
}
global @letters : obj<8x8> [binding=internal] = {
  i64 5208208757389214273
}
global @text : obj<16x1> [binding=internal] = { zero 16 }

global @cursor : ptr [binding=internal] = 0
global @where : i64 [binding=internal] = 0
global @seen : i64 [binding=internal] = 0

function @emit(%x : i64, %out : ptr) -> void [binding=internal, no_inline=yes] {
  block ^entry:
    jump ^scan

  block ^scan:
    %i = phi i64 [^entry: 0, ^scan: %i1]
    %a = index inbounds i64 @heap, %i
    %v = load typed i64 %a
    %i1 = binary add i64 %i, 1
    %below = cmp ugt i64 %x, %v
    branch %below, ^scan, ^found

  block ^found:
    %same = cmp eq i64 %v, %x
    branch %same, ^hit, ^join

  block ^hit:
    %b = index inbounds u8 @letters, %i
    %c = load typed u8 %b
    store typed u8 %c, %out
    %next = index inbounds u8 %out, 1
    jump ^join

  block ^join:
    %p = phi ptr [^found: %out, ^hit: %next]
    store typed u8 0, %p
    %tail = index inbounds u8 %out, 15
    store typed u8 1, %tail
    store typed ptr %p, @cursor
    store typed i64 %i, @where
    store typed i64 %v, @seen
    return void
}

function @main() -> i32 [binding=strong] {
  block ^entry:
    call void @emit(13, @text)
    %p1 = load typed ptr @cursor
    call void @emit(14, %p1)
    %p2 = load typed ptr @cursor
    call void @emit(55, %p2)
    %p3 = load typed ptr @cursor
    %at = index inbounds u8 %p3, -2
    %first = load typed u8 %at
    %last = load typed u8 @text
    %sum = binary add u8 %first, %last
    %less = binary sub u8 %sum, 100
    %rc = convert zext i32 u8 %less
    return i32 %rc
}
