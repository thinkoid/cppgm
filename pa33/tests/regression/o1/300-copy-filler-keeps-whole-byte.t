# A copy of an object whose byte 4 one path stores as an i1 and another as
# part of an i32 moves the whole byte: after @make is inlined with kind 1,
# @main reads the i32 25.
function @make(%kind : i32) -> obj<16x8> [result_classes=sse_sse] {
  slot $result : obj<16x8>
  slot $value : obj<16x8>

  block ^entry:
    store i32 %kind, $value
    switch %kind, ^done, 1:^integer, 2:^floating, 3:^boolean

  block ^integer:
    %integer_base = addr $value
    %integer_field = index inbounds i8 %integer_base, 4
    store i32 25, %integer_field
    jump ^done

  block ^floating:
    %floating_base = addr $value
    %floating_field = index inbounds i8 %floating_base, 4
    store f64 2.5, %floating_field
    jump ^done

  block ^boolean:
    %boolean_base = addr $value
    %boolean_field = index inbounds i8 %boolean_base, 4
    store i1 1, %boolean_field
    jump ^done

  block ^done:
    %loaded = load obj<16x8> $value
    copyobj 16x8 %loaded, $result
    %returned = copy obj<16x8> $result
    return obj<16x8> %returned
}

function @main() -> i32 {
  slot $made : obj<16x8>

  block ^entry:
    %made_value = call obj<16x8> @make(1)
    copyobj 16x8 %made_value, $made
    %made_base = addr $made
    %payload_field = index inbounds i8 %made_base, 4
    %payload = load i32 %payload_field
    return i32 %payload
}
