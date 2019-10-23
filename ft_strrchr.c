/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:56:55 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/17 17:00:14 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*ret;

	str = (char*)s;
	ret = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			ret = &str[i];
		i++;
	}
	if (str[i] == c)
	{
		ret = &str[i];
	}
	return (ret);
}
