/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:37:54 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/21 17:50:34 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;
	char	*str;

	count = 0;
	str = (char*)src;
	while (str[count] != '\0')
		++count;
	i = 0;
	while (str[i] != '\0' && i < (size - 1))
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}
