/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:23:54 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/20 02:44:06 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>
int ft_control_args(char *av)
{
    int i;

    i = 0;
    if ((av[0] > '9' || av[0] < '0') && (av[0] != '+' && av[0] != '-'))
        return (0);
    while (av[i])
    {
        if ((av[i] > '0' && av[i] < '9') && !(av[i + 1] == '-' || av[i + 1] == '+'))
            i++;
        else if ((av[i] == '-' || av[i] == '+') && !(av[i + 1] == '-' || av[i + 1] == '+') 
            && (av[i + 1] > '0' && av[i + 1] < '9'))
            i++;
        else if (av[i] == ' ' && (av[i + 1] <= '9' && av[i + 1] >= '0'))
            i++;
        else if (av[i] == ' ' && (av[i + 1] == '+' || av[i + 1] == '-'))
            i++;
        else 
            return (0);
    }
    return (1);
}

void ft_control(char **av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (!ft_control_args(av[i]))
        {
            write(1, "Error!\n", 8);
            exit(1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    t_list  *stack_a;
    t_list  *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if (ac < 2)
        return (0);
    else if ((ac == 2) && !(av[1][0] == '\0'))
    {
        ft_control(av + 1);
        av = ft_split(av[1], ' ');
        stack_a = ft_create_list(av, 1);
        ft_sort(&stack_a, &stack_b);
    }
    else if (ac > 2)
    {
        ft_control(av + 1);
        stack_a = ft_create_list(av + 1, 0);
        ft_sort(stack_a, stack_b);
    }
    return (0);
}

