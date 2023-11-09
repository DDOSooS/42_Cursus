/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:01:23 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 11:37:00 by aghergho         ###   ########.fr       */
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
