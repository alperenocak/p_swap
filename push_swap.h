/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:25:19 by yuocak            #+#    #+#             */
/*   Updated: 2025/02/21 16:13:05 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


typedef struct s_node
{
    int     value;
    void  *next;
}t_node;

#include <stdlib.h>
#include <stddef.h>

int process_arg(char *av);
int ft_counter(char *av);
int ft_is_number(char *av);

#endif