/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/09 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *d;
    char    *s;

    d = (char*)dest;
    s = (char*)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}

int     main()
{
    int n = 12;
    // char dest[13];
    // char dest2[13];
    char *dest;
    char *dest2;
    char src[20] = "012345678910";
    char src2[20] = "012345678910";

    dest = &src[5];
    dest2 = &src2[5];
    // dest[12] = 0;
    // dest2[12] = 0;
    printf("le vrai --> %s\n", memmove(dest, src, n));
    printf("le mien --> %s\n", ft_memmove(dest2, src, n));
}