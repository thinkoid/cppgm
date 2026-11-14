# Lanes of 64-bit integers convert to doubles with one rounding, as the
# scalar conversion rounds: each half of a lane becomes a double's mantissa
# and the two are added.

function @unsigned_words(%d : ptr, %x : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %p = index i64 %x, %i
    %v = load typed i64 %p
    %r = convert uitofp f64 i64 %v
    %o = index f64 %d, %i
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

function @signed_words(%d : ptr, %x : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %p = index i64 %x, %i
    %v = load typed i64 %p
    %r = convert sitofp f64 i64 %v
    %o = index f64 %d, %i
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

# The counter's own lanes convert: each element is a share of its place.
function @places(%d : ptr, %n : i64, %whole : f64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 1, %n
    %parts = convert uitofp f64 i64 %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 1, ^body: %next]
    %before = binary sub i64 %i, 1
    %place = convert uitofp f64 i64 %before
    %share = binary mul f64 %whole, %place
    %r = binary div f64 %share, %parts
    %o = index f64 %d, %i
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}
