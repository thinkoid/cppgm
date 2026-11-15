# -O1: the inliner prices a switch by its runs of consecutive case values
# with one target. @is_word tests 62 values in three runs: it is as small as
# three range tests and goes into the loop of @count. The bytes are
# "ab_c 1-Z": six of them pass.
global @text : obj<8x1> = { zero 8 }

function @is_word(%c : u8) -> u8 [binding=strong] {
  block ^entry:
    switch %c, ^other, 48:^yes, 49:^yes, 50:^yes, 51:^yes, 52:^yes, 53:^yes, 54:^yes, 55:^yes, 56:^yes, 57:^yes, 65:^yes, 66:^yes, 67:^yes, 68:^yes, 69:^yes, 70:^yes, 71:^yes, 72:^yes, 73:^yes, 74:^yes, 75:^yes, 76:^yes, 77:^yes, 78:^yes, 79:^yes, 80:^yes, 81:^yes, 82:^yes, 83:^yes, 84:^yes, 85:^yes, 86:^yes, 87:^yes, 88:^yes, 89:^yes, 90:^yes, 97:^yes, 98:^yes, 99:^yes, 100:^yes, 101:^yes, 102:^yes, 103:^yes, 104:^yes, 105:^yes, 106:^yes, 107:^yes, 108:^yes, 109:^yes, 110:^yes, 111:^yes, 112:^yes, 113:^yes, 114:^yes, 115:^yes, 116:^yes, 117:^yes, 118:^yes, 119:^yes, 120:^yes, 121:^yes, 122:^yes

  block ^other:
    %under = cmp eq u8 %c, 95
    jump ^yes

  block ^yes:
    %r = phi i64 [^other: %under, ^entry: 1]
    %b = convert trunc u8 i64 %r
    return u8 %b
}

function @count(%p : ptr, %n : i64) -> i64 [binding=strong] {
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %sum = phi i64 [^entry: 0, ^loop: %sum1]
    %at = index inbounds u8 %p, %i
    %c = load typed u8 %at
    %w = call u8 @is_word(%c)
    %wide = convert zext i64 u8 %w
    %sum1 = binary add i64 %sum, %wide
    %i1 = binary add i64 %i, 1
    %more = cmp ult i64 %i1, %n
    branch %more, ^loop, ^done

  block ^done:
    return i64 %sum1
}

function @main() -> i32 [binding=strong] {
  block ^entry:
    store i64 6497903852541403745, @text
    %n = call i64 @count(@text, 8)
    %rc = convert trunc i32 i64 %n
    return i32 %rc
}
