// The test of the first row leaves the inner loop when the loop is
// unswitched. The copy for the later rows loads `t` before the loop; that
// load's value is the header's own phi until it is folded, and then the copy
// is a loop the lanes can read: four registers of eight elements and one
// element more a row.
struct Table
{
  int rows;
  unsigned short* t;
  void fill();
};

__attribute__((noinline)) void Table::fill()
{
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < 33; ++j)
      t[i * 33 + j] = i == 0 ? (unsigned short)(j * j + 7) : t[j];
}

static unsigned short cells[33 * 6];

__attribute__((noinline)) static unsigned digest(int rows)
{
  for (int i = 0; i < 33 * 6; ++i)
    cells[i] = 0;
  Table table = { rows, cells };
  table.fill();
  unsigned all = 0;
  for (int i = 0; i < 33 * 6; ++i)
    all = all * 31 + cells[i];
  return all;
}

int main()
{
  return digest(6) == 59749536u && digest(1) == 2031685193u && digest(0) == 0u ? 0 : 1;
}
