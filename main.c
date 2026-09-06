/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 18:20:53 by sganase           #+#    #+#             */
/*   Updated: 2026/09/06 15:47:41 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	main(int argc, char *argv[])
{
	int		**num;
	int		i;
	long	*board1;
	long	*board2;

	i = 0;
	num = (int **)malloc(8 * 17);
	while (i < 16)
	{
		num[i] = (int *)malloc(8 * 41);
		i++;
	}
	if (ft_parse_argv(&*argv, num))
		return (1);
	ft_put_value(num);
	board1 = ft_pos_to_boards(ft_comp(num, 0));
	board2 = ft_pos_to_boards(ft_comp(num, 8));
	printf("%ld\n", ft_find_match(board1, board2));
	return (0);
}
