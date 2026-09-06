#include "skyscraper.h"

int ft_parse_argv(char *argv[], int **num) {
  int i;
  int i2;

  i = 0;
  i2 = 0;
  if (ft_strlen(argv[1]) != 31) {
    return (1);
  }
  while (argv[1][i]) {
    if (argv[1][i] != 32) {
      num[i2][0] = argv[1][i] - 48;
      i2++;
    }
    i++;
  }
  return (0);
}

int ft_put_value(int **num) {
  int i;

  i = 0;
  while (i < 16) {
    if (num[i][0] == 1) {
      num[i][1] = 4132;
      num[i][2] = 4123;
      num[i][3] = 4213;
      num[i][4] = 4231;
      num[i][5] = 4312;
      num[i][6] = 4321;
    }
    if (num[i][0] == 3) {
      num[i][1] = 1243;
      num[i][2] = 1342;
      num[i][3] = 1324;
      num[i][4] = 2341;
      num[i][5] = 2314;
      num[i][6] = 2134;
    }
    i++;
  }
  ft_put_value2(num);
  return (0);
}

int ft_put_value2(int **num) {
  int i;

  i = 0;
  while (i < 16) {
    if (num[i][0] == 2) {
      num[i][1] = 1423;
      num[i][2] = 1432;
      num[i][3] = 2143;
      num[i][4] = 2413;
      num[i][5] = 2431;
      num[i][6] = 3124;
      num[i][7] = 3142;
      num[i][8] = 3214;
      num[i][9] = 3241;
      num[i][10] = 3412;
      num[i][11] = 3421;
    }
    if (num[i][0] == 4)
      num[i][1] = 1234;
    i++;
  }
  return (0);
}
