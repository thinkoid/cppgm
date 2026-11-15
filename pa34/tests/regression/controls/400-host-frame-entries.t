# `@frame_entries` returns on two paths without a frame and enters its frame
# on two others, each with a call and a use of a value kept across it. In
# the host model each of those paths sets its frame up next to its own code
# and falls into it, and each ends in its own return: the function has no
# jump.
global @log : i64 [binding=internal] = 0
global @cell : i64 [binding=internal] = 9

function @bump(%by : i64) -> i64 [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %n = load typed i64 @log
    %m = binary add i64 %n, %by
    store typed i64 %m, @log
    return i64 %m
}

function @frame_entries(%p : ptr, %mode : i64) -> i64 [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %null = cmp eq ptr %p, 0
    branch %null, ^none, ^have

  block ^none:
    return i64 0

  block ^have:
    %v = load typed i64 %p
    %first = cmp eq i64 %mode, 1
    branch %first, ^one, ^other

  block ^one:
    %a = call i64 @bump(%v)
    %a2 = binary add i64 %a, %v
    jump ^tail

  block ^other:
    %second = cmp eq i64 %mode, 2
    branch %second, ^two, ^plain

  block ^two:
    %b = call i64 @bump(3)
    %b2 = binary mul i64 %b, %v
    jump ^tail

  block ^tail:
    %r = phi i64 [^one: %a2, ^two: %b2]
    return i64 %r

  block ^plain:
    return i64 %v
}

function @main() -> i32 [role=entry, unwind=no] {
  block ^entry:
    %cell = addr @cell
    %a = call i64 @frame_entries(0, 1)
    %b = call i64 @frame_entries(%cell, 1)
    %c = call i64 @frame_entries(%cell, 2)
    %d = call i64 @frame_entries(%cell, 0)
    %s1 = binary add i64 %a, %b
    %s2 = binary add i64 %s1, %c
    %s3 = binary add i64 %s2, %d
    %bad = cmp ne i64 %s3, 135
    %r = convert zext i32 i1 %bad
    return i32 %r
}
