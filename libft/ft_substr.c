/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:00 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 11:42:13 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	size_t			i;
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
