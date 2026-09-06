/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardgen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:34:57 by sganase           #+#    #+#             */
/*   Updated: 2026/09/06 15:34:58 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_fill_pos(int **num, int *pos, int base)
{
	int	i2;
	int	i3;
	int	i4;

	i2 = 1;
	i4 = 0;
	while (num[base][i2])
	{
		i3 = 1;
		while (num[base + 4][i3])
		{
			if (num[base][i2] == intrev(num[base + 4][i3]))
				pos[i4++] = num[base][i2];
			i3++;
		}
		i2++;
	}
	pos[i4] = 0;
}

int	**ft_comp(int **num, int base)
{
	int	**pos;
	int	i;

	pos = (int **)malloc(8 * 17);
	i = 0;
	while (i < 4)
	{
		pos[i] = (int *)malloc(8 * 41);
		ft_fill_pos(num, pos[i], base + i);
		i++;
	}
	return (pos);
}

long	ft_join(int **pos, int *i)
{
	long	board;

	board = (long)pos[0][i[0]] * 1000000000000L;
	board += (long)pos[1][i[1]] * 100000000L;
	board += (long)pos[2][i[2]] * 10000L;
	board += (long)pos[3][i[3]];
	return (board);
}

long	*ft_pos_to_boards(int **pos)
{
	long	*boards;
	int		i[4];
	int		i5;

	boards = (long *)malloc(8 * 100);
	i5 = 0;
	i[0] = -1;
	while (pos[0][++i[0]])
	{
		i[1] = -1;
		while (pos[1][++i[1]])
		{
			i[2] = -1;
			while (pos[2][++i[2]])
			{
				i[3] = -1;
				while (pos[3][++i[3]])
					boards[i5++] = ft_join(pos, i);
			}
		}
	}
	boards[i5] = 0;
	return (boards);
}
