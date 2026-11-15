# -O1: a handler block is entered by an exception as well as by its
# predecessors. @run's second handler adds to @count and jumps to the first
# handler, which runs a loop that counts in @count. An exception of @first
# enters the first handler with another value in @count, so the loop's first
# load of @count stays: no phi takes the second handler's stored value.
global @count : i32 = 0

declare function @first(%n : i32) -> void
declare function @second(%n : i32) -> void

function @run(%n : i32, %out : ptr) -> void [binding=strong] {
  block ^entry:
    eh_try ^undo_first
    call void @first(%n)
    eh_end
    eh_try ^undo_second
    call void @second(%n)
    eh_end
    return void

  block ^undo_second:
    %a = load typed i32 @count
    %b = binary add nowrap i32 %a, 100
    store typed i32 %b, @count
    jump ^undo_first

  block ^undo_first:
    jump ^cond

  block ^cond:
    %i = phi i64 [^undo_first: 3, ^body: %next]
    branch %i, ^body, ^done

  block ^body:
    %next = binary sub i64 %i, 1
    %c = load typed i32 @count
    %d = binary add nowrap i32 %c, 1
    store typed i32 %d, @count
    store typed f64 1.0, %out
    jump ^cond

  block ^done:
    resume
}
