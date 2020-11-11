/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:31:30 by cloud             #+#    #+#             */
/*   Updated: 2020/11/10 21:43:16 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *retour;

	if (!alst || !new)
		return ;
	retour = *alst;
	while (*alst)
	{
		retour = *alst;
		*alst = retour->next;
	}
	retour->next = new;
}
