/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/16 18:56:26 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		cmp(char t, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (t == s[i])
			return (0);
		else
			i++;
	}
	return (1);
}

char	*dcm(char *s, char *t, char *str)
{
	int	i;
	int	z;

	i = ft_len(t) - 1;
	z = ft_len(str) - 1;
	while (i != 0)
	{
		if (z < 0)
			return (NULL);
		if (cmp(t[i], s) == 0)
		{
			str[z] = 0;
			z--;
			i--;
		}
		else
		{
			str[z + 1] = 0;
			return (str);
		}
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	char	*s;
	char	*str;
	int		i;
	int		z;

	z = 0;
	i = 0;
	t = (char*)s1;
	s = (char*)set;
	if (!(str = malloc(sizeof(char) * ft_len(t))))
		return (0);
	while (t[i])
	{
		if (!z && cmp(t[i], s) == 0)
			i++;
		else
		{
			str[z] = t[i];
			i++;
			z++;
		}
	}
	str[z] = 0;
	return (dcm(s, t, str));
}
