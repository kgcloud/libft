/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:19:43 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/17 16:55:14 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int					i;
	int					signe;
	unsigned long int	digit;
	unsigned long long	prec;

	i = 0;
	digit = 0;
	signe = 1;
	prec = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		signe = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		digit = digit * 10 + (str[i++] - '0');
		if (digit < prec || digit > 9223372036854775807)
			return ((signe == -1) ? 0 : -1);
		prec = digit;
	}
	return (digit * signe);
}
