/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:48:42 by cloud             #+#    #+#             */
/*   Updated: 2020/11/09 20:34:51 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*src1;
	unsigned char	*src2;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	if (((!s1) || (!s2)) && n == 0)
		return (0);
	while (src1[i] && src2[i] && i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	if (i < n && ((src1[i] == '\0' && src2[i] != '\0') ||
				(src2[i] == '\0' && src1[i] != '\0')))
		return (src1[i] - src2[i]);
	return (0);
}
