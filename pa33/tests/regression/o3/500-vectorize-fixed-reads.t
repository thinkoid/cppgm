# A read of one address on every pass takes its value from before the loop,
# after a test that the loop's stores are apart from it. The lanes spread
# that value; the scalar loop still reads it on each pass.

function @add_weight(%a : ptr, %w : ptr, %from : i64, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 %from, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: %from, ^body: %next]
    %x = load typed f64 %w
    %p = index f64 %a, %i
    %v = load typed f64 %p
    %r = binary add f64 %v, %x
    store typed f64 %r, %p
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

# A field's address is named on each pass: the read before the loop names it too.
function @field(%this : ptr, %d : ptr, %x : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %cell = index i8 %this, 16
    %k = load typed f64 %cell
    %p = index f64 %x, %i
    %v = load typed f64 %p
    %r = binary mul f64 %v, %k
    %o = index f64 %d, %i
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

# Four lanes of words take a word's value: one test for the read, one for the
# array read on each pass.
function @words(%d : ptr, %x : ptr, %k : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %p = index i32 %x, %i
    %v = load typed i32 %p
    %add = load typed i32 %k
    %r = binary add i32 %v, %add
    %o = index i32 %d, %i
    store typed i32 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}
