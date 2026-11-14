# A callee that tests its owner word, and steps a shared count only behind
# that test, gives each caller the test: the copy calls the callee where the
# count's step begins. A callee whose step comes first stays a call.
declare function @dispose(%p : ptr) -> void [linkage=c, binding=strong, object=dispose]

function @release(%owner : ptr) -> void {
  block ^entry:
    %word = load typed i64 %owner
    %shared = binary and i64 %word, 1
    branch %shared, ^counted, ^done
  block ^counted:
    %bits = binary and i64 %word, -4
    %object = copy ptr %bits
    %count = index i8 %object, 8
    %left = atomic_add_fetch i64 %count, -1, 5
    %last = cmp eq i64 %left, 0
    branch %last, ^drop, ^done
  block ^drop:
    call void @dispose(%object)
    jump ^done
  block ^done:
    return void
}

function @step_first(%count : ptr) -> void {
  block ^entry:
    %left = atomic_add_fetch i64 %count, -1, 5
    %last = cmp eq i64 %left, 0
    branch %last, ^drop, ^done
  block ^drop:
    call void @dispose(%count)
    jump ^done
  block ^done:
    return void
}

function @three(%a : ptr, %b : ptr, %c : ptr) -> void {
  block ^entry:
    call void @release(%a)
    call void @release(%b)
    call void @release(%c)
    return void
}

function @counts(%a : ptr, %b : ptr, %c : ptr) -> void {
  block ^entry:
    call void @step_first(%a)
    call void @step_first(%b)
    call void @step_first(%c)
    return void
}
