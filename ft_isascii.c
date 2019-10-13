/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:18:17 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 15:24:06 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isascii(char c)
{
	if (c >= 0 && 127 >= c)
		return (1);
	return (0);
}
