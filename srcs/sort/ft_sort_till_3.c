/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:30:51 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/11 14:30:54 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_sort_till_3(t_stack **stack_a)
{
    int max_index;
    
    max_index = ft_max_index((*stack_a));
    if ((*stack_a)->index == max_index)
    {
        ft_ra(stack_a, true);
        if ((*stack_a)->nbr > (*stack_a)->next->nbr)
            ft_sa(stack_a, true);
    }
    else if ((*stack_a)->next->index == max_index)
        ft_rra(stack_a, true);
    else 
        if ((*stack_a)->nbr > (*stack_a)->next->nbr)
            ft_sa(stack_a, true);
}
