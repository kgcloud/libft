/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/09 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_memcmp(const void *t1, const void *t2, size_t n)
{
    size_t      i;
    char        *s1;
    char        *s2;

    s1 = (char*)t1;
    s2 = (char*)t2;
    i = 0;

	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0') ||
				(s2[i] == '\0' && s1[i] != '\0')))
		return (s1[i] - s2[i]);
	return (0);
}
