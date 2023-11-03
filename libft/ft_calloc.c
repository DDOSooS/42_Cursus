/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:34:12 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/03 20:37:12 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void *ft_calloc(size_t num_elements, size_t element_size)
{
    void    *element;
            
    element = malloc(num_elements * element_size);
    if (element)
    {
        ft_bzero(element, element_size * num_elements);
            return (element);
    }
    return (NULL);
}

// int main()
// {
//     int numElements = 5;
//     int elementSize = sizeof(int);

//     // Test 1: Allocate memory and initialize with calloc
//     int *arr_calloc = (int *)calloc(numElements, elementSize);

//     // Test 2: Allocate memory and initialize with ft_calloc
//     int *arr_ft_calloc = (int *)ft_calloc(numElements, elementSize);

//     // Check if both allocations were successful
//     if (arr_calloc != NULL && arr_ft_calloc != NULL)
//     {
//         // Modify the elements in the arrays
//         for (int i = 0; i < numElements; i++)
//         {
//             arr_calloc[i] = i + 1;
//             arr_ft_calloc[i] = i + 1;
//         }

//         // Compare the memory blocks
//         if (ft_memcmp(arr_calloc, arr_ft_calloc, numElements * elementSize) == 0)
//         {
//             printf("Memory contents match.\n");
//         }
//         else
//         {
//             printf("Memory contents differ.\n");
//         }
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     // Free the allocated memory
//     free(arr_calloc);
//     free(arr_ft_calloc);

//     return 0;
// }