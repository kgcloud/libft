/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/09 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *t;

    i = 0;
    t = (char*)s;
    while (t[i] && i < n)
    {
        if(t[i] == c)
            return (&t[i]);    
        i++;
    }
    return (NULL);
}
