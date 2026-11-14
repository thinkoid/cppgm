# -O1: a temporary that replaces a copy of itself has the copy's readers.
# In @both a load's one reader is a copy at the load's type, and that copy
# has two readers: a reinterpretation at the other sign and a sign
# extension. The load keeps its type. In @one the reinterpretation is the
# load's only reader, and the load reads the other type.
global @cells : obj<16x8> = { zero 16 }

function @both(%p : ptr) -> i64 [binding=strong, no_inline=yes] {
  block ^entry:
    %q = index inbounds i8 %p, 8
    %n = load i32 %q
    %t = copy i32 %n
    %u = copy u32 %t
    %s = convert sext i64 i32 %t
    %z = convert zext i64 u32 %u
    %r = binary add i64 %s, %z
    return i64 %r
}

function @one(%p : ptr) -> i64 [binding=strong, no_inline=yes] {
  block ^entry:
    %q = index inbounds i8 %p, 8
    %n = load i32 %q
    %t = copy i32 %n
    %u = copy u32 %t
    %z = convert zext i64 u32 %u
    return i64 %z
}

function @main() -> i32 [binding=strong] {
  block ^entry:
    %c1 = index inbounds i8 @cells, 8
    store i64 4294967295, %c1
    %a = call i64 @both(@cells)
    %b = call i64 @one(@cells)
    %a_ok = cmp eq i64 %a, 4294967294
    %b_ok = cmp eq i64 %b, 4294967295
    %ok = binary and i32 %a_ok, %b_ok
    %rc = select i32 %ok, 0, 1
    return i32 %rc
}
