/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:42:15 by cloud             #+#    #+#             */
/*   Updated: 2020/11/17 17:47:25 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;
	t_list *next;

	node = (*lst);
	next = NULL;
	if (!node)
		return ;
	while (node->next)
	{
		next = node->next;
		(*del)(node->content);
		free(node);
		node = next;
	}
	(*del)(node->content);
	free(node);
	(*lst) = NULL;
}
