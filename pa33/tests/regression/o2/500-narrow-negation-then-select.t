# A truncation of a negation or a complement of an extension of its own type
# is that operation in the narrow type. The arm of `sign ? -v : v` then holds
# one instruction, and the choice is a select.

function @signed_value(%v : i8, %lit : i32) -> i8 [no_inline=yes] {
  block ^entry:
    %sign = binary and i32 %lit, 1
    branch %sign, ^negate, ^done

  block ^negate:
    %w = convert sext i32 i8 %v
    %n = unary neg i32 %w
    %t = convert trunc i8 i32 %n
    jump ^done

  block ^done:
    %r = phi i8 [^negate: %t, ^entry: %v]
    return i8 %r
}

function @complement(%b : u8) -> u8 [no_inline=yes] {
  block ^entry:
    %w = convert zext i32 u8 %b
    %o = unary bitnot i32 %w
    %r = convert trunc u8 i32 %o
    return u8 %r
}

# Each of the rest stays.
function @other_type(%b : i8) -> u8 [no_inline=yes] {
  block ^entry:
    %w = convert sext i32 i8 %b
    %o = unary neg i32 %w
    %r = convert trunc u8 i32 %o
    return u8 %r
}

function @unextended(%b : i32) -> i8 [no_inline=yes] {
  block ^entry:
    %o = unary neg i32 %b
    %r = convert trunc i8 i32 %o
    return i8 %r
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i8 @signed_value(5, 7)
    %b = call i8 @signed_value(5, 6)
    %c = call i8 @signed_value(-128, 1)
    %d = call u8 @complement(240)
    %e = call u8 @other_type(-3)
    %f = call i8 @unextended(300)
    %a_ok = cmp eq i8 %a, -5
    %b_ok = cmp eq i8 %b, 5
    %c_ok = cmp eq i8 %c, -128
    %d_ok = cmp eq u8 %d, 15
    %e_ok = cmp eq u8 %e, 3
    %f_ok = cmp eq i8 %f, -44
    %a_bit = select i32 %a_ok, 0, 1
    %b_bit = select i32 %b_ok, 0, 2
    %c_bit = select i32 %c_ok, 0, 4
    %d_bit = select i32 %d_ok, 0, 8
    %e_bit = select i32 %e_ok, 0, 16
    %f_bit = select i32 %f_ok, 0, 32
    %ab = binary or i32 %a_bit, %b_bit
    %cd = binary or i32 %c_bit, %d_bit
    %ef = binary or i32 %e_bit, %f_bit
    %abcd = binary or i32 %ab, %cd
    %status = binary or i32 %abcd, %ef
    return i32 %status
}
