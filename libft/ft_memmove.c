/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:43:01 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 10:26:53 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*------------------- TESTING PART -----------------
int main()
{
    char str1[50] = "Geeks"; 
    char str2[5] = "Quiz";  

    puts("str1 before mmmove ");
    puts(str1);
    ft_memmove(str1, str2, sizeof(str2));
    puts(str1);
    return 0;
}
---------------------------------------------------*/
