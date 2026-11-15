# The forms a split leaves stay as they are: another split would give them
# again under new names, and every pass would run once more.
# - A call's object result that nothing reads, or that loads read only where
#   the call returned (@discarded, @read_at_return). A later read still
#   splits (@read_later).
# - An object value in a slot of its own, read there by its packed field's
#   load or by one narrower load (@value_read_whole, @value_half_read). Two
#   loads in one eightbyte still pack (@value_read_in_halves).
declare function @make(%result : ptr [pass=indirect_result, alias=exclusive_result, object_bytes=24], %x : i32) -> void
declare function @next() -> void

function @discarded(%x : i32) -> i32 [binding=strong] {
  slot $ignored : obj<24x8>

  block ^entry:
    %result = addr $ignored
    call void @make(%result, %x)
    return i32 %x
}

function @read_at_return(%x : i32) -> i64 [binding=strong] {
  slot $value : obj<24x8>

  block ^entry:
    %result = addr $value
    call void @make(%result, %x)
    %first = load typed i64 %result
    %at = index i8 [projection=field] %result, 16
    %third = load typed i64 %at
    %sum = binary add i64 %first, %third
    return i64 %sum
}

function @read_later(%x : i32) -> i64 [binding=strong] {
  slot $value : obj<24x8>

  block ^entry:
    %result = addr $value
    call void @make(%result, %x)
    call void @next()
    %first = load typed i64 %result
    return i64 %first
}

declare function @pair(%x : i32) -> obj<8x4> [result_classes=sse]

function @value_read_whole(%x : i32) -> i64 [binding=strong] {
  slot $value : obj<8x4>

  block ^entry:
    %made = call obj<8x4> @pair(%x)
    %at = addr $value
    copyobj 8x4 %made, %at
    %whole = load i64 %at
    return i64 %whole
}

function @value_read_in_halves(%x : i32) -> f32 [binding=strong] {
  slot $value : obj<8x4>

  block ^entry:
    %made = call obj<8x4> @pair(%x)
    %at = addr $value
    copyobj 8x4 %made, %at
    %low = load typed f32 %at
    %high_at = index i8 [projection=field] %at, 4
    %high = load typed f32 %high_at
    %sum = binary add f32 %low, %high
    return f32 %sum
}

function @value_half_read(%x : i32) -> f32 [binding=strong] {
  slot $value : obj<8x4>

  block ^entry:
    %made = call obj<8x4> @pair(%x)
    %at = addr $value
    copyobj 8x4 %made, %at
    %high_at = index i8 [projection=field] %at, 4
    %high = load typed f32 %high_at
    return f32 %high
}
