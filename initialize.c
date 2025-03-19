/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:50:48 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/19 16:55:50 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    initialize_stack_a(t_list *stack_a, t_list *stack_b)
{
    current_index(stack_a);
    current_index(stack_b);
    set_target_a(stack_a, stack_b);
    cost_calculation(stack_a, stack_b);
    find_cheapest(stack_a);
}