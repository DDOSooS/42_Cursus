/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:53:22 by aghergho          #+#    #+#             */
/*   Updated: 2023/10/31 23:10:36 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && s1[i] == s2[i])
        i++;
    if (s1[i] !=  s2[i])
        return (s1[i] - s2[i]);
    return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main ()
// {
//     char s1[100];
//     char s2[100];
//     strcpy(s1,"adbde");
//     strcpy(s2,"abdee");
//     printf("%d\n",ft_strncmp(s1, s2, 4));
//     printf("%d", strncmp(s1, s2, 4));

//     return (0);
// }