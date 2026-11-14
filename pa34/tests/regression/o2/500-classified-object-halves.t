# A classified object that its block stores in four-byte halves is read back
# at the widths of those stores: a return and a register argument load each
# half and join the two, so no load reads over two stores. An upper half
# stored as zero takes a load of the lower half alone. A return whose half
# is still in the register that stored it reads the register.

# Two floats in one eightbyte: the return joins the two registers.
function @add(%a : obj<8x4> [classes=sse], %b : obj<8x4> [classes=sse]) -> obj<8x4> [result_classes=sse, binding=strong, no_inline=yes] {
  slot $a : obj<8x4>
  slot $b : obj<8x4>
  slot $r : obj<8x4>

  block ^entry:
    %pa = addr $a
    copyobj 8x4 %a, %pa
    %pb = addr $b
    copyobj 8x4 %b, %pb
    %ax = load typed f32 %pa
    %bx = load typed f32 %pb
    %x = binary add f32 %ax, %bx
    %pay = index inbounds i8 [projection=field] %pa, 4
    %ay = load typed f32 %pay
    %pby = index inbounds i8 [projection=field] %pb, 4
    %by = load typed f32 %pby
    %y = binary add f32 %ay, %by
    %pr = addr $r
    store typed f32 %x, %pr
    %pry = index inbounds i8 [projection=field] %pr, 4
    store typed f32 %y, %pry
    return obj<8x4> $r
}

# A double and an int: the padding above the int is stored as zero.
function @pair(%d : f64, %i : i32) -> obj<16x8> [result_classes=sse_integer, binding=strong, no_inline=yes] {
  slot $r : obj<16x8>

  block ^entry:
    %p = addr $r
    store f64 %d, %p
    %pi = index i8 [projection=field] %p, 8
    store i32 %i, %pi
    %pad = index i8 [projection=field] %p, 12
    store u32 0, %pad
    return obj<16x8> $r
}

function @length(%v : obj<12x4> [classes=sse_sse]) -> f32 [binding=strong, no_inline=yes] {
  slot $v : obj<12x4>

  block ^entry:
    %p = addr $v
    copyobj 12x4 %v, %p
    %x = load typed f32 %p
    %py = index inbounds i8 [projection=field] %p, 4
    %y = load typed f32 %py
    %pz = index inbounds i8 [projection=field] %p, 8
    %z = load typed f32 %pz
    %xy = binary add f32 %x, %y
    %sum = binary add f32 %xy, %z
    return f32 %sum
}

function @take(%v : obj<16x8> [classes=sse_integer]) -> f64 [binding=strong, no_inline=yes] {
  slot $v : obj<16x8>

  block ^entry:
    %p = addr $v
    copyobj 16x8 %v, %p
    %d = load typed f64 %p
    %pi = index inbounds i8 [projection=field] %p, 8
    %i = load typed i32 %pi
    %f = convert sitofp f64 i32 %i
    %sum = binary add f64 %d, %f
    return f64 %sum
}

# Three floats as an argument: the first eightbyte's halves join after the moves.
function @send(%a : f32, %b : f32, %c : f32) -> f32 [binding=strong, no_inline=yes] {
  slot $arg : obj<12x4>

  block ^entry:
    %p = addr $arg
    %x = binary add f32 %a, %b
    %y = binary add f32 %b, %c
    %z = binary add f32 %c, %a
    store f32 %x, %p
    %py = index i8 [projection=field] %p, 4
    store f32 %y, %py
    %pz = index i8 [projection=field] %p, 8
    store f32 %z, %pz
    %r = call f32 @length($arg)
    return f32 %r
}

function @send_pair(%d : f64, %i : i32) -> f64 [binding=strong, no_inline=yes] {
  slot $arg : obj<16x8>

  block ^entry:
    %p = addr $arg
    store f64 %d, %p
    %pi = index i8 [projection=field] %p, 8
    store i32 %i, %pi
    %pad = index i8 [projection=field] %p, 12
    store u32 0, %pad
    %r = call f64 @take($arg)
    return f64 %r
}

# A store through a pointer between the halves and the return: the object is
# read whole.
function @through(%q : ptr, %x : f32, %y : f32) -> obj<8x4> [result_classes=sse, binding=strong, no_inline=yes] {
  slot $r : obj<8x4>

  block ^entry:
    %p = addr $r
    store typed f32 %x, %p
    %py = index inbounds i8 [projection=field] %p, 4
    store typed f32 %y, %py
    store typed f32 %x, %q
    return obj<8x4> $r
}

function @main() -> i32 [role=entry] {
  slot $a : obj<8x4>
  slot $b : obj<8x4>
  slot $s : obj<8x4>
  slot $p : obj<16x8>
  slot $t : obj<8x4>
  slot $cell : f32

  block ^entry:
    %pa = addr $a
    store f32 1.5, %pa
    %pay = index i8 [projection=field] %pa, 4
    store f32 2.25, %pay
    %pb = addr $b
    store f32 10.0, %pb
    %pby = index i8 [projection=field] %pb, 4
    store f32 20.0, %pby
    %sum = call obj<8x4> @add($a, $b)
    %ps = addr $s
    copyobj 8x4 %sum, %ps
    %sx = load f32 %ps
    %psy = index i8 [projection=field] %ps, 4
    %sy = load f32 %psy
    %okx = cmp eq f32 %sx, 11.5
    %oky = cmp eq f32 %sy, 22.25
    %made = call obj<16x8> @pair(2.5, -7)
    %pp = addr $p
    copyobj 16x8 %made, %pp
    %d = load f64 %pp
    %ppi = index i8 [projection=field] %pp, 8
    %i = load i32 %ppi
    %ppad = index i8 [projection=field] %pp, 12
    %pad = load u32 %ppad
    %okd = cmp eq f64 %d, 2.5
    %oki = cmp eq i32 %i, -7
    %okpad = cmp eq u32 %pad, 0
    %len = call f32 @send(1.0, 2.0, 4.0)
    %oklen = cmp eq f32 %len, 14.0
    %taken = call f64 @send_pair(0.5, 40)
    %oktaken = cmp eq f64 %taken, 40.5
    %pc = addr $cell
    %whole = call obj<8x4> @through(%pc, 3.0, 5.0)
    %pt = addr $t
    copyobj 8x4 %whole, %pt
    %tx = load f32 %pt
    %pty = index i8 [projection=field] %pt, 4
    %ty = load f32 %pty
    %cellv = load f32 %pc
    %oktx = cmp eq f32 %tx, 3.0
    %okty = cmp eq f32 %ty, 5.0
    %okcell = cmp eq f32 %cellv, 3.0
    %b0 = convert zext i32 i1 %okx
    %b1 = convert zext i32 i1 %oky
    %b2 = convert zext i32 i1 %okd
    %b3 = convert zext i32 i1 %oki
    %b4 = convert zext i32 i1 %okpad
    %b5 = convert zext i32 i1 %oklen
    %b6 = convert zext i32 i1 %oktaken
    %b7 = convert zext i32 i1 %oktx
    %b8 = convert zext i32 i1 %okty
    %b9 = convert zext i32 i1 %okcell
    %c1 = binary add i32 %b0, %b1
    %c2 = binary add i32 %c1, %b2
    %c3 = binary add i32 %c2, %b3
    %c4 = binary add i32 %c3, %b4
    %c5 = binary add i32 %c4, %b5
    %c6 = binary add i32 %c5, %b6
    %c7 = binary add i32 %c6, %b7
    %c8 = binary add i32 %c7, %b8
    %c9 = binary add i32 %c8, %b9
    %bad = binary sub i32 10, %c9
    return i32 %bad
}
