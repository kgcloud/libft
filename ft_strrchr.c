/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:49:49 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 20:43:38 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;
	int		i;

	str = (char *)s;
	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			last = &str[i];
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (last);
}
