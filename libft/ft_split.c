/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:55 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 10:37:55 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **words, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(words[i]);
		i++;
	}
	free(words);
	words = NULL;
}

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_genword(char const *s, int start, int end)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	word = ft_substr(s, start, end - start);
	return (word);
}

static void	ft_gen_words(char **words, char const *s, char c)
{
	int	i;
	int	start;
	int	k;

	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			words[k++] = ft_genword(s, start, i);
			if (!words[k - 1])
				return (ft_free(words, k));
		}
		else
			i++;
	}
	words[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	ft_gen_words(words, s, c);
	return (words);
}

/* =======================Testing part==================
int	main(void)
{
	char	*s;
	char	**words;

	s = "hello worldsgfdsgdsffffg|||||||||";
	words = ft_split(s, 'g');
	for (int i = 0; words[i]; i++)
	{
			printf("%s\n", words[i]);
	}
	return (0);
}

int main() {
    // Test 1: Split a simple string
    char *input1 = "Hello,World";
    char **result1 = ft_split(input1, ',');
    for (int i = 0; result1[i] != NULL; i++) {
        printf("Test 1 - Word %d: %s\n", i, result1[i]);
        free(result1[i]);
    }
    free(result1);
    printf("\n");

    // Test 2: Split a string with multiple delimiters
    char *input2 = "This is a test   string";
    char **result2 = ft_split(input2, ' ');
    for (int i = 0; result2[i] != NULL; i++) {
        printf("Test 2 - Word %d: %s\n", i, result2[i]);
        free(result2[i]);
    }
    free(result2);
    printf("\n");

    // Test 3: Split an empty string
    char *input3 = "";
    char **result3 = ft_split(input3, ' ');
    if (result3 == NULL) {
        printf("Test 3 - No words in the string (expected result)\n");
    }
    printf("\n");

    // Test 4: Split a string with no delimiters
    char *input4 = "OnlyOneWord";
    char **result4 = ft_split(input4, ' ');
    printf("Test 4 - Word 0: %s (the only word)\n", result4[0]);
    free(result4[0]);
    free(result4);
    printf("\n");

    return 0;
}
===================================================================*/
