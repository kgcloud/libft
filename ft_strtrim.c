/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
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

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int     cmp(char t, char *s)
{
    int i;
    i = 0;
    
    while (s[i])
    {
        if(t == s[i])
            return (0);
        else
            i++;
    }
    return (1);
}

char    *dcm(int i, int z, char *s, char*t, char *str)
{
    i--;
    z--;
    while (i != 0)
    {
        if(cmp(t[i], s) == 0)
        {    
            str[z] = 0;
            z--;
            i--;
        }
        else
        {
            str[z + 1] = 0;
            return (str);
        }
    }
    return (NULL);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *t;
    char    *s;
    char    *str;
    int     i;
    int     z;
    
    z = 0;
    i = 0;
    t = (char*)s1;
    s = (char*)set;
    str = malloc(sizeof(char) * ft_len(t));

    while (t[i])
    {
        if(!z && cmp(t[i], s) == 0)
            i++;
        else
        {
            str[z] = t[i];
            i++;
            z++;
        }
    }
    return (dcm(i,z,s,t, str));
}

int     main()
{
    char    *test = "jejasnvjksdjasnvjksd-suis jeuner-jejejejasnvjksdjasnvjksd";
    char    *set = "jesjasnvjksd";

    printf("%s", ft_strtrim(test, set));
}
