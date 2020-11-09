/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:05:12 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 19:06:36 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	digit;

	i = 0;
	digit = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg = (str[i++] == '-') ? -1 : 1;
	while (str[i] > 47 && str[i] < 58)
	{
		digit = digit * 10 + (str[i++] - '0');
		if (digit >= 9223372036854775807)
			return ((neg == -1) ? 0 : -1);
	}
	return (digit * neg);
}
