/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:38:56 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/03 22:03:37 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	while (s[i] && i < len)
	{
		needle_len = 0;
		while (needle[needle_len] && needle[needle_len] == s[i + needle_len])
			needle_len++;
		if (needle[needle_len] == '\0')
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

/*====================Testing part================
int main ()
{
    const char *haystack = "Hello, world! This is a test string.";
    const char *needle = "world";
    size_t haystacklen = 25;
    char *result;

    result = ft_strnstr(haystack, needle, haystacklen);
    if (result)
        printf("%s\n", result);
    return (0);
}
==================================================*/