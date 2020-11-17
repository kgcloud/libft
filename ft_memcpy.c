/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:41:51 by cloud             #+#    #+#             */
/*   Updated: 2020/11/10 21:21:12 by cloud            ###   ########.fr       */
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
	while (i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (s);
}
