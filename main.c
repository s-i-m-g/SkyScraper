/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 18:20:53 by sganase           #+#    #+#             */
/*   Updated: 2026/09/06 02:25:03 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int main(int argc, char *argv[]) {
  int **num;
  int i;
  int i2;
  int **pos;
  int **pos2;
  long *board1;
  long *board2;

  i = 0;
  i2 = 0;
  num = (int **)malloc(8 * 17);
  while (i < 16) {
    num[i] = (int *)malloc(8 * 41);
    i++;
  }
  i = 0;
  if (ft_parse_argv(&*argv, num)) {
    free(num);
    return (1);
  }
  i = 1;
  ft_put_value(num);
  while (i < 11) {
    printf("%d ", num[15][i]);
    i++;
  }
  printf("\n");
  pos = ft_comp(num, 0);
  printf("\n");
  pos2 = ft_comp(num, 8);
  free(num);
  board1 = ft_pos_to_boards(pos);
  board2 = ft_pos_to_boards(pos2);

  printf("%ld\n", ft_find_match(board1, board2));
  return (0);
}
