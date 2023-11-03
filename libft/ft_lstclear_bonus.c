/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:55:22 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/03 02:08:34 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *next;

    current = *lst;
    if (!lst || !*lst || !del)
        return;
    while (current)
    {
        next = current->next; 
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL; 
}

int main ()
{
    t_list *lst;

    lst = NULL;
    ft_lstclear(&lst, free);
    return (0);
}