/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:02:48 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 15:10:09 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char c)
{
	if (c >= '0' && '9' >= c)
		return (1);
	return (0);
}
