#include "skyscraper.h"

int **ft_comp(int **num, int base) {
  int **pos;
  int i;
  int i2;
  int i3;
  int i4;
  int s;

  i = 0;
  i2 = 1;
  i3 = 1;
  i4 = 0;
  pos = (int **)malloc(8 * 17);
  while (i < 4) {
    pos[i] = (int *)malloc(8 * 41);
    i++;
  }
  s = base + 4;
  i = 0;
  while (base < s) {
    i2 = 1;
    i4 = 0;
    while (num[base][i2]) {
      i3 = 1;
      while (num[base + 4][i3]) {
        if (num[base][i2] == intrev(num[base + 4][i3])) {
          pos[i][i4] = num[base][i2];
          i4++;
        }
        i3++;
      }
      i2++;
    }
    base++;
    i++;
  }
  return (pos);
}

long *ft_pos_to_boards(int **pos) {
  long *boards;
  int i;
  int i2;
  int i3;
  int i4;
  int i5;
  boards = (long *)malloc(8 * 100);
  i5 = 0;
  i = 0;
  while (pos[0][i]) {
    i2 = 0;
    while (pos[1][i2]) {
      i3 = 0;
      while (pos[2][i3]) {
        i4 = 0;
        while (pos[3][i4]) {
          boards[i5] = pos[0][i] * 1000000000000L;
          boards[i5] += pos[1][i2] * 100000000L;
          boards[i5] += pos[2][i3] * 10000L;
          boards[i5] += pos[3][i4];
          i5++;
          i4++;
        }
        i3++;
      }
      i2++;
    }
    i++;
  }
  boards[i5] = 0;
  return (boards);
}

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
