/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:12:55 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/03 22:46:14 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i]!= c)
            i++;
    }
    return (count);
}

void    ft_gen_words(char **words,char const *s,char c)
{
    int i;
    int start;
    int k;

    k = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            start = i;
            while (s[i] && s[i] != c)
                i++;
            words[k] = ft_substr(s, start, i);
            k++;
        }
        else
            i++;
    }
    words[k] = NULL;
}

char **ft_split(char const *s, char c)
{
    char     **words;

    words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!words)
        return (NULL);
    ft_gen_words(words, s, c);
    return (words);
}

// int main ()
// {
//     char *s;
//     char **words;

//     s = "hello world ||||||||||||||||||||||||||||||sgfdsg|||||||||||||dsfffffffffgsdgfsdggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg|||||||||||||||||||||||||||||||||||||||||||||||||||||||";
//     words = ft_split(s,'|');
//     for (int i = 0; words[i]; i++)
//         printf("%s\n", words[i]);
//     return (0);
// }