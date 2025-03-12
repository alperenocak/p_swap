/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:49:47 by yuocak            #+#    #+#             */
/*   Updated: 2025/03/12 15:52:02 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    int value;
    struct s_list *prev;
    struct s_list *next;
    
}t_list;


void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char *s, char c);
t_list  *ft_create_list(char **tmp);
void    ft_control(char **av);
int     ft_control_args(char *av);
int     main(int ac, char **av);

#endif