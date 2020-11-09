/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:51:46 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 20:51:20 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*new;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1 + i);
	if (j)
		while (s1[j + i - 1] != 0 && ft_strchr(set, s1[j + i - 1]) != 0)
			j--;
	if (!(new = malloc(sizeof(char) * j + 1)))
		return (NULL);
	ft_strncpy(new, s1 + i, j);
	new[j] = '\0';
	return (new);
}
