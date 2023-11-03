/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:22:28 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 15:52:02 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dlen;
    size_t  slen;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (dlen >= size)
        return (size + slen);
//|-----------------------------------/
//|abdegher|9|gherghouch|10| 19 -8 -1 = 10/
//|-----------------------------------/
    ft_memcpy(dst + dlen, src, size - dlen - 1);
    dst[dlen + slen] = '\0';
    return (dlen + slen);
}

// int main(void)
// {
//     char dst[100];
//     char src[100];
    
//     strcpy(src, "abde");
//     strcpy(dst, "gher");
//     ft_strlcat(dst, src, 100);
//     printf("%s\n", dst);
//     return (0);
// }