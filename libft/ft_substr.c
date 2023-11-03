/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:00 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 23:24:31 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    size_t  i;

    i = 0;
    subs = (char *) malloc(len + 1);
    if (!subs)
        return (NULL);
    // printf("\n======start == %d=====end ==  %ld==,\n", start,len);
    while (s[start + i] && i + start < len)
    {
        subs[i] = s[start + i];
        i++;
    }
    // printf("\n------------------- i==%ld-%c ----------\n",i,subs[i-1]);
    subs[i] = '\0';
    // printf("===========================================%s==%d\n\n",subs,ft_strlen(subs));
    //reminder the null terminater is mandatory
    return (subs);
}

// int main ()
// {
//     char *str= "hello, i'm testing my function";
//     char *subs= ft_substr(str,2,7);
//     printf("%s\n",subs);
//     return (0);
// }

