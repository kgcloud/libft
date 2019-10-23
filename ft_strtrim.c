/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/24 01:02:48 by cnjuguna         ###   ########.fr       */
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

static char		*ft_copie(char *str)
{
	char	*nstr;
	int		i;

	if (!(nstr = malloc(sizeof(char) * ft_len(str) + 1)))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		nstr[i] = str[i];
		i++;
	}
	free(str);
	nstr[i] = '\0';
	return (nstr);
}

static int		cmp(char t, char *s)
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

static char		*dcm(char *s, char *t, char *str)
{
	int	i;
	int	z;

	i = ft_len(t) - 1;
	z = ft_len(str) - 1;
	while (i != 0)
	{
		if (z < 0)
			return (str);
		if (cmp(t[i], s) == 0)
		{
			str[z] = 0;
			z--;
			i--;
		}
		else
		{
			str[z + 1] = 0;
			return (ft_copie(str));
		}
	}
	return (t);
}

char			*ft_strtrim(char const *s1, char const *set)
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
	if (!s1 || !set)
		return (NULL);
	if (t[0] == '\0' || s[0] == '\0')
		return (t);
	if (!(str = malloc(sizeof(char) * (ft_len(t) + 1))))
		return (NULL);
	while (t[i])
	{
		if (!z && cmp(t[i], s) == 0)
			i++;
		else
			str[z++] = t[i++];
	}
	str[z] = 0;
	return (dcm(s, t, str));
}
