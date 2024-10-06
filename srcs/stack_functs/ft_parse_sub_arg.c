/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sub_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:41:44 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/06 02:41:46 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack    *ft_parse_sub_arg(char **av)
{
    char **tmp;
    t_stack *stack_a;
    int i;

    i = 0;
    stack_a = NULL;
    tmp = ft_split(av[1], ' ');
    while (tmp[i])
    {
        ft_add_node_in_stack(&stack_a,ft_create_node(ft_atoi_long(tmp[i]), i));
        i++;
    }
    free(tmp);
    return (stack_a);
}