# An arm that several case values share, and case values that go to the join
# with no arm between, take their places in the table: the phi then reads
# nothing from the switch's block.
function @complement(%c : i64, %seed : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %c, ^otherwise, 2:^merge, 10:^merge, 3:^first, 11:^first, 4:^second, 12:^second, 6:^third, 14:^third

  block ^first:
    jump ^merge

  block ^second:
    jump ^merge

  block ^third:
    jump ^merge

  block ^otherwise:
    %fallback = binary add i64 %seed, 1
    jump ^merge

  block ^merge:
    %result = phi i64 [^entry: 65, ^first: 84, ^second: 67, ^third: 71, ^otherwise: %fallback]
    return i64 %result
}

# The default goes to the join as well: the edge from the switch's block
# stays, and so does the case value that takes it.
function @keeps_edge(%c : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %c, ^merge, 0:^merge, 1:^first, 5:^first, 2:^second, 3:^third, 4:^fourth

  block ^first:
    jump ^merge

  block ^second:
    jump ^merge

  block ^third:
    jump ^merge

  block ^fourth:
    jump ^merge

  block ^merge:
    %result = phi i64 [^entry: 9, ^first: 5, ^second: 3, ^third: 8, ^fourth: 1]
    return i64 %result
}

function @main() -> i32 {
  block ^entry:
    %a = call i64 @complement(2, 40)
    %b = call i64 @complement(10, 40)
    %c = call i64 @complement(11, 40)
    %d = call i64 @complement(4, 40)
    %e = call i64 @complement(14, 40)
    %f = call i64 @complement(5, 40)
    %g = call i64 @complement(15, 40)
    %h = call i64 @complement(-1, 40)
    %ab = binary add i64 %a, %b
    %cd = binary add i64 %c, %d
    %ef = binary add i64 %e, %f
    %gh = binary add i64 %g, %h
    %abcd = binary add i64 %ab, %cd
    %efgh = binary add i64 %ef, %gh
    %all = binary add i64 %abcd, %efgh
    %all_ok = cmp eq i64 %all, 475
    %i = call i64 @keeps_edge(0)
    %j = call i64 @keeps_edge(1)
    %k = call i64 @keeps_edge(5)
    %l = call i64 @keeps_edge(4)
    %m = call i64 @keeps_edge(6)
    %ij = binary mul i64 %i, 10
    %ijj = binary add i64 %ij, %j
    %kk = binary mul i64 %ijj, 10
    %kkk = binary add i64 %kk, %k
    %ll = binary mul i64 %kkk, 10
    %lll = binary add i64 %ll, %l
    %mm = binary mul i64 %lll, 10
    %mmm = binary add i64 %mm, %m
    %edge_ok = cmp eq i64 %mmm, 95519
    %all_bit = select i32 %all_ok, 0, 1
    %edge_bit = select i32 %edge_ok, 0, 2
    %status = binary or i32 %all_bit, %edge_bit
    return i32 %status
}
