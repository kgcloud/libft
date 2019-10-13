/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/10 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *t;
    char    *str;
    size_t  i;

    i = 0;
    t = (char*)s;
    str = malloc(sizeof(char) * len);
    while (t[start] && i < len)
    {
        str[i] = t[start];
        start++;
        i++;
    }
    str[start] = '\0';
    return (str);
}

int     main()
{
    char    *t = "0123456789999";
    int     c = 3;
    size_t  n = 6;
    printf("%s", ft_substr(t, c, n));
}