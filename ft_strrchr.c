/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:56:55 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/16 18:56:26 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int a)
{
	int		i;
	char	*ret;

	ret = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			ret = &str[i];
		i++;
	}
	return (ret);
}
