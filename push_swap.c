/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:28:14 by yuocak            #+#    #+#             */
/*   Updated: 2025/02/25 15:43:14 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "Libft/libft.h"

int process_arg(char *av)
{
    int     arg_count;
    char    **args;
    int     *tmp_args;
    int     i;

    i = 0;
    if (!(ft_is_number(av)))
        return (0);
    
    arg_count = ft_counter(av);
    args = ft_split(av, ' ');
    if (!args)
        return (0);

    tmp_args = malloc(sizeof(int) * arg_count);
    if (!tmp_args)
        return (0);

    while (args[i])
    {
        tmp_args = ft_atoi(args[i]);
        if (tmp_args > 2147483647 || tmp_args < -2147483648)
        {
            while (i-- >= 0)
                free(args[i]);
            free(args);
            free(tmp_args);
            return (0);
        }
        tmp_args[i] = (int)tmp_value;
        i++;
    }

    i = 0;
    while (i < arg_count)
    {
        printf("%d ", tmp_args[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (args[i])
        free(args[i]);
    free(args);
    free(tmp_args);

    return (1);
}

