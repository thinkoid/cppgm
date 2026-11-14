# Two steps of an unsigned value by literals, neither wrapping, are one step
# that does not wrap: an addition of the literals' sum, or below zero a
# subtraction that does not borrow. A step that may wrap gives the sum
# without the fact; a signed value takes a negative literal.
function @down(%x : u32) -> u32 [no_inline=yes] {
  block ^entry:
    %a = binary add nowrap u32 %x, 2
    %b = binary sub nowrap u32 %a, 273
    return u32 %b
}

function @up(%x : u32) -> u32 [no_inline=yes] {
  block ^entry:
    %a = binary add nowrap u32 %x, 300
    %b = binary sub nowrap u32 %a, 273
    return u32 %b
}

function @may_wrap(%x : u32) -> u32 [no_inline=yes] {
  block ^entry:
    %a = binary add u32 %x, 2
    %b = binary sub nowrap u32 %a, 273
    return u32 %b
}

function @signed_down(%x : i32) -> i32 [no_inline=yes] {
  block ^entry:
    %a = binary add nowrap i32 %x, 2
    %b = binary sub nowrap i32 %a, 273
    return i32 %b
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call u32 @down(300)
    %b = call u32 @up(1)
    %c = call u32 @may_wrap(4294967295)
    %d = call i32 @signed_down(1)
    %ab = binary add u32 %a, %b
    %abc = binary add u32 %ab, %c
    %s = binary add i32 %abc, %d
    return i32 %s
}
