/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardcomp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:40:55 by sganase           #+#    #+#             */
/*   Updated: 2026/09/06 17:47:09 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

long	ft_col_to_row2(int grid[4][4])
{
	long	out;
	int		i;
	int		i2;

	out = 0;
	i = 0;
	while (i < 4)
	{
		i2 = 0;
		while (i2 < 4)
		{
			out = out * 10 + grid[i2][i];
			i2++;
		}
		i++;
	}
	return (out);
}

long	ft_col_to_row(long board)
{
	int	grid[4][4];
	int	i;
	int	i2;

	i = 3;
	while (i >= 0)
	{
		i2 = 3;
		while (i2 >= 0)
		{
			grid[i][i2] = board % 10;
			board = board / 10;
			i2--;
		}
		i--;
	}
	return (ft_col_to_row2(grid));
}

long	ft_find_match(long *boards1, long *boards2)
{
	int	i;
	int	i2;

	i = 0;
	while (boards1[i])
	{
		i2 = 0;
		while (boards2[i2])
		{
			if (boards1[i] == ft_col_to_row(boards2[i2]))
			{
				return (boards1[i]);
			}
			i2++;
		}
		i++;
	}
	return (0);
}
