/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:36:52 by cloud             #+#    #+#             */
/*   Updated: 2020/11/17 17:48:28 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *node;

	node = (*alst);
	if (!(*alst))
	{
		new->next = (*alst);
		(*alst) = new;
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = new;
}
