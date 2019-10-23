/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 03:01:07 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/22 00:13:43 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s;
	char	*t;

	i = 0;
	s = (char*)dest;
	t = (char*)src;
	while (i < n)
	{
		s[i] = t[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&s[i + 1]);
		i++;
	}
	return (0);
}
