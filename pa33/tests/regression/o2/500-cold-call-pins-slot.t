# A small callee at a cold site goes inline when the call passes the address
# of a caller's slot: as a call it would keep the slot in memory on the hot
# path too.
declare function @release(%p : ptr) -> void
declare function @make(%n : i64) -> ptr

function @reset(%this : ptr [object_bytes=8], %p : ptr) -> void [binding=weak] {
  block ^entry:
    %old = load typed ptr %this
    store typed ptr %p, %this
    branch %old, ^drop, ^done

  block ^drop:
    call void @release(%old)
    jump ^done

  block ^done:
    return void
}

function @parse(%n : i64, %text : ptr) -> i64 [binding=strong] {
  slot $copy : ptr

  block ^entry:
    store typed ptr 0, $copy
    %short = cmp ult i64 %n, 64
    branch unlikely %short, ^padded, ^read

  block ^padded:
    %made = call ptr @make(%n)
    %at = addr $copy
    call void @reset(%at, %made)
    %held = load typed ptr $copy
    jump ^read

  block ^read:
    %from = phi ptr [^entry: %text, ^padded: %held]
    %value = load typed i64 %from
    %last = load typed ptr $copy
    branch %last, ^free, ^out

  block ^free:
    call void @release(%last)
    jump ^out

  block ^out:
    return i64 %value
}
