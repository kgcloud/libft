/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:54:19 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/21 16:44:22 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *t1, const void *t2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)t1;
	s2 = (unsigned char*)t2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
