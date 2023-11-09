/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:38:56 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 11:41:22 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	i = 0;
	while (haystack[i] && i < len)
	{
		n_len = 0;
		while (needle[n_len] && needle[n_len] == haystack[i + n_len])
			n_len++;
		if (needle[n_len] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

/*------------------------testing part---------------------------
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
-----------------------------------------------------------------*/
