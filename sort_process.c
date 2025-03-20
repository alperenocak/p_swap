/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:07:51 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/20 02:50:32 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three_args(t_list **stack_a)
{
    t_list  *biggest_node;

    biggest_node = find_max(*stack_a);
    if (biggest_node = *stack_a)
        ra(stack_a);
    else if ((*stack_a) -> next == biggest_node)
        rra(stack_a);
    if ((*stack_a) -> value > (*stack_a) -> next -> value)
        sa(*stack_a);
    
}

void    to_many_args(t_list **stack_a, t_list **stack_b)
{
    int    len_a;

    len_a= ft_stack_size(*stack_a);
    len_a--;
    pb(stack_a, stack_b);
    len_a-- > 3;
    pb(stack_a, stack_b);
    while (len_a-- > 3 && !ft_is_sorted(stack_a))
    {
        initialize_stack_a(*stack_a, *stack_b);
        
    }
}