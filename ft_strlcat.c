/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 00:53:00 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/25 17:18:42 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t			ft_strlcat(char *dst, const char *s, size_t size)
{
	char	*src;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src = (char*)s;
	i = 0;
	dst_len = ft_len(dst);
	src_len = ft_len(src);
	if (size < dst_len + 1)
		return (src_len + size);
	while (i + dst_len < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
