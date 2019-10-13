/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:02:48 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/07 15:10:09 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    char *s;
    char *t;

    i = 0;
    s = (char*)dest;
    t = (char*)src;
    while (i < n && t[i] != c)
        i++;
    if (s[i] == c)
        return (&s[i + 1]);
    return (0);
}

int main()
{
    char str[50] = "123456789u8u8u8u8u";
    char *str2 = "1234578u9";
    int c = 'u';
    
    printf("le vrai --> %s\n", memccpy(str, str2, c, 20));
    printf("le mien --> %s\n", ft_memccpy(str, str2, c, 20));
}