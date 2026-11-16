# An object loaded from a slot and then returned is returned from the slot,
# with no copy of its own. @point stores two doubles and returns them in
# SSE registers; @main checks both.
function @point(%values : ptr) -> obj<16x8> [result_classes=sse_sse, no_inline=yes] {
  slot $result : obj<16x8>
  slot $value : obj<16x8>

  block ^entry:
    %first_source = index f64 %values, 0
    %first = load f64 %first_source
    %second_source = index f64 %values, 1
    %second = load f64 %second_source
    %value_base = addr $value
    store f64 %first, %value_base
    %second_field = index inbounds i8 %value_base, 8
    store f64 %second, %second_field
    %loaded = load obj<16x8> $value
    copyobj 16x8 %loaded, $result
    jump ^done

  block ^done:
    %returned = copy obj<16x8> $result
    return obj<16x8> %returned
}

function @main() -> i32 {
  slot $values : obj<16x8>
  slot $made : obj<16x8>

  block ^entry:
    %values_base = addr $values
    store f64 2.5, %values_base
    %values_second = index inbounds i8 %values_base, 8
    store f64 4.0, %values_second
    %made_value = call obj<16x8> @point(%values_base)
    copyobj 16x8 %made_value, $made
    %made_base = addr $made
    %first = load f64 %made_base
    %made_second = index inbounds i8 %made_base, 8
    %second = load f64 %made_second
    %sum = binary add f64 %first, %second
    %scaled = binary mul f64 %sum, 2.0
    %result = convert fptosi i32 f64 %scaled
    return i32 %result
}
