/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int y;

		i = 0;
	y = 0;
	signe = 1;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '+')
			i++;
		if (str[i] == '-')
		{
			i++;
			signe = signe * -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			y = y * 10 + (str[i] - '0');
			i++;
		}
		return (y * signe);
	}
	return (0);
}

int		main()
{
		char *test = "    545454545  fdsa f4 4545`";
		int vrai = atoi(test);
		int mien = ft_atoi(test);

		printf("vrai atoi -----> %d\n", vrai);
		printf("le mien -------> %d", mien);
}
