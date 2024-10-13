/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 04:04:18 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/13 04:04:21 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sort_till_5(t_stack **stack_a)
{
    int min_index;
    t_stack *stack_b;

    stack_b = NULL;
    min_index = ft_min_index((*stack_a));
    while ((*stack_a)->index != min_index)
        ft_ra(stack_a, true);
    ft_pb(stack_a, &stack_b, true);
    ft_sort_till_4(stack_a);
    ft_pa(stack_a, &stack_b, true);
    free(stack_b);
}
