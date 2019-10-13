/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnjuguna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:02:39 by cnjuguna          #+#    #+#             */
/*   Updated: 2019/10/08 20:08:34 by cnjuguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int     ft_long(int n)
{
    if (n < 10)
        return(1);
    else if (n < 100)
        return(2);
    else if (n < 1000)
        return(3);
    else if (n < 10000)
        return(4);
    else if (n < 100000)
        return (5);
    else if (n < 1000000)
        return (6);
    else if (n < 10000000)
        return (7);
    else if (n < 100000000)
        return(8);
    else if (n < 1000000000)
        return (9);
    else
        return (10);
}

char    *ft_negative(int n,int nb)
{
    char        *str;
    int         c;

    if (nb != -2147483648)
        nb = nb * - 1;
    else
    {
        str = malloc(sizeof(char) * 12);
        str = "-2147483648";
        return (str);
    }
    n = ft_long(nb);
    str = malloc(sizeof(char) *  n + 2);
    str[n + 1] = 0;
    str[0] = '-';

    while(n > 0)
    {
        c = nb % 10;
        str[n] = c + '0';
        nb = nb / 10;
        n--;
    }
    return(str);
}

char    *ft_itoa(int nb)
{
    char            *str;
    int             n;
    int             c;

    n = 0;
    if ( nb >= 0)
    {
        n = ft_long(nb);
        str = malloc(sizeof(char) *  n + 1 + (nb < 0));
        //str = malloc(sizeof(char) *  n + 1 + (nb < 0 ? 1 : 0));
        str[n] = 0;
        n--;
        while (n >= 0)
        {
            c = nb % 10;
            str[n] = c + '0';
            nb = nb / 10;
            n--;
        }
        return(str);
    }
    else
        return(ft_negative(n,nb));
}

int     main()
{
    int n = INT_MIN + 1;
    printf("%s", ft_itoa(-1));
}