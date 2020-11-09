/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:39:53 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 19:15:01 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*n;
	size_t	i;

	i = 0;
	if (!(n = malloc(size * count)))
		return (NULL);
	while (i < (size * count))
	{
		((char*)n)[i] = 0;
		i++;
	}
	return (n);
}
