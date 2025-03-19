/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:07:51 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/19 03:39:52 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_two_args(t_list *stack_a)
{
    if (stack_a -> value > stack_a -> next -> value)
        sa(stack_a);
}

void    sort_three_args(t_list **stack_a)
{
    t_list  *biggest_node;

    biggest_node = find_max(*stack_a);
    if (biggest_node = *stack_a)
        ra(stack_a, 0);
    else if ((*stack_a) -> next == biggest_node)
        rra(stack_a, 0);
    
}