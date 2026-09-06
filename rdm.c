/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:35:25 by sganase           #+#    #+#             */
/*   Updated: 2026/09/06 16:53:41 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

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

int	ft_expo(int a, int b)
{
	a = a * 10;
	if (b == 1)
	{
		return (a);
	}
	return ((ft_expo(a, b - 1)));
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

long	lintrev(long n)
{
	long	a;

	a = 0;
	while (n > 0)
	{
		a = a * 10 + n % 10;
		n = n / 10;
	}
	return (a);
}
