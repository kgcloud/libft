/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:09 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/08 17:38:57 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int i = 0;
	int k = 0;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < n)
	{
		k = 0;
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		i++;
	}
	return (0);
}

int		main()
{
	char *str = "je suis la";
	char *find = "e";
	size_t  n = 0;


	printf("le vrai --> %s\n", strnstr(str, find, n));
	printf("le mien --> %s\n", ft_strnstr(str, find, n));
}
