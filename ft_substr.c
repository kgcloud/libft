/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/24 17:16:00 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	char	*str;
	size_t	i;

	i = 0;
	t = (char*)s;
	if (s == NULL)
		return (NULL);
	if (start > ft_len(t))
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
