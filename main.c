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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	b;

	b = 0;
	i = 0;
	while (str[i])
	{
		b = 0;
		b = str[i];
		write(1, &b, 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strval(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		a += i;
		i++;
	}
	return (a);
}

int	ft_parse_argv(char *argv[], int **num)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (ft_strlen(argv[1]) != 31)
	{
		return (1);
	}
	while (argv[1][i])
	{
		if (argv[1][i] != 32)
		{
			num[i2][0] = argv[1][i] - 48;
			printf("%d\n", num[i2][0]);
			i2++;
		}
		i++;
	}
	return (0);
}

int	intrev(int n)
{
	int	a;

	a = 0;
	while (n > 0)
	{
		a = a * 10 + n % 10;
		n = n / 10;
	}
	return (a);
}

int	ft_put_value(int **num)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (num[i][0] == 1)
		{
			num[i][1] = 4132;
			num[i][2] = 4123;
			num[i][3] = 4213;
			num[i][4] = 4231;
			num[i][5] = 4312;
			num[i][6] = 4321;
		}
		if (num[i][0] == 2)
		{
			num[i][1] = 1423;
			num[i][2] = 1432;
			num[i][3] = 2413;
			num[i][4] = 2431;
			num[i][5] = 3432;
			num[i][6] = 3421;
			num[i][7] = 2143;
			num[i][8] = 3241;
			num[i][9] = 3124;
			num[i][10] = 3142;
		}
		if (num[i][0] == 3)
		{
			num[i][1] = 1243;
			num[i][2] = 1342;
			num[i][3] = 1324;
			num[i][4] = 2341;
			num[i][5] = 2314;
			num[i][6] = 2134;
		}
		if (num[i][0] == 4)
			num[i][1] = 1234;
		i++;
	}
	return (0);
}

int	**ft_comp(int **num, int base)
{
	int	**pos;
	int	i;
	int	i2;
	int	i3;
	int	i4;
	int	s;

	i = 0;
	i2 = 1;
	i3 = 1;
	i4 = 0;
	pos = (int **)malloc(8 * 17);
	while (i < 4)
	{
		pos[i] = (int *)malloc(8 * 41);
		i++;
	}
	s = base + 4;
	i = 0;
	while (base < s)
	{
		i2 = 1;
		i4 = 0;
		printf("value left : %d\n", num[base][0]);
		printf("value right : %d\n", num[base + 4][0]);
		while (num[base][i2])
		{
			i3 = 1;
			while (num[base + 4][i3])
			{
				if (num[base][i2] == intrev(num[base + 4][i3]))
				{
					printf("shared value : %d\n", num[base][i2]);
					pos[i][i4] = num[base][i2];
					i4++;
				}
				i3++;
			}
			i2++;
		}
		printf("-----------------\n");
		base++;
		i++;
	}
	return (pos);
}

int	ft_expo(int a, int b)
{
	a = a * 10;
	if (b == 1)
	{
		return (a);
	}
	return ((ft_expo(a, b - 1)));
}

int	*ft_pos_to_boards(int **pos)
{
	int	*boardlist;
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (pos[i])
	{
		while (pos[i][i2])
		{
		}
	}
	return (boardlist);
}

int	main(int argc, char *argv[])
{
	int	**num;
	int	i;
	int	i2;
	int	**pos;
	int	**pos2;

	i = 0;
	i2 = 0;
	num = (int **)malloc(8 * 17);
	while (i < 16)
	{
		num[i] = (int *)malloc(8 * 41);
		i++;
	}
	i = 0;
	if (ft_parse_argv(&*argv, num))
	{
		free(num);
		return (1);
	}
	i = 1;
	ft_put_value(num);
	while (i < 11)
	{
		printf("%d ", num[15][i]);
		i++;
	}
	printf("\n");
	pos = ft_comp(num, 0);
	printf("\n");
	pos2 = ft_comp(num, 8);
	free(num);
	printf("%d\n", ft_expo(10, 2));
	return (0);
}
