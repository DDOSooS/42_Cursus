/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:00 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/04 15:30:25 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char    *subs;
	size_t  i;

	i = 0;
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	// printf("\n======start == %d=====end ==  %ld==,\n", start,len);
	while (i + start < len && s[start + i])
	{
		subs[i] = s[start + i];
        i++;
	}
	// printf("\n------------------- i==%ld-%c ----------\n",i,subs[i-1]);
    subs[i] = '\0';
	// printf("===========================================%s==%d\n\n",subs,ft_strlen(subs));
	// reminder the null terminater is mandatory
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