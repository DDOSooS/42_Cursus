/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:55 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/04 15:39:38 by aghergho         ###   ########.fr       */
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
	word = ft_substr(s, start, end);
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

	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	ft_gen_words(words, s, c);
	return (words);
}

/*==========>Testing part<============
{
	char	*s;
	char	**words;

	s = "hello worldsgfdsgdsf||||||";
	words = ft_split(s, 'g');
	for (int i = 0; words[i]; i++)
	{
			printf("%s\n", words[i]);
	}
	return (0);
}
==================================*/
