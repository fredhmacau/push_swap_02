/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:29:23 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 21:29:24 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack    *ft_parse_arg(int ac,char **av)
{
    t_stack *stack_a;
    int i;

    i = 1;
    stack_a = NULL;
    if (ac == 2)
        ft_parse_sub_arg(av);
    else
    {
        while (i < ac)
        {
            ft_add_node_in_stack(&stack_a, ft_create_node(ft_atoi_long(av[i]), i));
            i++;
        }
    }
    return (stack_a);
}
