/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:01:23 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/05 22:44:11 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sub(char const *s, unsigned int start, unsigned int end)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	subs = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!subs)
		return (NULL);
	while (i + start < end && s[i + start])
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
static int	is_set(char const c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	j--;
	str = (char *)malloc(j + 1);
	if (!str)
		return (NULL);
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (s1[j] && is_set(s1[j], set))
		j--;
	j++;
	str = ft_sub(s1, i, j);
        if (!str)
            return (NULL);
	return (str);
}

/* =========================TESTING PART====================

int	main(void)
{
	char	*str;
	char	*set;

	str = " , ; abdessalam , ;";
	set = " ,;am ";
	printf("\n===============< :( RESULT ): >================\n%s\n",
		ft_strtrim(str, set));
	return (0);
}
============================================================*/
// int	main(void)
// {
// 	char	*result;

// 	// Test 1: Trim spaces from the beginning and end of the string
// 	result = ft_strtrim("   Trim this string   ", " ");
// 	printf("Test 1: Trim spaces from the beginning and end: \"%s\"\n", result);
// 	// Expected: "Trim this string"
// 	free(result);
// 	// Test 2: Trim a custom set of characters from the beginning and end
// 	result = ft_strtrim("**Custom trim**this**", "*");
// 	printf("Test 2: Trim custom set from the beginning and end: \"%s\"\n",
// 			result); // Expected: "Custom trim**this"
// 	free(result);
// 	// Test 3: Trim spaces and tabs from the beginning and end
// 	result = ft_strtrim("\t Trim\t this\t string \t", " \t");
// 	printf("Test 3: Trim spaces and tabs from the beginning and end: \"%s\"\n",
// 			result); // Expected: "Trim\t this\t string"
// 	free(result);
// 	// Test 4: No trimming required, string remains unchanged
// 	result = ft_strtrim("No trimming needed", " ");
// 	printf("Test 4: No trimming required: \"%s\"\n", result);
// 	// Expected: "No trimming needed"
// 	free(result);
// 	// Test 5: Empty string, no trimming
// 	result = ft_strtrim("", " ");
// 	printf("Test 5: Empty string, no trimming: \"%s\"\n", result);
// 	// Expected: ""
// 	free(result);
// 	// Test 6: Trim all characters from the beginning and end
// 	result = ft_strtrim("###Trim this string###!", "#");
// 	printf("Test 6: Trim all characters from the beginning and end: \"%s\"\n",
// 			result); // Expected: "Trim this string"
// 	free(result);
// 	// Test 7: Trim a set of characters that includes spaces
// 	result = ft_strtrim("  Spaces and more  ", " Sp");
// 	printf("Test 7: Trim set with spaces from the beginning and end: \"%s\"\n",
// 			result); // Expected: "aces and more"
// 	free(result);
// 	// Test 8: Trim set contains only the null terminator
// 	result = ft_strtrim("Trim this string", "");
// 	printf("Test 8: Trim with an empty set: \"%s\"\n", result);
// 	// Expected: "Trim this string"
// 	free(result);
// 	// Test 9: Trim multiple spaces from the beginning and end
// 	result = ft_strtrim("   Trim  this  string   ", " ");
// 	printf("Test 9: Trim multiple spaces from the beginning and end: \"%s\"\n",
// 			result); // Expected: "Trim  this  string"
// 	free(result);
// 	// Test 10: Trim set is a single character (no trimming)
// 	result = ft_strtrim("Trim this string", "T");
// 	printf("Test 10: Trim set with a single character (no trimming): \"%s\"\n",
// 			result); // Expected: "Trim this string"
// 	free(result);
// 	return (0);
// }
