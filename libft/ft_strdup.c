/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:04 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/12 12:54:44 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = -1;
	new = (char *) ft_calloc(sizeof(char), len + 1);
	if (!new)
		return (NULL);
	while (++i < len)
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
/*=====================Testsing part===================
int main ()
{
    char *s = "";
    char *new;
    new = ft_strdup(s);
    if (!new)
        return (0);
    printf("%s\n", new);
    return (0);
}
//=======================================================*/
