/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/24 00:59:06 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(char *s1, char *s2)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		i++;
		c++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		c++;
	}
	return (c);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*t1;
	char	*t2;
	char	*str;
	int		i;
	int		c;

	t1 = (char*)s1;
	t2 = (char*)s2;
	i = -1;
	if (!t1 || !t2)
		return (NULL);
	if (!(str = malloc(sizeof(char) * ft_len(t1, t2))))
		return (NULL);
	while (s1[++i])
		str[i] = t1[i];
	c = i;
	i = 0;
	while (s2[i])
	{
		str[c] = t2[i];
		i++;
		c++;
	}
	str[c] = 0;
	return (str);
}
