/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:02:39 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/08 20:08:34 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_len(char *str, char c, int i)
{
    int n;
    n = i;
    while (str[i])
    {
        i++;
        if (str[i] == c)
            return (i - n);
    }
    return (i - n);
}

int     ft_count(char *str, char c)
{
    int i;
    int n;

    i = 0;
    n = 2;
    while (str[i])
    {
        if (str[i] == c)
            n++;
        i++;
    }
    return (n);
}

char    **ft_split(char const *s, char c)
{
    char    *t;
    char    **str;
    int     i;
    int     z;
    int     n;
    
    t = (char*)s;
    i = 0;
    n = 0;
    z = 0;

    str = malloc(sizeof(char*) * ft_count(t, c));
    str[i] = malloc(sizeof(char) * ft_len(t, c, i) + 1);
    while (t[i])
    {
        if (t[i] == c)
            {
                str[z][n] = 0;
                z++;
                i++;
                n = 0;
                str[z] = malloc(sizeof(char) * ft_len(t,c,i) + 1);
            }
        str[z][n] = t[i];
        i++;
        n++;
    }
    z++;
    str[z] = 0;
    return (str);
}

int     main()
{
    char *str = "je-le-suis-tu-le-sais";
    char c = '-';
    char **s = ft_split(str,c);
    int i = 0;
    while (s[i])
    {
        printf("%s\n",s[i]);
        i++;
    }
}