# -O1: a field cut from a word that a merge chooses is cut on each way in.
# In @first one way loads the whole pair and the other joins it from its two
# members; only the low member is read after the merge, so each way loads
# that member alone. @second reads the high member. In @loaded the field of
# a loaded word that nothing else reads is the field's own load. In @kept
# the merged word has a second reader and stays a word. In @previous the
# merge is a loop's: the field of the word of the turn before is cut at the
# end of the block that loads the next word.
global @cells : obj<64x8> = { zero 64 }

function @first(%p : ptr, %q : ptr, %flag : i64) -> u32 [binding=strong, no_inline=yes] {
  block ^entry:
    branch %flag, ^whole, ^parts

  block ^whole:
    %w1 = load typed i64 %p
    jump ^end

  block ^parts:
    %lo = load typed u32 %q
    %lo_wide = convert zext i64 u32 %lo
    %q_hi = index inbounds i8 %q, 4
    %hi = load typed u32 %q_hi
    %hi_wide = convert zext i64 u32 %hi
    %hi_up = binary shl i64 %hi_wide, 32
    %w2 = binary or i64 %lo_wide, %hi_up
    jump ^end

  block ^end:
    %w = phi i64 [^whole: %w1, ^parts: %w2]
    %field = convert trunc u32 i64 %w
    return u32 %field
}

function @second(%p : ptr, %q : ptr, %flag : i64) -> u32 [binding=strong, no_inline=yes] {
  block ^entry:
    branch %flag, ^whole, ^parts

  block ^whole:
    %w1 = load typed i64 %p
    jump ^end

  block ^parts:
    %lo = load typed u32 %q
    %lo_wide = convert zext i64 u32 %lo
    %q_hi = index inbounds i8 %q, 4
    %hi = load typed u32 %q_hi
    %hi_wide = convert zext i64 u32 %hi
    %hi_up = binary shl i64 %hi_wide, 32
    %w2 = binary or i64 %lo_wide, %hi_up
    jump ^end

  block ^end:
    %w = phi i64 [^whole: %w1, ^parts: %w2]
    %high = binary ushr i64 %w, 32
    %field = convert trunc u32 i64 %high
    return u32 %field
}

function @loaded(%p : ptr) -> u32 [binding=strong, no_inline=yes] {
  block ^entry:
    %w = load typed i64 %p
    %high = binary ushr i64 %w, 32
    %field = convert trunc u32 i64 %high
    return u32 %field
}

function @kept(%p : ptr, %q : ptr, %flag : i64, %out : ptr) -> u32 [binding=strong, no_inline=yes] {
  block ^entry:
    branch %flag, ^whole, ^parts

  block ^whole:
    %w1 = load typed i64 %p
    jump ^end

  block ^parts:
    %lo = load typed u32 %q
    %lo_wide = convert zext i64 u32 %lo
    %q_hi = index inbounds i8 %q, 4
    %hi = load typed u32 %q_hi
    %hi_wide = convert zext i64 u32 %hi
    %hi_up = binary shl i64 %hi_wide, 32
    %w2 = binary or i64 %lo_wide, %hi_up
    jump ^end

  block ^end:
    %w = phi i64 [^whole: %w1, ^parts: %w2]
    store typed i64 %w, %out
    %field = convert trunc u32 i64 %w
    return u32 %field
}

function @previous(%p : ptr, %n : i64) -> u32 [binding=strong, no_inline=yes] {
  block ^entry:
    %w0 = load typed i64 %p
    jump ^head

  block ^head:
    %w = phi i64 [^entry: %w0, ^body: %w1]
    %i = phi i64 [^entry: 0, ^body: %i1]
    %seen = phi u32 [^entry: 7, ^body: %field]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done

  block ^body:
    %i1 = binary add nowrap i64 %i, 1
    %at = binary mul i64 %i1, 8
    %q = index inbounds i8 %p, %at
    %w1 = load typed i64 %q
    %high = binary ushr i64 %w, 32
    %field = convert trunc u32 i64 %high
    jump ^head

  block ^done:
    return u32 %seen
}

function @main() -> i64 [role=entry] {
  block ^entry:
    %cells = addr @cells
    %other = index i8 %cells, 8
    %out = index i8 %cells, 16
    store i64 12884901890, %cells
    store i64 21474836484, %other
    %a = call u32 @first(%cells, %other, 1)
    %b = call u32 @first(%cells, %other, 0)
    %c = call u32 @second(%cells, %other, 1)
    %d = call u32 @second(%cells, %other, 0)
    %e = call u32 @loaded(%other)
    %f = call u32 @kept(%cells, %other, 0, %out)
    %g = load i64 %out
    %h = call u32 @previous(%cells, 0)
    %k = call u32 @previous(%cells, 1)
    %m = call u32 @previous(%cells, 2)
    %a_bad = cmp ne u32 %a, 2
    %b_bad = cmp ne u32 %b, 4
    %c_bad = cmp ne u32 %c, 3
    %d_bad = cmp ne u32 %d, 5
    %e_bad = cmp ne u32 %e, 5
    %f_bad = cmp ne u32 %f, 4
    %g_bad = cmp ne i64 %g, 21474836484
    %bad0 = binary or i64 %a_bad, %b_bad
    %bad1 = binary or i64 %c_bad, %d_bad
    %bad2 = binary or i64 %e_bad, %f_bad
    %bad3 = binary or i64 %bad0, %bad1
    %h_bad = cmp ne u32 %h, 7
    %k_bad = cmp ne u32 %k, 3
    %m_bad = cmp ne u32 %m, 5
    %bad4 = binary or i64 %bad2, %g_bad
    %bad5 = binary or i64 %h_bad, %k_bad
    %bad6 = binary or i64 %bad5, %m_bad
    %bad7 = binary or i64 %bad3, %bad4
    %bad = binary or i64 %bad6, %bad7
    return i64 %bad
}
