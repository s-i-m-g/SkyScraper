#include "skyscraper.h"

void ft_putstr(char *str) {
  int i;
  char b;

  b = 0;
  i = 0;
  while (str[i]) {
    b = 0;
    b = str[i];
    write(1, &b, 1);
    i++;
  }
}

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i]) {
    i++;
  }
  return (i);
}

int ft_strval(char *str) {
  int i;
  int a;

  i = 0;
  a = 0;
  while (str[i]) {
    a += i;
    i++;
  }
  return (a);
}

int ft_expo(int a, int b) {
  a = a * 10;
  if (b == 1) {
    return (a);
  }
  return ((ft_expo(a, b - 1)));
}

int intrev(int n) {
  int a;

  a = 0;
  while (n > 0) {
    a = a * 10 + n % 10;
    n = n / 10;
  }
  return (a);
}
