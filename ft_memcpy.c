/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/17 17:13:19 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*t;

	i = 0;
	s = (char*)dest;
	t = (char*)src;
	if (!n || dest == src)
		return (dest);
	while (t[i] && i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (s);
}
