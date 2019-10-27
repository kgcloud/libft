/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:37:54 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/25 17:30:01 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	char	*str;

	j = 0;
	i = 0;
	str = (char*)src;
	while (str[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (i < (size - 1) && str[i] != '\0')
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (j);
}
