/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_write_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:15:11 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/16 17:43:33 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_free(t_list *head, char **tmp, int split_control)
{
	int		i;
	t_list	*tmp_node;
	
	i = 0;
	if (split_control == 1)
	{
		while (tmp[i] != NULL)
		{
			free(tmp[i]);
			i++;
		}
		free(tmp);
	}
    while (head)
    {
        tmp_node = head;
        head = head->next;
        free(tmp_node);
    }
}

void    ft_error()
{
    write(1, "Error!", 7);
	exit(1);
}

void ft_free_and_error(t_list *head, char **tmp, int split_control)
{
	ft_free(head, tmp, split_control);
	ft_error();
}



