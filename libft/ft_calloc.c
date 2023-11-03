/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:34:12 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 15:06:08 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t num_elements, size_t element_size);
{
    void *element;

    element = malloc(num_elements * element_size);
    if (element)
    {
        ft_bzero(element, element_size * num_element);
        return (element);
    }
    return (NULL);
}