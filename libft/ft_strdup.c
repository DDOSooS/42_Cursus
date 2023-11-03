/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:04 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 16:29:59 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
char *ft_strdup(const char *s)
{
    char    *new;
    int     i;
    int     len;

    len = ft_strlen(s);
    i = 0;
    if (!s)
        return (NULL);
    new = (char *) malloc(len + 1);
    if (!new)
     return (NULL);
    while (len >= 0)
    {
        new[i] = s[i];
        i++;
        len--;
    }
    new[i] = '\0';
    return (new);
}

// int main ()
// {
//     char *s = "testing my finction roel .";
//     char *new;
//     char *nnew;
//     new = ft_strdup(s);
//     if (!new)
//         return (0);
//     printf("%s\n", new);
//     s = "testing my finction roel ";
//     nnew = strdup(s);
//     if (!nnew)
//         return (0);
//     printf("%s\n", nnew);
//     return (0);
// }