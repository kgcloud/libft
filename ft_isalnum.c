/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:12:10 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/16 18:56:26 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(char c)
{
	if (c >= 'a' && 'z' >= c)
		return (1);
	if (c >= 'A' && 'Z' >= c)
		return (1);
	if (c >= '0' && '9' >= c)
		return (1);
	return (0);
}
