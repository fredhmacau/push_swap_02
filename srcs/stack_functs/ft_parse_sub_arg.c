/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sub_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:41:44 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/07 23:16:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_create_index_sub(int i, char **av)
{
    int j;
    int index;

    j = 0;
    index = 0;
    while (av[j])
    {
        if (ft_atoi_long(av[j]) < i)
            index++;
        j++;
    }
    return (index);
}

t_stack    *ft_parse_sub_arg(char **av)
{
    char **tmp;
    t_stack *stack_a;
    t_stack *new_node;
    int i;
    int index_value;
    long int atoi_value;

    i = 0;
    stack_a = NULL;
    tmp = ft_split(av[1], ' ');
    if (tmp == NULL)
        ft_error();
    while (tmp[i])
    {
        atoi_value = ft_atoi_long(tmp[i]);
        index_value = ft_create_index_sub(atoi_value, tmp);
        new_node = ft_create_node(atoi_value, index_value);
        ft_add_node_in_stack(&stack_a, new_node);
        i++;
    }
    free(tmp);
    return (stack_a);
}