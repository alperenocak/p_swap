/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:47:15 by yuocak            #+#    #+#             */
/*   Updated: 2025/02/21 15:53:53 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_counter(char *av)
{
    int len;

    len = 1;
    while (*av)
    {
        if (*av == ' ')
            len++;
        av++;
    }
    return (len);
}

int ft_is_number(char *av)
{
    while (*av++)
    {
        if ((*av <= '0' && *av >= '9') || *av != ' ')
            return (0);   
    }
    return (1);
}

