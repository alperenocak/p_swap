/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:43:30 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/14 17:04:58 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *ft_last_node(t_list *head)
{
    while (!(head -> next))
        head = head->next;
    return (head);
}

t_list  *ft_new_node(int number)
{
    t_list  *new_node;

    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (0);
    new_node->value = number;
    new_node->next = NULL;
    return (new_node);
}

void  add_to_list(t_list *head, t_list *node, int arg_size)
{
    static int  i = 0;
    t_list      *tmp_node;

    if (!head)
        head = node;
    else
    {
        tmp_node = ft_last_node(head);
        tmp_node->next = node;
    }
}
t_list  *ft_create_list(char **tmp, int split_control)
{
    t_list  *node;
    t_list  *head;
    int     i;
    int     arg_size;

    i = 0;
    arg_size = ft_strlen(tmp);
    while (tmp[i++])
    {
        node = ft_new_node(ft_atol(tmp[i]));
        if (!node)
            ft_free(head, tmp, split_control);
        add_to_list(&head, node, arg_size);
    }
    node->next = head;
    if(!(ft_is_same(head)));
        fr_error(head, tmp, split_control);
    if(!(ft_is_sorted(head)))
        ft_free(head, tmp, split_control);
    return(head);
}
