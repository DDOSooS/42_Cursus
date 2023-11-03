/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:01:23 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/02 23:39:18 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int is_set(char const c, char const *set)
{
    int i;
    
    i = -1;
    while (set[++i])
    {
        if (set[i] == c)
            return (1);
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    char    *str;
    
    i = 0;
    j = ft_strlen(s1);
    j--;
    str = (char *) malloc(j + 1);
    if (!str)
        return (NULL);
    while (s1[i] && is_set(s1[i], set))
        i++;
    while (s1[j] && is_set(s1[j], set))
        j--;
    j++;
    // printf("\n========================(j - i) =========\n%d\n",j-i);
    // printf("===>%d-%di\n",j,i);
    str = ft_substr(&s1[0], i,j);
    // printf("===========================================\n%s",s1);
    return (str);
}

/* =========================TESTING PART====================

int main(void)
{
    char *str = " , ; abdessalam , ;";
    char *set = " ,;am ";
    
    printf("\n===============< :( RESULT ): >================\n%s\n", ft_strtrim(str, set));    
}
============================================================*/