/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdegit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:20:13 by aghergho          #+#    #+#             */
/*   Updated: 2023/10/31 20:57:41 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdegit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
