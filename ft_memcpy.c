/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:41:51 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 19:54:16 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (!n || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
