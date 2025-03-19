/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:49:47 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/19 16:59:16 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    int value;
    int index;
    int target;
    int cost;
    struct s_list *next;
}t_list;

t_list  *ft_create_list(char **tmp, int split_control);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
void    initialize_stack_a(t_list **stack_a, t_list **stack_b);
void    ft_error();
void    ft_free_and_error(t_list *head, char **tmp, int split_control, int arg_size);
void    ft_free(t_list *head, char **tmp, int split_control, int arg_size);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	**ft_split(char *s, char c);
int	    ft_is_same(t_list *head);
int     ft_is_sorted(t_list *head);
long    ft_atol(char *av);

#endif