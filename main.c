/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 18:20:53 by sganase           #+#    #+#             */
/*   Updated: 2026/09/05 21:57:17 by sganase          ###   ########.fr       */
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

int	ft_parse_argv(char *argv[], char *num)
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
			num[i2] = argv[1][i] - 48;
			i2++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*num;
	int		i;

	num = (char *)malloc(1 * 17);
	i = 0;
	if (ft_parse_argv(&*argv, num))
	{
		free(num);
		return (1);
	}
	while (num[i])
	{
		printf("%d ", num[i]);
		i++;
	}
	free(num);
	return (0);
}
