/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloud <cloud@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:03:31 by cloud             #+#    #+#             */
/*   Updated: 2020/11/10 21:44:53 by cloud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *retour;

	if (!(retour = malloc(sizeof(t_list*))))
		return (NULL);
	retour->content = content;
	retour->next = NULL;
	return (retour);
}
