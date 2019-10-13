/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc (size_t nmemb, size_t size)
{
    char    *str;
    size_t i;
    
    i = 0;
    str = malloc(sizeof(size_t) * size);

    while (i < size)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}