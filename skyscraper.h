#ifndef SKYSCRAPER_H
#define SKYSCRAPER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strval(char *str);
int intrev(int n);
int ft_expo(int a, int b);
int ft_parse_argv(char *argv[], int **num);
int ft_put_value(int **num);
int ft_put_value2(int **num);
int **ft_comp(int **num, int base);
long *ft_pos_to_boards(int **pos);
long ft_col_to_row(long board);
long ft_find_match(long *boards1, long *boards2);
void ft_fill_pos(int **num, int *pos, int base);
long ft_join(int **pos, int *i);

#endif
