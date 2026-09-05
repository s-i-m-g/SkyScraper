/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malltest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:01:14 by sganase           #+#    #+#             */
/*   Updated: 2026/09/05 21:12:05 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	main(void)
{
	char	*c;

	c = (char *)malloc(sizeof(char));
}
