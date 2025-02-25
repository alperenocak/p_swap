/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:44:39 by yuocak            #+#    #+#             */
/*   Updated: 2025/02/20 17:58:32 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        printf("Error");
        return (0);
    }
    if (ac == 2)
    {
        process_arg(av[1]);
    }
    return (0);
}