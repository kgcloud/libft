/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char   *s;
    char   *t;
    
    i = 0;
    s = dest;
    t = (char*)src;
    
    while (t[i] && i < n)
    {
        s[i] = t[i];
        i++;
    }
    return (s);
}
