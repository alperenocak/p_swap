/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoritms_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:50:48 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/20 02:59:16 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_stack_size(t_list *stack)
{
    int     stack_size;
    t_list  *current;
    
    current = stack;
    if (stack == NULL)
        return (0);
    
    while (stack != current -> next)
    {
        stack_size++;
        current = current -> next;
    }
    stack_size += 1;
    return (stack_size);
}

void    ft_sort(t_list **stack_a, t_list **stack_b)
{
    int size;

    size = ft_stack_size(*stack_a);
    if (!ft_is_sorted(stack_a))
    {
        if (size == 2)
            sa(stack_a);
        else if (size == 3)
            sort_three_args(stack_a);
        else if (size > 3)
            to_many_args(stack_a, stack_b);
    }
    free_stack(stack_a, stack_b);
}

void    initialize_stack_a(t_list *stack_a, t_list *stack_b)
{
    int i;
    int j;
    i = 0;
    j = 0;
    current_index(stack_a);
    current_index(stack_b);
    set_target_a(stack_a, stack_b, i);
    cost_calculation(stack_a, stack_b);
    find_cheapest(stack_a);
}