/* ************************************************************************** */
/*                   yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                                                  */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <                       +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:28:16 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/16 14:32:29 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_list *list)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = list;
	while (list->next != tmp)
	{
		list = list->next;
		len++;
	}
	return (len + 1);
}

int	ft_if_same(t_list *head)
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
	return (ft_if_same(head->next));
}

int	is_sorted(t_list *lst)
{
	int		i;
	t_list	*head;

	head = lst;
	i = 0;
	if (lst->next == NULL)
		return (0);
	while (head != lst->next)
	{
		if (lst->value < lst->next->value)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}
