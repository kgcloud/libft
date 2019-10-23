/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/18 00:09:46 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	char	*str;
	size_t	i;

	i = 0;
	t = (char*)s;
	if (s == NULL)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (t[start] && i < len)
	{
		str[i] = t[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
