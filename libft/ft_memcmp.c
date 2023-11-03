/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:37:29 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/03 22:08:05 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && (((char *)s1)[i] == ((char *)s2)[i]))
        i++;
    return (((char *)s1)[i] - ((char *)s2)[i]);     
}

/*=======================Testing Part=============
int main ()
{
    void    *str;
    void    *str1;
    
    str1 = "Aabdess";
    str = "Aabde";
    printf("%d\n",ft_memcmp(str,str1,5));
    return (0);
}
====================================================*/