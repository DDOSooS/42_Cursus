/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:04 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 10:39:17 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	new = (char *) malloc(len + 1);
	if (!new)
		return (NULL);
	while (len >= 0)
	{
		new[i] = s[i];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}

/*=====================Testsing part===================
int main ()
{
    char *s = "testing my finction  .";
    char *new;
    new = ft_strdup(s);
    if (!new)
        return (0);
    printf("%s\n", new);
    return (0);
}
=======================================================*/
