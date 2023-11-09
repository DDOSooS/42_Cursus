/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:38:40 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/09 11:33:24 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*------------------TESTING PART------------
int main(void)
{
     char *str;

     str = "Hello World";
     printf("%s\n", strchr(str, 'l'));
     printf("%s\n", ft_strchr(str, 'o'));

}
--------------------------------------------*/
