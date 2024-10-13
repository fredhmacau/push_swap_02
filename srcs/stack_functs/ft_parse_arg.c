/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:29:23 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/07 23:19:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack    *ft_parse_arg(int ac,char **av)
{
    t_stack *stack_a;
    t_stack *new_node;
    int i;
    int index_value;
    long int atoi_value;

    i = 1;
    stack_a = NULL;
    if (ac == 2)
        return (ft_parse_sub_arg(av));
    else
    {
        while (i < ac)
        {
            atoi_value = ft_atoi_long(av[i]);
            index_value = ft_create_index(atoi_value, av);
            new_node = ft_create_node(atoi_value, index_value);
            ft_add_node_in_stack(&stack_a, new_node);
            i++;
        }
    }
    
    return (stack_a);
}
