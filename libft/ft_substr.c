/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:00 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/05 22:17:23 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	unsigned int	t_len;

	t_len = ft_strlen(s);
    i = 0;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	if (start < t_len)
	{
		while (i < len && s[i + start])
        {
            subs[i] = s[i + start];
            i++;
        }
	}       
	subs[i] = '\0';
	return (subs);
}


// int	main(void)
// {
// 	const char	*input = "This is a test string.";
// 	char		*result;

// 	// Test 1: Basic substring extraction
// 	result = ft_substr(input, 5, 2);
// 	printf("Test 1: Substring (5, 2): %s\n", result); // Expected: "is"
// 	free(result);
// 	// Test 2: Starting at the end of the string
// 	result = ft_substr(input, 22, 5);
// 	printf("Test 2: Starting at the end of the string: %s\n", result);
// 	// Expected: ""
// 	free(result);
// 	// Test 3: Length exceeds available characters
// 	result = ft_substr(input, 8, 20);
// 	printf("Test 3: Length exceeds available characters: %s\n", result);
// 	// Expected: "a test string."
// 	free(result);
// 	// Test 4: Starting at the beginning of the string
// 	result = ft_substr(input, 0, 7);
// 	printf("Test 4: Starting at the beginning of the string: %s\n", result);
// 	// Expected: "This is"
// 	free(result);
// 	// Test 5: Length is 0
// 	result = ft_substr(input, 12, 0);
// 	printf("Test 5: Length is 0: %s\n", result); // Expected: ""
// 	free(result);
// 	return (0);
// }

/*==================== TESTING Part ================
int	main(void)
{
	char	*str;
	char	*subs;

	str = "hello, i'm testing my function";
	subs = ft_substr(str, 4, 3);
	printf("%s\n", subs);
	return (0);
}
===================================================*/
