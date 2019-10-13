/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/09 11:29:37 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_len(char *s1, char *s2)
{
    int i;
    int c;   
    
    i = 0;
    c = 0;
    while (s1[i])
    {
        i++;
        c++;
    }
    i = 0;
    while (s2[i])
    {
        i++;
        c++;
    }
    return (c);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *t1;
    char    *t2;
    char    *str;
    int     i;
    int     c;

    t1 = (char*)s1;
    t2 = (char*)s2;
    i = -1;
    str = malloc(sizeof(char) * ft_len(t1, t2));
    if(str == NULL)
        return (NULL);
    while (s1[++i])
        str[i] = t1[i];
    c = i;
    i = 0;
    while (s2[i])
    {
        str[c++] = t2[i++];
        i++;
        c++;
    }
    str[c] = 0;
    return (str);
}
