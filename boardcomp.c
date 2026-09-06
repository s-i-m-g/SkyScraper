#include "skyscraper.h"

long ft_col_to_row(long board) {
  int grid[4][4];
  long out;
  int i;
  int i2;
  i = 3;
  while (i >= 0) {
    i2 = 3;
    while (i2 >= 0) {
      grid[i][i2] = board % 10;
      board = board / 10;
      i2--;
    }
    i--;
  }
  out = 0;
  i = 0;
  while (i < 4) {
    i2 = 0;
    while (i2 < 4) {
      out = out * 10 + grid[i2][i];
      i2++;
    }
    i++;
  }
  return (out);
}

long ft_find_match(long *boards1, long *boards2) {
  int i;
  int i2;
  i = 0;
  while (boards1[i]) {
    i2 = 0;
    while (boards2[i2]) {
      if (boards1[i] == ft_col_to_row(boards2[i2])) {
        return (boards1[i]);
      }
      i2++;
    }
    i++;
  }
  return (0);
}
