/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 01:06:32 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/19 01:06:41 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_list *head)
{
	t_list	*tmp_head;
	int		i;

	i = 0;
	tmp_head = head;
	while (head->next != tmp_head)
	{
		head = head->next;
		i++;
	}
	return (i + 1);
}

int	ft_is_same(t_list *head)
{
	t_list		*last;
	static int	j = 0;
	int			i;
	int arg_size;

	arg_size = lst_len(head);
	i = 0;
	if (arg_size < 2)
		return (0);
	last = head->next;
	while (i < (arg_size - 1))
	{
		if (head->value == last->value)
		{
			return (0);
		}
		last = last->next;
		i++;
	}
	j++;
	if (j == (arg_size - 1))
		return (1);
	return (ft_is_same(head->next));
}

int	ft_is_sorted(t_list *head)
{
	int		i;
	t_list	*tmp_head;

	tmp_head = head;
	i = 0;
	if (head->next == NULL)
		return (1);
	while (tmp_head != head->next)
	{
		if (head->value < head->next->value)
			head = head->next;
		else
			return (1);
	}
	return (0);
}
